const WORD_CHAR = /[\p{L}\p{N}]/u;
const PUNCTUATION = /[^\n\r\p{Z}\p{L}\p{N}]/u;
const WS = /\p{Zs}+/u;
const NL = token(choice("\n", "\r", "\r\n", "\0"));
const LINE_TAIL = token(seq(/.*/, NL));
const ESCAPED = token(/\\[^\n\r]/);

module.exports = grammar({
    name: "http",

    extras: (_) => [],
    conflicts: ($) => [
        [$.target_url],
        [$._raw_body],
        [$._section_content],
    ],
    inline: ($) => [$._target_url_line],

    rules: {
        document: ($) =>
            repeat(
                $.section,
            ),
        // NOTE: just for debugging purpose
        WORD_CHAR: (_) => WORD_CHAR,
        PUNCTUATION: (_) => PUNCTUATION,
        WS: (_) => WS,
        NL: (_) => NL,
        LINE_TAIL: (_) => LINE_TAIL,

        _comment_prefix: (_) =>
            choice(
                token(prec(2, /#\s*/)),
                token(prec(2, /\/\/\s*/)),
            ),
        comment: ($) =>
            seq(
                $._comment_prefix,
                choice(
                    seq(
                        token(prec(2, "@")),
                        field("name", $.identifier),
                        optional(
                            seq(
                                choice(WS, "="),
                                optional(token(prec(1, WS))),
                                field("value", $.value),
                            ),
                        ),
                        NL,
                    ),
                    LINE_TAIL,
                ),
            ),
        var_comment: ($) =>
            seq(
                $._comment_prefix,
                token(prec(2, "@")),
                field("name", $.identifier),
                optional(
                    seq(
                        choice(WS, "="),
                        optional(token(prec(1, WS))),
                        field("value", $.value),
                    ),
                ),
                NL,
            ),

        request_separator: ($) =>
            seq(
                token(prec(3, /###+\p{Zs}*/)),
                optional(token(prec(1, WS))),
                optional(field("value", $.value)),
                NL,
            ),

        section: ($) =>
            prec.right(choice(
                seq(
                    $.request_separator,
                    optional($._section_content),
                ),
                $._section_content,
            )),

        // NOTE: grammatically, each request section should contain only single `$.request` node
        // we are allowing multiple `$.request` nodes here to lower the parser size
        _section_content: ($) =>
            choice(
                seq($._blank_line, optional($._section_content)),
                seq($.comment, optional($._section_content)),
                seq($.variable_declaration, optional($._section_content)),
                seq($.pre_request_script, optional($._section_content)),
                seq(
                    // field to easily find request node in each section
                    field("request", $.request),
                    repeat(
                        choice(
                            seq(alias($.var_comment, $.comment), repeat(NL)),
                            seq($.res_handler_script, repeat(NL)),
                        ),
                    ),
                ),
            ),

        // LIST http verb is arbitrary and required to use vaultproject
        method: (_) =>
            /(OPTIONS|GET|HEAD|POST|PUT|DELETE|TRACE|CONNECT|PATCH|LIST|GRAPHQL|WEBSOCKET)/,

        http_version: (_) => token(prec(0, /HTTP\/[\d\.]+/)),

        _target_url_line: ($) =>
            repeat1(
                choice(
                    WORD_CHAR,
                    PUNCTUATION,
                    $.variable,
                ),
            ),
        target_url: ($) =>
            seq(
                $._target_url_line,
                repeat(
                    seq(
                        NL,
                        WS,
                        $._target_url_line,
                    ),
                ),
            ),

        status_code: (_) => /[1-5]\d{2}/,
        status_text: (_) =>
            /(Continue|Switching Protocols|Processing|OK|Created|Accepted|Non-Authoritative Information|No Content|Reset Content|Partial Content|Multi-Status|Already Reported|IM Used|Multiple Choices|Moved Permanently|Found|See Other|Not Modified|Use Proxy|Switch Proxy|Temporary Redirect|Permanent Redirect|Bad Request|Unauthorized|Payment Required|Forbidden|Not Found|Method Not Allowed|Not Acceptable|Proxy Authentication Required|Request Timeout|Conflict|Gone|Length Required|Precondition Failed|Payload Too Large|URI Too Long|Unsupported Media Type|Range Not Satisfiable|Expectation Failed|I'm a teapot|Misdirected Request|Unprocessable Entity|Locked|Failed Dependency|Too Early|Upgrade Required|Precondition Required|Too Many Requests|Request Header Fields Too Large|Unavailable For Legal Reasons|Internal Server Error|Not Implemented|Bad Gateway|Service Unavailable|Gateway Timeout|HTTP Version Not Supported|Variant Also Negotiates|Insufficient Storage|Loop Detected|Not Extended|Network Authentication Required)/,
        response: ($) =>
            seq($.http_version, WS, $.status_code, WS, $.status_text, NL),

        request: ($) =>
            prec.right(seq(
                optional(seq(field("method", $.method), WS)),
                field("url", $.target_url),
                optional(seq(WS, field("version", $.http_version))),
                NL,
                repeat($.comment),
                optional($.response),
                repeat(field("header", $.header)),
                optional(
                    seq(
                        repeat1($._blank_line),
                        // repeat($.comment),
                        repeat(alias($.var_comment, $.comment)),
                        optional(
                            field("body", choice(
                                $.raw_body,
                                $.multipart_form_data,
                                $.xml_body,
                                $.json_body,
                                $.graphql_body,
                                $._external_body,
                            )),
                        ),
                    ),
                ),
            )),

        query_param: ($) =>
            prec.right(
                seq(
                    field("key", $.value),
                    optional(
                        seq(
                            "=",
                            optional(field("value", $.value)),
                        ),
                    ),
                ),
            ),

        header: ($) =>
            seq(
                field("name", $.header_entity),
                optional(WS),
                ":",
                optional(token(prec(1, WS))),
                optional(
                    field("value", choice(
                        $.value,
                    )),
                ),
                NL,
            ),

        // {{foo}} {{$bar}} {{ fizzbuzz }}
        variable: ($) =>
            seq(
                token(prec(1, "{{")),
                optional(WS),
                field("name", $.identifier),
                optional(WS),
                token(prec(1, "}}")),
            ),

        pre_request_script: ($) => seq("<", WS, choice($.script, $.path), NL),
        res_handler_script: ($) =>
            seq(token(prec(3, ">")), WS, choice($.script, $.path), NL),
        script: (_) =>
            seq(
                token(prec(1, "{%")),
                NL,
                repeat(LINE_TAIL),
                token(prec(1, "%}")),
            ),

        variable_declaration: ($) =>
            seq(
                "@",
                field("name", $.identifier),
                optional(WS),
                "=",
                optional(token(prec(1, WS))),
                field("value", $.value),
                NL,
            ),

        xml_body: (_) =>
            seq(
                token(prec(2, /<[^\s@]/)),
                repeat1(LINE_TAIL),
            ),

        json_body: (_) =>
            seq(
                token(prec(2, /[{\[]\s+/)),
                repeat1(LINE_TAIL),
            ),

        graphql_body: ($) => seq($.graphql_data, optional($.json_body)),
        graphql_data: (_) =>
            seq(
                token(
                    prec(2, seq(choice("query", "mutation"), WS, /.*\{/, NL)),
                ),
                repeat1(LINE_TAIL),
            ),

        _external_body: ($) =>
            seq(
                $.external_body,
                NL,
            ),
        external_body: ($) =>
            seq(
                token(prec(2, "<")),
                optional(seq("@", field("name", $.identifier))),
                WS,
                field("path", $.path),
            ),

        multipart_form_data: ($) =>
            prec.right(seq(
                token(prec(2, "--")),
                LINE_TAIL,
                repeat(
                    choice(
                        $._blank_line,
                        $.comment,
                        seq($.external_body, choice(WS, NL)),
                        token(prec(1, LINE_TAIL)),
                    ),
                ),
            )),

        raw_body: ($) => $._raw_body,
        _raw_body: ($) =>
            seq(
                choice(
                    token(prec(1, LINE_TAIL)),
                    // seq($.external_body, NL),
                    seq($._comment_prefix, $._not_comment),
                ),
                optional($._raw_body),
            ),
        _not_comment: (_) => token(seq(/[^@]*/, NL)),

        header_entity: (_) => /[\w\-]+/,
        identifier: (_) => /[A-Za-z_.\$\d\u00A1-\uFFFF-]+/,
        path: ($) =>
            prec.right(repeat1(
                choice(
                    WORD_CHAR,
                    PUNCTUATION,
                    $.variable,
                    ESCAPED,
                ),
            )),
        value: ($) =>
            repeat1(
                choice(
                    WORD_CHAR,
                    PUNCTUATION,
                    $.variable,
                    WS,
                ),
            ),
        _blank_line: (_) => seq(optional(WS), token(prec(-1, NL))),
    },
});
