# HTTP tree-sitter parser

HTTP grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)


# How to contribute

You can get a development environment with
`nix develop`
then run:
```
npm install
make build
```

Neovim loads parser in runtimepath order so to test the generated grammar,
prepend it to rtp with `set rtp^=/path/to/tree-sitter-http`.
