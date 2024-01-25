#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 144
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 3
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 11

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
  aux_sym_xml_body_token3 = 21,
  aux_sym_json_body_token1 = 22,
  aux_sym_json_body_token2 = 23,
  anon_sym_query = 24,
  anon_sym_LPAREN = 25,
  anon_sym_LT = 26,
  sym_const_spec = 27,
  sym_number = 28,
  aux_sym__whitespace_token1 = 29,
  aux_sym__newline_token1 = 30,
  sym__line = 31,
  sym_document = 32,
  sym_comment = 33,
  sym_method = 34,
  sym_host = 35,
  sym_port = 36,
  sym_path = 37,
  sym_authority = 38,
  sym_http_version = 39,
  sym_target_url = 40,
  sym_request = 41,
  sym_pair = 42,
  sym_query_param = 43,
  sym_header = 44,
  sym_variable = 45,
  sym_script_variable = 46,
  sym_variable_declaration = 47,
  sym_xml_body = 48,
  sym_json_body = 49,
  sym_graphql_body = 50,
  sym_external_body = 51,
  aux_sym__whitespace = 52,
  aux_sym_document_repeat1 = 53,
  aux_sym_path_repeat1 = 54,
  aux_sym_target_url_repeat1 = 55,
  aux_sym_request_repeat1 = 56,
  aux_sym_request_repeat2 = 57,
  aux_sym_script_variable_repeat1 = 58,
  alias_sym_key = 59,
  alias_sym_name = 60,
  alias_sym_value = 61,
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
  [aux_sym_xml_body_token3] = "xml_body_token3",
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
  [aux_sym_xml_body_token3] = aux_sym_xml_body_token3,
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
  [aux_sym_xml_body_token3] = {
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
  field_key = 2,
  field_name = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_file_path] = "file_path",
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
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 5, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
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
    {field_key, 1},
    {field_value, 3},
  [11] =
    {field_file_path, 2},
  [12] =
    {field_file_path, 4},
  [13] =
    {field_name, 0},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [1] = alias_sym_key,
    [3] = alias_sym_value,
  },
  [7] = {
    [2] = sym_path,
  },
  [8] = {
    [0] = alias_sym_name,
    [2] = alias_sym_value,
  },
  [9] = {
    [4] = sym_path,
  },
  [10] = {
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
  [68] = 68,
  [69] = 13,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 45,
  [75] = 75,
  [76] = 45,
  [77] = 75,
  [78] = 78,
  [79] = 79,
  [80] = 75,
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
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 101,
  [104] = 104,
  [105] = 105,
  [106] = 101,
  [107] = 16,
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
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 132,
  [141] = 117,
  [142] = 117,
  [143] = 122,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '?') ADVANCE(64);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(134);
      if (lookahead == 'D') ADVANCE(131);
      if (lookahead == 'G') ADVANCE(132);
      if (lookahead == 'H') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(135);
      if (lookahead == 'P') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(136);
      if (lookahead == 'q') ADVANCE(140);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(74);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '{') ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '}') ADVANCE(68);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == 'H') ADVANCE(33);
      if (lookahead == '{') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '?') ADVANCE(64);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(52);
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
      if (lookahead == '-') ADVANCE(42);
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
      if (lookahead == '/') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == '2') ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(62);
      END_STATE();
    case 20:
      if (lookahead == '<') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(71);
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
      if (lookahead == 'O') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(16);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 41:
      if (lookahead == '{') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == '{') ADVANCE(10);
      END_STATE();
    case 43:
      if (lookahead == '}') ADVANCE(7);
      END_STATE();
    case 44:
      if (lookahead == '}') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 47:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '?') ADVANCE(64);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(25);
      if (lookahead == 'G') ADVANCE(26);
      if (lookahead == 'H') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(29);
      if (lookahead == 'P') ADVANCE(24);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead == 'q') ADVANCE(38);
      if (lookahead == '{') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(134);
      if (lookahead == 'D') ADVANCE(131);
      if (lookahead == 'G') ADVANCE(132);
      if (lookahead == 'H') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(135);
      if (lookahead == 'P') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(136);
      if (lookahead == 'q') ADVANCE(140);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(54);
      END_STATE();
    case 55:
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
    case 56:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_xml_body_token3);
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
      if (lookahead == '?') ADVANCE(39);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(39);
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
      if (lookahead == 'D') ADVANCE(55);
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
      if (lookahead == 'D') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(55);
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
      if (lookahead == 'E') ADVANCE(56);
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
      if (lookahead == 'H') ADVANCE(55);
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
      if (lookahead == 'H') ADVANCE(56);
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
      if (lookahead == 'S') ADVANCE(55);
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
      if (lookahead == 'S') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(55);
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
      if (lookahead == 'T') ADVANCE(56);
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
      if (lookahead == '%') ADVANCE(43);
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
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead != 0) ADVANCE(156);
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
      if (lookahead == '>') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(150);
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
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 49},
  [3] = {.lex_state = 49},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 49},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 48},
  [8] = {.lex_state = 48},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 48},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 48},
  [19] = {.lex_state = 48},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 48},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 48},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 48},
  [35] = {.lex_state = 48},
  [36] = {.lex_state = 48},
  [37] = {.lex_state = 48},
  [38] = {.lex_state = 48},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 48},
  [41] = {.lex_state = 48},
  [42] = {.lex_state = 48},
  [43] = {.lex_state = 48},
  [44] = {.lex_state = 48},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 48},
  [48] = {.lex_state = 48},
  [49] = {.lex_state = 48},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 48},
  [53] = {.lex_state = 48},
  [54] = {.lex_state = 48},
  [55] = {.lex_state = 48},
  [56] = {.lex_state = 48},
  [57] = {.lex_state = 48},
  [58] = {.lex_state = 48},
  [59] = {.lex_state = 48},
  [60] = {.lex_state = 48},
  [61] = {.lex_state = 48},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 48},
  [65] = {.lex_state = 48},
  [66] = {.lex_state = 48},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 48},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 45},
  [74] = {.lex_state = 45},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 44},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 44},
  [82] = {.lex_state = 48},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 44},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 45},
  [88] = {.lex_state = 45},
  [89] = {.lex_state = 45},
  [90] = {.lex_state = 44},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 20},
  [97] = {.lex_state = 44},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 44},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 46},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 48},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 48},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 11},
  [128] = {.lex_state = 48},
  [129] = {.lex_state = 49},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 48},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 48},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 48},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 48},
  [142] = {.lex_state = 48},
  [143] = {.lex_state = 11},
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
    [aux_sym_xml_body_token3] = ACTIONS(1),
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
    [sym_document] = STATE(123),
    [sym_comment] = STATE(11),
    [sym_method] = STATE(110),
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
  [0] = 11,
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
    STATE(114), 1,
      sym_graphql_body,
    STATE(10), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(21), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    STATE(38), 3,
      sym_xml_body,
      sym_json_body,
      sym_external_body,
    ACTIONS(17), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [44] = 11,
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
    STATE(109), 1,
      sym_graphql_body,
    STATE(2), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(33), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    STATE(24), 3,
      sym_xml_body,
      sym_json_body,
      sym_external_body,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [88] = 11,
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
    STATE(99), 1,
      sym_graphql_body,
    STATE(10), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(37), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    STATE(31), 3,
      sym_xml_body,
      sym_json_body,
      sym_external_body,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [132] = 11,
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
    STATE(98), 1,
      sym_graphql_body,
    STATE(4), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(41), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    STATE(22), 3,
      sym_xml_body,
      sym_json_body,
      sym_external_body,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [176] = 9,
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
    STATE(114), 1,
      sym_graphql_body,
    ACTIONS(21), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(38), 3,
      sym_xml_body,
      sym_json_body,
      sym_external_body,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [213] = 9,
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
    STATE(108), 1,
      sym_graphql_body,
    ACTIONS(47), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(26), 3,
      sym_xml_body,
      sym_json_body,
      sym_external_body,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [250] = 9,
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
    STATE(98), 1,
      sym_graphql_body,
    ACTIONS(41), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(22), 3,
      sym_xml_body,
      sym_json_body,
      sym_external_body,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [287] = 9,
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
    STATE(99), 1,
      sym_graphql_body,
    ACTIONS(37), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(31), 3,
      sym_xml_body,
      sym_json_body,
      sym_external_body,
    ACTIONS(35), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [324] = 4,
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
  [349] = 9,
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
    STATE(110), 1,
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
  [384] = 9,
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
    STATE(110), 1,
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
  [419] = 4,
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
  [442] = 2,
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
  [461] = 2,
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
  [480] = 2,
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
  [498] = 11,
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
    STATE(30), 1,
      sym_host,
    STATE(45), 1,
      aux_sym__whitespace,
    STATE(67), 1,
      sym_variable,
    STATE(82), 1,
      sym_target_url,
    STATE(113), 1,
      sym_authority,
    STATE(118), 1,
      sym_pair,
  [532] = 3,
    ACTIONS(113), 1,
      aux_sym_xml_body_token3,
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
  [549] = 3,
    ACTIONS(119), 1,
      aux_sym_xml_body_token3,
    ACTIONS(117), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [566] = 3,
    ACTIONS(125), 1,
      aux_sym_xml_body_token3,
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
  [583] = 3,
    ACTIONS(131), 1,
      aux_sym_xml_body_token3,
    ACTIONS(129), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(127), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [600] = 2,
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
  [614] = 2,
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
  [628] = 2,
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
  [642] = 2,
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
  [656] = 2,
    ACTIONS(143), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(141), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [670] = 2,
    ACTIONS(147), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(145), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [684] = 2,
    ACTIONS(151), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [698] = 2,
    ACTIONS(155), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(153), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [712] = 6,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      aux_sym_path_repeat1,
    STATE(54), 1,
      sym_path,
    ACTIONS(157), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(49), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [734] = 2,
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
  [748] = 2,
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
  [762] = 2,
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
  [776] = 6,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      aux_sym_path_repeat1,
    STATE(56), 1,
      sym_path,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(167), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(58), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [798] = 6,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      aux_sym_path_repeat1,
    STATE(57), 1,
      sym_path,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(169), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(60), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
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
  [848] = 2,
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
  [862] = 2,
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
  [876] = 6,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      sym_path,
    STATE(53), 1,
      aux_sym_path_repeat1,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(179), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(52), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [898] = 2,
    ACTIONS(183), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(181), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [912] = 2,
    ACTIONS(187), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [926] = 2,
    ACTIONS(191), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(189), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [940] = 2,
    ACTIONS(195), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(193), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [954] = 4,
    ACTIONS(201), 1,
      aux_sym__whitespace_token1,
    STATE(45), 1,
      aux_sym__whitespace,
    ACTIONS(197), 2,
      sym_scheme,
      sym_identifier,
    ACTIONS(199), 4,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LPAREN,
  [971] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(64), 1,
      sym_variable,
    ACTIONS(206), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [988] = 3,
    ACTIONS(210), 1,
      anon_sym_COLON,
    STATE(61), 1,
      sym_port,
    ACTIONS(208), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1002] = 3,
    ACTIONS(212), 1,
      anon_sym_COLON,
    STATE(61), 1,
      sym_port,
    ACTIONS(208), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1016] = 3,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(169), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(59), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1029] = 3,
    ACTIONS(216), 1,
      anon_sym_SLASH,
    STATE(50), 1,
      aux_sym_path_repeat1,
    ACTIONS(214), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1042] = 3,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(167), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(58), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1055] = 3,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(167), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(59), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1068] = 3,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    STATE(50), 1,
      aux_sym_path_repeat1,
    ACTIONS(219), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1081] = 3,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(169), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(60), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1094] = 3,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(221), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(59), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1107] = 3,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(223), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(55), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1120] = 3,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(179), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(52), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1133] = 3,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(223), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(59), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1146] = 3,
    ACTIONS(225), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    ACTIONS(227), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(59), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1159] = 3,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(179), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(59), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1172] = 1,
    ACTIONS(230), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1180] = 5,
    ACTIONS(232), 1,
      aux_sym_document_token1,
    ACTIONS(234), 1,
      aux_sym_script_variable_token2,
    ACTIONS(236), 1,
      sym__line,
    STATE(69), 1,
      aux_sym_request_repeat2,
    STATE(78), 1,
      aux_sym_script_variable_repeat1,
  [1196] = 5,
    ACTIONS(103), 1,
      anon_sym_AT,
    ACTIONS(238), 1,
      sym_identifier,
    STATE(40), 1,
      sym_host,
    STATE(100), 1,
      sym_authority,
    STATE(118), 1,
      sym_pair,
  [1212] = 2,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(214), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1222] = 1,
    ACTIONS(243), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1230] = 1,
    ACTIONS(245), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1238] = 5,
    ACTIONS(103), 1,
      anon_sym_AT,
    ACTIONS(238), 1,
      sym_identifier,
    STATE(35), 1,
      sym_host,
    STATE(102), 1,
      sym_authority,
    STATE(118), 1,
      sym_pair,
  [1254] = 5,
    ACTIONS(236), 1,
      sym__line,
    ACTIONS(247), 1,
      aux_sym_document_token1,
    ACTIONS(249), 1,
      aux_sym_script_variable_token2,
    STATE(62), 1,
      aux_sym_request_repeat2,
    STATE(93), 1,
      aux_sym_script_variable_repeat1,
  [1270] = 4,
    ACTIONS(80), 1,
      aux_sym_script_variable_token2,
    ACTIONS(85), 1,
      sym__line,
    ACTIONS(251), 1,
      aux_sym_document_token1,
    STATE(69), 1,
      aux_sym_request_repeat2,
  [1283] = 4,
    ACTIONS(254), 1,
      aux_sym_http_version_token1,
    ACTIONS(256), 1,
      aux_sym__whitespace_token1,
    STATE(76), 1,
      aux_sym__whitespace,
    STATE(136), 1,
      sym_http_version,
  [1296] = 1,
    ACTIONS(258), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1303] = 3,
    ACTIONS(107), 1,
      aux_sym__whitespace_token1,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(45), 1,
      aux_sym__whitespace,
  [1313] = 3,
    ACTIONS(262), 1,
      aux_sym__whitespace_token1,
    ACTIONS(264), 1,
      sym__line,
    STATE(74), 1,
      aux_sym__whitespace,
  [1323] = 3,
    ACTIONS(197), 1,
      sym__line,
    ACTIONS(266), 1,
      aux_sym__whitespace_token1,
    STATE(74), 1,
      aux_sym__whitespace,
  [1333] = 3,
    ACTIONS(269), 1,
      aux_sym_xml_body_token2,
    ACTIONS(271), 1,
      sym__line,
    STATE(75), 1,
      aux_sym_script_variable_repeat1,
  [1343] = 3,
    ACTIONS(199), 1,
      aux_sym_http_version_token1,
    ACTIONS(274), 1,
      aux_sym__whitespace_token1,
    STATE(76), 1,
      aux_sym__whitespace,
  [1353] = 3,
    ACTIONS(269), 1,
      aux_sym_json_body_token2,
    ACTIONS(277), 1,
      sym__line,
    STATE(77), 1,
      aux_sym_script_variable_repeat1,
  [1363] = 3,
    ACTIONS(236), 1,
      sym__line,
    ACTIONS(280), 1,
      aux_sym_script_variable_token2,
    STATE(80), 1,
      aux_sym_script_variable_repeat1,
  [1373] = 3,
    ACTIONS(282), 1,
      anon_sym_AT,
    ACTIONS(284), 1,
      aux_sym__whitespace_token1,
    STATE(88), 1,
      aux_sym__whitespace,
  [1383] = 3,
    ACTIONS(269), 1,
      aux_sym_script_variable_token2,
    ACTIONS(286), 1,
      sym__line,
    STATE(80), 1,
      aux_sym_script_variable_repeat1,
  [1393] = 3,
    ACTIONS(289), 1,
      aux_sym_json_body_token2,
    ACTIONS(291), 1,
      sym__line,
    STATE(85), 1,
      aux_sym_script_variable_repeat1,
  [1403] = 3,
    ACTIONS(293), 1,
      aux_sym_document_token1,
    ACTIONS(295), 1,
      aux_sym__whitespace_token1,
    STATE(70), 1,
      aux_sym__whitespace,
  [1413] = 3,
    ACTIONS(297), 1,
      aux_sym_xml_body_token2,
    ACTIONS(299), 1,
      sym__line,
    STATE(96), 1,
      aux_sym_script_variable_repeat1,
  [1423] = 3,
    ACTIONS(107), 1,
      aux_sym__whitespace_token1,
    ACTIONS(301), 1,
      anon_sym_EQ,
    STATE(45), 1,
      aux_sym__whitespace,
  [1433] = 3,
    ACTIONS(291), 1,
      sym__line,
    ACTIONS(303), 1,
      aux_sym_json_body_token2,
    STATE(77), 1,
      aux_sym_script_variable_repeat1,
  [1443] = 3,
    ACTIONS(107), 1,
      aux_sym__whitespace_token1,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      aux_sym__whitespace,
  [1453] = 3,
    ACTIONS(262), 1,
      aux_sym__whitespace_token1,
    ACTIONS(307), 1,
      sym__line,
    STATE(74), 1,
      aux_sym__whitespace,
  [1463] = 3,
    ACTIONS(262), 1,
      aux_sym__whitespace_token1,
    ACTIONS(309), 1,
      sym__line,
    STATE(74), 1,
      aux_sym__whitespace,
  [1473] = 3,
    ACTIONS(311), 1,
      aux_sym__whitespace_token1,
    ACTIONS(313), 1,
      sym__line,
    STATE(73), 1,
      aux_sym__whitespace,
  [1483] = 3,
    ACTIONS(291), 1,
      sym__line,
    ACTIONS(315), 1,
      aux_sym_json_body_token2,
    STATE(77), 1,
      aux_sym_script_variable_repeat1,
  [1493] = 3,
    ACTIONS(107), 1,
      aux_sym__whitespace_token1,
    ACTIONS(317), 1,
      sym_identifier,
    STATE(45), 1,
      aux_sym__whitespace,
  [1503] = 3,
    ACTIONS(319), 1,
      sym_identifier,
    ACTIONS(321), 1,
      aux_sym__whitespace_token1,
    STATE(91), 1,
      aux_sym__whitespace,
  [1513] = 3,
    ACTIONS(234), 1,
      aux_sym_script_variable_token2,
    ACTIONS(236), 1,
      sym__line,
    STATE(80), 1,
      aux_sym_script_variable_repeat1,
  [1523] = 3,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(323), 1,
      aux_sym__whitespace_token1,
    STATE(72), 1,
      aux_sym__whitespace,
  [1533] = 3,
    ACTIONS(325), 1,
      anon_sym_EQ,
    ACTIONS(327), 1,
      aux_sym__whitespace_token1,
    STATE(84), 1,
      aux_sym__whitespace,
  [1543] = 3,
    ACTIONS(299), 1,
      sym__line,
    ACTIONS(329), 1,
      aux_sym_xml_body_token2,
    STATE(75), 1,
      aux_sym_script_variable_repeat1,
  [1553] = 3,
    ACTIONS(291), 1,
      sym__line,
    ACTIONS(331), 1,
      aux_sym_json_body_token2,
    STATE(90), 1,
      aux_sym_script_variable_repeat1,
  [1563] = 2,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    STATE(31), 1,
      sym_json_body,
  [1570] = 2,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    STATE(26), 1,
      sym_json_body,
  [1577] = 2,
    ACTIONS(333), 1,
      sym_identifier,
    STATE(34), 1,
      sym_host,
  [1584] = 2,
    ACTIONS(269), 1,
      aux_sym_script_variable_token2,
    ACTIONS(335), 1,
      sym__line,
  [1591] = 2,
    ACTIONS(333), 1,
      sym_identifier,
    STATE(40), 1,
      sym_host,
  [1598] = 2,
    ACTIONS(269), 1,
      aux_sym_xml_body_token2,
    ACTIONS(335), 1,
      sym__line,
  [1605] = 2,
    ACTIONS(337), 1,
      aux_sym__whitespace_token1,
    STATE(87), 1,
      aux_sym__whitespace,
  [1612] = 2,
    ACTIONS(339), 1,
      aux_sym__whitespace_token1,
    STATE(86), 1,
      aux_sym__whitespace,
  [1619] = 2,
    ACTIONS(269), 1,
      aux_sym_json_body_token2,
    ACTIONS(335), 1,
      sym__line,
  [1626] = 1,
    ACTIONS(95), 2,
      anon_sym_AT,
      sym_identifier,
  [1631] = 2,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    STATE(25), 1,
      sym_json_body,
  [1638] = 2,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    STATE(38), 1,
      sym_json_body,
  [1645] = 2,
    ACTIONS(341), 1,
      aux_sym__whitespace_token1,
    STATE(17), 1,
      aux_sym__whitespace,
  [1652] = 2,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(345), 1,
      aux_sym_port_token1,
  [1659] = 2,
    ACTIONS(347), 1,
      aux_sym_xml_body_token3,
    ACTIONS(349), 1,
      aux_sym_json_body_token1,
  [1666] = 2,
    ACTIONS(333), 1,
      sym_identifier,
    STATE(35), 1,
      sym_host,
  [1673] = 2,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    STATE(22), 1,
      sym_json_body,
  [1680] = 2,
    ACTIONS(351), 1,
      aux_sym_xml_body_token3,
    ACTIONS(353), 1,
      aux_sym_json_body_token1,
  [1687] = 1,
    ACTIONS(355), 1,
      aux_sym_json_body_token1,
  [1691] = 1,
    ACTIONS(357), 1,
      aux_sym_document_token1,
  [1695] = 1,
    ACTIONS(359), 1,
      anon_sym_AT,
  [1699] = 1,
    ACTIONS(361), 1,
      aux_sym_document_token1,
  [1703] = 1,
    ACTIONS(363), 1,
      aux_sym_port_token1,
  [1707] = 1,
    ACTIONS(365), 1,
      anon_sym_AT,
  [1711] = 1,
    ACTIONS(367), 1,
      sym_identifier,
  [1715] = 1,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
  [1719] = 1,
    ACTIONS(349), 1,
      aux_sym_json_body_token1,
  [1723] = 1,
    ACTIONS(371), 1,
      anon_sym_EQ,
  [1727] = 1,
    ACTIONS(373), 1,
      sym_identifier,
  [1731] = 1,
    ACTIONS(375), 1,
      sym_identifier,
  [1735] = 1,
    ACTIONS(377), 1,
      aux_sym_document_token1,
  [1739] = 1,
    ACTIONS(379), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1743] = 1,
    ACTIONS(381), 1,
      sym_identifier,
  [1747] = 1,
    ACTIONS(383), 1,
      sym_identifier,
  [1751] = 1,
    ACTIONS(385), 1,
      anon_sym_RBRACE_RBRACE,
  [1755] = 1,
    ACTIONS(387), 1,
      aux_sym_document_token1,
  [1759] = 1,
    ACTIONS(389), 1,
      aux_sym__whitespace_token1,
  [1763] = 1,
    ACTIONS(391), 1,
      sym_identifier,
  [1767] = 1,
    ACTIONS(393), 1,
      aux_sym_document_token1,
  [1771] = 1,
    ACTIONS(395), 1,
      sym_identifier,
  [1775] = 1,
    ACTIONS(397), 1,
      aux_sym_document_token1,
  [1779] = 1,
    ACTIONS(399), 1,
      anon_sym_COLON,
  [1783] = 1,
    ACTIONS(401), 1,
      anon_sym_RBRACE_RBRACE,
  [1787] = 1,
    ACTIONS(403), 1,
      aux_sym_document_token1,
  [1791] = 1,
    ACTIONS(405), 1,
      aux_sym_document_token1,
  [1795] = 1,
    ACTIONS(407), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 213,
  [SMALL_STATE(8)] = 250,
  [SMALL_STATE(9)] = 287,
  [SMALL_STATE(10)] = 324,
  [SMALL_STATE(11)] = 349,
  [SMALL_STATE(12)] = 384,
  [SMALL_STATE(13)] = 419,
  [SMALL_STATE(14)] = 442,
  [SMALL_STATE(15)] = 461,
  [SMALL_STATE(16)] = 480,
  [SMALL_STATE(17)] = 498,
  [SMALL_STATE(18)] = 532,
  [SMALL_STATE(19)] = 549,
  [SMALL_STATE(20)] = 566,
  [SMALL_STATE(21)] = 583,
  [SMALL_STATE(22)] = 600,
  [SMALL_STATE(23)] = 614,
  [SMALL_STATE(24)] = 628,
  [SMALL_STATE(25)] = 642,
  [SMALL_STATE(26)] = 656,
  [SMALL_STATE(27)] = 670,
  [SMALL_STATE(28)] = 684,
  [SMALL_STATE(29)] = 698,
  [SMALL_STATE(30)] = 712,
  [SMALL_STATE(31)] = 734,
  [SMALL_STATE(32)] = 748,
  [SMALL_STATE(33)] = 762,
  [SMALL_STATE(34)] = 776,
  [SMALL_STATE(35)] = 798,
  [SMALL_STATE(36)] = 820,
  [SMALL_STATE(37)] = 834,
  [SMALL_STATE(38)] = 848,
  [SMALL_STATE(39)] = 862,
  [SMALL_STATE(40)] = 876,
  [SMALL_STATE(41)] = 898,
  [SMALL_STATE(42)] = 912,
  [SMALL_STATE(43)] = 926,
  [SMALL_STATE(44)] = 940,
  [SMALL_STATE(45)] = 954,
  [SMALL_STATE(46)] = 971,
  [SMALL_STATE(47)] = 988,
  [SMALL_STATE(48)] = 1002,
  [SMALL_STATE(49)] = 1016,
  [SMALL_STATE(50)] = 1029,
  [SMALL_STATE(51)] = 1042,
  [SMALL_STATE(52)] = 1055,
  [SMALL_STATE(53)] = 1068,
  [SMALL_STATE(54)] = 1081,
  [SMALL_STATE(55)] = 1094,
  [SMALL_STATE(56)] = 1107,
  [SMALL_STATE(57)] = 1120,
  [SMALL_STATE(58)] = 1133,
  [SMALL_STATE(59)] = 1146,
  [SMALL_STATE(60)] = 1159,
  [SMALL_STATE(61)] = 1172,
  [SMALL_STATE(62)] = 1180,
  [SMALL_STATE(63)] = 1196,
  [SMALL_STATE(64)] = 1212,
  [SMALL_STATE(65)] = 1222,
  [SMALL_STATE(66)] = 1230,
  [SMALL_STATE(67)] = 1238,
  [SMALL_STATE(68)] = 1254,
  [SMALL_STATE(69)] = 1270,
  [SMALL_STATE(70)] = 1283,
  [SMALL_STATE(71)] = 1296,
  [SMALL_STATE(72)] = 1303,
  [SMALL_STATE(73)] = 1313,
  [SMALL_STATE(74)] = 1323,
  [SMALL_STATE(75)] = 1333,
  [SMALL_STATE(76)] = 1343,
  [SMALL_STATE(77)] = 1353,
  [SMALL_STATE(78)] = 1363,
  [SMALL_STATE(79)] = 1373,
  [SMALL_STATE(80)] = 1383,
  [SMALL_STATE(81)] = 1393,
  [SMALL_STATE(82)] = 1403,
  [SMALL_STATE(83)] = 1413,
  [SMALL_STATE(84)] = 1423,
  [SMALL_STATE(85)] = 1433,
  [SMALL_STATE(86)] = 1443,
  [SMALL_STATE(87)] = 1453,
  [SMALL_STATE(88)] = 1463,
  [SMALL_STATE(89)] = 1473,
  [SMALL_STATE(90)] = 1483,
  [SMALL_STATE(91)] = 1493,
  [SMALL_STATE(92)] = 1503,
  [SMALL_STATE(93)] = 1513,
  [SMALL_STATE(94)] = 1523,
  [SMALL_STATE(95)] = 1533,
  [SMALL_STATE(96)] = 1543,
  [SMALL_STATE(97)] = 1553,
  [SMALL_STATE(98)] = 1563,
  [SMALL_STATE(99)] = 1570,
  [SMALL_STATE(100)] = 1577,
  [SMALL_STATE(101)] = 1584,
  [SMALL_STATE(102)] = 1591,
  [SMALL_STATE(103)] = 1598,
  [SMALL_STATE(104)] = 1605,
  [SMALL_STATE(105)] = 1612,
  [SMALL_STATE(106)] = 1619,
  [SMALL_STATE(107)] = 1626,
  [SMALL_STATE(108)] = 1631,
  [SMALL_STATE(109)] = 1638,
  [SMALL_STATE(110)] = 1645,
  [SMALL_STATE(111)] = 1652,
  [SMALL_STATE(112)] = 1659,
  [SMALL_STATE(113)] = 1666,
  [SMALL_STATE(114)] = 1673,
  [SMALL_STATE(115)] = 1680,
  [SMALL_STATE(116)] = 1687,
  [SMALL_STATE(117)] = 1691,
  [SMALL_STATE(118)] = 1695,
  [SMALL_STATE(119)] = 1699,
  [SMALL_STATE(120)] = 1703,
  [SMALL_STATE(121)] = 1707,
  [SMALL_STATE(122)] = 1711,
  [SMALL_STATE(123)] = 1715,
  [SMALL_STATE(124)] = 1719,
  [SMALL_STATE(125)] = 1723,
  [SMALL_STATE(126)] = 1727,
  [SMALL_STATE(127)] = 1731,
  [SMALL_STATE(128)] = 1735,
  [SMALL_STATE(129)] = 1739,
  [SMALL_STATE(130)] = 1743,
  [SMALL_STATE(131)] = 1747,
  [SMALL_STATE(132)] = 1751,
  [SMALL_STATE(133)] = 1755,
  [SMALL_STATE(134)] = 1759,
  [SMALL_STATE(135)] = 1763,
  [SMALL_STATE(136)] = 1767,
  [SMALL_STATE(137)] = 1771,
  [SMALL_STATE(138)] = 1775,
  [SMALL_STATE(139)] = 1779,
  [SMALL_STATE(140)] = 1783,
  [SMALL_STATE(141)] = 1787,
  [SMALL_STATE(142)] = 1791,
  [SMALL_STATE(143)] = 1795,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(139),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(134),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(127),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(122),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(13),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 8),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 8),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, .production_id = 10),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, .production_id = 10),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 9),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 9),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 7),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(45),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(46),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(135),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(65),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(69),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(74),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(142),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(76),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(141),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(117),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [369] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
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
