#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_content_token1 = 8,
  sym_escape_sequence = 9,
  sym_number = 10,
  sym_true = 11,
  sym_false = 12,
  sym_null = 13,
  sym_method = 14,
  sym_url = 15,
  sym_name = 16,
  sym_value = 17,
  aux_sym_json_file_token1 = 18,
  anon_sym_DOTjson = 19,
  anon_sym_LT = 20,
  sym_comment = 21,
  aux_sym__whitespace_token1 = 22,
  sym_document = 23,
  sym__value = 24,
  sym_object = 25,
  sym_pair = 26,
  sym_array = 27,
  sym_string = 28,
  sym_string_content = 29,
  sym_request = 30,
  sym_header = 31,
  sym_json_file = 32,
  sym_external_body = 33,
  aux_sym__whitespace = 34,
  aux_sym_document_repeat1 = 35,
  aux_sym_object_repeat1 = 36,
  aux_sym_array_repeat1 = 37,
  aux_sym_string_content_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_method] = "method",
  [sym_url] = "url",
  [sym_name] = "name",
  [sym_value] = "value",
  [aux_sym_json_file_token1] = "json_file_token1",
  [anon_sym_DOTjson] = ".json",
  [anon_sym_LT] = "<",
  [sym_comment] = "comment",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym_request] = "request",
  [sym_header] = "header",
  [sym_json_file] = "json_file",
  [sym_external_body] = "external_body",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_method] = sym_method,
  [sym_url] = sym_url,
  [sym_name] = sym_name,
  [sym_value] = sym_value,
  [aux_sym_json_file_token1] = aux_sym_json_file_token1,
  [anon_sym_DOTjson] = anon_sym_DOTjson,
  [anon_sym_LT] = anon_sym_LT,
  [sym_comment] = sym_comment,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym_request] = sym_request,
  [sym_header] = sym_header,
  [sym_json_file] = sym_json_file,
  [sym_external_body] = sym_external_body,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_json_file_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOTjson] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_json_file] = {
    .visible = true,
    .named = true,
  },
  [sym_external_body] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_json_file = 1,
  field_key = 2,
  field_method = 3,
  field_name = 4,
  field_url = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_json_file] = "json_file",
  [field_key] = "key",
  [field_method] = "method",
  [field_name] = "name",
  [field_url] = "url",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_method, 0},
    {field_url, 2},
  [2] =
    {field_json_file, 2},
  [3] =
    {field_name, 0},
    {field_name, 1},
    {field_value, 3},
  [6] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_url_character_set_1(int32_t c) {
  return (c < '?'
    ? (c < '+'
      ? (c < '%'
        ? c == '#'
        : c <= '&')
      : (c <= ';' || c == '='))
    : (c <= 'Z' || (c < '~'
      ? (c < 'a'
        ? (c >= '^' && c <= '_')
        : c <= 'z')
      : (c <= '~' || (c >= 192 && c <= 255)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'G') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'h') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'w') ADVANCE(135);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(45);
      if (lookahead == 'G') ADVANCE(46);
      if (lookahead == 'P') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == 11) ADVANCE(140);
      if (lookahead == '\r') ADVANCE(139);
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == '<') ADVANCE(145);
      if (lookahead == 'D') ADVANCE(97);
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead == 'P') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 3:
      if (lookahead == 11) ADVANCE(147);
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'G') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead == 'h') ADVANCE(131);
      if (lookahead == 'w') ADVANCE(135);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 4:
      if (lookahead == 11) ADVANCE(147);
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == 'D') ADVANCE(94);
      if (lookahead == 'G') ADVANCE(95);
      if (lookahead == 'P') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'G') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == ',' ||
          lookahead == ':' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~' ||
          (192 <= lookahead && lookahead <= 255)) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(59);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == 'j') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'w') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.') ADVANCE(77);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(80);
      END_STATE();
    case 18:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(62);
      END_STATE();
    case 20:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (sym_url_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 21:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~' ||
          (192 <= lookahead && lookahead <= 255)) ADVANCE(80);
      END_STATE();
    case 22:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(22);
      if (sym_url_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 23:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 29:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'G') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'h') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'w') ADVANCE(135);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'G') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'G') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(28);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(45);
      if (lookahead == 'G') ADVANCE(46);
      if (lookahead == 'P') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'A') ADVANCE(52);
      if (lookahead == 'O') ADVANCE(50);
      if (lookahead == 'U') ADVANCE(51);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'E') ADVANCE(55);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'E') ADVANCE(49);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'E') ADVANCE(53);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'H') ADVANCE(55);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'L') ADVANCE(47);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'S') ADVANCE(51);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'T') ADVANCE(55);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'T') ADVANCE(44);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'w') ADVANCE(73);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(77);
      if (sym_url_character_set_1(lookahead)) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'w') ADVANCE(74);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(77);
      if (sym_url_character_set_1(lookahead)) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(77);
      if (sym_url_character_set_1(lookahead)) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (sym_url_character_set_1(lookahead)) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~' ||
          (192 <= lookahead && lookahead <= 255)) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(77);
      if (sym_url_character_set_1(lookahead)) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ',' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~' ||
          (192 <= lookahead && lookahead <= 255)) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (sym_url_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(22);
      if (sym_url_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '0') ADVANCE(59);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(109);
      if (lookahead == 'U') ADVANCE(112);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(115);
      if (lookahead == 'O') ADVANCE(110);
      if (lookahead == 'U') ADVANCE(114);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead == 'U') ADVANCE(116);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(103);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(104);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(105);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(69);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(108);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(70);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(69);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(71);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(100);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(101);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(112);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(114);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(116);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(70);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(88);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(69);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(89);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(71);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(90);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(96);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(99);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(126);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(81);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 11) ADVANCE(140);
      if (lookahead == '\r') ADVANCE(139);
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == '<') ADVANCE(145);
      if (lookahead == 'D') ADVANCE(97);
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead == 'P') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_json_file_token1);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DOTjson);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == 11) ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(148);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 31},
  [9] = {.lex_state = 31},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 31},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 31},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 30},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 30},
  [32] = {.lex_state = 30},
  [33] = {.lex_state = 30},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 30},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 30},
  [43] = {.lex_state = 30},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 30},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 30},
  [48] = {.lex_state = 30},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 30},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 30},
  [54] = {.lex_state = 30},
  [55] = {.lex_state = 30},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 30},
  [61] = {.lex_state = 30},
  [62] = {.lex_state = 30},
  [63] = {.lex_state = 30},
  [64] = {.lex_state = 30},
  [65] = {.lex_state = 30},
  [66] = {(TSStateId)(-1)},
  [67] = {(TSStateId)(-1)},
  [68] = {(TSStateId)(-1)},
  [69] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_request] = STATE(0),
    [sym_header] = STATE(0),
    [sym_external_body] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_method] = ACTIONS(3),
    [sym_url] = ACTIONS(1),
    [sym_name] = ACTIONS(5),
    [anon_sym_DOTjson] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [1] = {
    [sym_document] = STATE(62),
    [sym__value] = STATE(10),
    [sym_object] = STATE(9),
    [sym_array] = STATE(9),
    [sym_string] = STATE(9),
    [sym_request] = STATE(1),
    [sym_header] = STATE(1),
    [sym_external_body] = STATE(1),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_null] = ACTIONS(21),
    [sym_method] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [sym__value] = STATE(10),
    [sym_object] = STATE(9),
    [sym_array] = STATE(9),
    [sym_string] = STATE(9),
    [sym_request] = STATE(2),
    [sym_header] = STATE(2),
    [sym_external_body] = STATE(2),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_null] = ACTIONS(21),
    [sym_method] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [3] = {
    [sym__value] = STATE(10),
    [sym_object] = STATE(9),
    [sym_array] = STATE(9),
    [sym_string] = STATE(9),
    [sym_request] = STATE(3),
    [sym_header] = STATE(3),
    [sym_external_body] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_number] = ACTIONS(36),
    [sym_true] = ACTIONS(39),
    [sym_false] = ACTIONS(39),
    [sym_null] = ACTIONS(39),
    [sym_method] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      anon_sym_RBRACK,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      sym_number,
    STATE(33), 1,
      sym__value,
    ACTIONS(52), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 3,
      sym_request,
      sym_header,
      sym_external_body,
    STATE(29), 3,
      sym_object,
      sym_array,
      sym_string,
  [46] = 13,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      sym_number,
    ACTIONS(54), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      sym__value,
    ACTIONS(52), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(5), 3,
      sym_request,
      sym_header,
      sym_external_body,
    STATE(29), 3,
      sym_object,
      sym_array,
      sym_string,
  [92] = 12,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      sym_number,
    STATE(55), 1,
      sym__value,
    ACTIONS(52), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(6), 3,
      sym_request,
      sym_header,
      sym_external_body,
    STATE(29), 3,
      sym_object,
      sym_array,
      sym_string,
  [135] = 12,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      sym_number,
    STATE(53), 1,
      sym__value,
    ACTIONS(52), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(7), 3,
      sym_request,
      sym_header,
      sym_external_body,
    STATE(29), 3,
      sym_object,
      sym_array,
      sym_string,
  [178] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(58), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(8), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
  [208] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(62), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(9), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
  [238] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(66), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(10), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
  [268] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(70), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(11), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
  [298] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(74), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(12), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
  [328] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(78), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(13), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(76), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
  [358] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(82), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(14), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
  [388] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(86), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(15), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
  [418] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(90), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(16), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
  [448] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(94), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(17), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
  [478] = 10,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      aux_sym_string_content_token1,
    ACTIONS(100), 1,
      sym_escape_sequence,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_string_content_repeat1,
    STATE(64), 1,
      sym_string_content,
    STATE(18), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [511] = 10,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(98), 1,
      aux_sym_string_content_token1,
    ACTIONS(100), 1,
      sym_escape_sequence,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      aux_sym_string_content_repeat1,
    STATE(61), 1,
      sym_string_content,
    STATE(19), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [544] = 10,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      sym_number,
    STATE(28), 1,
      sym_pair,
    STATE(60), 1,
      sym_string,
    STATE(20), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [577] = 10,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_number,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_pair,
    STATE(60), 1,
      sym_string,
    STATE(21), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [610] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    STATE(22), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(84), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [634] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    STATE(23), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(56), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [658] = 9,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(114), 1,
      aux_sym_json_file_token1,
    ACTIONS(116), 1,
      aux_sym__whitespace_token1,
    STATE(44), 1,
      aux_sym__whitespace,
    STATE(69), 1,
      sym_json_file,
    STATE(24), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [688] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      aux_sym_string_content_token1,
    ACTIONS(123), 1,
      sym_escape_sequence,
    STATE(25), 4,
      sym_request,
      sym_header,
      sym_external_body,
      aux_sym_string_content_repeat1,
  [716] = 9,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      sym_number,
    STATE(54), 1,
      sym_pair,
    STATE(60), 1,
      sym_string,
    STATE(26), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [746] = 9,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(98), 1,
      aux_sym_string_content_token1,
    ACTIONS(100), 1,
      sym_escape_sequence,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_string_content_repeat1,
    STATE(27), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [776] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_object_repeat1,
    STATE(28), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [803] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(60), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(29), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [826] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_value,
    ACTIONS(134), 1,
      aux_sym__whitespace_token1,
    STATE(36), 1,
      aux_sym__whitespace,
    STATE(30), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [853] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_array_repeat1,
    STATE(31), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [880] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_object_repeat1,
    STATE(32), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [907] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_array_repeat1,
    STATE(33), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [934] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_object_repeat1,
    STATE(34), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [961] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_object_repeat1,
    STATE(35), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [988] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_value,
    ACTIONS(150), 1,
      aux_sym__whitespace_token1,
    STATE(36), 4,
      sym_request,
      sym_header,
      sym_external_body,
      aux_sym__whitespace,
  [1013] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_array_repeat1,
    STATE(37), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1040] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_escape_sequence,
    ACTIONS(155), 2,
      anon_sym_DQUOTE,
      aux_sym_string_content_token1,
    STATE(38), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1065] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      aux_sym_array_repeat1,
    STATE(39), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1092] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(68), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(40), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1115] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(72), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(41), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1138] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(88), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(42), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1161] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(92), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(43), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1184] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(148), 1,
      aux_sym_json_file_token1,
    ACTIONS(161), 1,
      aux_sym__whitespace_token1,
    STATE(44), 4,
      sym_request,
      sym_header,
      sym_external_body,
      aux_sym__whitespace,
  [1209] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(45), 4,
      sym_request,
      sym_header,
      sym_external_body,
      aux_sym_object_repeat1,
  [1234] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_url,
    ACTIONS(171), 1,
      aux_sym__whitespace_token1,
    STATE(49), 1,
      aux_sym__whitespace,
    STATE(46), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1261] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(47), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1284] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    STATE(48), 4,
      sym_request,
      sym_header,
      sym_external_body,
      aux_sym_array_repeat1,
  [1309] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_url,
    ACTIONS(178), 1,
      aux_sym__whitespace_token1,
    STATE(49), 4,
      sym_request,
      sym_header,
      sym_external_body,
      aux_sym__whitespace,
  [1334] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(76), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(50), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1357] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_json_file_token1,
    ACTIONS(183), 1,
      aux_sym__whitespace_token1,
    STATE(51), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1381] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym__whitespace_token1,
    STATE(30), 1,
      aux_sym__whitespace,
    STATE(52), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1405] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(53), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1427] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(54), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1449] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(55), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1471] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_url,
    ACTIONS(183), 1,
      aux_sym__whitespace_token1,
    STATE(56), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1495] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(181), 2,
      sym_value,
      aux_sym__whitespace_token1,
    STATE(57), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1517] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(116), 1,
      aux_sym__whitespace_token1,
    STATE(24), 1,
      aux_sym__whitespace,
    STATE(58), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1541] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(102), 1,
      anon_sym_LT,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym__whitespace_token1,
    STATE(46), 1,
      aux_sym__whitespace,
    STATE(59), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1565] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COLON,
    STATE(60), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1586] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    STATE(61), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1607] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(62), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1628] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_COLON,
    STATE(63), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1649] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(64), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1670] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_DOTjson,
    STATE(65), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1691] = 1,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
  [1695] = 1,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
  [1699] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
  [1703] = 1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 46,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 178,
  [SMALL_STATE(9)] = 208,
  [SMALL_STATE(10)] = 238,
  [SMALL_STATE(11)] = 268,
  [SMALL_STATE(12)] = 298,
  [SMALL_STATE(13)] = 328,
  [SMALL_STATE(14)] = 358,
  [SMALL_STATE(15)] = 388,
  [SMALL_STATE(16)] = 418,
  [SMALL_STATE(17)] = 448,
  [SMALL_STATE(18)] = 478,
  [SMALL_STATE(19)] = 511,
  [SMALL_STATE(20)] = 544,
  [SMALL_STATE(21)] = 577,
  [SMALL_STATE(22)] = 610,
  [SMALL_STATE(23)] = 634,
  [SMALL_STATE(24)] = 658,
  [SMALL_STATE(25)] = 688,
  [SMALL_STATE(26)] = 716,
  [SMALL_STATE(27)] = 746,
  [SMALL_STATE(28)] = 776,
  [SMALL_STATE(29)] = 803,
  [SMALL_STATE(30)] = 826,
  [SMALL_STATE(31)] = 853,
  [SMALL_STATE(32)] = 880,
  [SMALL_STATE(33)] = 907,
  [SMALL_STATE(34)] = 934,
  [SMALL_STATE(35)] = 961,
  [SMALL_STATE(36)] = 988,
  [SMALL_STATE(37)] = 1013,
  [SMALL_STATE(38)] = 1040,
  [SMALL_STATE(39)] = 1065,
  [SMALL_STATE(40)] = 1092,
  [SMALL_STATE(41)] = 1115,
  [SMALL_STATE(42)] = 1138,
  [SMALL_STATE(43)] = 1161,
  [SMALL_STATE(44)] = 1184,
  [SMALL_STATE(45)] = 1209,
  [SMALL_STATE(46)] = 1234,
  [SMALL_STATE(47)] = 1261,
  [SMALL_STATE(48)] = 1284,
  [SMALL_STATE(49)] = 1309,
  [SMALL_STATE(50)] = 1334,
  [SMALL_STATE(51)] = 1357,
  [SMALL_STATE(52)] = 1381,
  [SMALL_STATE(53)] = 1405,
  [SMALL_STATE(54)] = 1427,
  [SMALL_STATE(55)] = 1449,
  [SMALL_STATE(56)] = 1471,
  [SMALL_STATE(57)] = 1495,
  [SMALL_STATE(58)] = 1517,
  [SMALL_STATE(59)] = 1541,
  [SMALL_STATE(60)] = 1565,
  [SMALL_STATE(61)] = 1586,
  [SMALL_STATE(62)] = 1607,
  [SMALL_STATE(63)] = 1628,
  [SMALL_STATE(64)] = 1649,
  [SMALL_STATE(65)] = 1670,
  [SMALL_STATE(66)] = 1691,
  [SMALL_STATE(67)] = 1695,
  [SMALL_STATE(68)] = 1699,
  [SMALL_STATE(69)] = 1703,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(38),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(38),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(57),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(51),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(26),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(7),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(56),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_file, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, .production_id = 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_http(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
