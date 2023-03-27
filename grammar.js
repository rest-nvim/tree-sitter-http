const NL = token.immediate(/[\r\n]+/);

const PREC = {
  comment: 1,
  request: 2,
  header: 3,
  param: 4,
  body: 5,
  var: 6,
}

module.exports = grammar({
  name: "http",

  extras: $ => [],
  word: $ => $.identifier,
  inline: $ => [],

  rules: {
    document: $ => repeat(
      choice(
        $.variable_declaration,
        $.variable,
        $.comment,
        $.request,
        $.query_param,
        $.header,
        $.json_body,
        $.xml_body,
        $.external_body,
        $.number,
        NL,
      )
    ),

    request: $ => prec.left(PREC.request, seq(
      $.method,
      $._whitespace,
      $.target_url,
      optional(seq($._whitespace, $.http_version)),
      NL),
    ),

    method: $ => choice(/(OPTIONS|GET|HEAD|POST|PUT|DELETE|TRACE|CONNECT|PATCH)/, $.const_spec),

    target_url: $ => seq(
      optional(seq($.scheme, "://")),
      optional($.authority),
      $.host,
      optional($.path),
      optional(repeat1($.query_param)),
    ),

    scheme: _ => /(about|acct|arcp|cap|cid|coap+tcp|coap+ws|coaps+tcp|coaps+ws|data|dns|example|file|ftp|geo|h323|http|https|im|info|ipp|mailto|mid|ni|nih|payto|pkcs11|pres|reload|secret-token|session|sms|tag|telnet|urn|ws|wss)/,

    authority: $ => prec.left(PREC.request, seq(optional($.pair), "@")),
    host: $ => prec.left(PREC.request, seq($.identifier, optional($.pair))),
    path: $ => repeat1(choice("/", seq("/", $.identifier, optional("/")))),
    http_version: _ => prec.right(/HTTP\/1.1|HTTP\/2/),

    pair: $ => seq(
      field("name", $.identifier),
      ":",
      field("value", $.identifier),
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

    json_body: $ => prec.left(PREC.body, seq(/\{\n/, repeat(seq($._line, NL)), /\}\n\n/)),
    xml_body: $ => prec.left(PREC.body, seq(/<\?xml.*\?>/, NL, repeat(seq($._line, NL)), /<\/.*>\n\n/)),
    graphql_body: $ => prec(PREC.body, seq("query", $._whitespace, "(", repeat(seq($._line, NL)), /\}\n\n/)),

    external_body: $ => seq(
      "<",
      optional(seq("@", $.identifier)),
      $._whitespace,
      field("file_path", alias($._line, $.path))
    ),

    variable: $ => prec.left(PREC.var, seq("{{", $.identifier, "}}")),

    variable_declaration: $ => prec.left(PREC.var, seq(
      "@",
      field("identifier", $.identifier),
      optional(seq(
        optional($._whitespace),
        "=",
        optional($._whitespace),
        field("value", $._line),
      ))
    )),

    const_spec: _ => /[A-Z][A-Z\\d_]+/,
    identifier: _ => /[A-Za-z_.\d\u00A1-\uFFFF-]+/,
    comment: _ => prec.left(PREC.comment, token(seq("#", /.*/, NL))),
    _whitespace: _ => repeat1(/[\t\v ]/),
    _newline: _ => repeat1(/[\n]/),
    _line: _ => /[^\n]+/,
    string: _ => /"[^"]*"/,
    number: _ => /[0-9]+/,
    boolean: _ => choice('true', 'false'),
    null: _ => 'null',
  },
});
