module.exports = grammar({
  name: "http",

  extras: ($) => [$.comment],

  /* conflicts: ($) => [
    [$.method, $.url],
    [$.name, $.value],
  ], */

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.request, $.json_body),

    request: ($) => seq(field("method", $.method), field("url", $.url)),

    method: (_) => /(?:GET|POST|PATCH|DELETE|PUT)/,

    url: (_) =>
      /(www|http:|https:)\/\/(?:w{1,3}\.)?[^\s.]+(?:\.[a-z]+)*(?::\d+)?([\w.,@?^=%&amp;:\/~+#-]*[\w@?^=%&amp;\/~+#-])?/,

    header: ($) => seq(field("name", $.name), field("value", $.value)),

    name: (_) => seq(/[-A-Za-z]+/, ":"),

    value: (_) => /(\w+\W\w+)|(\w+\s\w+)/,

    json_body: ($) =>
      seq(field("start", $.json_body_start), field("end", $.json_body_end)),

    json_body_start: (_) => token(seq("{", /\r?\n/)),
    json_body_end: (_) => token(seq("}", /\r?\n/)),

    comment: (_) => token(seq("#", /.*/)),
  },
});
