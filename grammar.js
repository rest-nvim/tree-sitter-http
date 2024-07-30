const WORD_CHAR = /[\p{L}\p{N}]/u;
const PUNCTUATION = /[^\n\r\p{Z}\p{L}\p{N}]/u;
const WS = /\p{Zs}+/u;
const NL = token(choice("\n", "\r", "\r\n", "\0"));
const LINE_TAIL = token(seq(/.*/, NL));

module.exports = grammar({
    name: "http",

    word: ($) => $.identifier,
    extras: ($) => [],
    conflicts: ($) => [[$.target_url]],
    inline: ($) => [$._target_url_line],

    rules: {
        document: ($) =>
            repeat(
                choice(
                    $.variable_declaration,
                    $.comment,
                    $.request_separator,
                    $._blank_line,
                    $.request,
                ),
            ),

        comment: (_) => seq(token(prec(1, choice("#", "//"))), LINE_TAIL),
        request_separator: (_) => seq(token(prec(1, "###")), LINE_TAIL),

        // LIST http verb is arbitrary and required to use vaultproject
        method: (_) =>
            /(OPTIONS|GET|HEAD|POST|PUT|DELETE|TRACE|CONNECT|PATCH|LIST)/,

        http_version: (_) => token(prec(0, /HTTP\/[\d\.]+/)),

        _target_url_line: ($) =>
            repeat1(
                choice(
                    WORD_CHAR,
                    "?",
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
                repeat(field("pre_request_script", $.pre_request_script)),
                optional(seq(field("method", $.method), WS)),
                field("url", $.target_url),
                optional(seq(WS, field("version", $.http_version))),
                NL,
                optional(seq($.response, NL)),
                repeat(field("header", $.header)),
                repeat($._blank_line),
                optional(
                    field(
                        "body",
                        choice(
                            $.form_data,
                            $.external_body,
                            $.xml_body,
                            $.json_body,
                            $.graphql_data,
                        ),
                    ),
                ),
                repeat(field("handler_script", $.res_handler_script)),
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
                field("value", choice(
                    $.value,
                )),
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
                // TODO: remove number, boolean, string to provide variable declaration with variables
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
                "<",
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
