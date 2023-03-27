#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 96
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 3
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 11

enum {
  sym_identifier = 1,
  aux_sym_document_token1 = 2,
  aux_sym_method_token1 = 3,
  anon_sym_COLON_SLASH_SLASH = 4,
  sym_scheme = 5,
  anon_sym_AT = 6,
  anon_sym_SLASH = 7,
  aux_sym_http_version_token1 = 8,
  anon_sym_COLON = 9,
  anon_sym_QMARK = 10,
  anon_sym_AMP = 11,
  anon_sym_EQ = 12,
  aux_sym_json_body_token1 = 13,
  aux_sym_json_body_token2 = 14,
  aux_sym_xml_body_token1 = 15,
  aux_sym_xml_body_token2 = 16,
  anon_sym_query = 17,
  anon_sym_LPAREN = 18,
  anon_sym_LT = 19,
  anon_sym_LBRACE_LBRACE = 20,
  anon_sym_RBRACE_RBRACE = 21,
  sym_const_spec = 22,
  aux_sym_comment_token1 = 23,
  aux_sym__whitespace_token1 = 24,
  aux_sym__newline_token1 = 25,
  sym__line = 26,
  sym_string = 27,
  sym_number = 28,
  anon_sym_true = 29,
  anon_sym_false = 30,
  sym_null = 31,
  sym_document = 32,
  sym_request = 33,
  sym_method = 34,
  sym_target_url = 35,
  sym_authority = 36,
  sym_host = 37,
  sym_path = 38,
  sym_http_version = 39,
  sym_pair = 40,
  sym_query_param = 41,
  sym_header = 42,
  sym_json_body = 43,
  sym_xml_body = 44,
  sym_external_body = 45,
  sym_variable = 46,
  sym_variable_declaration = 47,
  sym_comment = 48,
  aux_sym__whitespace = 49,
  aux_sym_document_repeat1 = 50,
  aux_sym_target_url_repeat1 = 51,
  aux_sym_path_repeat1 = 52,
  aux_sym_json_body_repeat1 = 53,
  alias_sym_key = 54,
  alias_sym_name = 55,
  alias_sym_value = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_document_token1] = "document_token1",
  [aux_sym_method_token1] = "method_token1",
  [anon_sym_COLON_SLASH_SLASH] = "://",
  [sym_scheme] = "scheme",
  [anon_sym_AT] = "@",
  [anon_sym_SLASH] = "/",
  [aux_sym_http_version_token1] = "http_version_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
  [aux_sym_json_body_token1] = "json_body_token1",
  [aux_sym_json_body_token2] = "json_body_token2",
  [aux_sym_xml_body_token1] = "xml_body_token1",
  [aux_sym_xml_body_token2] = "xml_body_token2",
  [anon_sym_query] = "query",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LT] = "<",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_const_spec] = "const_spec",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [aux_sym__newline_token1] = "_newline_token1",
  [sym__line] = "_line",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [sym_document] = "document",
  [sym_request] = "request",
  [sym_method] = "method",
  [sym_target_url] = "target_url",
  [sym_authority] = "authority",
  [sym_host] = "host",
  [sym_path] = "path",
  [sym_http_version] = "http_version",
  [sym_pair] = "pair",
  [sym_query_param] = "query_param",
  [sym_header] = "header",
  [sym_json_body] = "json_body",
  [sym_xml_body] = "xml_body",
  [sym_external_body] = "external_body",
  [sym_variable] = "variable",
  [sym_variable_declaration] = "variable_declaration",
  [sym_comment] = "comment",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_target_url_repeat1] = "target_url_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_json_body_repeat1] = "json_body_repeat1",
  [alias_sym_key] = "key",
  [alias_sym_name] = "name",
  [alias_sym_value] = "value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [aux_sym_method_token1] = aux_sym_method_token1,
  [anon_sym_COLON_SLASH_SLASH] = anon_sym_COLON_SLASH_SLASH,
  [sym_scheme] = sym_scheme,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_http_version_token1] = aux_sym_http_version_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [aux_sym_json_body_token2] = aux_sym_json_body_token2,
  [aux_sym_xml_body_token1] = aux_sym_xml_body_token1,
  [aux_sym_xml_body_token2] = aux_sym_xml_body_token2,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_const_spec] = sym_const_spec,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [sym__line] = sym__line,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null] = sym_null,
  [sym_document] = sym_document,
  [sym_request] = sym_request,
  [sym_method] = sym_method,
  [sym_target_url] = sym_target_url,
  [sym_authority] = sym_authority,
  [sym_host] = sym_host,
  [sym_path] = sym_path,
  [sym_http_version] = sym_http_version,
  [sym_pair] = sym_pair,
  [sym_query_param] = sym_query_param,
  [sym_header] = sym_header,
  [sym_json_body] = sym_json_body,
  [sym_xml_body] = sym_xml_body,
  [sym_external_body] = sym_external_body,
  [sym_variable] = sym_variable,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_comment] = sym_comment,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_target_url_repeat1] = aux_sym_target_url_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_json_body_repeat1] = aux_sym_json_body_repeat1,
  [alias_sym_key] = alias_sym_key,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_value] = alias_sym_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_method_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_scheme] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_http_version_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_json_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_body_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_const_spec] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_target_url] = {
    .visible = true,
    .named = true,
  },
  [sym_authority] = {
    .visible = true,
    .named = true,
  },
  [sym_host] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_query_param] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_json_body] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_body] = {
    .visible = true,
    .named = true,
  },
  [sym_external_body] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [aux_sym_target_url_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_key] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_value] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_file_path = 1,
  field_identifier = 2,
  field_key = 3,
  field_name = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_file_path] = "file_path",
  [field_identifier] = "identifier",
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 6, .length = 2},
  [10] = {.index = 13, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_identifier, 1},
  [1] =
    {field_file_path, 2},
  [2] =
    {field_identifier, 1},
    {field_value, 3},
  [4] =
    {field_key, 1},
    {field_value, 3},
  [6] =
    {field_name, 0},
    {field_value, 2},
  [8] =
    {field_identifier, 1},
    {field_value, 4},
  [10] =
    {field_file_path, 4},
  [11] =
    {field_name, 0},
    {field_value, 3},
  [13] =
    {field_identifier, 1},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [2] = sym_path,
  },
  [4] = {
    [1] = alias_sym_key,
    [3] = alias_sym_value,
  },
  [5] = {
    [0] = alias_sym_name,
    [2] = alias_sym_value,
  },
  [7] = {
    [4] = sym_path,
  },
  [8] = {
    [0] = alias_sym_name,
    [3] = alias_sym_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 28,
  [54] = 28,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 58,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 67,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 81,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '?') ADVANCE(36);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '{') ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '}') ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '?') ADVANCE(36);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(55);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(27);
      if (lookahead == '2') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == '<') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == '?') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '?') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == 'H') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'P') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '}') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(37);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '?') ADVANCE(36);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(52);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '?') ADVANCE(24);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(24);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '\\') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_const_spec);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'C') ADVANCE(1);
      if (lookahead == 'D') ADVANCE(2);
      if (lookahead == 'G') ADVANCE(3);
      if (lookahead == 'H') ADVANCE(4);
      if (lookahead == 'O') ADVANCE(5);
      if (lookahead == 'P') ADVANCE(6);
      if (lookahead == 'T') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(13);
      if (lookahead == 'h') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(18);
      if (lookahead == 'q') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == 'P') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(30);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'U') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == '3') ADVANCE(47);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'k') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 31:
      if (lookahead == 'S') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(84);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(86);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 56:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_method_token1);
      END_STATE();
    case 71:
      if (lookahead == 'D') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(100);
      END_STATE();
    case 73:
      if (lookahead == 'C') ADVANCE(101);
      END_STATE();
    case 74:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 75:
      if (lookahead == 'C') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 84:
      if (lookahead == '3') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 98:
      if (lookahead == 'E') ADVANCE(118);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(119);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(120);
      END_STATE();
    case 101:
      if (lookahead == 'H') ADVANCE(70);
      END_STATE();
    case 102:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(121);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(124);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 111:
      if (lookahead == '1') ADVANCE(128);
      END_STATE();
    case 112:
      if (lookahead == 'y') ADVANCE(129);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 118:
      if (lookahead == 'C') ADVANCE(134);
      END_STATE();
    case 119:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(135);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(121);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(124);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == 'w') ADVANCE(137);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 128:
      if (lookahead == '1') ADVANCE(49);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 135:
      if (lookahead == 'S') ADVANCE(70);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 140:
      if (lookahead == '-') ADVANCE(143);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'k') ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 25},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 28},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 25},
  [59] = {.lex_state = 26},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 26},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 26},
  [65] = {.lex_state = 26},
  [66] = {.lex_state = 26},
  [67] = {.lex_state = 25},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 28},
  [75] = {.lex_state = 28},
  [76] = {.lex_state = 28},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 28},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 28},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 28},
  [92] = {.lex_state = 28},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 28},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
    [sym_scheme] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_json_body_token1] = ACTIONS(1),
    [aux_sym_json_body_token2] = ACTIONS(1),
    [aux_sym_xml_body_token1] = ACTIONS(1),
    [aux_sym_xml_body_token2] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym_const_spec] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym__whitespace_token1] = ACTIONS(1),
    [aux_sym__newline_token1] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(85),
    [sym_request] = STATE(3),
    [sym_method] = STATE(72),
    [sym_query_param] = STATE(3),
    [sym_header] = STATE(3),
    [sym_json_body] = STATE(3),
    [sym_xml_body] = STATE(3),
    [sym_external_body] = STATE(3),
    [sym_variable] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [aux_sym_document_token1] = ACTIONS(7),
    [aux_sym_method_token1] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(13),
    [anon_sym_AMP] = ACTIONS(13),
    [aux_sym_json_body_token1] = ACTIONS(15),
    [aux_sym_xml_body_token1] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(21),
    [sym_const_spec] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(23),
    [sym_number] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(32), 1,
      aux_sym_document_token1,
    ACTIONS(38), 1,
      anon_sym_AT,
    ACTIONS(44), 1,
      aux_sym_json_body_token1,
    ACTIONS(47), 1,
      aux_sym_xml_body_token1,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(56), 1,
      aux_sym_comment_token1,
    ACTIONS(59), 1,
      sym_number,
    STATE(72), 1,
      sym_method,
    ACTIONS(35), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(41), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(2), 10,
      sym_request,
      sym_query_param,
      sym_header,
      sym_json_body,
      sym_xml_body,
      sym_external_body,
      sym_variable,
      sym_variable_declaration,
      sym_comment,
      aux_sym_document_repeat1,
  [54] = 14,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      aux_sym_json_body_token1,
    ACTIONS(17), 1,
      aux_sym_xml_body_token1,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(23), 1,
      aux_sym_comment_token1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      aux_sym_document_token1,
    ACTIONS(66), 1,
      sym_number,
    STATE(72), 1,
      sym_method,
    ACTIONS(9), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(2), 10,
      sym_request,
      sym_query_param,
      sym_header,
      sym_json_body,
      sym_xml_body,
      sym_external_body,
      sym_variable,
      sym_variable_declaration,
      sym_comment,
      aux_sym_document_repeat1,
  [108] = 5,
    ACTIONS(72), 1,
      anon_sym_EQ,
    ACTIONS(74), 1,
      aux_sym__whitespace_token1,
    STATE(63), 1,
      aux_sym__whitespace,
    ACTIONS(70), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(68), 9,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
  [136] = 2,
    ACTIONS(78), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(76), 10,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
      aux_sym__whitespace_token1,
  [156] = 2,
    ACTIONS(82), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(80), 9,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
  [175] = 2,
    ACTIONS(86), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(84), 9,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
  [194] = 2,
    ACTIONS(90), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(88), 9,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
  [213] = 2,
    ACTIONS(94), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(92), 9,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
  [232] = 2,
    ACTIONS(98), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(96), 9,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
  [251] = 2,
    ACTIONS(102), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(100), 9,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
  [270] = 2,
    ACTIONS(106), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(104), 9,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
  [289] = 2,
    ACTIONS(110), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(108), 9,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
  [308] = 2,
    ACTIONS(114), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(112), 9,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
  [327] = 2,
    ACTIONS(118), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(116), 9,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
  [346] = 2,
    ACTIONS(122), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(120), 9,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
  [365] = 2,
    ACTIONS(126), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(124), 9,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
  [384] = 2,
    ACTIONS(130), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(128), 9,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
  [403] = 2,
    ACTIONS(134), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(132), 9,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
  [422] = 2,
    ACTIONS(138), 5,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(136), 9,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym_json_body_token1,
      aux_sym_xml_body_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_comment_token1,
  [441] = 6,
    ACTIONS(142), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      aux_sym_path_repeat1,
    STATE(37), 1,
      sym_path,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(140), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(38), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [463] = 6,
    ACTIONS(142), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      aux_sym_path_repeat1,
    STATE(36), 1,
      sym_path,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(144), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(33), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [485] = 6,
    ACTIONS(142), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      aux_sym_path_repeat1,
    STATE(39), 1,
      sym_path,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(146), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(41), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [507] = 9,
    ACTIONS(148), 1,
      sym_identifier,
    ACTIONS(150), 1,
      sym_scheme,
    ACTIONS(152), 1,
      anon_sym_AT,
    ACTIONS(154), 1,
      aux_sym__whitespace_token1,
    STATE(25), 1,
      sym_host,
    STATE(28), 1,
      aux_sym__whitespace,
    STATE(55), 1,
      sym_target_url,
    STATE(68), 1,
      sym_authority,
    STATE(89), 1,
      sym_pair,
  [535] = 6,
    ACTIONS(142), 1,
      anon_sym_SLASH,
    STATE(29), 1,
      aux_sym_path_repeat1,
    STATE(31), 1,
      sym_path,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(156), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(30), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [557] = 4,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_COLON,
    STATE(43), 1,
      sym_pair,
    ACTIONS(160), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [574] = 3,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(43), 1,
      sym_pair,
    ACTIONS(160), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [588] = 4,
    ACTIONS(168), 1,
      aux_sym__whitespace_token1,
    STATE(28), 1,
      aux_sym__whitespace,
    ACTIONS(164), 2,
      sym_scheme,
      sym_identifier,
    ACTIONS(166), 2,
      anon_sym_AT,
      anon_sym_EQ,
  [603] = 3,
    ACTIONS(142), 1,
      anon_sym_SLASH,
    STATE(35), 1,
      aux_sym_path_repeat1,
    ACTIONS(171), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [616] = 3,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(144), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(34), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [629] = 3,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(144), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(33), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [642] = 2,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [653] = 3,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(140), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(34), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [666] = 3,
    ACTIONS(177), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    ACTIONS(179), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(34), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [679] = 3,
    ACTIONS(184), 1,
      anon_sym_SLASH,
    STATE(35), 1,
      aux_sym_path_repeat1,
    ACTIONS(182), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [692] = 3,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(140), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(38), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [705] = 3,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(146), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(41), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [718] = 3,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(146), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(34), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [731] = 3,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(187), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(40), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [744] = 3,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(189), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(34), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [757] = 3,
    ACTIONS(13), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(187), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(34), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [770] = 1,
    ACTIONS(191), 6,
      aux_sym_document_token1,
      anon_sym_AT,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [779] = 1,
    ACTIONS(193), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [787] = 5,
    ACTIONS(152), 1,
      anon_sym_AT,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(21), 1,
      sym_host,
    STATE(69), 1,
      sym_authority,
    STATE(89), 1,
      sym_pair,
  [803] = 2,
    ACTIONS(197), 1,
      anon_sym_SLASH,
    ACTIONS(182), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [813] = 1,
    ACTIONS(200), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [821] = 4,
    ACTIONS(202), 1,
      aux_sym_http_version_token1,
    ACTIONS(204), 1,
      aux_sym__whitespace_token1,
    STATE(53), 1,
      aux_sym__whitespace,
    STATE(76), 1,
      sym_http_version,
  [834] = 3,
    ACTIONS(206), 1,
      aux_sym__whitespace_token1,
    ACTIONS(208), 1,
      sym__line,
    STATE(65), 1,
      aux_sym__whitespace,
  [844] = 3,
    ACTIONS(210), 1,
      aux_sym__whitespace_token1,
    ACTIONS(212), 1,
      sym__line,
    STATE(54), 1,
      aux_sym__whitespace,
  [854] = 3,
    ACTIONS(214), 1,
      aux_sym_json_body_token2,
    ACTIONS(216), 1,
      sym__line,
    STATE(58), 1,
      aux_sym_json_body_repeat1,
  [864] = 3,
    ACTIONS(218), 1,
      aux_sym_xml_body_token2,
    ACTIONS(220), 1,
      sym__line,
    STATE(57), 1,
      aux_sym_json_body_repeat1,
  [874] = 3,
    ACTIONS(210), 1,
      aux_sym__whitespace_token1,
    ACTIONS(222), 1,
      sym__line,
    STATE(54), 1,
      aux_sym__whitespace,
  [884] = 3,
    ACTIONS(166), 1,
      aux_sym_http_version_token1,
    ACTIONS(224), 1,
      aux_sym__whitespace_token1,
    STATE(53), 1,
      aux_sym__whitespace,
  [894] = 3,
    ACTIONS(164), 1,
      sym__line,
    ACTIONS(227), 1,
      aux_sym__whitespace_token1,
    STATE(54), 1,
      aux_sym__whitespace,
  [904] = 3,
    ACTIONS(230), 1,
      aux_sym_document_token1,
    ACTIONS(232), 1,
      aux_sym__whitespace_token1,
    STATE(47), 1,
      aux_sym__whitespace,
  [914] = 3,
    ACTIONS(216), 1,
      sym__line,
    ACTIONS(234), 1,
      aux_sym_json_body_token2,
    STATE(50), 1,
      aux_sym_json_body_repeat1,
  [924] = 3,
    ACTIONS(220), 1,
      sym__line,
    ACTIONS(236), 1,
      aux_sym_xml_body_token2,
    STATE(62), 1,
      aux_sym_json_body_repeat1,
  [934] = 3,
    ACTIONS(238), 1,
      aux_sym_json_body_token2,
    ACTIONS(240), 1,
      sym__line,
    STATE(58), 1,
      aux_sym_json_body_repeat1,
  [944] = 3,
    ACTIONS(210), 1,
      aux_sym__whitespace_token1,
    ACTIONS(243), 1,
      sym__line,
    STATE(54), 1,
      aux_sym__whitespace,
  [954] = 3,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(247), 1,
      aux_sym__whitespace_token1,
    STATE(66), 1,
      aux_sym__whitespace,
  [964] = 3,
    ACTIONS(243), 1,
      sym__line,
    ACTIONS(249), 1,
      aux_sym__whitespace_token1,
    STATE(49), 1,
      aux_sym__whitespace,
  [974] = 3,
    ACTIONS(238), 1,
      aux_sym_xml_body_token2,
    ACTIONS(251), 1,
      sym__line,
    STATE(62), 1,
      aux_sym_json_body_repeat1,
  [984] = 3,
    ACTIONS(154), 1,
      aux_sym__whitespace_token1,
    ACTIONS(254), 1,
      anon_sym_EQ,
    STATE(28), 1,
      aux_sym__whitespace,
  [994] = 3,
    ACTIONS(256), 1,
      aux_sym__whitespace_token1,
    ACTIONS(258), 1,
      sym__line,
    STATE(59), 1,
      aux_sym__whitespace,
  [1004] = 3,
    ACTIONS(210), 1,
      aux_sym__whitespace_token1,
    ACTIONS(260), 1,
      sym__line,
    STATE(54), 1,
      aux_sym__whitespace,
  [1014] = 3,
    ACTIONS(210), 1,
      aux_sym__whitespace_token1,
    ACTIONS(262), 1,
      sym__line,
    STATE(54), 1,
      aux_sym__whitespace,
  [1024] = 2,
    ACTIONS(238), 1,
      aux_sym_json_body_token2,
    ACTIONS(264), 1,
      sym__line,
  [1031] = 2,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(22), 1,
      sym_host,
  [1038] = 2,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(23), 1,
      sym_host,
  [1045] = 2,
    ACTIONS(268), 1,
      aux_sym__whitespace_token1,
    STATE(52), 1,
      aux_sym__whitespace,
  [1052] = 2,
    ACTIONS(238), 1,
      aux_sym_xml_body_token2,
    ACTIONS(264), 1,
      sym__line,
  [1059] = 2,
    ACTIONS(270), 1,
      aux_sym__whitespace_token1,
    STATE(24), 1,
      aux_sym__whitespace,
  [1066] = 1,
    ACTIONS(162), 1,
      anon_sym_COLON,
  [1070] = 1,
    ACTIONS(272), 1,
      aux_sym_document_token1,
  [1074] = 1,
    ACTIONS(274), 1,
      aux_sym_document_token1,
  [1078] = 1,
    ACTIONS(276), 1,
      aux_sym_document_token1,
  [1082] = 1,
    ACTIONS(278), 1,
      sym_identifier,
  [1086] = 1,
    ACTIONS(280), 1,
      sym_identifier,
  [1090] = 1,
    ACTIONS(282), 1,
      sym_identifier,
  [1094] = 1,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [1098] = 1,
    ACTIONS(286), 1,
      aux_sym_document_token1,
  [1102] = 1,
    ACTIONS(288), 1,
      sym_identifier,
  [1106] = 1,
    ACTIONS(290), 1,
      sym_identifier,
  [1110] = 1,
    ACTIONS(292), 1,
      aux_sym_document_token1,
  [1114] = 1,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
  [1118] = 1,
    ACTIONS(296), 1,
      sym_identifier,
  [1122] = 1,
    ACTIONS(298), 1,
      anon_sym_EQ,
  [1126] = 1,
    ACTIONS(300), 1,
      aux_sym__whitespace_token1,
  [1130] = 1,
    ACTIONS(302), 1,
      anon_sym_AT,
  [1134] = 1,
    ACTIONS(304), 1,
      sym_identifier,
  [1138] = 1,
    ACTIONS(306), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1142] = 1,
    ACTIONS(308), 1,
      aux_sym_document_token1,
  [1146] = 1,
    ACTIONS(310), 1,
      sym_identifier,
  [1150] = 1,
    ACTIONS(312), 1,
      anon_sym_RBRACE_RBRACE,
  [1154] = 1,
    ACTIONS(314), 1,
      aux_sym_document_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 136,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 175,
  [SMALL_STATE(8)] = 194,
  [SMALL_STATE(9)] = 213,
  [SMALL_STATE(10)] = 232,
  [SMALL_STATE(11)] = 251,
  [SMALL_STATE(12)] = 270,
  [SMALL_STATE(13)] = 289,
  [SMALL_STATE(14)] = 308,
  [SMALL_STATE(15)] = 327,
  [SMALL_STATE(16)] = 346,
  [SMALL_STATE(17)] = 365,
  [SMALL_STATE(18)] = 384,
  [SMALL_STATE(19)] = 403,
  [SMALL_STATE(20)] = 422,
  [SMALL_STATE(21)] = 441,
  [SMALL_STATE(22)] = 463,
  [SMALL_STATE(23)] = 485,
  [SMALL_STATE(24)] = 507,
  [SMALL_STATE(25)] = 535,
  [SMALL_STATE(26)] = 557,
  [SMALL_STATE(27)] = 574,
  [SMALL_STATE(28)] = 588,
  [SMALL_STATE(29)] = 603,
  [SMALL_STATE(30)] = 616,
  [SMALL_STATE(31)] = 629,
  [SMALL_STATE(32)] = 642,
  [SMALL_STATE(33)] = 653,
  [SMALL_STATE(34)] = 666,
  [SMALL_STATE(35)] = 679,
  [SMALL_STATE(36)] = 692,
  [SMALL_STATE(37)] = 705,
  [SMALL_STATE(38)] = 718,
  [SMALL_STATE(39)] = 731,
  [SMALL_STATE(40)] = 744,
  [SMALL_STATE(41)] = 757,
  [SMALL_STATE(42)] = 770,
  [SMALL_STATE(43)] = 779,
  [SMALL_STATE(44)] = 787,
  [SMALL_STATE(45)] = 803,
  [SMALL_STATE(46)] = 813,
  [SMALL_STATE(47)] = 821,
  [SMALL_STATE(48)] = 834,
  [SMALL_STATE(49)] = 844,
  [SMALL_STATE(50)] = 854,
  [SMALL_STATE(51)] = 864,
  [SMALL_STATE(52)] = 874,
  [SMALL_STATE(53)] = 884,
  [SMALL_STATE(54)] = 894,
  [SMALL_STATE(55)] = 904,
  [SMALL_STATE(56)] = 914,
  [SMALL_STATE(57)] = 924,
  [SMALL_STATE(58)] = 934,
  [SMALL_STATE(59)] = 944,
  [SMALL_STATE(60)] = 954,
  [SMALL_STATE(61)] = 964,
  [SMALL_STATE(62)] = 974,
  [SMALL_STATE(63)] = 984,
  [SMALL_STATE(64)] = 994,
  [SMALL_STATE(65)] = 1004,
  [SMALL_STATE(66)] = 1014,
  [SMALL_STATE(67)] = 1024,
  [SMALL_STATE(68)] = 1031,
  [SMALL_STATE(69)] = 1038,
  [SMALL_STATE(70)] = 1045,
  [SMALL_STATE(71)] = 1052,
  [SMALL_STATE(72)] = 1059,
  [SMALL_STATE(73)] = 1066,
  [SMALL_STATE(74)] = 1070,
  [SMALL_STATE(75)] = 1074,
  [SMALL_STATE(76)] = 1078,
  [SMALL_STATE(77)] = 1082,
  [SMALL_STATE(78)] = 1086,
  [SMALL_STATE(79)] = 1090,
  [SMALL_STATE(80)] = 1094,
  [SMALL_STATE(81)] = 1098,
  [SMALL_STATE(82)] = 1102,
  [SMALL_STATE(83)] = 1106,
  [SMALL_STATE(84)] = 1110,
  [SMALL_STATE(85)] = 1114,
  [SMALL_STATE(86)] = 1118,
  [SMALL_STATE(87)] = 1122,
  [SMALL_STATE(88)] = 1126,
  [SMALL_STATE(89)] = 1130,
  [SMALL_STATE(90)] = 1134,
  [SMALL_STATE(91)] = 1138,
  [SMALL_STATE(92)] = 1142,
  [SMALL_STATE(93)] = 1146,
  [SMALL_STATE(94)] = 1150,
  [SMALL_STATE(95)] = 1154,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(88),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(86),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 2, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 4, .production_id = 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 6),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 6),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 5),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 7),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 7),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, .production_id = 8),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, .production_id = 8),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 10),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 10),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(28),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(82),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(32),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 9),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(46),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(53),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(54),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_body_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_body_repeat1, 2), SHIFT_REPEAT(81),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_body_repeat1, 2), SHIFT_REPEAT(95),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_body_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [294] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
