; Display errors
(ERROR) @error

; Comments
(comment) @comment

(method) @keyword
(target_url) @text.uri
(host) @text.uri
(path) @text.uri
(scheme) @keyword

(request
  method: (method) @keyword
  url: (url) @text.uri)

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

(number) @number
(string) @string
(variable) @variable
(variable_declaration 
  identifier: (identifier) @variable
  value: (value) @string)

[
  "@"
  ":"
  "="
] @operator
