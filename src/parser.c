#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 132
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 3
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 13

enum {
  sym_identifier = 1,
  aux_sym_document_token1 = 2,
  aux_sym_comment_token1 = 3,
  aux_sym_method_token1 = 4,
  anon_sym_COLON = 5,
  aux_sym_port_token1 = 6,
  anon_sym_SLASH = 7,
  sym_scheme = 8,
  anon_sym_AT = 9,
  aux_sym_http_version_token1 = 10,
  anon_sym_COLON_SLASH_SLASH = 11,
  anon_sym_QMARK = 12,
  anon_sym_AMP = 13,
  anon_sym_EQ = 14,
  anon_sym_LBRACE_LBRACE = 15,
  anon_sym_RBRACE_RBRACE = 16,
  aux_sym_script_variable_token1 = 17,
  aux_sym_script_variable_token2 = 18,
  aux_sym_xml_body_token1 = 19,
  aux_sym_xml_body_token2 = 20,
  aux_sym_json_body_token1 = 21,
  aux_sym_json_body_token2 = 22,
  anon_sym_query = 23,
  anon_sym_LPAREN = 24,
  anon_sym_LT = 25,
  sym_const_spec = 26,
  sym_number = 27,
  aux_sym__whitespace_token1 = 28,
  aux_sym__newline_token1 = 29,
  sym__line = 30,
  sym_document = 31,
  sym_comment = 32,
  sym_method = 33,
  sym_host = 34,
  sym_port = 35,
  sym_path = 36,
  sym_authority = 37,
  sym_http_version = 38,
  sym_target_url = 39,
  sym_request = 40,
  sym_pair = 41,
  sym_query_param = 42,
  sym_header = 43,
  sym_variable = 44,
  sym_script_variable = 45,
  sym_variable_declaration = 46,
  sym_xml_body = 47,
  sym_json_body = 48,
  sym_graphql_body = 49,
  sym_external_body = 50,
  aux_sym__whitespace = 51,
  aux_sym_document_repeat1 = 52,
  aux_sym_path_repeat1 = 53,
  aux_sym_target_url_repeat1 = 54,
  aux_sym_request_repeat1 = 55,
  aux_sym_request_repeat2 = 56,
  aux_sym_script_variable_repeat1 = 57,
  alias_sym_key = 58,
  alias_sym_name = 59,
  alias_sym_value = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_document_token1] = "document_token1",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_method_token1] = "method_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_port_token1] = "port_token1",
  [anon_sym_SLASH] = "/",
  [sym_scheme] = "scheme",
  [anon_sym_AT] = "@",
  [aux_sym_http_version_token1] = "http_version_token1",
  [anon_sym_COLON_SLASH_SLASH] = "://",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym_script_variable_token1] = "script_variable_token1",
  [aux_sym_script_variable_token2] = "script_variable_token2",
  [aux_sym_xml_body_token1] = "xml_body_token1",
  [aux_sym_xml_body_token2] = "xml_body_token2",
  [aux_sym_json_body_token1] = "json_body_token1",
  [aux_sym_json_body_token2] = "json_body_token2",
  [anon_sym_query] = "query",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LT] = "<",
  [sym_const_spec] = "const_spec",
  [sym_number] = "number",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [aux_sym__newline_token1] = "_newline_token1",
  [sym__line] = "_line",
  [sym_document] = "document",
  [sym_comment] = "comment",
  [sym_method] = "method",
  [sym_host] = "host",
  [sym_port] = "port",
  [sym_path] = "path",
  [sym_authority] = "authority",
  [sym_http_version] = "http_version",
  [sym_target_url] = "target_url",
  [sym_request] = "request",
  [sym_pair] = "pair",
  [sym_query_param] = "query_param",
  [sym_header] = "header",
  [sym_variable] = "variable",
  [sym_script_variable] = "script_variable",
  [sym_variable_declaration] = "variable_declaration",
  [sym_xml_body] = "xml_body",
  [sym_json_body] = "json_body",
  [sym_graphql_body] = "graphql_body",
  [sym_external_body] = "external_body",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_target_url_repeat1] = "target_url_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_script_variable_repeat1] = "script_variable_repeat1",
  [alias_sym_key] = "key",
  [alias_sym_name] = "name",
  [alias_sym_value] = "value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_method_token1] = aux_sym_method_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_port_token1] = aux_sym_port_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_scheme] = sym_scheme,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_http_version_token1] = aux_sym_http_version_token1,
  [anon_sym_COLON_SLASH_SLASH] = anon_sym_COLON_SLASH_SLASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym_script_variable_token1] = aux_sym_script_variable_token1,
  [aux_sym_script_variable_token2] = aux_sym_script_variable_token2,
  [aux_sym_xml_body_token1] = aux_sym_xml_body_token1,
  [aux_sym_xml_body_token2] = aux_sym_xml_body_token2,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [aux_sym_json_body_token2] = aux_sym_json_body_token2,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LT] = anon_sym_LT,
  [sym_const_spec] = sym_const_spec,
  [sym_number] = sym_number,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [sym__line] = sym__line,
  [sym_document] = sym_document,
  [sym_comment] = sym_comment,
  [sym_method] = sym_method,
  [sym_host] = sym_host,
  [sym_port] = sym_port,
  [sym_path] = sym_path,
  [sym_authority] = sym_authority,
  [sym_http_version] = sym_http_version,
  [sym_target_url] = sym_target_url,
  [sym_request] = sym_request,
  [sym_pair] = sym_pair,
  [sym_query_param] = sym_query_param,
  [sym_header] = sym_header,
  [sym_variable] = sym_variable,
  [sym_script_variable] = sym_script_variable,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_xml_body] = sym_xml_body,
  [sym_json_body] = sym_json_body,
  [sym_graphql_body] = sym_graphql_body,
  [sym_external_body] = sym_external_body,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_target_url_repeat1] = aux_sym_target_url_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_script_variable_repeat1] = aux_sym_script_variable_repeat1,
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
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_method_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_port_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
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
  [aux_sym_http_version_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_SLASH_SLASH] = {
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
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_script_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_variable_token2] = {
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
  [aux_sym_json_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_token2] = {
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
  [sym_const_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
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
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_host] = {
    .visible = true,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_authority] = {
    .visible = true,
    .named = true,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [sym_target_url] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_script_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_body] = {
    .visible = true,
    .named = true,
  },
  [sym_json_body] = {
    .visible = true,
    .named = true,
  },
  [sym_graphql_body] = {
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
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_url_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_variable_repeat1] = {
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
  field_json_body_end = 2,
  field_key = 3,
  field_name = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_file_path] = "file_path",
  [field_json_body_end] = "json_body_end",
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 5, .length = 2},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_value, 3},
  [3] =
    {field_name, 1},
    {field_value, 4},
  [5] =
    {field_name, 0},
    {field_value, 2},
  [7] =
    {field_name, 1},
    {field_value, 5},
  [9] =
    {field_json_body_end, 1},
  [10] =
    {field_key, 1},
    {field_value, 3},
  [12] =
    {field_json_body_end, 2},
  [13] =
    {field_file_path, 2},
  [14] =
    {field_file_path, 4},
  [15] =
    {field_name, 0},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [1] = alias_sym_key,
    [3] = alias_sym_value,
  },
  [9] = {
    [2] = sym_path,
  },
  [10] = {
    [0] = alias_sym_name,
    [2] = alias_sym_value,
  },
  [11] = {
    [4] = sym_path,
  },
  [12] = {
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
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 13,
  [69] = 69,
  [70] = 70,
  [71] = 43,
  [72] = 72,
  [73] = 43,
  [74] = 72,
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
  [89] = 72,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 99,
  [101] = 16,
  [102] = 102,
  [103] = 103,
  [104] = 99,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 115,
  [129] = 106,
  [130] = 106,
  [131] = 107,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '?') ADVANCE(65);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == 'C') ADVANCE(134);
      if (lookahead == 'D') ADVANCE(131);
      if (lookahead == 'G') ADVANCE(132);
      if (lookahead == 'H') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(135);
      if (lookahead == 'P') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(136);
      if (lookahead == 'q') ADVANCE(140);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '}') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '{') ADVANCE(68);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '}') ADVANCE(69);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(73);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '?') ADVANCE(65);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == '2') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == '<') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '?') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == 'U') ADVANCE(120);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 28:
      if (lookahead == 'H') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 42:
      if (lookahead == '{') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == '{') ADVANCE(10);
      END_STATE();
    case 44:
      if (lookahead == '}') ADVANCE(6);
      END_STATE();
    case 45:
      if (lookahead == '}') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 48:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 49:
      if (eof) ADVANCE(51);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '?') ADVANCE(65);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == 'C') ADVANCE(29);
      if (lookahead == 'D') ADVANCE(25);
      if (lookahead == 'G') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(30);
      if (lookahead == 'P') ADVANCE(24);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(39);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == 'C') ADVANCE(134);
      if (lookahead == 'D') ADVANCE(131);
      if (lookahead == 'G') ADVANCE(132);
      if (lookahead == 'H') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(135);
      if (lookahead == 'P') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(136);
      if (lookahead == 'q') ADVANCE(140);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_query);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '?') ADVANCE(40);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(40);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(126);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(92);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(126);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(90);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_const_spec);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(119);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(126);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '%') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'g') ADVANCE(6);
      if (lookahead == 'h') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(29);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'k') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 54:
      if (lookahead == '3') ADVANCE(31);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'w') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == '1') ADVANCE(82);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'w') ADVANCE(79);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'w') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 82:
      if (lookahead == '1') ADVANCE(31);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(94);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'k') ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 50},
  [3] = {.lex_state = 50},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 50},
  [6] = {.lex_state = 49},
  [7] = {.lex_state = 49},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 49},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 50},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 49},
  [22] = {.lex_state = 49},
  [23] = {.lex_state = 49},
  [24] = {.lex_state = 49},
  [25] = {.lex_state = 49},
  [26] = {.lex_state = 49},
  [27] = {.lex_state = 49},
  [28] = {.lex_state = 49},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 49},
  [32] = {.lex_state = 49},
  [33] = {.lex_state = 49},
  [34] = {.lex_state = 49},
  [35] = {.lex_state = 49},
  [36] = {.lex_state = 49},
  [37] = {.lex_state = 49},
  [38] = {.lex_state = 49},
  [39] = {.lex_state = 49},
  [40] = {.lex_state = 49},
  [41] = {.lex_state = 49},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 49},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 49},
  [47] = {.lex_state = 49},
  [48] = {.lex_state = 49},
  [49] = {.lex_state = 49},
  [50] = {.lex_state = 49},
  [51] = {.lex_state = 49},
  [52] = {.lex_state = 49},
  [53] = {.lex_state = 49},
  [54] = {.lex_state = 49},
  [55] = {.lex_state = 49},
  [56] = {.lex_state = 49},
  [57] = {.lex_state = 49},
  [58] = {.lex_state = 49},
  [59] = {.lex_state = 49},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 49},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 49},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 49},
  [67] = {.lex_state = 28},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 45},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 46},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 28},
  [74] = {.lex_state = 45},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 46},
  [79] = {.lex_state = 45},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 20},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 45},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 46},
  [88] = {.lex_state = 46},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 46},
  [91] = {.lex_state = 45},
  [92] = {.lex_state = 49},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 45},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 47},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 49},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 49},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 50},
  [120] = {.lex_state = 49},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 49},
  [124] = {.lex_state = 49},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 49},
  [127] = {.lex_state = 28},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 49},
  [130] = {.lex_state = 49},
  [131] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_port_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_scheme] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [aux_sym_script_variable_token1] = ACTIONS(1),
    [aux_sym_script_variable_token2] = ACTIONS(1),
    [aux_sym_xml_body_token1] = ACTIONS(1),
    [aux_sym_xml_body_token2] = ACTIONS(1),
    [aux_sym_json_body_token1] = ACTIONS(1),
    [aux_sym_json_body_token2] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_const_spec] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym__whitespace_token1] = ACTIONS(1),
    [aux_sym__newline_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(118),
    [sym_comment] = STATE(11),
    [sym_method] = STATE(102),
    [sym_request] = STATE(11),
    [sym_variable] = STATE(11),
    [sym_script_variable] = STATE(11),
    [sym_variable_declaration] = STATE(11),
    [aux_sym_document_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_document_token1] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [aux_sym_method_token1] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [aux_sym_script_variable_token1] = ACTIONS(15),
    [sym_const_spec] = ACTIONS(9),
    [sym_number] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      aux_sym_xml_body_token1,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    ACTIONS(27), 1,
      anon_sym_query,
    ACTIONS(29), 1,
      anon_sym_LT,
    STATE(9), 1,
      aux_sym_request_repeat2,
    STATE(10), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(21), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    STATE(36), 4,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
    ACTIONS(17), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [42] = 10,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      aux_sym_xml_body_token1,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    ACTIONS(27), 1,
      anon_sym_query,
    ACTIONS(29), 1,
      anon_sym_LT,
    STATE(7), 1,
      aux_sym_request_repeat2,
    STATE(2), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(33), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    STATE(24), 4,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [84] = 10,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      aux_sym_xml_body_token1,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    ACTIONS(27), 1,
      anon_sym_query,
    ACTIONS(29), 1,
      anon_sym_LT,
    STATE(6), 1,
      aux_sym_request_repeat2,
    STATE(5), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(37), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    STATE(25), 4,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [126] = 10,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      aux_sym_xml_body_token1,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    ACTIONS(27), 1,
      anon_sym_query,
    ACTIONS(29), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_request_repeat2,
    STATE(10), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(41), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    STATE(19), 4,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [168] = 8,
    ACTIONS(23), 1,
      aux_sym_xml_body_token1,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_query,
    STATE(13), 1,
      aux_sym_request_repeat2,
    ACTIONS(41), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(19), 4,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [203] = 8,
    ACTIONS(23), 1,
      aux_sym_xml_body_token1,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_query,
    STATE(13), 1,
      aux_sym_request_repeat2,
    ACTIONS(21), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(36), 4,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [238] = 8,
    ACTIONS(23), 1,
      aux_sym_xml_body_token1,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_query,
    STATE(13), 1,
      aux_sym_request_repeat2,
    ACTIONS(47), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(22), 4,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [273] = 8,
    ACTIONS(23), 1,
      aux_sym_xml_body_token1,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_query,
    STATE(13), 1,
      aux_sym_request_repeat2,
    ACTIONS(37), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(25), 4,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
    ACTIONS(35), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [308] = 4,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(10), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(54), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_number,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
  [333] = 9,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_script_variable_token1,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      sym_method,
    ACTIONS(9), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(58), 2,
      aux_sym_document_token1,
      sym_number,
    STATE(12), 6,
      sym_comment,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [368] = 9,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      aux_sym_comment_token1,
    ACTIONS(71), 1,
      anon_sym_AT,
    ACTIONS(74), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(77), 1,
      aux_sym_script_variable_token1,
    STATE(102), 1,
      sym_method,
    ACTIONS(62), 2,
      aux_sym_document_token1,
      sym_number,
    ACTIONS(68), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(12), 6,
      sym_comment,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [403] = 4,
    ACTIONS(82), 1,
      aux_sym_document_token1,
    STATE(13), 1,
      aux_sym_request_repeat2,
    ACTIONS(85), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(80), 9,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [426] = 2,
    ACTIONS(89), 6,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(87), 8,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
  [445] = 2,
    ACTIONS(93), 6,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(91), 8,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
  [464] = 2,
    ACTIONS(97), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(95), 11,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
      aux_sym__whitespace_token1,
  [482] = 11,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_scheme,
    ACTIONS(103), 1,
      anon_sym_AT,
    ACTIONS(105), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(107), 1,
      aux_sym__whitespace_token1,
    STATE(29), 1,
      sym_host,
    STATE(43), 1,
      aux_sym__whitespace,
    STATE(62), 1,
      sym_variable,
    STATE(92), 1,
      sym_target_url,
    STATE(98), 1,
      sym_authority,
    STATE(114), 1,
      sym_pair,
  [516] = 2,
    ACTIONS(111), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [530] = 2,
    ACTIONS(47), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [544] = 2,
    ACTIONS(115), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(113), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [558] = 2,
    ACTIONS(119), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [572] = 2,
    ACTIONS(123), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [586] = 2,
    ACTIONS(127), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [600] = 2,
    ACTIONS(21), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [614] = 2,
    ACTIONS(41), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [628] = 2,
    ACTIONS(131), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [642] = 2,
    ACTIONS(135), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [656] = 2,
    ACTIONS(139), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(137), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [670] = 6,
    ACTIONS(143), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      sym_path,
    STATE(48), 1,
      aux_sym_path_repeat1,
    ACTIONS(141), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    ACTIONS(145), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(49), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [692] = 2,
    ACTIONS(149), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(147), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [706] = 6,
    ACTIONS(143), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      aux_sym_path_repeat1,
    STATE(56), 1,
      sym_path,
    ACTIONS(145), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(151), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(53), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [728] = 6,
    ACTIONS(143), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      aux_sym_path_repeat1,
    STATE(57), 1,
      sym_path,
    ACTIONS(145), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(153), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(46), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [750] = 2,
    ACTIONS(157), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [764] = 2,
    ACTIONS(161), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [778] = 2,
    ACTIONS(165), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [792] = 2,
    ACTIONS(37), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(35), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [806] = 2,
    ACTIONS(169), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [820] = 2,
    ACTIONS(173), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(171), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [834] = 2,
    ACTIONS(177), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(175), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [848] = 2,
    ACTIONS(181), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(179), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [862] = 6,
    ACTIONS(143), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      aux_sym_path_repeat1,
    STATE(51), 1,
      sym_path,
    ACTIONS(145), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(183), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(55), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [884] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(185), 1,
      sym_identifier,
    STATE(59), 1,
      sym_variable,
    ACTIONS(187), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [901] = 4,
    ACTIONS(193), 1,
      aux_sym__whitespace_token1,
    STATE(43), 1,
      aux_sym__whitespace,
    ACTIONS(189), 2,
      sym_scheme,
      sym_identifier,
    ACTIONS(191), 4,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LPAREN,
  [918] = 3,
    ACTIONS(198), 1,
      anon_sym_COLON,
    STATE(58), 1,
      sym_port,
    ACTIONS(196), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [932] = 3,
    ACTIONS(200), 1,
      anon_sym_COLON,
    STATE(58), 1,
      sym_port,
    ACTIONS(196), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [946] = 3,
    ACTIONS(145), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(151), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(52), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [959] = 3,
    ACTIONS(145), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(183), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(55), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [972] = 3,
    ACTIONS(143), 1,
      anon_sym_SLASH,
    STATE(54), 1,
      aux_sym_path_repeat1,
    ACTIONS(202), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [985] = 3,
    ACTIONS(145), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(183), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(52), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [998] = 3,
    ACTIONS(145), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(204), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(52), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1011] = 3,
    ACTIONS(145), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(153), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(46), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1024] = 3,
    ACTIONS(206), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    ACTIONS(208), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(52), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1037] = 3,
    ACTIONS(145), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(211), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(52), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1050] = 3,
    ACTIONS(215), 1,
      anon_sym_SLASH,
    STATE(54), 1,
      aux_sym_path_repeat1,
    ACTIONS(213), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1063] = 3,
    ACTIONS(145), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(153), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(52), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1076] = 3,
    ACTIONS(145), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(211), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(50), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1089] = 3,
    ACTIONS(145), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(151), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(53), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1102] = 1,
    ACTIONS(218), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1110] = 2,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    ACTIONS(213), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1120] = 5,
    ACTIONS(223), 1,
      aux_sym_document_token1,
    ACTIONS(225), 1,
      aux_sym_script_variable_token2,
    ACTIONS(227), 1,
      sym__line,
    STATE(68), 1,
      aux_sym_request_repeat2,
    STATE(86), 1,
      aux_sym_script_variable_repeat1,
  [1136] = 1,
    ACTIONS(229), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1144] = 5,
    ACTIONS(103), 1,
      anon_sym_AT,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(41), 1,
      sym_host,
    STATE(96), 1,
      sym_authority,
    STATE(114), 1,
      sym_pair,
  [1160] = 1,
    ACTIONS(233), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1168] = 5,
    ACTIONS(103), 1,
      anon_sym_AT,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(32), 1,
      sym_host,
    STATE(105), 1,
      sym_authority,
    STATE(114), 1,
      sym_pair,
  [1184] = 5,
    ACTIONS(227), 1,
      sym__line,
    ACTIONS(235), 1,
      aux_sym_document_token1,
    ACTIONS(237), 1,
      aux_sym_script_variable_token2,
    STATE(60), 1,
      aux_sym_request_repeat2,
    STATE(77), 1,
      aux_sym_script_variable_repeat1,
  [1200] = 1,
    ACTIONS(239), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1207] = 4,
    ACTIONS(241), 1,
      aux_sym_http_version_token1,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    STATE(73), 1,
      aux_sym__whitespace,
    STATE(123), 1,
      sym_http_version,
  [1220] = 4,
    ACTIONS(80), 1,
      aux_sym_script_variable_token2,
    ACTIONS(85), 1,
      sym__line,
    ACTIONS(245), 1,
      aux_sym_document_token1,
    STATE(68), 1,
      aux_sym_request_repeat2,
  [1233] = 3,
    ACTIONS(248), 1,
      aux_sym_json_body_token2,
    ACTIONS(250), 1,
      sym__line,
    STATE(84), 1,
      aux_sym_script_variable_repeat1,
  [1243] = 3,
    ACTIONS(252), 1,
      aux_sym_xml_body_token2,
    ACTIONS(254), 1,
      sym__line,
    STATE(72), 1,
      aux_sym_script_variable_repeat1,
  [1253] = 3,
    ACTIONS(189), 1,
      sym__line,
    ACTIONS(256), 1,
      aux_sym__whitespace_token1,
    STATE(71), 1,
      aux_sym__whitespace,
  [1263] = 3,
    ACTIONS(259), 1,
      aux_sym_xml_body_token2,
    ACTIONS(261), 1,
      sym__line,
    STATE(72), 1,
      aux_sym_script_variable_repeat1,
  [1273] = 3,
    ACTIONS(191), 1,
      aux_sym_http_version_token1,
    ACTIONS(264), 1,
      aux_sym__whitespace_token1,
    STATE(73), 1,
      aux_sym__whitespace,
  [1283] = 3,
    ACTIONS(259), 1,
      aux_sym_json_body_token2,
    ACTIONS(267), 1,
      sym__line,
    STATE(74), 1,
      aux_sym_script_variable_repeat1,
  [1293] = 3,
    ACTIONS(270), 1,
      anon_sym_EQ,
    ACTIONS(272), 1,
      aux_sym__whitespace_token1,
    STATE(81), 1,
      aux_sym__whitespace,
  [1303] = 3,
    ACTIONS(274), 1,
      anon_sym_AT,
    ACTIONS(276), 1,
      aux_sym__whitespace_token1,
    STATE(87), 1,
      aux_sym__whitespace,
  [1313] = 3,
    ACTIONS(225), 1,
      aux_sym_script_variable_token2,
    ACTIONS(227), 1,
      sym__line,
    STATE(89), 1,
      aux_sym_script_variable_repeat1,
  [1323] = 3,
    ACTIONS(278), 1,
      aux_sym__whitespace_token1,
    ACTIONS(280), 1,
      sym__line,
    STATE(71), 1,
      aux_sym__whitespace,
  [1333] = 3,
    ACTIONS(250), 1,
      sym__line,
    ACTIONS(282), 1,
      aux_sym_json_body_token2,
    STATE(74), 1,
      aux_sym_script_variable_repeat1,
  [1343] = 3,
    ACTIONS(284), 1,
      sym_identifier,
    ACTIONS(286), 1,
      aux_sym__whitespace_token1,
    STATE(94), 1,
      aux_sym__whitespace,
  [1353] = 3,
    ACTIONS(107), 1,
      aux_sym__whitespace_token1,
    ACTIONS(288), 1,
      anon_sym_EQ,
    STATE(43), 1,
      aux_sym__whitespace,
  [1363] = 3,
    ACTIONS(254), 1,
      sym__line,
    ACTIONS(290), 1,
      aux_sym_xml_body_token2,
    STATE(70), 1,
      aux_sym_script_variable_repeat1,
  [1373] = 3,
    ACTIONS(107), 1,
      aux_sym__whitespace_token1,
    ACTIONS(292), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym__whitespace,
  [1383] = 3,
    ACTIONS(250), 1,
      sym__line,
    ACTIONS(294), 1,
      aux_sym_json_body_token2,
    STATE(74), 1,
      aux_sym_script_variable_repeat1,
  [1393] = 3,
    ACTIONS(107), 1,
      aux_sym__whitespace_token1,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      aux_sym__whitespace,
  [1403] = 3,
    ACTIONS(227), 1,
      sym__line,
    ACTIONS(298), 1,
      aux_sym_script_variable_token2,
    STATE(89), 1,
      aux_sym_script_variable_repeat1,
  [1413] = 3,
    ACTIONS(278), 1,
      aux_sym__whitespace_token1,
    ACTIONS(300), 1,
      sym__line,
    STATE(71), 1,
      aux_sym__whitespace,
  [1423] = 3,
    ACTIONS(302), 1,
      aux_sym__whitespace_token1,
    ACTIONS(304), 1,
      sym__line,
    STATE(90), 1,
      aux_sym__whitespace,
  [1433] = 3,
    ACTIONS(259), 1,
      aux_sym_script_variable_token2,
    ACTIONS(306), 1,
      sym__line,
    STATE(89), 1,
      aux_sym_script_variable_repeat1,
  [1443] = 3,
    ACTIONS(278), 1,
      aux_sym__whitespace_token1,
    ACTIONS(309), 1,
      sym__line,
    STATE(71), 1,
      aux_sym__whitespace,
  [1453] = 3,
    ACTIONS(250), 1,
      sym__line,
    ACTIONS(311), 1,
      aux_sym_json_body_token2,
    STATE(79), 1,
      aux_sym_script_variable_repeat1,
  [1463] = 3,
    ACTIONS(313), 1,
      aux_sym_document_token1,
    ACTIONS(315), 1,
      aux_sym__whitespace_token1,
    STATE(67), 1,
      aux_sym__whitespace,
  [1473] = 3,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      aux_sym__whitespace_token1,
    STATE(83), 1,
      aux_sym__whitespace,
  [1483] = 3,
    ACTIONS(107), 1,
      aux_sym__whitespace_token1,
    ACTIONS(317), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym__whitespace,
  [1493] = 2,
    ACTIONS(321), 1,
      aux_sym__whitespace_token1,
    STATE(78), 1,
      aux_sym__whitespace,
  [1500] = 2,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(32), 1,
      sym_host,
  [1507] = 2,
    ACTIONS(325), 1,
      aux_sym__whitespace_token1,
    STATE(85), 1,
      aux_sym__whitespace,
  [1514] = 2,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(41), 1,
      sym_host,
  [1521] = 2,
    ACTIONS(259), 1,
      aux_sym_xml_body_token2,
    ACTIONS(327), 1,
      sym__line,
  [1528] = 2,
    ACTIONS(259), 1,
      aux_sym_json_body_token2,
    ACTIONS(327), 1,
      sym__line,
  [1535] = 1,
    ACTIONS(95), 2,
      anon_sym_AT,
      sym_identifier,
  [1540] = 2,
    ACTIONS(329), 1,
      aux_sym__whitespace_token1,
    STATE(17), 1,
      aux_sym__whitespace,
  [1547] = 2,
    ACTIONS(331), 1,
      sym_identifier,
    ACTIONS(333), 1,
      aux_sym_port_token1,
  [1554] = 2,
    ACTIONS(259), 1,
      aux_sym_script_variable_token2,
    ACTIONS(327), 1,
      sym__line,
  [1561] = 2,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(31), 1,
      sym_host,
  [1568] = 1,
    ACTIONS(335), 1,
      aux_sym_document_token1,
  [1572] = 1,
    ACTIONS(337), 1,
      sym_identifier,
  [1576] = 1,
    ACTIONS(339), 1,
      sym_identifier,
  [1580] = 1,
    ACTIONS(341), 1,
      sym_identifier,
  [1584] = 1,
    ACTIONS(343), 1,
      sym_identifier,
  [1588] = 1,
    ACTIONS(345), 1,
      anon_sym_AT,
  [1592] = 1,
    ACTIONS(347), 1,
      anon_sym_EQ,
  [1596] = 1,
    ACTIONS(349), 1,
      aux_sym_document_token1,
  [1600] = 1,
    ACTIONS(351), 1,
      anon_sym_AT,
  [1604] = 1,
    ACTIONS(353), 1,
      anon_sym_RBRACE_RBRACE,
  [1608] = 1,
    ACTIONS(355), 1,
      aux_sym__whitespace_token1,
  [1612] = 1,
    ACTIONS(357), 1,
      sym_identifier,
  [1616] = 1,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
  [1620] = 1,
    ACTIONS(361), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1624] = 1,
    ACTIONS(363), 1,
      aux_sym_document_token1,
  [1628] = 1,
    ACTIONS(365), 1,
      sym_identifier,
  [1632] = 1,
    ACTIONS(367), 1,
      sym_identifier,
  [1636] = 1,
    ACTIONS(369), 1,
      aux_sym_document_token1,
  [1640] = 1,
    ACTIONS(371), 1,
      aux_sym_document_token1,
  [1644] = 1,
    ACTIONS(373), 1,
      anon_sym_COLON,
  [1648] = 1,
    ACTIONS(375), 1,
      aux_sym_document_token1,
  [1652] = 1,
    ACTIONS(377), 1,
      aux_sym_port_token1,
  [1656] = 1,
    ACTIONS(379), 1,
      anon_sym_RBRACE_RBRACE,
  [1660] = 1,
    ACTIONS(381), 1,
      aux_sym_document_token1,
  [1664] = 1,
    ACTIONS(383), 1,
      aux_sym_document_token1,
  [1668] = 1,
    ACTIONS(385), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 203,
  [SMALL_STATE(8)] = 238,
  [SMALL_STATE(9)] = 273,
  [SMALL_STATE(10)] = 308,
  [SMALL_STATE(11)] = 333,
  [SMALL_STATE(12)] = 368,
  [SMALL_STATE(13)] = 403,
  [SMALL_STATE(14)] = 426,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 464,
  [SMALL_STATE(17)] = 482,
  [SMALL_STATE(18)] = 516,
  [SMALL_STATE(19)] = 530,
  [SMALL_STATE(20)] = 544,
  [SMALL_STATE(21)] = 558,
  [SMALL_STATE(22)] = 572,
  [SMALL_STATE(23)] = 586,
  [SMALL_STATE(24)] = 600,
  [SMALL_STATE(25)] = 614,
  [SMALL_STATE(26)] = 628,
  [SMALL_STATE(27)] = 642,
  [SMALL_STATE(28)] = 656,
  [SMALL_STATE(29)] = 670,
  [SMALL_STATE(30)] = 692,
  [SMALL_STATE(31)] = 706,
  [SMALL_STATE(32)] = 728,
  [SMALL_STATE(33)] = 750,
  [SMALL_STATE(34)] = 764,
  [SMALL_STATE(35)] = 778,
  [SMALL_STATE(36)] = 792,
  [SMALL_STATE(37)] = 806,
  [SMALL_STATE(38)] = 820,
  [SMALL_STATE(39)] = 834,
  [SMALL_STATE(40)] = 848,
  [SMALL_STATE(41)] = 862,
  [SMALL_STATE(42)] = 884,
  [SMALL_STATE(43)] = 901,
  [SMALL_STATE(44)] = 918,
  [SMALL_STATE(45)] = 932,
  [SMALL_STATE(46)] = 946,
  [SMALL_STATE(47)] = 959,
  [SMALL_STATE(48)] = 972,
  [SMALL_STATE(49)] = 985,
  [SMALL_STATE(50)] = 998,
  [SMALL_STATE(51)] = 1011,
  [SMALL_STATE(52)] = 1024,
  [SMALL_STATE(53)] = 1037,
  [SMALL_STATE(54)] = 1050,
  [SMALL_STATE(55)] = 1063,
  [SMALL_STATE(56)] = 1076,
  [SMALL_STATE(57)] = 1089,
  [SMALL_STATE(58)] = 1102,
  [SMALL_STATE(59)] = 1110,
  [SMALL_STATE(60)] = 1120,
  [SMALL_STATE(61)] = 1136,
  [SMALL_STATE(62)] = 1144,
  [SMALL_STATE(63)] = 1160,
  [SMALL_STATE(64)] = 1168,
  [SMALL_STATE(65)] = 1184,
  [SMALL_STATE(66)] = 1200,
  [SMALL_STATE(67)] = 1207,
  [SMALL_STATE(68)] = 1220,
  [SMALL_STATE(69)] = 1233,
  [SMALL_STATE(70)] = 1243,
  [SMALL_STATE(71)] = 1253,
  [SMALL_STATE(72)] = 1263,
  [SMALL_STATE(73)] = 1273,
  [SMALL_STATE(74)] = 1283,
  [SMALL_STATE(75)] = 1293,
  [SMALL_STATE(76)] = 1303,
  [SMALL_STATE(77)] = 1313,
  [SMALL_STATE(78)] = 1323,
  [SMALL_STATE(79)] = 1333,
  [SMALL_STATE(80)] = 1343,
  [SMALL_STATE(81)] = 1353,
  [SMALL_STATE(82)] = 1363,
  [SMALL_STATE(83)] = 1373,
  [SMALL_STATE(84)] = 1383,
  [SMALL_STATE(85)] = 1393,
  [SMALL_STATE(86)] = 1403,
  [SMALL_STATE(87)] = 1413,
  [SMALL_STATE(88)] = 1423,
  [SMALL_STATE(89)] = 1433,
  [SMALL_STATE(90)] = 1443,
  [SMALL_STATE(91)] = 1453,
  [SMALL_STATE(92)] = 1463,
  [SMALL_STATE(93)] = 1473,
  [SMALL_STATE(94)] = 1483,
  [SMALL_STATE(95)] = 1493,
  [SMALL_STATE(96)] = 1500,
  [SMALL_STATE(97)] = 1507,
  [SMALL_STATE(98)] = 1514,
  [SMALL_STATE(99)] = 1521,
  [SMALL_STATE(100)] = 1528,
  [SMALL_STATE(101)] = 1535,
  [SMALL_STATE(102)] = 1540,
  [SMALL_STATE(103)] = 1547,
  [SMALL_STATE(104)] = 1554,
  [SMALL_STATE(105)] = 1561,
  [SMALL_STATE(106)] = 1568,
  [SMALL_STATE(107)] = 1572,
  [SMALL_STATE(108)] = 1576,
  [SMALL_STATE(109)] = 1580,
  [SMALL_STATE(110)] = 1584,
  [SMALL_STATE(111)] = 1588,
  [SMALL_STATE(112)] = 1592,
  [SMALL_STATE(113)] = 1596,
  [SMALL_STATE(114)] = 1600,
  [SMALL_STATE(115)] = 1604,
  [SMALL_STATE(116)] = 1608,
  [SMALL_STATE(117)] = 1612,
  [SMALL_STATE(118)] = 1616,
  [SMALL_STATE(119)] = 1620,
  [SMALL_STATE(120)] = 1624,
  [SMALL_STATE(121)] = 1628,
  [SMALL_STATE(122)] = 1632,
  [SMALL_STATE(123)] = 1636,
  [SMALL_STATE(124)] = 1640,
  [SMALL_STATE(125)] = 1644,
  [SMALL_STATE(126)] = 1648,
  [SMALL_STATE(127)] = 1652,
  [SMALL_STATE(128)] = 1656,
  [SMALL_STATE(129)] = 1660,
  [SMALL_STATE(130)] = 1664,
  [SMALL_STATE(131)] = 1668,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(125),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(37),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(116),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(122),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(107),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(65),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(13),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, .production_id = 12),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, .production_id = 12),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 10),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 10),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2, .production_id = 6),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2, .production_id = 6),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 9),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 9),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3, .production_id = 8),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3, .production_id = 8),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 11),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 11),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(43),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(117),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(42),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(63),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 7),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(68),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(71),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(130),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(73),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(129),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(106),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [359] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
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
