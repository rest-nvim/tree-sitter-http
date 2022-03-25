const json = require("tree-sitter-json/grammar");

module.exports = grammar(json, {
  name: "http",

  extras: ($, original) => [
    ...original,
    $.request,
    $.header,
    $.external_body,
    $.comment,
  ],

  rules: {
    document: ($, original) => repeat(original),

    request: ($) =>
      seq(field("method", $.method), $._whitespace, field("url", $.url)),

    method: (_) => /(GET|POST|PATCH|DELETE|PUT)/,

    url: (_) =>
      /((www|http:|https:)\/\/(?:w{1,3}\.)?[^\s.]+(?:\.[a-z]+)*(?::\d+)?|\{\{\w+\}\})([\w.,@?^=%&amp;:\/~+#\{\}\u00C0-\u00FF-]*[\w@?^=%&amp;\/~+#\u00C0-\u00FF-])?/,

    header: ($) =>
      seq(
        field("name", seq($.name, ":")),
        $._whitespace,
        field("value", $.value)
      ),

    name: (_) => /[A-Za-z-]+/,

    value: (_) => /[^\n]+/,

    json_file: (_) => seq(/[A-Za-z-_./]+/, ".json"),

    external_body: ($) =>
      seq(
        token("<"),
        $._whitespace,
        field("json_file", $.json_file),
      ),

    comment: ($) => token(seq("#", /.*/)),

    _whitespace: (_) => repeat1(/[\t\v ]/),
  },
});
