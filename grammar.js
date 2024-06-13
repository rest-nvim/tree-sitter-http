const NL = token.immediate(/[\r\n]+/);

module.exports = grammar({
    name: "http",

    word: ($) => $.identifier,
    extras: ($) => [NL],

    rules: {
        document: ($) =>
            repeat(
                choice(
                    $.variable,
                    $.script_variable,
                    $.variable_declaration,
                    $.comment,
                    $.request,
                ),
            ),

        comment: (_) => token(seq("#", /.*/)),

        // LIST http verb is arbitrary and required to use vaultproject
        method: ($) => /(OPTIONS|GET|HEAD|POST|PUT|DELETE|TRACE|CONNECT|PATCH|LIST)/,

        host: ($) => seq($.identifier, optional($.port)),
        port: ($) => seq(":", /\d+/),
        path: ($) =>
            repeat1(
                choice(
                    "/",
                    seq("/", $.identifier, optional("/")),
                    seq("/", $.variable, optional("/")),
                ),
            ),
        scheme: (_) =>
            choice(
                "about",
                "acct",
                "arcp",
                "cap",
                "cid",
                "coap+tcp",
                "coap+ws",
                "coaps+tcp",
                "coaps+ws",
                "data",
                "dns",
                "example",
                "file",
                "ftp",
                "geo",
                "h323",
                "http",
                "https",
                "im",
                "info",
                "ipp",
                "mailto",
                "mid",
                "ni",
                "nih",
                "payto",
                "pkcs11",
                "pres",
                "reload",
                "secret-token",
                "session",
                "sms",
                "tag",
                "telnet",
                "urn",
                "ws",
                "wss",
            ),

        authority: ($) => seq(optional($.pair), "@"),
        http_version: (_) => seq("HTTP/", /[\d\.]+/),

        target_url: ($) =>
            choice(
                seq($.path, repeat($.query_param)),
                seq(
                    optional(seq($.scheme, "://")),
                    optional($.authority),
                    $.host,
                    optional($.path),
                    optional(repeat($.query_param)),
                ),
                seq(
                    $.variable,
                    optional($.authority),
                    optional($.path),
                    optional(repeat($.query_param)),
                ),
          ),

        status_code: ($) => /[1-5]\d{2}/,
        status_text: ($) => /(Continue|Switching Protocols|Processing|OK|Created|Accepted|Non-Authoritative Information|No Content|Reset Content|Partial Content|Multi-Status|Already Reported|IM Used|Multiple Choices|Moved Permanently|Found|See Other|Not Modified|Use Proxy|Switch Proxy|Temporary Redirect|Permanent Redirect|Bad Request|Unauthorized|Payment Required|Forbidden|Not Found|Method Not Allowed|Not Acceptable|Proxy Authentication Required|Request Timeout|Conflict|Gone|Length Required|Precondition Failed|Payload Too Large|URI Too Long|Unsupported Media Type|Range Not Satisfiable|Expectation Failed|I'm a teapot|Misdirected Request|Unprocessable Entity|Locked|Failed Dependency|Too Early|Upgrade Required|Precondition Required|Too Many Requests|Request Header Fields Too Large|Unavailable For Legal Reasons|Internal Server Error|Not Implemented|Bad Gateway|Service Unavailable|Gateway Timeout|HTTP Version Not Supported|Variant Also Negotiates|Insufficient Storage|Loop Detected|Not Extended|Network Authentication Required)/,
        response: ($) => seq($.http_version, $._whitespace, $.status_code, $._whitespace, $.status_text),

        request: ($) =>
            prec.right(
                seq(
                    $.method,
                    $._whitespace,
                    $.target_url,
                    optional(seq($._whitespace, $.http_version)),
                    optional(seq(NL, $.response)),
                    NL,
                    repeat($.header),
                    repeat(
                        choice(
                            $.form_data,
                            $.external_body,
                            $.xml_body,
                            $.json_body,
                            $.graphql_body,
                        ),
                    ),
                ),
            ),

        pair: ($) =>
            seq(field("name", $.identifier), ":", field("value", $.identifier)),

        query_param: ($) =>
            prec.right(
                seq(
                    choice("&", "?"),
                    field("key", alias($.query_key, $.key)),
                    optional("="),
                    optional(
                        choice(
                            field("value", $.variable),
                            field("value", alias($.param, $.value)),
                        ),
                    )
                ),
            ),

        host_url: ($) =>
            seq(
                optional(seq($.scheme, "://")),
                optional($.authority),
                $.host,
            ),

        header: ($) =>
            choice(
                prec.left(seq(
                    field("name", alias($.identifier, $.name)),
                    ":",
                    optional($._whitespace),
                    field("value", $.variable),
                )),
                seq(
                    field("name", alias($.identifier, $.name)),
                    ":",
                    optional($._whitespace),
                    field("value", alias(choice(
                        /[a-zA-Z0-9_\-\/\s]+\n/,
                        $.host_url
                    ), $.value)),
                ),
                seq(
                    field("name", alias($.identifier, $.name)),
                    ":",
                    optional($._whitespace),
                    field("value", alias(seq(
                        /[a-zA-Z0-9_\-\/]+/,
                        $._whitespace,
                        $.variable,
                    ), $.value)),
                ),
            ),

        // {{foo}} {{$bar}} {{ fizzbuzz }}
        variable: ($) => seq(
            "{{",
            optional($._whitespace),
            field("name", $.identifier),
            optional($._whitespace),
            "}}"
        ),

        script_variable: ($) =>
            seq(token(/--\{%\n/), repeat1($._line), token(/--%\}\n/)),

        variable_declaration: ($) =>
            seq(
                "@",
                field("name", $.identifier),
                seq(
                    optional($._whitespace),
                    "=",
                    optional($._whitespace),
                    field("value", choice($.number, $.boolean, $.string)),
                ),
            ),

        // the final optional is for improving readability just in case
        xml_body: ($) =>
            seq(
                /<\?xml.*\?>/,
                NL,
                repeat1($._line),
                /<\/.*>\n/,
                optional(/\n/),
            ),

        // the final optional is for improving readability just in case
        json_body: ($) => seq(choice(/\{\n/, /\[\n/), repeat1($._line), choice(/\}\n/, /\]\n/), optional(/\n/)),

        // the final optional is for improving readability just in case
        graphql_body: ($) =>
            seq(
                "query",
                $._whitespace,
                "(",
                repeat1($._line),
                /\}\n/,
                optional(/\n/),
            ),

        // the final optional is for improving readability just in case
        external_body: ($) =>
            seq(
                "<",
                optional(seq("@", $.identifier)),
                $._whitespace,
                field("file_path", alias($._line, $.path)),
                optional(/\n/),
            ),

        // the final optional is for improving readability just in case
        form_data: ($) => seq(
            seq(
                field("name", $.identifier),
                "=",
                field("value", alias(choice($.string, $.identifier, $.number, $.boolean), $.value)),
            ),
            repeat(seq(
                choice(repeat1(/\n/), "&"),
                seq(
                    field("name", $.identifier),
                    "=",
                    field("value", alias(choice($.string, $.identifier, $.number, $.boolean), $.value)),
                ),
            )),
        ),

        identifier: (_) => /[A-Za-z_.\$\d\u00A1-\uFFFF-]+/,
        query_key: (_) => /[^&#=\n]+/,
        param: (_) => /[^{}&#\n]+/,
        number: (_) => /[0-9]+/,
        string: (_) => /"[^"]*"/,
        boolean: (_) => choice("true", "false"),
        _whitespace: (_) => repeat1(/[\t\v ]/),
        _newline: (_) => repeat1(/[\n]/),
        _line: (_) => /[^\n]+/,
    },
});
