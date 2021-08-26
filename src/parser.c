#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 15

enum {
  sym_method = 1,
  sym_url = 2,
  anon_sym_COLON = 3,
  sym_name = 4,
  sym_value = 5,
  anon_sym_LBRACE_LBRACE = 6,
  aux_sym_interpolation_token1 = 7,
  anon_sym_RBRACE_RBRACE = 8,
  aux_sym_json_file_token1 = 9,
  anon_sym_DOTjson = 10,
  anon_sym_LT = 11,
  aux_sym_json_body_token1 = 12,
  anon_sym_COMMA = 13,
  anon_sym_RBRACE = 14,
  aux_sym_json_string_content_token1 = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_DQUOTE = 18,
  sym_json_number = 19,
  anon_sym_true = 20,
  anon_sym_false = 21,
  sym_json_null = 22,
  aux_sym_json_pair_token1 = 23,
  sym_json_escape_sequence = 24,
  sym_comment = 25,
  aux_sym__whitespace_token1 = 26,
  sym_source_file = 27,
  sym__definition = 28,
  sym_request = 29,
  sym_header = 30,
  sym_interpolation = 31,
  sym_json_file = 32,
  sym_external_body = 33,
  sym_json_body = 34,
  sym_json_string_content = 35,
  sym_json_array = 36,
  sym_json_string = 37,
  sym_json_boolean = 38,
  sym__json_value = 39,
  sym_json_pair = 40,
  aux_sym__whitespace = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_json_body_repeat1 = 43,
  aux_sym_json_string_content_repeat1 = 44,
  aux_sym_json_array_repeat1 = 45,
  aux_sym_json_pair_repeat1 = 46,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_method] = "method",
  [sym_url] = "url",
  [anon_sym_COLON] = ":",
  [sym_name] = "name",
  [sym_value] = "value",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [aux_sym_interpolation_token1] = "interpolation_token1",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym_json_file_token1] = "json_file_token1",
  [anon_sym_DOTjson] = ".json",
  [anon_sym_LT] = "<",
  [aux_sym_json_body_token1] = "json_body_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [aux_sym_json_string_content_token1] = "json_string_content_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [sym_json_number] = "json_number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_json_null] = "json_null",
  [aux_sym_json_pair_token1] = "json_pair_token1",
  [sym_json_escape_sequence] = "json_escape_sequence",
  [sym_comment] = "comment",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_request] = "request",
  [sym_header] = "header",
  [sym_interpolation] = "interpolation",
  [sym_json_file] = "json_file",
  [sym_external_body] = "external_body",
  [sym_json_body] = "json_body",
  [sym_json_string_content] = "json_string_content",
  [sym_json_array] = "json_array",
  [sym_json_string] = "json_string",
  [sym_json_boolean] = "json_boolean",
  [sym__json_value] = "_json_value",
  [sym_json_pair] = "json_pair",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_json_body_repeat1] = "json_body_repeat1",
  [aux_sym_json_string_content_repeat1] = "json_string_content_repeat1",
  [aux_sym_json_array_repeat1] = "json_array_repeat1",
  [aux_sym_json_pair_repeat1] = "json_pair_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_method] = sym_method,
  [sym_url] = sym_url,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_name] = sym_name,
  [sym_value] = sym_value,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [aux_sym_interpolation_token1] = aux_sym_interpolation_token1,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym_json_file_token1] = aux_sym_json_file_token1,
  [anon_sym_DOTjson] = anon_sym_DOTjson,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_json_string_content_token1] = aux_sym_json_string_content_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_json_number] = sym_json_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_json_null] = sym_json_null,
  [aux_sym_json_pair_token1] = aux_sym_json_pair_token1,
  [sym_json_escape_sequence] = sym_json_escape_sequence,
  [sym_comment] = sym_comment,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_request] = sym_request,
  [sym_header] = sym_header,
  [sym_interpolation] = sym_interpolation,
  [sym_json_file] = sym_json_file,
  [sym_external_body] = sym_external_body,
  [sym_json_body] = sym_json_body,
  [sym_json_string_content] = sym_json_string_content,
  [sym_json_array] = sym_json_array,
  [sym_json_string] = sym_json_string,
  [sym_json_boolean] = sym_json_boolean,
  [sym__json_value] = sym__json_value,
  [sym_json_pair] = sym_json_pair,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_json_body_repeat1] = aux_sym_json_body_repeat1,
  [aux_sym_json_string_content_repeat1] = aux_sym_json_string_content_repeat1,
  [aux_sym_json_array_repeat1] = aux_sym_json_array_repeat1,
  [aux_sym_json_pair_repeat1] = aux_sym_json_pair_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpolation_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
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
  [aux_sym_json_body_token1] = {
    .visible = false,
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
  [aux_sym_json_string_content_token1] = {
    .visible = false,
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
  [sym_json_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_json_null] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_json_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_json_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
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
  [sym_interpolation] = {
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
  [sym_json_body] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_json_array] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string] = {
    .visible = true,
    .named = true,
  },
  [sym_json_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__json_value] = {
    .visible = false,
    .named = true,
  },
  [sym_json_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_pair_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_array_content = 1,
  field_json_file = 2,
  field_key = 3,
  field_method = 4,
  field_name = 5,
  field_string_content = 6,
  field_url = 7,
  field_value = 8,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_array_content] = "array_content",
  [field_json_file] = "json_file",
  [field_key] = "key",
  [field_method] = "method",
  [field_name] = "name",
  [field_string_content] = "string_content",
  [field_url] = "url",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 3},
  [6] = {.index = 11, .length = 2},
  [7] = {.index = 13, .length = 1},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 1},
  [11] = {.index = 18, .length = 1},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 2},
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
    {field_key, 1},
    {field_value, 3},
  [8] =
    {field_key, 1},
    {field_value, 3},
    {field_value, 4, .inherited = true},
  [11] =
    {field_key, 2},
    {field_value, 4},
  [13] =
    {field_array_content, 1},
  [14] =
    {field_array_content, 1, .inherited = true},
  [15] =
    {field_array_content, 0, .inherited = true},
    {field_array_content, 1, .inherited = true},
  [17] =
    {field_string_content, 1},
  [18] =
    {field_value, 1},
  [19] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [21] =
    {field_key, 2},
    {field_value, 4},
    {field_value, 5, .inherited = true},
  [24] =
    {field_array_content, 1},
    {field_array_content, 2, .inherited = true},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '#') ADVANCE(110);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'G') ADVANCE(62);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == 11) ADVANCE(83);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 4:
      if (lookahead == 11) ADVANCE(111);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == 11) ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == ',' ||
          lookahead == ':') ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 18:
      if (lookahead == 'j') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'w') ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == 'w') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'w') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == '{') ADVANCE(84);
      END_STATE();
    case 36:
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 37:
      if (lookahead == '}') ADVANCE(87);
      END_STATE();
    case 38:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(40);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 43:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 45:
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '#') ADVANCE(110);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'G') ADVANCE(62);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '#') ADVANCE(110);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'G') ADVANCE(62);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == ']') ADVANCE(98);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == 'w') ADVANCE(50);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == 'w') ADVANCE(51);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == ':') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == ':') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == ':') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(40);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'O') ADVANCE(67);
      if (lookahead == 'U') ADVANCE(68);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(65);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(68);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(48);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(64);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(68);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(48);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(63);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 11) ADVANCE(83);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_json_file_token1);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOTjson);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_json_string_content_token1);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_json_string_content_token1);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_json_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_json_number);
      if (lookahead == '.') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_json_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_json_null);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_json_null);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_json_pair_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == 11) ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(112);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 46},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 46},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 46},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 46},
  [10] = {.lex_state = 46},
  [11] = {.lex_state = 46},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 46},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 46},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 46},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 46},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 46},
  [67] = {.lex_state = 42},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 42},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_DOTjson] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_json_body_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_json_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_json_null] = ACTIONS(1),
    [sym_json_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(62),
    [sym__definition] = STATE(7),
    [sym_request] = STATE(7),
    [sym_header] = STATE(7),
    [sym_external_body] = STATE(7),
    [sym_json_body] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_method] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [aux_sym_json_body_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      aux_sym_json_body_token1,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_RBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_json_array_repeat1,
    ACTIONS(23), 2,
      sym_json_number,
      sym_json_null,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 5,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym_json_boolean,
      sym__json_value,
  [34] = 7,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_method,
    ACTIONS(32), 1,
      sym_name,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(38), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      sym_comment,
    STATE(3), 6,
      sym__definition,
      sym_request,
      sym_header,
      sym_external_body,
      sym_json_body,
      aux_sym_source_file_repeat1,
  [61] = 6,
    ACTIONS(11), 1,
      aux_sym_json_body_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(44), 2,
      sym_json_number,
      sym_json_null,
    STATE(56), 5,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym_json_boolean,
      sym__json_value,
  [86] = 6,
    ACTIONS(11), 1,
      aux_sym_json_body_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(46), 2,
      sym_json_number,
      sym_json_null,
    STATE(54), 5,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym_json_boolean,
      sym__json_value,
  [111] = 6,
    ACTIONS(11), 1,
      aux_sym_json_body_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(48), 2,
      sym_json_number,
      sym_json_null,
    STATE(52), 5,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym_json_boolean,
      sym__json_value,
  [136] = 7,
    ACTIONS(5), 1,
      sym_method,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      aux_sym_json_body_token1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      sym_comment,
    STATE(3), 6,
      sym__definition,
      sym_request,
      sym_header,
      sym_external_body,
      sym_json_body,
      aux_sym_source_file_repeat1,
  [163] = 6,
    ACTIONS(11), 1,
      aux_sym_json_body_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      sym_json_number,
      sym_json_null,
    STATE(42), 5,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym_json_boolean,
      sym__json_value,
  [188] = 2,
    ACTIONS(58), 2,
      sym_method,
      sym_name,
    ACTIONS(56), 7,
      ts_builtin_sym_end,
      anon_sym_LT,
      aux_sym_json_body_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [202] = 2,
    ACTIONS(62), 2,
      sym_method,
      sym_name,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      anon_sym_LT,
      aux_sym_json_body_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [216] = 2,
    ACTIONS(66), 2,
      sym_method,
      sym_name,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      anon_sym_LT,
      aux_sym_json_body_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [230] = 7,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      aux_sym__whitespace_token1,
    STATE(32), 1,
      aux_sym_json_body_repeat1,
    STATE(34), 1,
      aux_sym__whitespace,
    STATE(41), 1,
      sym_json_pair,
  [252] = 6,
    ACTIONS(76), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(78), 1,
      aux_sym_json_string_content_token1,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      sym_json_escape_sequence,
    STATE(61), 1,
      sym_json_string_content,
    STATE(18), 2,
      sym_interpolation,
      aux_sym_json_string_content_repeat1,
  [272] = 5,
    ACTIONS(84), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(87), 1,
      aux_sym_json_string_content_token1,
    ACTIONS(90), 1,
      aux_sym_json_pair_token1,
    ACTIONS(92), 1,
      sym_json_escape_sequence,
    STATE(14), 2,
      sym_interpolation,
      aux_sym_json_string_content_repeat1,
  [289] = 5,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(97), 1,
      aux_sym_json_string_content_token1,
    ACTIONS(99), 1,
      sym_json_escape_sequence,
    STATE(64), 1,
      sym_json_string_content,
    STATE(22), 2,
      sym_interpolation,
      aux_sym_json_string_content_repeat1,
  [306] = 5,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(104), 1,
      aux_sym_json_string_content_token1,
    ACTIONS(107), 1,
      sym_json_escape_sequence,
    STATE(16), 2,
      sym_interpolation,
      aux_sym_json_string_content_repeat1,
  [323] = 2,
    ACTIONS(112), 2,
      sym_method,
      sym_name,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      aux_sym_json_body_token1,
      sym_comment,
  [334] = 5,
    ACTIONS(76), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(114), 1,
      aux_sym_json_string_content_token1,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      sym_json_escape_sequence,
    STATE(16), 2,
      sym_interpolation,
      aux_sym_json_string_content_repeat1,
  [351] = 2,
    ACTIONS(122), 2,
      sym_method,
      sym_name,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      aux_sym_json_body_token1,
      sym_comment,
  [362] = 2,
    ACTIONS(126), 2,
      sym_method,
      sym_name,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      aux_sym_json_body_token1,
      sym_comment,
  [373] = 2,
    ACTIONS(130), 2,
      sym_method,
      sym_name,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      aux_sym_json_body_token1,
      sym_comment,
  [384] = 5,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(116), 1,
      aux_sym_json_pair_token1,
    ACTIONS(132), 1,
      aux_sym_json_string_content_token1,
    ACTIONS(134), 1,
      sym_json_escape_sequence,
    STATE(14), 2,
      sym_interpolation,
      aux_sym_json_string_content_repeat1,
  [401] = 5,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(97), 1,
      aux_sym_json_string_content_token1,
    ACTIONS(99), 1,
      sym_json_escape_sequence,
    STATE(66), 1,
      sym_json_string_content,
    STATE(22), 2,
      sym_interpolation,
      aux_sym_json_string_content_repeat1,
  [418] = 2,
    ACTIONS(138), 1,
      sym_json_escape_sequence,
    ACTIONS(136), 3,
      anon_sym_LBRACE_LBRACE,
      aux_sym_json_string_content_token1,
      anon_sym_DQUOTE,
  [427] = 3,
    ACTIONS(142), 1,
      aux_sym__whitespace_token1,
    STATE(25), 1,
      aux_sym__whitespace,
    ACTIONS(140), 2,
      sym_url,
      anon_sym_DQUOTE,
  [438] = 4,
    ACTIONS(145), 1,
      aux_sym_json_file_token1,
    ACTIONS(147), 1,
      aux_sym__whitespace_token1,
    STATE(19), 1,
      sym_json_file,
    STATE(37), 1,
      aux_sym__whitespace,
  [451] = 2,
    ACTIONS(138), 1,
      sym_json_escape_sequence,
    ACTIONS(136), 3,
      anon_sym_LBRACE_LBRACE,
      aux_sym_json_string_content_token1,
      aux_sym_json_pair_token1,
  [460] = 4,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      aux_sym__whitespace_token1,
    STATE(34), 1,
      aux_sym__whitespace,
    STATE(59), 1,
      sym_json_pair,
  [473] = 1,
    ACTIONS(149), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [479] = 3,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_json_pair_repeat1,
  [489] = 3,
    ACTIONS(140), 1,
      sym_value,
    ACTIONS(156), 1,
      aux_sym__whitespace_token1,
    STATE(31), 1,
      aux_sym__whitespace,
  [499] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_json_body_repeat1,
  [509] = 3,
    ACTIONS(163), 1,
      sym_value,
    ACTIONS(165), 1,
      aux_sym__whitespace_token1,
    STATE(31), 1,
      aux_sym__whitespace,
  [519] = 3,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym__whitespace_token1,
    STATE(25), 1,
      aux_sym__whitespace,
  [529] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_json_body_repeat1,
  [539] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_json_body_repeat1,
  [549] = 3,
    ACTIONS(140), 1,
      aux_sym_json_file_token1,
    ACTIONS(178), 1,
      aux_sym__whitespace_token1,
    STATE(37), 1,
      aux_sym__whitespace,
  [559] = 1,
    ACTIONS(181), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [565] = 2,
    STATE(30), 1,
      aux_sym_json_pair_repeat1,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [573] = 3,
    ACTIONS(169), 1,
      aux_sym__whitespace_token1,
    ACTIONS(185), 1,
      sym_url,
    STATE(25), 1,
      aux_sym__whitespace,
  [583] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_json_body_repeat1,
  [593] = 2,
    STATE(51), 1,
      aux_sym_json_pair_repeat1,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [601] = 1,
    ACTIONS(189), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [607] = 3,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_json_array_repeat1,
  [617] = 1,
    ACTIONS(196), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [623] = 3,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym_json_array_repeat1,
  [633] = 3,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_json_array_repeat1,
  [643] = 1,
    ACTIONS(202), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [649] = 1,
    ACTIONS(204), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [655] = 3,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_json_array_repeat1,
  [665] = 2,
    STATE(30), 1,
      aux_sym_json_pair_repeat1,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [673] = 2,
    STATE(39), 1,
      aux_sym_json_pair_repeat1,
    ACTIONS(210), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [681] = 1,
    ACTIONS(212), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [687] = 1,
    ACTIONS(214), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [692] = 2,
    ACTIONS(216), 1,
      aux_sym__whitespace_token1,
    STATE(26), 1,
      aux_sym__whitespace,
  [699] = 1,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [704] = 2,
    ACTIONS(220), 1,
      aux_sym__whitespace_token1,
    STATE(33), 1,
      aux_sym__whitespace,
  [711] = 2,
    ACTIONS(222), 1,
      aux_sym__whitespace_token1,
    STATE(40), 1,
      aux_sym__whitespace,
  [718] = 1,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [723] = 1,
    ACTIONS(224), 1,
      anon_sym_COLON,
  [727] = 1,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
  [731] = 1,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [735] = 1,
    ACTIONS(230), 1,
      anon_sym_DOTjson,
  [739] = 1,
    ACTIONS(232), 1,
      aux_sym_json_pair_token1,
  [743] = 1,
    ACTIONS(234), 1,
      anon_sym_RBRACE_RBRACE,
  [747] = 1,
    ACTIONS(236), 1,
      aux_sym_json_pair_token1,
  [751] = 1,
    ACTIONS(238), 1,
      aux_sym_interpolation_token1,
  [755] = 1,
    ACTIONS(240), 1,
      anon_sym_RBRACE_RBRACE,
  [759] = 1,
    ACTIONS(242), 1,
      aux_sym_interpolation_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 61,
  [SMALL_STATE(5)] = 86,
  [SMALL_STATE(6)] = 111,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 163,
  [SMALL_STATE(9)] = 188,
  [SMALL_STATE(10)] = 202,
  [SMALL_STATE(11)] = 216,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 252,
  [SMALL_STATE(14)] = 272,
  [SMALL_STATE(15)] = 289,
  [SMALL_STATE(16)] = 306,
  [SMALL_STATE(17)] = 323,
  [SMALL_STATE(18)] = 334,
  [SMALL_STATE(19)] = 351,
  [SMALL_STATE(20)] = 362,
  [SMALL_STATE(21)] = 373,
  [SMALL_STATE(22)] = 384,
  [SMALL_STATE(23)] = 401,
  [SMALL_STATE(24)] = 418,
  [SMALL_STATE(25)] = 427,
  [SMALL_STATE(26)] = 438,
  [SMALL_STATE(27)] = 451,
  [SMALL_STATE(28)] = 460,
  [SMALL_STATE(29)] = 473,
  [SMALL_STATE(30)] = 479,
  [SMALL_STATE(31)] = 489,
  [SMALL_STATE(32)] = 499,
  [SMALL_STATE(33)] = 509,
  [SMALL_STATE(34)] = 519,
  [SMALL_STATE(35)] = 529,
  [SMALL_STATE(36)] = 539,
  [SMALL_STATE(37)] = 549,
  [SMALL_STATE(38)] = 559,
  [SMALL_STATE(39)] = 565,
  [SMALL_STATE(40)] = 573,
  [SMALL_STATE(41)] = 583,
  [SMALL_STATE(42)] = 593,
  [SMALL_STATE(43)] = 601,
  [SMALL_STATE(44)] = 607,
  [SMALL_STATE(45)] = 617,
  [SMALL_STATE(46)] = 623,
  [SMALL_STATE(47)] = 633,
  [SMALL_STATE(48)] = 643,
  [SMALL_STATE(49)] = 649,
  [SMALL_STATE(50)] = 655,
  [SMALL_STATE(51)] = 665,
  [SMALL_STATE(52)] = 673,
  [SMALL_STATE(53)] = 681,
  [SMALL_STATE(54)] = 687,
  [SMALL_STATE(55)] = 692,
  [SMALL_STATE(56)] = 699,
  [SMALL_STATE(57)] = 704,
  [SMALL_STATE(58)] = 711,
  [SMALL_STATE(59)] = 718,
  [SMALL_STATE(60)] = 723,
  [SMALL_STATE(61)] = 727,
  [SMALL_STATE(62)] = 731,
  [SMALL_STATE(63)] = 735,
  [SMALL_STATE(64)] = 739,
  [SMALL_STATE(65)] = 743,
  [SMALL_STATE(66)] = 747,
  [SMALL_STATE(67)] = 751,
  [SMALL_STATE(68)] = 755,
  [SMALL_STATE(69)] = 759,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_content_repeat1, 2), SHIFT_REPEAT(67),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_content_repeat1, 2), SHIFT_REPEAT(14),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_content_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_content_repeat1, 2), SHIFT_REPEAT(14),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_content_repeat1, 2), SHIFT_REPEAT(69),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_content_repeat1, 2), SHIFT_REPEAT(16),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_content_repeat1, 2), SHIFT_REPEAT(16),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, .production_id = 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_file, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_file, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(25),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_boolean, 1),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_pair_repeat1, 2, .production_id = 12), SHIFT_REPEAT(4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_pair_repeat1, 2, .production_id = 12),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(31),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_body_repeat1, 2), SHIFT_REPEAT(28),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_body_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(37),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4, .production_id = 14),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair, 6, .production_id = 13),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair, 4, .production_id = 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, .production_id = 10),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, .production_id = 9), SHIFT_REPEAT(5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, .production_id = 9),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, .production_id = 8),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair, 5, .production_id = 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair, 5, .production_id = 6),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, .production_id = 7),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, .production_id = 7),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_pair_repeat1, 2, .production_id = 11),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [228] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_http(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
