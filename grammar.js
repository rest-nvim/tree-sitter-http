const WORD_CHAR = /[\p{L}\p{N}]/u;
const PUNCTUATION = /[^\n\r\p{Z}\p{L}\p{N}]/u;
const WS = /\p{Zs}+/u;
const NL = token(choice("\n", "\r", "\r\n", "\0"));
const LINE_TAIL = token(seq(/.*/, NL));

module.exports = grammar({
    name: "http",

    extras: ($) => [],
    conflicts: ($) => [[$.target_url]],
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

        comment: ($) =>
            seq(
                choice(
                    repeat1(token(prec(1, "#"))),
                    token(prec(1, seq("//", repeat("/")))),
                ),
                optional(token(prec(1, WS))),
                choice(
                    seq(
                        token(prec(1, "@")),
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
        request_separator: ($) =>
            seq(
                token(prec(1, "###")),
                optional(token(prec(1, WS))),
                optional(field("value", $.value)),
                NL,
            ),
        _comment_variable_declaration: ($) =>
            seq(
                optional(token(prec(1, WS))),
                choice(
                    seq(
                        token(prec(1, "@")),
                        field("name", $.identifier),
                        optional(WS),
                        "=",
                        optional(token(prec(1, WS))),
                        field("value", $.value),
                    ),
                    LINE_TAIL,
                ),
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
            repeat1(
                choice(
                    $._blank_line,
                    $.comment,
                    $.variable_declaration,
                    $.pre_request_script,
                    // field to easily find request node in each section
                    field("request", $.request),
                    $.res_handler_script,
                )
            ),

        // LIST http verb is arbitrary and required to use vaultproject
        method: (_) =>
            /(OPTIONS|GET|HEAD|POST|PUT|DELETE|TRACE|CONNECT|PATCH|LIST)/,

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

        status_code: ($) => /[1-5]\d{2}/,
        status_text: ($) =>
            /(Continue|Switching Protocols|Processing|OK|Created|Accepted|Non-Authoritative Information|No Content|Reset Content|Partial Content|Multi-Status|Already Reported|IM Used|Multiple Choices|Moved Permanently|Found|See Other|Not Modified|Use Proxy|Switch Proxy|Temporary Redirect|Permanent Redirect|Bad Request|Unauthorized|Payment Required|Forbidden|Not Found|Method Not Allowed|Not Acceptable|Proxy Authentication Required|Request Timeout|Conflict|Gone|Length Required|Precondition Failed|Payload Too Large|URI Too Long|Unsupported Media Type|Range Not Satisfiable|Expectation Failed|I'm a teapot|Misdirected Request|Unprocessable Entity|Locked|Failed Dependency|Too Early|Upgrade Required|Precondition Required|Too Many Requests|Request Header Fields Too Large|Unavailable For Legal Reasons|Internal Server Error|Not Implemented|Bad Gateway|Service Unavailable|Gateway Timeout|HTTP Version Not Supported|Variant Also Negotiates|Insufficient Storage|Loop Detected|Not Extended|Network Authentication Required)/,
        response: ($) =>
            seq($.http_version, WS, $.status_code, WS, $.status_text),

        request: ($) =>
            prec.right(seq(
                optional(seq(field("method", $.method), WS)),
                field("url", $.target_url),
                optional(seq(WS, field("version", $.http_version))),
                NL, repeat($.comment),
                optional(seq($.response, NL, repeat($.comment))),
                repeat(field("header", $.header)),
                optional(seq(repeat1($._blank_line), repeat($.comment))),
                optional(
                    field(
                        "body",
                        choice(
                            $.form_data,
                            $.external_body,
                            $.xml_body,
                            $.json_body,
                            $.graphql_data,
                            $.multipart_form_data,
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

        pre_request_script: ($) => seq("<", WS, $.script, NL),
        res_handler_script: ($) => seq(token(prec(1, ">")), WS, $.script, NL),
        script: ($) =>
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

        xml_body: ($) =>
            seq(
                token(prec(1, /<\S/)),
                repeat1(LINE_TAIL),
            ),

        json_body: ($) =>
            seq(
                token(prec(1, choice("{", "["))),
                repeat1(LINE_TAIL),
            ),

        graphql_data: ($) => seq($.graphql_body, optional($.json_body)),
        graphql_body: (_) =>
            seq(
                choice("query", "mutation"),
                WS,
                repeat1(LINE_TAIL),
            ),

        external_body: ($) =>
            seq(
                token(prec(1, "<")),
                optional(seq("@", field("name", $.identifier))),
                WS,
                field("path", $.value),
                NL,
            ),

        form_data: ($) =>
            seq(
                $.query_param,
                repeat(seq(optional(NL), token(prec(1, "&")), $.query_param)),
                NL,
            ),

        multipart_form_data: ($) =>
            prec.right(seq(
                token(prec(1, "--")),
                choice(
                    LINE_TAIL,
                ),
                repeat(
                    choice(
                        $._blank_line,
                        $.comment,
                        // TODO: `external_body` should end before `LINE_TAIL`
                        $.external_body,
                        LINE_TAIL,
                    ),
                ),
            )),

        header_entity: (_) => /[\w\-]+/,
        identifier: (_) => /[A-Za-z_.\$\d\u00A1-\uFFFF-]+/,
        number: (_) => /[0-9]+/,
        string: (_) => /"[^"\n\r]*"/,
        boolean: (_) => choice("true", "false"),
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
