module.exports = grammar({
  name: "http",

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.request, $.header, $.json_body, $.comment),

    request: ($) =>
      seq(field("method", $.method), $._whitespace, field("url", $.url)),

    method: (_) => /(?:GET|POST|PATCH|DELETE|PUT)/,

    url: (_) =>
      /(www|http:|https:)\/\/(?:w{1,3}\.)?[^\s.]+(?:\.[a-z]+)*(?::\d+)?([\w.,@?^=%&amp;:\/~+#-]*[\w@?^=%&amp;\/~+#-])?/,

    header: ($) =>
      seq(
        field("name", seq($.name, ":")),
        $._whitespace,
        field("value", $.value)
      ),

    name: (_) => /[A-Za-z-]+/,

    value: (_) => /[^\n]+/,

    // NOTE: we should remove this '/.*/' later, it isn't safe and doesn't cover our needs
    json_body: ($) =>
      seq(
        field("start", $.json_body_start),
        /.*/,
        field("end", $.json_body_end)
      ),

    json_body_start: (_) => token(seq("{", /\r?\n/)),
    json_body_end: (_) => token(seq("}", /\r?\n/)),

    comment: (_) => token(seq("#", /.*/)),

    _whitespace: (_) => repeat1(/[\t\v ]/),
  },
});
