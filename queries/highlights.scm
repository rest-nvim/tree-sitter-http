; Keywords
; (scheme) @module

; Methods
(method) @function.method

; Headers
(header
  name: (_) @constant)

; Variables
(variable_declaration
  name: (identifier) @variable)

; Parameters
(query_param
  key: (_) @variable.parameter)

; Operators
[
  "="
  "?"
  "&"
  "@"
  "<"
] @operator

; Literals
(request
  url: (_) @string.special.url)

(http_version) @constant

; Response
(status_code) @number
(status_text) @string

(string) @string

(number) @number

(boolean) @boolean

; Punctuation
[
  "{{"
  "}}"
] @punctuation.bracket

":" @punctuation.delimiter

; external JSON body
(external_body
  file_path: (_) @string.special.path)

; Comments
(comment) @comment @spell
