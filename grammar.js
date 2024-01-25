const NL = token.immediate(/[\r\n]+/);

const PREC = {
    comment: 1,
    variable: 2,
    request: 3,
    param: 4,
    header: 5,
    body: {
        graphql: 6,
        json: 7,
        xml: 8,
        external: 9,
    },
}

module.exports = grammar({
    name: "http",

    word: $ => $.identifier,
    extras: $ => [],

    rules: {
        document: $ => repeat(
            choice(
                $.variable,
                $.script_variable,
                $.variable_declaration,
                $.comment,
                $.request,
                $.number,
                NL,
            )
        ),

        comment: _ => prec.left(PREC.comment, token(seq("#", /.*/, NL))),

        method: $ => choice(/(OPTIONS|GET|HEAD|POST|PUT|DELETE|TRACE|CONNECT|PATCH)/, $.const_spec),

        host: $ => prec.right(PREC.request, seq($.identifier, optional($.port))),
        port: $ => seq(":", /\d+/),
        path: $ => repeat1(choice("/", seq("/", $.identifier, optional("/")), seq("/", $.variable, optional("/")))),
        scheme: _ => /(about|acct|arcp|cap|cid|coap+tcp|coap+ws|coaps+tcp|coaps+ws|data|dns|example|file|ftp|geo|h323|http|https|im|info|ipp|mailto|mid|ni|nih|payto|pkcs11|pres|reload|secret-token|session|sms|tag|telnet|urn|ws|wss)/,
        authority: $ => prec.left(PREC.request, seq(optional($.pair), "@")),
        http_version: _ => prec.right(/HTTP\/1\.1|HTTP\/2/),

        target_url: $ => choice(
            // this first case allows using the Host header and set only the path in the request, e.g.
            //
            // GET /api/users?page=5
            // Host: https://reqres.in
            seq(
                $.path,
                repeat($.query_param),
            ),
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
            )
        ),

        request: $ => prec.right(PREC.request, seq(
            $.method,
            $._whitespace,
            $.target_url,
            optional(seq($._whitespace, $.http_version)),
            NL,
            repeat($.header),
            repeat(NL),
            repeat(choice(
                $.external_body,
                $.xml_body,
                $.json_body,
                $.graphql_body,
            )),
        )),

        pair: $ => seq(
            field("name", $.identifier),
            ":",
            field("value", $.identifier)
        ),

        query_param: $ => prec.left(PREC.param, seq(
            choice("?", "&"),
            field('key', alias($.identifier, $.key)),
            '=',
            field('value', alias($.identifier, $.value)),
            optional(NL),
        )),

        header: $ => prec(PREC.header, seq(
            field("name", alias($.identifier, $.name)),
            ":",
            optional($._whitespace),
            field("value", alias($._line, $.value)),
            NL,
        )),

        // {{foo}} {{$bar}}
        variable: $ => prec.right(PREC.variable, seq(
            "{{",
            field("name", $.identifier),
            "}}",
        )),

        script_variable: $ => prec.right(PREC.variable, seq(
            token(/--\{%\n/),
            repeat(NL),
            repeat(seq($._line, NL)),
            token(/--%\}\n/),
        )),

        variable_declaration: $ => prec.right(PREC.variable, seq(
            "@",
            field("name", $.identifier),
            seq(
                optional($._whitespace),
                "=",
                optional($._whitespace),
                field("value", $.identifier),
            )
        )),

        // the final optional is for improving readability just in case
        xml_body: $ => prec.right(PREC.body.xml, seq(/<\?xml.*\?>/, NL, repeat(seq($._line, NL)), /<\/.*>\n/, optional(/\n/))),

        // the final optional is for improving readability just in case
        json_body: $ => prec.right(PREC.body.json, seq(/\{\n/, repeat(seq($._line, NL)), /\}\n/, optional(/\n/))),

        // the final optional is for improving readability just in case
        graphql_body: $ => prec.right(PREC.body.graphql, seq("query", $._whitespace, "(", repeat(seq($._line, NL)), /\}\n/, optional(/\n/))),

        external_body: $ => prec.right(PREC.body.external, seq(
            "<",
            optional(seq("@", $.identifier)),
            $._whitespace,
            field("file_path", alias($._line, $.path))
        )),

        const_spec: _ => /[A-Z][A-Z\\d_]+/,
        identifier: _ => /[A-Za-z_.\$\d\u00A1-\uFFFF-]+/,
        number: _ => /[0-9]+/,
        _whitespace: _ => repeat1(/[\t\v ]/),
        _newline: _ => repeat1(/[\n]/),
        _line: _ => /[^\n]+/,
    },
});
