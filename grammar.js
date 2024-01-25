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
                    $.number,
                ),
            ),

        comment: (_) => token(seq("#", /.*/)),

        // LIST http verb is arbitrary and required to use vaultproject
        method: ($) =>
            choice(
                /(OPTIONS|GET|HEAD|POST|PUT|DELETE|TRACE|CONNECT|PATCH|LIST)/,
                $.const_spec,
            ),

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
                    repeat($.query_param),
                ),
                seq(
                    $.variable,
                    optional($.authority),
                    $.host,
                    optional($.path),
                    repeat($.query_param),
                ),
            ),

        request: ($) =>
            prec.right(
                seq(
                    $.method,
                    $._whitespace,
                    $.target_url,
                    optional(seq($._whitespace, $.http_version)),
                    NL,
                    repeat($.header),
                    repeat(
                        choice(
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
                    choice("?", "&"),
                    field("key", alias($.identifier, $.key)),
                    "=",
                    field("value", alias($.identifier, $.value)),
                ),
            ),

        header: ($) =>
            seq(
                field("name", alias($.identifier, $.name)),
                ":",
                optional($._whitespace),
                field("value", alias($._line, $.value)),
            ),

        // {{foo}} {{$bar}}
        variable: ($) => seq("{{", field("name", $.identifier), "}}"),

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

        external_body: ($) =>
            seq(
                "<",
                optional(seq("@", $.identifier)),
                $._whitespace,
                field("file_path", alias($._line, $.path)),
            ),

        const_spec: (_) => /[A-Z][A-Z\\d_]+/,
        identifier: (_) => /[A-Za-z_.\$\d\u00A1-\uFFFF-]+/,
        number: (_) => /[0-9]+/,
        string: (_) => /"[^"]*"/,
        boolean: (_) => choice("true", "false"),
        _whitespace: (_) => repeat1(/[\t\v ]/),
        _newline: (_) => repeat1(/[\n]/),
        _line: (_) => /[^\n]+/,
    },
});
