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

	json_body: ($) => seq(
		token(/\{\s+/),
		optional($.json_pair),
		repeat(
			seq(
				token(","),
				$.json_pair,
			)
		),
		token("}"),
	),

	json_string_content: (_) => token(/[\w\s]+/),

	json_array: ($) =>
		seq(
			token("["),
			field("array_content", optional($._json_value)),
			repeat(
				seq(
					token(","),
					field("array_content", $._json_value),
				),
			),
			token("]"),
		),

	json_string: ($) =>
		seq(
			token('"'),
			field("string_content", optional($.json_string_content)),
			token('"'),
		),

	json_number: ($) => token(/\d+(\.\d+)?|\.\d+/),

	_json_value: ($) =>
		choice(
			$.json_string,
			$.json_number,
			$.json_array,
			$.json_body,
		),

	json_pair: ($) => prec.left(0, seq(
		optional($._whitespace),
		token('"'),
		field("key", $.json_string_content),
		token(/"\s*:/),
		field("value", $._json_value),
		repeat(
			seq(
				token(","),
				field("value", $._json_value),
			)
		)
	)),

    comment: (_) => token(seq("#", /.*/)),

    _whitespace: (_) => repeat1(/[\t\v ]/),
  },
});
