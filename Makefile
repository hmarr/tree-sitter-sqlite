.PHONY: generate web-ui

generate: src/parser.c

web-ui: tree-sitter-sqlite.wasm
	tree-sitter web-ui

src/parser.c: grammar.js
	tree-sitter generate

tree-sitter-sqlite.wasm: src/parser.c
	tree-sitter build-wasm
