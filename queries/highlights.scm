; Display errors
(ERROR) @error

; Comments
(comment) @comment

(request
  method: (method) @keyword
  url: (target_url) @text.uri)

(pair
  name: (_) @attribute
  value: (_) @string)


(query_param 
  key: (key) @attribute
  value: (value) @string)

(header
  name: (name) @constant
  value: (value))

; rest.nvim Neovim plugin specific features
(external_body
  file_path: (file_path) @text.uri) @keyword

(host) @text.uri
(path) @text.uri
(number) @number
(string) @string
(scheme) @keyword
(variable) @variable
(variable_declaration 
  identifier: (identifier) @variable
  value: (value) @string)

[
  "@"
  ":"
  "="
] @operator
