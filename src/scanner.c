#include <err.h>
#include <errno.h>
#include <stdlib.h>

#include "tree_sitter/parser.h"

enum TokenType {
	INDENT,
	DEDENT,
	NEWLINE
};

struct Scanner {
	unsigned current_indent;
	unsigned dedents;
};

void * tree_sitter_fbdl_external_scanner_create() {
	struct Scanner* scanner = malloc(sizeof(struct Scanner));
	scanner->current_indent = 0;
	scanner->dedents = 0;

	if (scanner == NULL)
		errx(EXIT_FAILURE, "Can't allocate memory for external scanner");

	return scanner;
}

void tree_sitter_fbdl_external_scanner_destroy(void *payload) {
	free(payload);
}

unsigned tree_sitter_fbdl_external_scanner_serialize(
	void *payload,
	char *buffer
) {
	return 0;
}

void tree_sitter_fbdl_external_scanner_deserialize(
	void *payload,
	const char *buffer,
	unsigned length
) {
	return;
}

bool tree_sitter_fbdl_external_scanner_scan(
	void *payload,
	TSLexer *lexer,
	const bool *valid_symbols
) {
	struct Scanner *scanner = payload;

//	while (lexer->lookahead == ' ') {lexer->advance(lexer, true);}

	if (valid_symbols[NEWLINE]) {
		if (lexer->lookahead == '\n') {
			lexer->advance(lexer, false);

			while (lexer->lookahead == '\n') {
				lexer->advance(lexer, false);
			}

			lexer->mark_end(lexer);
			lexer->result_symbol = NEWLINE;
			return true;
		}
	}

	if (valid_symbols[INDENT]) {
		if (lexer->lookahead == '\t') {
			lexer->advance(lexer, false);

			if (lexer->lookahead == "\t") {
				errx(EXIT_FAILURE, "Multi indent detected");
			}

			scanner->current_indent++;
			lexer->mark_end(lexer);
			lexer->result_symbol = INDENT;
			return true;
		}
	}

	if (valid_symbols[DEDENT]) {
		if (scanner->dedents > 0) {
			goto dedent;
		}

		unsigned indent = 0;
		while (lexer->lookahead == '\t') {
			indent++;
			lexer->advance(lexer, false);
		}
		lexer->mark_end(lexer);
		scanner->dedents = scanner->current_indent - indent;

		if (scanner->dedents > 0) {
dedent:
			scanner->current_indent--;
			scanner->dedents--;
			lexer->result_symbol = DEDENT;
			return true;
		}
	}

	return false;
}
