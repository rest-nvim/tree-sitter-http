#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 306
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 45

enum ts_symbol_identifiers {
  sym_identifier = 1,
  aux_sym_comment_token1 = 2,
  aux_sym_comment_token2 = 3,
  anon_sym_POUND_POUND_POUND = 4,
  sym_method = 5,
  sym_http_version = 6,
  aux_sym__target_url_line_token1 = 7,
  anon_sym_QMARK = 8,
  aux_sym__target_url_line_token2 = 9,
  aux_sym_target_url_token1 = 10,
  aux_sym_target_url_token2 = 11,
  sym_status_code = 12,
  sym_status_text = 13,
  anon_sym_EQ = 14,
  anon_sym_COLON = 15,
  aux_sym_header_token1 = 16,
  anon_sym_LBRACE_LBRACE = 17,
  anon_sym_RBRACE_RBRACE = 18,
  anon_sym_LT = 19,
  anon_sym_GT = 20,
  anon_sym_LBRACE_PERCENT = 21,
  anon_sym_PERCENT_RBRACE = 22,
  anon_sym_AT = 23,
  aux_sym_xml_body_token1 = 24,
  anon_sym_LBRACE = 25,
  anon_sym_LBRACK = 26,
  anon_sym_query = 27,
  anon_sym_mutation = 28,
  anon_sym_LPAREN = 29,
  anon_sym_AMP = 30,
  sym_header_entity = 31,
  sym_number = 32,
  sym_string = 33,
  anon_sym_true = 34,
  anon_sym_false = 35,
  aux_sym__blank_line_token1 = 36,
  sym_document = 37,
  sym_comment = 38,
  sym_request_separator = 39,
  aux_sym__target_url_line = 40,
  sym_target_url = 41,
  sym_response = 42,
  sym_request = 43,
  sym_query_param = 44,
  sym_header = 45,
  sym_variable = 46,
  sym_pre_request_script = 47,
  sym_res_handler_script = 48,
  sym_script = 49,
  sym_variable_declaration = 50,
  sym_xml_body = 51,
  sym_json_body = 52,
  sym_graphql_body = 53,
  sym_external_body = 54,
  sym_form_data = 55,
  sym_boolean = 56,
  sym_value = 57,
  sym__blank_line = 58,
  aux_sym_document_repeat1 = 59,
  aux_sym_target_url_repeat1 = 60,
  aux_sym_request_repeat1 = 61,
  aux_sym_request_repeat2 = 62,
  aux_sym_script_repeat1 = 63,
  aux_sym_form_data_repeat1 = 64,
  aux_sym_value_repeat1 = 65,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_POUND_POUND_POUND] = "###",
  [sym_method] = "method",
  [sym_http_version] = "http_version",
  [aux_sym__target_url_line_token1] = "_target_url_line_token1",
  [anon_sym_QMARK] = "\?",
  [aux_sym__target_url_line_token2] = "_target_url_line_token2",
  [aux_sym_target_url_token1] = "target_url_token1",
  [aux_sym_target_url_token2] = "target_url_token2",
  [sym_status_code] = "status_code",
  [sym_status_text] = "status_text",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [aux_sym_header_token1] = "header_token1",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_AT] = "@",
  [aux_sym_xml_body_token1] = "xml_body_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_query] = "query",
  [anon_sym_mutation] = "mutation",
  [anon_sym_LPAREN] = "(",
  [anon_sym_AMP] = "&",
  [sym_header_entity] = "header_entity",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [sym_document] = "document",
  [sym_comment] = "comment",
  [sym_request_separator] = "request_separator",
  [aux_sym__target_url_line] = "_target_url_line",
  [sym_target_url] = "target_url",
  [sym_response] = "response",
  [sym_request] = "request",
  [sym_query_param] = "query_param",
  [sym_header] = "header",
  [sym_variable] = "variable",
  [sym_pre_request_script] = "pre_request_script",
  [sym_res_handler_script] = "res_handler_script",
  [sym_script] = "script",
  [sym_variable_declaration] = "variable_declaration",
  [sym_xml_body] = "xml_body",
  [sym_json_body] = "json_body",
  [sym_graphql_body] = "graphql_body",
  [sym_external_body] = "external_body",
  [sym_form_data] = "form_data",
  [sym_boolean] = "boolean",
  [sym_value] = "value",
  [sym__blank_line] = "_blank_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_target_url_repeat1] = "target_url_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_script_repeat1] = "script_repeat1",
  [aux_sym_form_data_repeat1] = "form_data_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_POUND_POUND_POUND] = anon_sym_POUND_POUND_POUND,
  [sym_method] = sym_method,
  [sym_http_version] = sym_http_version,
  [aux_sym__target_url_line_token1] = aux_sym__target_url_line_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym__target_url_line_token2] = aux_sym__target_url_line_token2,
  [aux_sym_target_url_token1] = aux_sym_target_url_token1,
  [aux_sym_target_url_token2] = aux_sym_target_url_token2,
  [sym_status_code] = sym_status_code,
  [sym_status_text] = sym_status_text,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_header_token1] = aux_sym_header_token1,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_xml_body_token1] = aux_sym_xml_body_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_mutation] = anon_sym_mutation,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_header_entity] = sym_header_entity,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym__blank_line_token1] = aux_sym__blank_line_token1,
  [sym_document] = sym_document,
  [sym_comment] = sym_comment,
  [sym_request_separator] = sym_request_separator,
  [aux_sym__target_url_line] = aux_sym__target_url_line,
  [sym_target_url] = sym_target_url,
  [sym_response] = sym_response,
  [sym_request] = sym_request,
  [sym_query_param] = sym_query_param,
  [sym_header] = sym_header,
  [sym_variable] = sym_variable,
  [sym_pre_request_script] = sym_pre_request_script,
  [sym_res_handler_script] = sym_res_handler_script,
  [sym_script] = sym_script,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_xml_body] = sym_xml_body,
  [sym_json_body] = sym_json_body,
  [sym_graphql_body] = sym_graphql_body,
  [sym_external_body] = sym_external_body,
  [sym_form_data] = sym_form_data,
  [sym_boolean] = sym_boolean,
  [sym_value] = sym_value,
  [sym__blank_line] = sym__blank_line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_target_url_repeat1] = aux_sym_target_url_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
  [aux_sym_form_data_repeat1] = aux_sym_form_data_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
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
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__target_url_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__target_url_line_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_url_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_url_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_status_code] = {
    .visible = true,
    .named = true,
  },
  [sym_status_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_header_token1] = {
    .visible = false,
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xml_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mutation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_header_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
  [aux_sym__blank_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_request_separator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__target_url_line] = {
    .visible = false,
    .named = false,
  },
  [sym_target_url] = {
    .visible = true,
    .named = true,
  },
  [sym_response] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
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
  [sym_pre_request_script] = {
    .visible = true,
    .named = true,
  },
  [sym_res_handler_script] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
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
  [sym_form_data] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__blank_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
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
  [aux_sym_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_form_data_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_file_path = 2,
  field_key = 3,
  field_name = 4,
  field_url = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_file_path] = "file_path",
  [field_key] = "key",
  [field_name] = "name",
  [field_url] = "url",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 2},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 2},
  [16] = {.index = 23, .length = 2},
  [17] = {.index = 25, .length = 2},
  [18] = {.index = 27, .length = 1},
  [19] = {.index = 28, .length = 2},
  [20] = {.index = 30, .length = 2},
  [21] = {.index = 32, .length = 2},
  [22] = {.index = 34, .length = 2},
  [23] = {.index = 36, .length = 2},
  [24] = {.index = 38, .length = 2},
  [25] = {.index = 40, .length = 2},
  [26] = {.index = 42, .length = 2},
  [27] = {.index = 44, .length = 2},
  [28] = {.index = 46, .length = 2},
  [29] = {.index = 48, .length = 2},
  [30] = {.index = 50, .length = 1},
  [31] = {.index = 51, .length = 2},
  [32] = {.index = 53, .length = 2},
  [33] = {.index = 55, .length = 2},
  [34] = {.index = 57, .length = 2},
  [35] = {.index = 59, .length = 2},
  [36] = {.index = 61, .length = 2},
  [37] = {.index = 63, .length = 2},
  [38] = {.index = 65, .length = 2},
  [39] = {.index = 67, .length = 2},
  [40] = {.index = 69, .length = 2},
  [41] = {.index = 71, .length = 2},
  [42] = {.index = 73, .length = 2},
  [43] = {.index = 75, .length = 2},
  [44] = {.index = 77, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_url, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_body, 2},
    {field_url, 0},
  [4] =
    {field_key, 0},
  [5] =
    {field_url, 1},
  [6] =
    {field_url, 2},
  [7] =
    {field_name, 2},
  [8] =
    {field_body, 3},
    {field_url, 0},
  [10] =
    {field_body, 3},
    {field_url, 1},
  [12] =
    {field_body, 4},
    {field_url, 2},
  [14] =
    {field_name, 1},
    {field_value, 3},
  [16] =
    {field_body, 4},
    {field_url, 0},
  [18] =
    {field_key, 0},
    {field_value, 2},
  [20] =
    {field_url, 3},
  [21] =
    {field_body, 4},
    {field_url, 1},
  [23] =
    {field_body, 5},
    {field_url, 2},
  [25] =
    {field_name, 1},
    {field_value, 4},
  [27] =
    {field_file_path, 2},
  [28] =
    {field_name, 0},
    {field_value, 2},
  [30] =
    {field_body, 5},
    {field_url, 0},
  [32] =
    {field_body, 5},
    {field_url, 3},
  [34] =
    {field_body, 5},
    {field_url, 1},
  [36] =
    {field_body, 6},
    {field_url, 2},
  [38] =
    {field_name, 1},
    {field_value, 5},
  [40] =
    {field_name, 0},
    {field_value, 3},
  [42] =
    {field_body, 6},
    {field_url, 0},
  [44] =
    {field_body, 6},
    {field_url, 3},
  [46] =
    {field_body, 6},
    {field_url, 1},
  [48] =
    {field_body, 7},
    {field_url, 2},
  [50] =
    {field_file_path, 4},
  [51] =
    {field_name, 0},
    {field_value, 4},
  [53] =
    {field_body, 7},
    {field_url, 0},
  [55] =
    {field_body, 7},
    {field_url, 3},
  [57] =
    {field_body, 7},
    {field_url, 1},
  [59] =
    {field_body, 8},
    {field_url, 2},
  [61] =
    {field_body, 8},
    {field_url, 0},
  [63] =
    {field_body, 8},
    {field_url, 3},
  [65] =
    {field_body, 8},
    {field_url, 1},
  [67] =
    {field_body, 9},
    {field_url, 2},
  [69] =
    {field_body, 9},
    {field_url, 3},
  [71] =
    {field_body, 9},
    {field_url, 1},
  [73] =
    {field_body, 10},
    {field_url, 2},
  [75] =
    {field_body, 10},
    {field_url, 3},
  [77] =
    {field_body, 11},
    {field_url, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
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
  [95] = 6,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 46,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 5,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 5,
  [117] = 117,
  [118] = 6,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 61,
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
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 126,
  [145] = 145,
  [146] = 6,
  [147] = 109,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 6,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 163,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 161,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 161,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 163,
  [186] = 186,
  [187] = 186,
  [188] = 188,
  [189] = 184,
  [190] = 176,
  [191] = 186,
  [192] = 175,
  [193] = 193,
  [194] = 176,
  [195] = 175,
  [196] = 196,
  [197] = 184,
  [198] = 175,
  [199] = 186,
  [200] = 200,
  [201] = 201,
  [202] = 184,
  [203] = 176,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 62,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 216,
  [221] = 216,
  [222] = 222,
  [223] = 223,
  [224] = 218,
  [225] = 222,
  [226] = 218,
  [227] = 222,
  [228] = 218,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 222,
  [235] = 235,
  [236] = 236,
  [237] = 216,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 253,
  [288] = 288,
  [289] = 289,
  [290] = 273,
  [291] = 264,
  [292] = 292,
  [293] = 293,
  [294] = 273,
  [295] = 264,
  [296] = 296,
  [297] = 297,
  [298] = 273,
  [299] = 264,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 301,
  [304] = 301,
  [305] = 301,
};

static TSCharacterRange aux_sym__target_url_line_token1_character_set_1[] = {
  {'0', '9'}, {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb2, 0xb3}, {0xb5, 0xb5}, {0xb9, 0xba}, {0xbc, 0xbe},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374},
  {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5},
  {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a},
  {0x660, 0x669}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710},
  {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7c0, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a},
  {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939},
  {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x966, 0x96f}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8},
  {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9e6, 0x9f1},
  {0x9f4, 0x9f9}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36},
  {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa66, 0xa6f}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8},
  {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xae6, 0xaef}, {0xaf9, 0xaf9},
  {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d},
  {0xb5f, 0xb61}, {0xb66, 0xb6f}, {0xb71, 0xb77}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a},
  {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xbe6, 0xbf2}, {0xc05, 0xc0c},
  {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc66, 0xc6f},
  {0xc78, 0xc7e}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd},
  {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xce6, 0xcef}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d},
  {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd58, 0xd61}, {0xd66, 0xd78}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb},
  {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xde6, 0xdef}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe50, 0xe59}, {0xe81, 0xe82},
  {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4},
  {0xec6, 0xec6}, {0xed0, 0xed9}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf20, 0xf33}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c},
  {0x1000, 0x102a}, {0x103f, 0x1049}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081},
  {0x108e, 0x108e}, {0x1090, 0x1099}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d},
  {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be},
  {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1369, 0x137c}, {0x1380, 0x138f},
  {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1711},
  {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x17e0, 0x17e9},
  {0x17f0, 0x17f9}, {0x1810, 0x1819}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e},
  {0x1946, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x19d0, 0x19da}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1a80, 0x1a89},
  {0x1a90, 0x1a99}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b50, 0x1b59}, {0x1b83, 0x1ba0}, {0x1bae, 0x1be5}, {0x1c00, 0x1c23},
  {0x1c40, 0x1c49}, {0x1c4d, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6},
  {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59},
  {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc},
  {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2070, 0x2071}, {0x2074, 0x2079}, {0x207f, 0x2089},
  {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126},
  {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2150, 0x2189}, {0x2460, 0x249b},
  {0x24ea, 0x24ff}, {0x2776, 0x2793}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2cfd, 0x2cfd}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27},
  {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe},
  {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3007}, {0x3021, 0x3029}, {0x3031, 0x3035},
  {0x3038, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x3192, 0x3195},
  {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3220, 0x3229}, {0x3248, 0x324f}, {0x3251, 0x325f}, {0x3280, 0x3289}, {0x32b1, 0x32bf}, {0x3400, 0x3400},
  {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d},
  {0xa6a0, 0xa6ef}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801},
  {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa830, 0xa835}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8d0, 0xa8d9}, {0xa8f2, 0xa8f7},
  {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa900, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9d9}, {0xa9e0, 0xa9e4},
  {0xa9e6, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa50, 0xaa59}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf},
  {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4},
  {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2},
  {0xabf0, 0xabf9}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06},
  {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44},
  {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff10, 0xff19},
  {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b},
  {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10107, 0x10133}, {0x10140, 0x10178},
  {0x1018a, 0x1018b}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x102e1, 0x102fb}, {0x10300, 0x10323}, {0x1032d, 0x1034a}, {0x10350, 0x10375}, {0x10380, 0x1039d},
  {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104a0, 0x104a9}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527},
  {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9},
  {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805},
  {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10858, 0x10876}, {0x10879, 0x1089e}, {0x108a7, 0x108af},
  {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x108fb, 0x1091b}, {0x10920, 0x1092b},
};

static TSCharacterRange aux_sym__target_url_line_token2_character_set_1[] = {
  {0, '\t'}, {0x0b, '\f'}, {0x0e, 0x1f}, {'!', '/'}, {':', '@'}, {'[', '`'}, {'{', 0x9f}, {0xa1, 0xa9},
  {0xab, 0xb1}, {0xb4, 0xb4}, {0xb6, 0xb8}, {0xbb, 0xbb}, {0xbf, 0xbf}, {0xd7, 0xd7}, {0xf7, 0xf7}, {0x2c2, 0x2c5},
  {0x2d2, 0x2df}, {0x2e5, 0x2eb}, {0x2ed, 0x2ed}, {0x2ef, 0x36f}, {0x375, 0x375}, {0x378, 0x379}, {0x37e, 0x37e}, {0x380, 0x385},
  {0x387, 0x387}, {0x38b, 0x38b}, {0x38d, 0x38d}, {0x3a2, 0x3a2}, {0x3f6, 0x3f6}, {0x482, 0x489}, {0x530, 0x530}, {0x557, 0x558},
  {0x55a, 0x55f}, {0x589, 0x5cf}, {0x5eb, 0x5ee}, {0x5f3, 0x61f}, {0x64b, 0x65f}, {0x66a, 0x66d}, {0x670, 0x670}, {0x6d4, 0x6d4},
  {0x6d6, 0x6e4}, {0x6e7, 0x6ed}, {0x6fd, 0x6fe}, {0x700, 0x70f}, {0x711, 0x711}, {0x730, 0x74c}, {0x7a6, 0x7b0}, {0x7b2, 0x7bf},
  {0x7eb, 0x7f3}, {0x7f6, 0x7f9}, {0x7fb, 0x7ff}, {0x816, 0x819}, {0x81b, 0x823}, {0x825, 0x827}, {0x829, 0x83f}, {0x859, 0x85f},
  {0x86b, 0x86f}, {0x888, 0x888}, {0x88f, 0x89f}, {0x8ca, 0x903}, {0x93a, 0x93c}, {0x93e, 0x94f}, {0x951, 0x957}, {0x962, 0x965},
  {0x970, 0x970}, {0x981, 0x984}, {0x98d, 0x98e}, {0x991, 0x992}, {0x9a9, 0x9a9}, {0x9b1, 0x9b1}, {0x9b3, 0x9b5}, {0x9ba, 0x9bc},
  {0x9be, 0x9cd}, {0x9cf, 0x9db}, {0x9de, 0x9de}, {0x9e2, 0x9e5}, {0x9f2, 0x9f3}, {0x9fa, 0x9fb}, {0x9fd, 0xa04}, {0xa0b, 0xa0e},
  {0xa11, 0xa12}, {0xa29, 0xa29}, {0xa31, 0xa31}, {0xa34, 0xa34}, {0xa37, 0xa37}, {0xa3a, 0xa58}, {0xa5d, 0xa5d}, {0xa5f, 0xa65},
  {0xa70, 0xa71}, {0xa75, 0xa84}, {0xa8e, 0xa8e}, {0xa92, 0xa92}, {0xaa9, 0xaa9}, {0xab1, 0xab1}, {0xab4, 0xab4}, {0xaba, 0xabc},
  {0xabe, 0xacf}, {0xad1, 0xadf}, {0xae2, 0xae5}, {0xaf0, 0xaf8}, {0xafa, 0xb04}, {0xb0d, 0xb0e}, {0xb11, 0xb12}, {0xb29, 0xb29},
  {0xb31, 0xb31}, {0xb34, 0xb34}, {0xb3a, 0xb3c}, {0xb3e, 0xb5b}, {0xb5e, 0xb5e}, {0xb62, 0xb65}, {0xb70, 0xb70}, {0xb78, 0xb82},
  {0xb84, 0xb84}, {0xb8b, 0xb8d}, {0xb91, 0xb91}, {0xb96, 0xb98}, {0xb9b, 0xb9b}, {0xb9d, 0xb9d}, {0xba0, 0xba2}, {0xba5, 0xba7},
  {0xbab, 0xbad}, {0xbba, 0xbcf}, {0xbd1, 0xbe5}, {0xbf3, 0xc04}, {0xc0d, 0xc0d}, {0xc11, 0xc11}, {0xc29, 0xc29}, {0xc3a, 0xc3c},
  {0xc3e, 0xc57}, {0xc5b, 0xc5c}, {0xc5e, 0xc5f}, {0xc62, 0xc65}, {0xc70, 0xc77}, {0xc7f, 0xc7f}, {0xc81, 0xc84}, {0xc8d, 0xc8d},
  {0xc91, 0xc91}, {0xca9, 0xca9}, {0xcb4, 0xcb4}, {0xcba, 0xcbc}, {0xcbe, 0xcdc}, {0xcdf, 0xcdf}, {0xce2, 0xce5}, {0xcf0, 0xcf0},
  {0xcf3, 0xd03}, {0xd0d, 0xd0d}, {0xd11, 0xd11}, {0xd3b, 0xd3c}, {0xd3e, 0xd4d}, {0xd4f, 0xd53}, {0xd57, 0xd57}, {0xd62, 0xd65},
  {0xd79, 0xd79}, {0xd80, 0xd84}, {0xd97, 0xd99}, {0xdb2, 0xdb2}, {0xdbc, 0xdbc}, {0xdbe, 0xdbf}, {0xdc7, 0xde5}, {0xdf0, 0xe00},
  {0xe31, 0xe31}, {0xe34, 0xe3f}, {0xe47, 0xe4f}, {0xe5a, 0xe80}, {0xe83, 0xe83}, {0xe85, 0xe85}, {0xe8b, 0xe8b}, {0xea4, 0xea4},
  {0xea6, 0xea6}, {0xeb1, 0xeb1}, {0xeb4, 0xebc}, {0xebe, 0xebf}, {0xec5, 0xec5}, {0xec7, 0xecf}, {0xeda, 0xedb}, {0xee0, 0xeff},
  {0xf01, 0xf1f}, {0xf34, 0xf3f}, {0xf48, 0xf48}, {0xf6d, 0xf87}, {0xf8d, 0xfff}, {0x102b, 0x103e}, {0x104a, 0x104f}, {0x1056, 0x1059},
  {0x105e, 0x1060}, {0x1062, 0x1064}, {0x1067, 0x106d}, {0x1071, 0x1074}, {0x1082, 0x108d}, {0x108f, 0x108f}, {0x109a, 0x109f}, {0x10c6, 0x10c6},
  {0x10c8, 0x10cc}, {0x10ce, 0x10cf}, {0x10fb, 0x10fb}, {0x1249, 0x1249}, {0x124e, 0x124f}, {0x1257, 0x1257}, {0x1259, 0x1259}, {0x125e, 0x125f},
  {0x1289, 0x1289}, {0x128e, 0x128f}, {0x12b1, 0x12b1}, {0x12b6, 0x12b7}, {0x12bf, 0x12bf}, {0x12c1, 0x12c1}, {0x12c6, 0x12c7}, {0x12d7, 0x12d7},
  {0x1311, 0x1311}, {0x1316, 0x1317}, {0x135b, 0x1368}, {0x137d, 0x137f}, {0x1390, 0x139f}, {0x13f6, 0x13f7}, {0x13fe, 0x1400}, {0x166d, 0x166e},
  {0x169b, 0x169f}, {0x16eb, 0x16ed}, {0x16f9, 0x16ff}, {0x1712, 0x171e}, {0x1732, 0x173f}, {0x1752, 0x175f}, {0x176d, 0x176d}, {0x1771, 0x177f},
  {0x17b4, 0x17d6}, {0x17d8, 0x17db}, {0x17dd, 0x17df}, {0x17ea, 0x17ef}, {0x17fa, 0x180f}, {0x181a, 0x181f}, {0x1879, 0x187f}, {0x1885, 0x1886},
  {0x18a9, 0x18a9}, {0x18ab, 0x18af}, {0x18f6, 0x18ff}, {0x191f, 0x1945}, {0x196e, 0x196f}, {0x1975, 0x197f}, {0x19ac, 0x19af}, {0x19ca, 0x19cf},
  {0x19db, 0x19ff}, {0x1a17, 0x1a1f}, {0x1a55, 0x1a7f}, {0x1a8a, 0x1a8f}, {0x1a9a, 0x1aa6}, {0x1aa8, 0x1b04}, {0x1b34, 0x1b44}, {0x1b4d, 0x1b4f},
  {0x1b5a, 0x1b82}, {0x1ba1, 0x1bad}, {0x1be6, 0x1bff}, {0x1c24, 0x1c3f}, {0x1c4a, 0x1c4c}, {0x1c7e, 0x1c7f}, {0x1c89, 0x1c8f}, {0x1cbb, 0x1cbc},
  {0x1cc0, 0x1ce8}, {0x1ced, 0x1ced}, {0x1cf4, 0x1cf4}, {0x1cf7, 0x1cf9}, {0x1cfb, 0x1cff}, {0x1dc0, 0x1dff}, {0x1f16, 0x1f17}, {0x1f1e, 0x1f1f},
  {0x1f46, 0x1f47}, {0x1f4e, 0x1f4f}, {0x1f58, 0x1f58}, {0x1f5a, 0x1f5a}, {0x1f5c, 0x1f5c}, {0x1f5e, 0x1f5e}, {0x1f7e, 0x1f7f}, {0x1fb5, 0x1fb5},
  {0x1fbd, 0x1fbd}, {0x1fbf, 0x1fc1}, {0x1fc5, 0x1fc5}, {0x1fcd, 0x1fcf}, {0x1fd4, 0x1fd5}, {0x1fdc, 0x1fdf}, {0x1fed, 0x1ff1}, {0x1ff5, 0x1ff5},
  {0x1ffd, 0x1fff}, {0x200b, 0x2027}, {0x202a, 0x202e}, {0x2030, 0x205e}, {0x2060, 0x206f}, {0x2072, 0x2073}, {0x207a, 0x207e}, {0x208a, 0x208f},
  {0x209d, 0x2101}, {0x2103, 0x2106}, {0x2108, 0x2109}, {0x2114, 0x2114}, {0x2116, 0x2118}, {0x211e, 0x2123}, {0x2125, 0x2125}, {0x2127, 0x2127},
  {0x2129, 0x2129}, {0x212e, 0x212e}, {0x213a, 0x213b}, {0x2140, 0x2144}, {0x214a, 0x214d}, {0x214f, 0x214f}, {0x218a, 0x245f}, {0x249c, 0x24e9},
  {0x2500, 0x2775}, {0x2794, 0x2bff}, {0x2ce5, 0x2cea}, {0x2cef, 0x2cf1}, {0x2cf4, 0x2cfc}, {0x2cfe, 0x2cff}, {0x2d26, 0x2d26}, {0x2d28, 0x2d2c},
  {0x2d2e, 0x2d2f}, {0x2d68, 0x2d6e}, {0x2d70, 0x2d7f}, {0x2d97, 0x2d9f}, {0x2da7, 0x2da7}, {0x2daf, 0x2daf}, {0x2db7, 0x2db7}, {0x2dbf, 0x2dbf},
  {0x2dc7, 0x2dc7}, {0x2dcf, 0x2dcf}, {0x2dd7, 0x2dd7}, {0x2ddf, 0x2e2e}, {0x2e30, 0x2fff}, {0x3001, 0x3004}, {0x3008, 0x3020}, {0x302a, 0x3030},
  {0x3036, 0x3037}, {0x303d, 0x3040}, {0x3097, 0x309c}, {0x30a0, 0x30a0}, {0x30fb, 0x30fb}, {0x3100, 0x3104}, {0x3130, 0x3130}, {0x318f, 0x3191},
  {0x3196, 0x319f}, {0x31c0, 0x31ef}, {0x3200, 0x321f}, {0x322a, 0x3247}, {0x3250, 0x3250}, {0x3260, 0x327f}, {0x328a, 0x32b0}, {0x32c0, 0x33ff},
  {0x3401, 0x4dbe}, {0x4dc0, 0x4dff}, {0x4e01, 0x9ffe}, {0xa48d, 0xa4cf}, {0xa4fe, 0xa4ff}, {0xa60d, 0xa60f}, {0xa62c, 0xa63f}, {0xa66f, 0xa67e},
  {0xa69e, 0xa69f}, {0xa6f0, 0xa716}, {0xa720, 0xa721}, {0xa789, 0xa78a}, {0xa7cb, 0xa7cf}, {0xa7d2, 0xa7d2}, {0xa7d4, 0xa7d4}, {0xa7da, 0xa7f1},
  {0xa802, 0xa802}, {0xa806, 0xa806}, {0xa80b, 0xa80b}, {0xa823, 0xa82f}, {0xa836, 0xa83f}, {0xa874, 0xa881}, {0xa8b4, 0xa8cf}, {0xa8da, 0xa8f1},
  {0xa8f8, 0xa8fa}, {0xa8fc, 0xa8fc}, {0xa8ff, 0xa8ff}, {0xa926, 0xa92f}, {0xa947, 0xa95f}, {0xa97d, 0xa983}, {0xa9b3, 0xa9ce}, {0xa9da, 0xa9df},
  {0xa9e5, 0xa9e5}, {0xa9ff, 0xa9ff}, {0xaa29, 0xaa3f}, {0xaa43, 0xaa43}, {0xaa4c, 0xaa4f}, {0xaa5a, 0xaa5f}, {0xaa77, 0xaa79}, {0xaa7b, 0xaa7d},
  {0xaab0, 0xaab0}, {0xaab2, 0xaab4}, {0xaab7, 0xaab8}, {0xaabe, 0xaabf}, {0xaac1, 0xaac1}, {0xaac3, 0xaada}, {0xaade, 0xaadf}, {0xaaeb, 0xaaf1},
  {0xaaf5, 0xab00}, {0xab07, 0xab08}, {0xab0f, 0xab10}, {0xab17, 0xab1f}, {0xab27, 0xab27}, {0xab2f, 0xab2f}, {0xab5b, 0xab5b}, {0xab6a, 0xab6f},
  {0xabe3, 0xabef}, {0xabfa, 0xabff}, {0xac01, 0xd7a2}, {0xd7a4, 0xd7af}, {0xd7c7, 0xd7ca}, {0xd7fc, 0xf8ff}, {0xfa6e, 0xfa6f}, {0xfada, 0xfaff},
  {0xfb07, 0xfb12}, {0xfb18, 0xfb1c}, {0xfb1e, 0xfb1e}, {0xfb29, 0xfb29}, {0xfb37, 0xfb37}, {0xfb3d, 0xfb3d}, {0xfb3f, 0xfb3f}, {0xfb42, 0xfb42},
  {0xfb45, 0xfb45}, {0xfbb2, 0xfbd2}, {0xfd3e, 0xfd4f}, {0xfd90, 0xfd91}, {0xfdc8, 0xfdef}, {0xfdfc, 0xfe6f}, {0xfe75, 0xfe75}, {0xfefd, 0xff0f},
  {0xff1a, 0xff20}, {0xff3b, 0xff40}, {0xff5b, 0xff65}, {0xffbf, 0xffc1}, {0xffc8, 0xffc9}, {0xffd0, 0xffd1}, {0xffd8, 0xffd9}, {0xffdd, 0xffff},
  {0x1000c, 0x1000c}, {0x10027, 0x10027}, {0x1003b, 0x1003b}, {0x1003e, 0x1003e}, {0x1004e, 0x1004f}, {0x1005e, 0x1007f}, {0x100fb, 0x10106}, {0x10134, 0x1013f},
  {0x10179, 0x10189}, {0x1018c, 0x1027f}, {0x1029d, 0x1029f}, {0x102d1, 0x102e0}, {0x102fc, 0x102ff}, {0x10324, 0x1032c}, {0x1034b, 0x1034f}, {0x10376, 0x1037f},
  {0x1039e, 0x1039f}, {0x103c4, 0x103c7}, {0x103d0, 0x103d0}, {0x103d6, 0x103ff}, {0x1049e, 0x1049f}, {0x104aa, 0x104af}, {0x104d4, 0x104d7}, {0x104fc, 0x104ff},
  {0x10528, 0x1052f}, {0x10564, 0x1056f}, {0x1057b, 0x1057b}, {0x1058b, 0x1058b}, {0x10593, 0x10593}, {0x10596, 0x10596}, {0x105a2, 0x105a2}, {0x105b2, 0x105b2},
  {0x105ba, 0x105ba}, {0x105bd, 0x105ff}, {0x10737, 0x1073f}, {0x10756, 0x1075f}, {0x10768, 0x1077f}, {0x10786, 0x10786}, {0x107b1, 0x107b1}, {0x107bb, 0x107ff},
  {0x10806, 0x10807}, {0x10809, 0x10809}, {0x10836, 0x10836}, {0x10839, 0x1083b}, {0x1083d, 0x1083e}, {0x10856, 0x10857}, {0x10877, 0x10878}, {0x1089f, 0x108a6},
  {0x108b0, 0x108df}, {0x108f3, 0x108f3}, {0x108f6, 0x108fa}, {0x1091c, 0x1091f}, {0x1092c, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(675);
      ADVANCE_MAP(
        0, 733,
        '\n', 742,
        '\r', 743,
        '#', 677,
        '&', 773,
        '(', 772,
        '/', 737,
        ':', 750,
        '<', 757,
        '=', 749,
        '>', 758,
        '?', 731,
        '@', 761,
        'C', 713,
        'D', 700,
        'G', 701,
        'H', 702,
        'L', 710,
        'O', 717,
        'P', 698,
        'T', 719,
        '[', 765,
        'm', 722,
        'q', 723,
        '{', 764,
        ' ', 752,
        0xa0, 752,
        '-', 739,
        '_', 739,
        0x2028, 844,
        0x2029, 844,
      );
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      if ((0x10000 <= lookahead && lookahead <= 0x1000b) ||
          (0x1000d <= lookahead && lookahead <= 0x10026) ||
          (0x10028 <= lookahead && lookahead <= 0x1003a) ||
          lookahead == 0x1003c ||
          lookahead == 0x1003d ||
          (0x1003f <= lookahead && lookahead <= 0x1004d) ||
          (0x10050 <= lookahead && lookahead <= 0x1005d) ||
          (0x10080 <= lookahead && lookahead <= 0x100fa) ||
          (0x10107 <= lookahead && lookahead <= 0x10133) ||
          (0x10140 <= lookahead && lookahead <= 0x10178) ||
          lookahead == 0x1018a ||
          lookahead == 0x1018b ||
          (0x10280 <= lookahead && lookahead <= 0x1029c) ||
          (0x102a0 <= lookahead && lookahead <= 0x102d0) ||
          (0x102e1 <= lookahead && lookahead <= 0x102fb) ||
          (0x10300 <= lookahead && lookahead <= 0x10323) ||
          (0x1032d <= lookahead && lookahead <= 0x1034a) ||
          (0x10350 <= lookahead && lookahead <= 0x10375) ||
          (0x10380 <= lookahead && lookahead <= 0x1039d) ||
          (0x103a0 <= lookahead && lookahead <= 0x103c3) ||
          (0x103c8 <= lookahead && lookahead <= 0x103cf) ||
          (0x103d1 <= lookahead && lookahead <= 0x103d5) ||
          (0x10400 <= lookahead && lookahead <= 0x1049d) ||
          (0x104a0 <= lookahead && lookahead <= 0x104a9) ||
          (0x104b0 <= lookahead && lookahead <= 0x104d3) ||
          (0x104d8 <= lookahead && lookahead <= 0x104fb) ||
          (0x10500 <= lookahead && lookahead <= 0x10527) ||
          (0x10530 <= lookahead && lookahead <= 0x10563) ||
          (0x10570 <= lookahead && lookahead <= 0x1057a) ||
          (0x1057c <= lookahead && lookahead <= 0x1058a) ||
          (0x1058c <= lookahead && lookahead <= 0x10592) ||
          lookahead == 0x10594 ||
          lookahead == 0x10595 ||
          (0x10597 <= lookahead && lookahead <= 0x105a1) ||
          (0x105a3 <= lookahead && lookahead <= 0x105b1) ||
          (0x105b3 <= lookahead && lookahead <= 0x105b9) ||
          lookahead == 0x105bb ||
          lookahead == 0x105bc ||
          (0x10600 <= lookahead && lookahead <= 0x10736) ||
          (0x10740 <= lookahead && lookahead <= 0x10755) ||
          (0x10760 <= lookahead && lookahead <= 0x10767) ||
          (0x10780 <= lookahead && lookahead <= 0x10785) ||
          (0x10787 <= lookahead && lookahead <= 0x107b0) ||
          (0x107b2 <= lookahead && lookahead <= 0x107ba) ||
          (0x10800 <= lookahead && lookahead <= 0x10805) ||
          lookahead == 0x10808 ||
          (0x1080a <= lookahead && lookahead <= 0x10835) ||
          lookahead == 0x10837 ||
          lookahead == 0x10838 ||
          lookahead == 0x1083c ||
          (0x1083f <= lookahead && lookahead <= 0x10855) ||
          (0x10858 <= lookahead && lookahead <= 0x10876) ||
          (0x10879 <= lookahead && lookahead <= 0x1089e) ||
          (0x108a7 <= lookahead && lookahead <= 0x108af) ||
          (0x108e0 <= lookahead && lookahead <= 0x108f2) ||
          lookahead == 0x108f4 ||
          lookahead == 0x108f5 ||
          (0x108fb <= lookahead && lookahead <= 0x1091b) ||
          (0x10920 <= lookahead && lookahead <= 0x1092b)) ADVANCE(687);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 476, lookahead)) ADVANCE(730);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(741);
      if (lookahead != 0) ADVANCE(733);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) ADVANCE(733);
      if (lookahead == '\n') ADVANCE(742);
      if (lookahead == '\r') ADVANCE(743);
      if (lookahead == '&') ADVANCE(773);
      if (lookahead == '=') ADVANCE(749);
      if (lookahead == '{') ADVANCE(738);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(746);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 476, lookahead)) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(733);
      END_STATE();
    case 2:
      if ((!eof && lookahead == 00)) ADVANCE(733);
      if (lookahead == '\n') ADVANCE(742);
      if (lookahead == '\r') ADVANCE(743);
      if (lookahead == '&') ADVANCE(773);
      if (lookahead == '{') ADVANCE(738);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(746);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 476, lookahead)) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(733);
      END_STATE();
    case 3:
      if ((!eof && lookahead == 00)) ADVANCE(733);
      if (lookahead == '\n') ADVANCE(742);
      if (lookahead == '\r') ADVANCE(743);
      if (lookahead == '?') ADVANCE(731);
      if (lookahead == '{') ADVANCE(738);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(746);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 476, lookahead)) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(733);
      END_STATE();
    case 4:
      if ((!eof && lookahead == 00)) ADVANCE(733);
      if (lookahead == '\n') ADVANCE(742);
      if (lookahead == '\r') ADVANCE(743);
      if (lookahead == '{') ADVANCE(738);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(746);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 476, lookahead)) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(733);
      END_STATE();
    case 5:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '#') ADVANCE(681);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 6:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 7:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'A') ADVANCE(12);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 8:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'A') ADVANCE(11);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 9:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'C') ADVANCE(25);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 10:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'C') ADVANCE(16);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 11:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'C') ADVANCE(13);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 12:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'D') ADVANCE(683);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 13:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'E') ADVANCE(683);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 14:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'E') ADVANCE(9);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 15:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'E') ADVANCE(28);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 16:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'H') ADVANCE(683);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 17:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'I') ADVANCE(22);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 18:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'L') ADVANCE(15);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 19:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'N') ADVANCE(21);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 20:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'N') ADVANCE(24);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 21:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'N') ADVANCE(14);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 22:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'O') ADVANCE(20);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 23:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'S') ADVANCE(25);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 24:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'S') ADVANCE(683);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 25:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'T') ADVANCE(683);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 26:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 27:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 28:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'T') ADVANCE(13);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 29:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '}') ADVANCE(760);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '\r', 743,
        '"', 84,
        '&', 773,
        '(', 772,
        ':', 750,
        '=', 749,
        'A', 218,
        'B', 168,
        'C', 462,
        'E', 649,
        'F', 172,
        'G', 175,
        'H', 161,
        'I', 87,
        'L', 272,
        'M', 271,
        'N', 276,
        'O', 122,
        'P', 169,
        'R', 180,
        'S', 260,
        'T', 265,
        'U', 141,
        'V', 179,
        'f', 173,
        't', 524,
        '{', 86,
        '}', 662,
        0, 742,
        '\n', 742,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(746);
      END_STATE();
    case 32:
      if (lookahead == '\r') ADVANCE(850);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(849);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(746);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(745);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(167);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(143);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(127);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 53:
      if (lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 60:
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 61:
      if (lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 62:
      if (lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 63:
      if (lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 64:
      if (lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 65:
      if (lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 66:
      if (lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 67:
      if (lookahead == ' ') ADVANCE(162);
      END_STATE();
    case 68:
      if (lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 69:
      if (lookahead == ' ') ADVANCE(163);
      END_STATE();
    case 70:
      if (lookahead == ' ') ADVANCE(160);
      END_STATE();
    case 71:
      if (lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 72:
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 73:
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 74:
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 75:
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 76:
      if (lookahead == ' ') ADVANCE(608);
      END_STATE();
    case 77:
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 78:
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 79:
      if (lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 80:
      if (lookahead == ' ') ADVANCE(142);
      END_STATE();
    case 81:
      if (lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 82:
      if (lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 83:
      if (lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(84);
      END_STATE();
    case 85:
      if (lookahead == '#') ADVANCE(681);
      END_STATE();
    case 86:
      if (lookahead == '%') ADVANCE(759);
      END_STATE();
    case 87:
      if (lookahead == '\'') ADVANCE(419);
      if (lookahead == 'M') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(559);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(413);
      END_STATE();
    case 90:
      ADVANCE_MAP(
        '?', 731,
        'C', 714,
        'D', 703,
        'G', 704,
        'H', 705,
        'L', 711,
        'O', 716,
        'P', 697,
        'T', 720,
        '{', 738,
      );
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 476, lookahead)) ADVANCE(687);
      if ((!eof && set_contains(aux_sym__target_url_line_token2_character_set_1, 485, lookahead))) ADVANCE(733);
      END_STATE();
    case 91:
      if (lookahead == 'A') ADVANCE(103);
      END_STATE();
    case 92:
      if (lookahead == 'A') ADVANCE(100);
      END_STATE();
    case 93:
      if (lookahead == 'A') ADVANCE(638);
      END_STATE();
    case 94:
      if (lookahead == 'A') ADVANCE(234);
      if (lookahead == 'E') ADVANCE(651);
      if (lookahead == 'F') ADVANCE(465);
      if (lookahead == 'I') ADVANCE(420);
      if (lookahead == 'M') ADVANCE(489);
      END_STATE();
    case 95:
      if (lookahead == 'A') ADVANCE(632);
      END_STATE();
    case 96:
      if (lookahead == 'A') ADVANCE(401);
      END_STATE();
    case 97:
      if (lookahead == 'A') ADVANCE(405);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(155);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(117);
      END_STATE();
    case 100:
      if (lookahead == 'C') ADVANCE(106);
      END_STATE();
    case 101:
      if (lookahead == 'C') ADVANCE(468);
      END_STATE();
    case 102:
      if (lookahead == 'C') ADVANCE(349);
      END_STATE();
    case 103:
      if (lookahead == 'D') ADVANCE(682);
      END_STATE();
    case 104:
      if (lookahead == 'D') ADVANCE(322);
      END_STATE();
    case 105:
      if (lookahead == 'D') ADVANCE(312);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(682);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 108:
      if (lookahead == 'E') ADVANCE(159);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(547);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(442);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(185);
      if (lookahead == 'M') ADVANCE(187);
      END_STATE();
    case 112:
      if (lookahead == 'F') ADVANCE(372);
      END_STATE();
    case 113:
      if (lookahead == 'F') ADVANCE(207);
      END_STATE();
    case 114:
      if (lookahead == 'F') ADVANCE(207);
      if (lookahead == 'R') ADVANCE(267);
      END_STATE();
    case 115:
      if (lookahead == 'F') ADVANCE(497);
      END_STATE();
    case 116:
      if (lookahead == 'G') ADVANCE(208);
      if (lookahead == 'R') ADVANCE(263);
      END_STATE();
    case 117:
      if (lookahead == 'H') ADVANCE(682);
      END_STATE();
    case 118:
      if (lookahead == 'H') ADVANCE(301);
      if (lookahead == 'T') ADVANCE(377);
      END_STATE();
    case 119:
      if (lookahead == 'I') ADVANCE(135);
      END_STATE();
    case 120:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 121:
      if (lookahead == 'I') ADVANCE(432);
      END_STATE();
    case 122:
      if (lookahead == 'K') ADVANCE(748);
      END_STATE();
    case 123:
      if (lookahead == 'L') ADVANCE(108);
      END_STATE();
    case 124:
      if (lookahead == 'L') ADVANCE(285);
      END_STATE();
    case 125:
      if (lookahead == 'L') ADVANCE(190);
      END_STATE();
    case 126:
      if (lookahead == 'L') ADVANCE(478);
      END_STATE();
    case 127:
      if (lookahead == 'M') ADVANCE(320);
      END_STATE();
    case 128:
      if (lookahead == 'N') ADVANCE(130);
      END_STATE();
    case 129:
      if (lookahead == 'N') ADVANCE(149);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(107);
      END_STATE();
    case 131:
      if (lookahead == 'N') ADVANCE(500);
      END_STATE();
    case 132:
      if (lookahead == 'N') ADVANCE(281);
      END_STATE();
    case 133:
      if (lookahead == 'N') ADVANCE(501);
      END_STATE();
    case 134:
      if (lookahead == 'N') ADVANCE(502);
      END_STATE();
    case 135:
      if (lookahead == 'O') ADVANCE(129);
      END_STATE();
    case 136:
      if (lookahead == 'O') ADVANCE(582);
      END_STATE();
    case 137:
      if (lookahead == 'P') ADVANCE(37);
      END_STATE();
    case 138:
      if (lookahead == 'P') ADVANCE(539);
      END_STATE();
    case 139:
      if (lookahead == 'P') ADVANCE(543);
      END_STATE();
    case 140:
      if (lookahead == 'P') ADVANCE(332);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 142:
      if (lookahead == 'R') ADVANCE(263);
      END_STATE();
    case 143:
      if (lookahead == 'R') ADVANCE(267);
      END_STATE();
    case 144:
      if (lookahead == 'R') ADVANCE(328);
      END_STATE();
    case 145:
      if (lookahead == 'R') ADVANCE(331);
      END_STATE();
    case 146:
      if (lookahead == 'R') ADVANCE(302);
      END_STATE();
    case 147:
      if (lookahead == 'R') ADVANCE(324);
      END_STATE();
    case 148:
      if (lookahead == 'S') ADVANCE(155);
      END_STATE();
    case 149:
      if (lookahead == 'S') ADVANCE(682);
      END_STATE();
    case 150:
      if (lookahead == 'S') ADVANCE(618);
      END_STATE();
    case 151:
      if (lookahead == 'S') ADVANCE(201);
      END_STATE();
    case 152:
      if (lookahead == 'S') ADVANCE(296);
      END_STATE();
    case 153:
      if (lookahead == 'S') ADVANCE(612);
      END_STATE();
    case 154:
      if (lookahead == 'S') ADVANCE(639);
      END_STATE();
    case 155:
      if (lookahead == 'T') ADVANCE(682);
      END_STATE();
    case 156:
      if (lookahead == 'T') ADVANCE(119);
      END_STATE();
    case 157:
      if (lookahead == 'T') ADVANCE(99);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(137);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(106);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(657);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(158);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(488);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(377);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(495);
      END_STATE();
    case 165:
      if (lookahead == 'U') ADVANCE(563);
      END_STATE();
    case 166:
      if (lookahead == 'U') ADVANCE(441);
      END_STATE();
    case 167:
      if (lookahead == 'V') ADVANCE(289);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(535);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'p') ADVANCE(532);
      if (lookahead == 's') ADVANCE(626);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(575);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(584);
      if (lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(653);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(644);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(528);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(587);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(534);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(554);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(589);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(458);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(655);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(603);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(615);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(609);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(622);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 214:
      if (lookahead == 'b') ADVANCE(359);
      END_STATE();
    case 215:
      if (lookahead == 'b') ADVANCE(400);
      END_STATE();
    case 216:
      if (lookahead == 'b') ADVANCE(414);
      END_STATE();
    case 217:
      if (lookahead == 'b') ADVANCE(416);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 'l') ADVANCE(530);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(653);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(576);
      END_STATE();
    case 224:
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == 'x') ADVANCE(654);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(473);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(589);
      END_STATE();
    case 230:
      if (lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 231:
      if (lookahead == 'c') ADVANCE(315);
      END_STATE();
    case 232:
      if (lookahead == 'c') ADVANCE(469);
      END_STATE();
    case 233:
      if (lookahead == 'c') ADVANCE(619);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 235:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(624);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(748);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(572);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(375);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(392);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(293);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(305);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(656);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(300);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(298);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(383);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'w') ADVANCE(364);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(848);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(640);
      if (lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(578);
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(641);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 333:
      if (lookahead == 'f') ADVANCE(335);
      END_STATE();
    case 334:
      if (lookahead == 'f') ADVANCE(404);
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 335:
      if (lookahead == 'f') ADVANCE(362);
      END_STATE();
    case 336:
      if (lookahead == 'f') ADVANCE(368);
      END_STATE();
    case 337:
      if (lookahead == 'f') ADVANCE(379);
      END_STATE();
    case 338:
      if (lookahead == 'f') ADVANCE(482);
      END_STATE();
    case 339:
      if (lookahead == 'g') ADVANCE(748);
      END_STATE();
    case 340:
      if (lookahead == 'g') ADVANCE(538);
      END_STATE();
    case 341:
      if (lookahead == 'g') ADVANCE(259);
      END_STATE();
    case 342:
      if (lookahead == 'g') ADVANCE(579);
      END_STATE();
    case 343:
      if (lookahead == 'g') ADVANCE(499);
      END_STATE();
    case 344:
      if (lookahead == 'g') ADVANCE(294);
      END_STATE();
    case 345:
      if (lookahead == 'g') ADVANCE(202);
      END_STATE();
    case 346:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 347:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 348:
      if (lookahead == 'h') ADVANCE(498);
      END_STATE();
    case 349:
      if (lookahead == 'h') ADVANCE(503);
      END_STATE();
    case 350:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 351:
      if (lookahead == 'h') ADVANCE(303);
      END_STATE();
    case 352:
      if (lookahead == 'h') ADVANCE(472);
      END_STATE();
    case 353:
      if (lookahead == 'h') ADVANCE(291);
      END_STATE();
    case 354:
      if (lookahead == 'h') ADVANCE(492);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(461);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(660);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 364:
      if (lookahead == 'i') ADVANCE(581);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 366:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 367:
      if (lookahead == 'i') ADVANCE(567);
      END_STATE();
    case 368:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 369:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 370:
      if (lookahead == 'i') ADVANCE(434);
      END_STATE();
    case 371:
      if (lookahead == 'i') ADVANCE(580);
      END_STATE();
    case 372:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 373:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 374:
      if (lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 375:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 376:
      if (lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 377:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 378:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 379:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 380:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 381:
      if (lookahead == 'i') ADVANCE(479);
      END_STATE();
    case 382:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 383:
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 384:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 385:
      if (lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 386:
      if (lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 387:
      if (lookahead == 'i') ADVANCE(483);
      END_STATE();
    case 388:
      if (lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 389:
      if (lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 390:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 391:
      if (lookahead == 'i') ADVANCE(614);
      END_STATE();
    case 392:
      if (lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 393:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 394:
      if (lookahead == 'k') ADVANCE(269);
      END_STATE();
    case 395:
      if (lookahead == 'k') ADVANCE(73);
      END_STATE();
    case 396:
      if (lookahead == 'l') ADVANCE(564);
      END_STATE();
    case 397:
      if (lookahead == 'l') ADVANCE(653);
      END_STATE();
    case 398:
      if (lookahead == 'l') ADVANCE(487);
      if (lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 399:
      if (lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 400:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 401:
      if (lookahead == 'l') ADVANCE(569);
      END_STATE();
    case 402:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 403:
      if (lookahead == 'l') ADVANCE(557);
      END_STATE();
    case 404:
      if (lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 405:
      if (lookahead == 'l') ADVANCE(409);
      END_STATE();
    case 406:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 407:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 408:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 409:
      if (lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 410:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 411:
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 412:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 413:
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 414:
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 415:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 416:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 417:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 418:
      if (lookahead == 'm') ADVANCE(512);
      END_STATE();
    case 419:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 420:
      if (lookahead == 'm') ADVANCE(511);
      END_STATE();
    case 421:
      if (lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 420:
      if (lookahead == 'n') ADVANCE(569);
      END_STATE();
    case 421:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 422:
      if (lookahead == 'm') ADVANCE(326);
      END_STATE();
    case 423:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 424:
      if (lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 425:
      if (lookahead == 'm') ADVANCE(213);
      END_STATE();
    case 426:
      if (lookahead == 'n') ADVANCE(769);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(748);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 431:
      if (lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 432:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 433:
      if (lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 434:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 435:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 436:
      if (lookahead == 'n') ADVANCE(557);
      END_STATE();
    case 437:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 438:
      if (lookahead == 'n') ADVANCE(576);
      END_STATE();
    case 439:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 440:
      if (lookahead == 'n') ADVANCE(586);
      END_STATE();
    case 441:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 442:
      if (lookahead == 'n') ADVANCE(606);
      END_STATE();
    case 443:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 444:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 445:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 446:
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 447:
      if (lookahead == 'n') ADVANCE(594);
      END_STATE();
    case 448:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 440:
      if (lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 441:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 442:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 443:
      if (lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 444:
      if (lookahead == 'o') ADVANCE(565);
      END_STATE();
    case 445:
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 446:
      if (lookahead == 'o') ADVANCE(412);
      END_STATE();
    case 447:
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 448:
      if (lookahead == 'o') ADVANCE(429);
      END_STATE();
    case 449:
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 450:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 451:
      if (lookahead == 'n') ADVANCE(628);
      END_STATE();
    case 452:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 453:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 454:
      if (lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 455:
      if (lookahead == 'n') ADVANCE(596);
      END_STATE();
    case 456:
      if (lookahead == 'n') ADVANCE(613);
      END_STATE();
    case 451:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 452:
      if (lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 453:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 454:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 455:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 456:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 457:
      if (lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 458:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 459:
      if (lookahead == 'n') ADVANCE(658);
      END_STATE();
    case 460:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 462:
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(647);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(513);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(516);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 473:
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 474:
      if (lookahead == 'o') ADVANCE(556);
      END_STATE();
    case 475:
      if (lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 477:
      if (lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 478:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 479:
      if (lookahead == 'o') ADVANCE(443);
      END_STATE();
    case 480:
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 481:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 482:
      if (lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 483:
      if (lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 479:
      if (lookahead == 'p') ADVANCE(557);
      END_STATE();
    case 480:
      if (lookahead == 'p') ADVANCE(380);
      END_STATE();
    case 481:
      if (lookahead == 'p') ADVANCE(436);
      END_STATE();
    case 482:
      if (lookahead == 'p') ADVANCE(439);
      END_STATE();
    case 483:
      if (lookahead == 'p') ADVANCE(581);
      END_STATE();
    case 484:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 485:
      if (lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 486:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 487:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 488:
      if (lookahead == 'o') ADVANCE(481);
      END_STATE();
    case 489:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 490:
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 491:
      if (lookahead == 'o') ADVANCE(541);
      END_STATE();
    case 492:
      if (lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 493:
      if (lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 494:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 495:
      if (lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 496:
      if (lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 497:
      if (lookahead == 'o') ADVANCE(550);
      END_STATE();
    case 498:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 499:
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 500:
      if (lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 501:
      if (lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 502:
      if (lookahead == 'o') ADVANCE(604);
      END_STATE();
    case 503:
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 504:
      if (lookahead == 'o') ADVANCE(552);
      END_STATE();
    case 505:
      if (lookahead == 'p') ADVANCE(268);
      END_STATE();
    case 506:
      if (lookahead == 'p') ADVANCE(259);
      END_STATE();
    case 507:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 508:
      if (lookahead == 'p') ADVANCE(471);
      END_STATE();
    case 509:
      if (lookahead == 'p') ADVANCE(610);
      END_STATE();
    case 510:
      if (lookahead == 'p') ADVANCE(589);
      END_STATE();
    case 511:
      if (lookahead == 'p') ADVANCE(411);
      END_STATE();
    case 512:
      if (lookahead == 'p') ADVANCE(491);
      END_STATE();
    case 513:
      if (lookahead == 'p') ADVANCE(474);
      END_STATE();
    case 514:
      if (lookahead == 'p') ADVANCE(513);
      END_STATE();
    case 515:
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 514:
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 515:
      if (lookahead == 'r') ADVANCE(610);
      END_STATE();
    case 516:
      if (lookahead == 'p') ADVANCE(504);
      END_STATE();
    case 517:
      if (lookahead == 'p') ADVANCE(516);
      END_STATE();
    case 518:
      if (lookahead == 'q') ADVANCE(637);
      END_STATE();
    case 519:
      if (lookahead == 'q') ADVANCE(633);
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 520:
      if (lookahead == 'q') ADVANCE(635);
      END_STATE();
    case 521:
      if (lookahead == 'q') ADVANCE(636);
      END_STATE();
    case 522:
      if (lookahead == 'r') ADVANCE(652);
      END_STATE();
    case 523:
      if (lookahead == 'r') ADVANCE(748);
      END_STATE();
    case 524:
      if (lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 525:
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(430);
      END_STATE();
    case 526:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 527:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 528:
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 529:
      if (lookahead == 'r') ADVANCE(643);
      END_STATE();
    case 530:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 531:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 532:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 530:
      if (lookahead == 's') ADVANCE(535);
      END_STATE();
    case 531:
      if (lookahead == 's') ADVANCE(542);
      END_STATE();
    case 532:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 533:
      if (lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 534:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 535:
      if (lookahead == 'r') ADVANCE(607);
      if (lookahead == 'y') ADVANCE(398);
      END_STATE();
    case 536:
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 537:
      if (lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 538:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 539:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 540:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 541:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 542:
      if (lookahead == 'r') ADVANCE(357);
      END_STATE();
    case 543:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 544:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 545:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 546:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 547:
      if (lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 548:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 549:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 550:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 551:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 552:
      if (lookahead == 'r') ADVANCE(589);
      END_STATE();
    case 553:
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 554:
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 555:
      if (lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 556:
      if (lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 557:
      if (lookahead == 's') ADVANCE(748);
      END_STATE();
    case 558:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 559:
      if (lookahead == 's') ADVANCE(625);
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 560:
      if (lookahead == 's') ADVANCE(566);
      END_STATE();
    case 561:
      if (lookahead == 's') ADVANCE(573);
      END_STATE();
    case 562:
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 563:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 564:
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 565:
      if (lookahead == 's') ADVANCE(588);
      END_STATE();
    case 566:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 567:
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 568:
      if (lookahead == 's') ADVANCE(593);
      END_STATE();
    case 569:
      if (lookahead == 's') ADVANCE(486);
      END_STATE();
    case 570:
      if (lookahead == 's') ADVANCE(485);
      END_STATE();
    case 571:
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 572:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 573:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 574:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 575:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 576:
      if (lookahead == 't') ADVANCE(748);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(645);
      END_STATE();
    case 579:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(653);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 582:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 565:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 566:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 567:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 568:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 570:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 571:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 572:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 573:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 574:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 575:
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == 'w') ADVANCE(526);
      END_STATE();
    case 576:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 579:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 582:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(629);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 594:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 595:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 594:
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 595:
      if (lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 597:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 598:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 599:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 600:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 601:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 602:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 603:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 604:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 605:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 606:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 607:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 608:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 605:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 606:
      if (lookahead == 'u') ADVANCE(348);
      END_STATE();
    case 607:
      if (lookahead == 'u') ADVANCE(487);
      END_STATE();
    case 608:
      if (lookahead == 'v') ADVANCE(342);
      END_STATE();
    case 609:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 611:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 612:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 613:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 614:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 615:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 616:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 617:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 618:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 619:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 620:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 615:
      if (lookahead == 'w') ADVANCE(239);
      END_STATE();
    case 616:
      if (lookahead == 'w') ADVANCE(147);
      END_STATE();
    case 617:
      if (lookahead == 'x') ADVANCE(387);
      END_STATE();
    case 618:
      if (lookahead == 'x') ADVANCE(621);
      END_STATE();
    case 619:
      if (lookahead == 'x') ADVANCE(475);
      END_STATE();
    case 620:
      if (lookahead == 'x') ADVANCE(571);
      END_STATE();
    case 621:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 622:
      if (lookahead == 't') ADVANCE(387);
      END_STATE();
    case 623:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 624:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 625:
      if (lookahead == 'u') ADVANCE(333);
      END_STATE();
    case 626:
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 627:
      if (lookahead == 'u') ADVANCE(430);
      END_STATE();
    case 628:
      if (lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 629:
      if (lookahead == 'u') ADVANCE(557);
      END_STATE();
    case 630:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 631:
      if (lookahead == 'u') ADVANCE(576);
      END_STATE();
    case 632:
      if (lookahead == 'u') ADVANCE(583);
      END_STATE();
    case 633:
      if (lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 627:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 628:
      if (lookahead == 'z') ADVANCE(239);
      END_STATE();
    case 629:
      if (lookahead == '{') ADVANCE(674);
      END_STATE();
    case 630:
      if (lookahead == '}') ADVANCE(675);
      END_STATE();
    case 631:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 632:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      END_STATE();
    case 633:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(660);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(650);
      END_STATE();
    case 634:
      if (lookahead == 'u') ADVANCE(605);
      if (lookahead == 'v') ADVANCE(193);
      END_STATE();
    case 635:
      if (lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 636:
      if (lookahead == 'u') ADVANCE(319);
      END_STATE();
    case 637:
      if (lookahead == 'u') ADVANCE(380);
      END_STATE();
    case 638:
      if (lookahead == 'u') ADVANCE(617);
      END_STATE();
    case 639:
      if (lookahead == 'u') ADVANCE(517);
      END_STATE();
    case 640:
      if (lookahead == 'v') ADVANCE(311);
      END_STATE();
    case 641:
      if (lookahead == 'v') ADVANCE(373);
      END_STATE();
    case 642:
      if (lookahead == 'v') ADVANCE(309);
      END_STATE();
    case 643:
      if (lookahead == 'v') ADVANCE(317);
      END_STATE();
    case 644:
      if (lookahead == 'v') ADVANCE(210);
      END_STATE();
    case 645:
      if (lookahead == 'w') ADVANCE(467);
      END_STATE();
    case 646:
      if (lookahead == 'w') ADVANCE(199);
      END_STATE();
    case 647:
      if (lookahead == 'w') ADVANCE(269);
      END_STATE();
    case 648:
      if (lookahead == 'w') ADVANCE(176);
      END_STATE();
    case 649:
      if (lookahead == 'x') ADVANCE(505);
      END_STATE();
    case 650:
      if (lookahead == 'x') ADVANCE(653);
      END_STATE();
    case 651:
      if (lookahead == 'x') ADVANCE(599);
      END_STATE();
    case 652:
      if (lookahead == 'y') ADVANCE(766);
      END_STATE();
    case 653:
      if (lookahead == 'y') ADVANCE(748);
      END_STATE();
    case 654:
      if (lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 655:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 656:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 657:
      if (lookahead == 'y') ADVANCE(506);
      END_STATE();
    case 658:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 659:
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 660:
      if (lookahead == 'z') ADVANCE(269);
      END_STATE();
    case 661:
      if (lookahead == '{') ADVANCE(738);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(752);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 476, lookahead)) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(733);
      END_STATE();
    case 662:
      if (lookahead == '}') ADVANCE(754);
      END_STATE();
    case 663:
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(665);
      END_STATE();
    case 664:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(747);
      END_STATE();
    case 665:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      END_STATE();
    case 666:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(686);
      END_STATE();
    case 667:
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 668:
      if (eof) ADVANCE(675);
      ADVANCE_MAP(
        0, 733,
        '\n', 849,
        '\r', 850,
        '#', 677,
        '&', 773,
        '/', 737,
        '<', 755,
        '>', 758,
        '?', 731,
        '@', 761,
        'C', 714,
        'D', 703,
        'G', 704,
        'H', 705,
        'L', 711,
        'O', 716,
        'P', 697,
        'T', 720,
        '{', 738,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(746);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 476, lookahead)) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(733);
      END_STATE();
    case 669:
      if (eof) ADVANCE(675);
      ADVANCE_MAP(
        0, 733,
        '\n', 849,
        '\r', 850,
        '#', 677,
        '/', 737,
        '<', 757,
        '>', 758,
        '?', 731,
        '@', 761,
        'C', 714,
        'D', 703,
        'G', 704,
        'H', 705,
        'L', 711,
        'O', 716,
        'P', 697,
        'T', 720,
        '[', 765,
        'm', 726,
        'q', 727,
        '{', 764,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(746);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 476, lookahead)) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(733);
      END_STATE();
    case 670:
      if (eof) ADVANCE(675);
      ADVANCE_MAP(
        0, 733,
        '\n', 849,
        '\r', 850,
        '#', 677,
        '/', 737,
        '<', 757,
        '>', 758,
        '?', 731,
        '@', 761,
        'C', 715,
        'D', 706,
        'G', 707,
        'H', 708,
        'L', 712,
        'O', 718,
        'P', 699,
        'T', 721,
        '[', 765,
        'm', 724,
        'q', 725,
        '{', 764,
        '-', 740,
        '_', 740,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(729);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 476, lookahead)) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(733);
      END_STATE();
    case 671:
      if (eof) ADVANCE(675);
      ADVANCE_MAP(
        0, 733,
        '\n', 849,
        '\r', 850,
        '#', 677,
        '/', 737,
        '<', 757,
        '>', 758,
        '?', 731,
        '@', 761,
        'C', 715,
        'D', 706,
        'G', 707,
        'H', 709,
        'L', 712,
        'O', 718,
        'P', 699,
        'T', 721,
        '[', 765,
        'm', 724,
        'q', 725,
        '{', 764,
        '-', 740,
        '_', 740,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(729);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 476, lookahead)) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(733);
      END_STATE();
    case 672:
      if (eof) ADVANCE(675);
      ADVANCE_MAP(
        0, 733,
        '\n', 849,
        '\r', 850,
        '#', 677,
        '/', 737,
        '<', 755,
        '>', 758,
        '?', 731,
        '@', 761,
        'C', 714,
        'D', 703,
        'G', 704,
        'H', 705,
        'L', 711,
        'O', 716,
        'P', 697,
        'T', 720,
        '{', 738,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(746);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 476, lookahead)) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(733);
      END_STATE();
    case 673:
      if (eof) ADVANCE(675);
      ADVANCE_MAP(
        0, 733,
        '\n', 849,
        '\r', 850,
        '#', 677,
        '/', 737,
        '<', 755,
        '?', 731,
        '@', 761,
        'C', 714,
        'D', 703,
        'G', 704,
        'H', 705,
        'L', 711,
        'O', 716,
        'P', 697,
        'T', 720,
        '{', 738,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(746);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 476, lookahead)) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(733);
      END_STATE();
    case 674:
      if (eof) ADVANCE(675);
      ADVANCE_MAP(
        0, 680,
        '\n', 679,
        '\r', 680,
        '#', 678,
        '/', 734,
        '<', 756,
        '>', 758,
        '?', 732,
        '@', 762,
        'C', 693,
        'D', 689,
        'G', 690,
        'H', 691,
        'L', 692,
        'O', 694,
        'P', 688,
        'T', 695,
        '{', 735,
        0x2028, 30,
        0x2029, 30,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(744);
      if (set_contains(aux_sym__target_url_line_token1_character_set_1, 476, lookahead)) ADVANCE(696);
      if (lookahead != 0) ADVANCE(736);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(85);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(5);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_http_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(686);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'A') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(23);
      if (lookahead == 'U') ADVANCE(25);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'E') ADVANCE(18);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'E') ADVANCE(25);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'E') ADVANCE(7);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'I') ADVANCE(23);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'O') ADVANCE(19);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'P') ADVANCE(26);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == 'R') ADVANCE(8);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'A') ADVANCE(157);
      if (lookahead == 'O') ADVANCE(148);
      if (lookahead == 'U') ADVANCE(155);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'A') ADVANCE(817);
      if (lookahead == 'O') ADVANCE(810);
      if (lookahead == 'U') ADVANCE(814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'A') ADVANCE(821);
      if (lookahead == 'O') ADVANCE(812);
      if (lookahead == 'U') ADVANCE(818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(798);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(776);
      if (lookahead == 'T') ADVANCE(815);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(123);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(155);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(91);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(799);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(777);
      if (lookahead == 'T') ADVANCE(819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'E') ADVANCE(777);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'I') ADVANCE(810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'I') ADVANCE(148);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'I') ADVANCE(812);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'O') ADVANCE(800);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'O') ADVANCE(803);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'P') ADVANCE(156);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'P') ADVANCE(816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'P') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'R') ADVANCE(778);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'R') ADVANCE(92);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'R') ADVANCE(779);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'u') ADVANCE(836);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'u') ADVANCE(826);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'u') ADVANCE(838);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'u') ADVANCE(827);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'u') ADVANCE(574);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__target_url_line_token1);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '/') ADVANCE(676);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == '{') ADVANCE(753);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '/') ADVANCE(676);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '{') ADVANCE(753);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__target_url_line_token2);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_target_url_token1);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_target_url_token1);
      if (lookahead == '\n') ADVANCE(742);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_target_url_token2);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(744);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_target_url_token2);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(746);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(745);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_target_url_token2);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(746);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_status_text);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(752);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(751);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(752);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_LT);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(763);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_AT);
      if ((!eof && lookahead == 00)) ADVANCE(680);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '\r') ADVANCE(680);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(753);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_query);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_query);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_mutation);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_mutation);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_mutation);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '/') ADVANCE(666);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(786);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(787);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(784);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(785);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(794);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(795);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(788);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'D') ADVANCE(684);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'D') ADVANCE(685);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(684);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(685);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(780);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(782);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(822);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(823);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(684);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(685);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'I') ADVANCE(806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'I') ADVANCE(807);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(792);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(793);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(802);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(811);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(805);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(813);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(791);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(801);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(804);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(774);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(775);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(684);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(685);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(684);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(796);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(685);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(809);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(797);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(788);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'a') ADVANCE(837);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'a') ADVANCE(839);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'e') ADVANCE(834);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'e') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'i') ADVANCE(832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'i') ADVANCE(833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'n') ADVANCE(770);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'n') ADVANCE(771);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'o') ADVANCE(830);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'o') ADVANCE(831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'r') ADVANCE(840);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'r') ADVANCE(841);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 't') ADVANCE(824);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 't') ADVANCE(828);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 't') ADVANCE(825);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 't') ADVANCE(829);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'y') ADVANCE(767);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'y') ADVANCE(768);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(843);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(844);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(727);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(727);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(712);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(719);
      if (lookahead != 0) ADVANCE(718);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(849);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 673},
  [2] = {.lex_state = 670},
  [3] = {.lex_state = 670},
  [4] = {.lex_state = 670},
  [5] = {.lex_state = 670},
  [6] = {.lex_state = 670},
  [7] = {.lex_state = 670},
  [8] = {.lex_state = 670},
  [9] = {.lex_state = 670},
  [10] = {.lex_state = 671},
  [11] = {.lex_state = 671},
  [12] = {.lex_state = 671},
  [13] = {.lex_state = 671},
  [14] = {.lex_state = 671},
  [15] = {.lex_state = 671},
  [16] = {.lex_state = 671},
  [17] = {.lex_state = 671},
  [18] = {.lex_state = 671},
  [19] = {.lex_state = 671},
  [20] = {.lex_state = 671},
  [21] = {.lex_state = 671},
  [22] = {.lex_state = 671},
  [23] = {.lex_state = 671},
  [24] = {.lex_state = 671},
  [25] = {.lex_state = 671},
  [26] = {.lex_state = 671},
  [27] = {.lex_state = 671},
  [28] = {.lex_state = 671},
  [29] = {.lex_state = 671},
  [30] = {.lex_state = 669},
  [31] = {.lex_state = 669},
  [32] = {.lex_state = 669},
  [33] = {.lex_state = 669},
  [34] = {.lex_state = 669},
  [35] = {.lex_state = 669},
  [36] = {.lex_state = 669},
  [37] = {.lex_state = 669},
  [38] = {.lex_state = 669},
  [39] = {.lex_state = 669},
  [40] = {.lex_state = 669},
  [41] = {.lex_state = 669},
  [42] = {.lex_state = 669},
  [43] = {.lex_state = 669},
  [44] = {.lex_state = 669},
  [45] = {.lex_state = 669},
  [46] = {.lex_state = 669},
  [47] = {.lex_state = 669},
  [48] = {.lex_state = 669},
  [49] = {.lex_state = 669},
  [50] = {.lex_state = 669},
  [51] = {.lex_state = 669},
  [52] = {.lex_state = 669},
  [53] = {.lex_state = 669},
  [54] = {.lex_state = 673},
  [55] = {.lex_state = 673},
  [56] = {.lex_state = 671},
  [57] = {.lex_state = 669},
  [58] = {.lex_state = 671},
  [59] = {.lex_state = 671},
  [60] = {.lex_state = 671},
  [61] = {.lex_state = 669},
  [62] = {.lex_state = 674},
  [63] = {.lex_state = 674},
  [64] = {.lex_state = 674},
  [65] = {.lex_state = 674},
  [66] = {.lex_state = 672},
  [67] = {.lex_state = 672},
  [68] = {.lex_state = 672},
  [69] = {.lex_state = 672},
  [70] = {.lex_state = 672},
  [71] = {.lex_state = 672},
  [72] = {.lex_state = 672},
  [73] = {.lex_state = 672},
  [74] = {.lex_state = 672},
  [75] = {.lex_state = 672},
  [76] = {.lex_state = 672},
  [77] = {.lex_state = 672},
  [78] = {.lex_state = 672},
  [79] = {.lex_state = 672},
  [80] = {.lex_state = 672},
  [81] = {.lex_state = 672},
  [82] = {.lex_state = 672},
  [83] = {.lex_state = 672},
  [84] = {.lex_state = 668},
  [85] = {.lex_state = 672},
  [86] = {.lex_state = 672},
  [87] = {.lex_state = 672},
  [88] = {.lex_state = 672},
  [89] = {.lex_state = 672},
  [90] = {.lex_state = 672},
  [91] = {.lex_state = 672},
  [92] = {.lex_state = 672},
  [93] = {.lex_state = 668},
  [94] = {.lex_state = 672},
  [95] = {.lex_state = 672},
  [96] = {.lex_state = 672},
  [97] = {.lex_state = 672},
  [98] = {.lex_state = 673},
  [99] = {.lex_state = 673},
  [100] = {.lex_state = 673},
  [101] = {.lex_state = 673},
  [102] = {.lex_state = 673},
  [103] = {.lex_state = 673},
  [104] = {.lex_state = 673},
  [105] = {.lex_state = 673},
  [106] = {.lex_state = 673},
  [107] = {.lex_state = 673},
  [108] = {.lex_state = 673},
  [109] = {.lex_state = 673},
  [110] = {.lex_state = 673},
  [111] = {.lex_state = 673},
  [112] = {.lex_state = 673},
  [113] = {.lex_state = 673},
  [114] = {.lex_state = 673},
  [115] = {.lex_state = 673},
  [116] = {.lex_state = 673},
  [117] = {.lex_state = 673},
  [118] = {.lex_state = 673},
  [119] = {.lex_state = 673},
  [120] = {.lex_state = 673},
  [121] = {.lex_state = 673},
  [122] = {.lex_state = 673},
  [123] = {.lex_state = 673},
  [124] = {.lex_state = 673},
  [125] = {.lex_state = 673},
  [126] = {.lex_state = 673},
  [127] = {.lex_state = 673},
  [128] = {.lex_state = 673},
  [129] = {.lex_state = 673},
  [130] = {.lex_state = 673},
  [131] = {.lex_state = 673},
  [132] = {.lex_state = 673},
  [133] = {.lex_state = 673},
  [134] = {.lex_state = 673},
  [135] = {.lex_state = 673},
  [136] = {.lex_state = 673},
  [137] = {.lex_state = 673},
  [138] = {.lex_state = 673},
  [139] = {.lex_state = 673},
  [140] = {.lex_state = 673},
  [141] = {.lex_state = 673},
  [142] = {.lex_state = 673},
  [143] = {.lex_state = 673},
  [144] = {.lex_state = 673},
  [145] = {.lex_state = 673},
  [146] = {.lex_state = 673},
  [147] = {.lex_state = 673},
  [148] = {.lex_state = 673},
  [149] = {.lex_state = 673},
  [150] = {.lex_state = 673},
  [151] = {.lex_state = 673},
  [152] = {.lex_state = 673},
  [153] = {.lex_state = 673},
  [154] = {.lex_state = 673},
  [155] = {.lex_state = 673},
  [156] = {.lex_state = 673},
  [157] = {.lex_state = 673},
  [158] = {.lex_state = 673},
  [159] = {.lex_state = 673},
  [160] = {.lex_state = 673},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 90},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 661},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 661},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 31},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 31},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 90},
  [201] = {.lex_state = 31},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 31},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 31},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 31},
  [209] = {.lex_state = 31},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 31},
  [212] = {.lex_state = 31},
  [213] = {.lex_state = 31},
  [214] = {.lex_state = 30},
  [215] = {.lex_state = 31},
  [216] = {.lex_state = 32},
  [217] = {.lex_state = 31},
  [218] = {.lex_state = 31},
  [219] = {.lex_state = 31},
  [220] = {.lex_state = 32},
  [221] = {.lex_state = 32},
  [222] = {.lex_state = 31},
  [223] = {.lex_state = 30},
  [224] = {.lex_state = 31},
  [225] = {.lex_state = 31},
  [226] = {.lex_state = 31},
  [227] = {.lex_state = 31},
  [228] = {.lex_state = 31},
  [229] = {.lex_state = 31},
  [230] = {.lex_state = 31},
  [231] = {.lex_state = 30},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 673},
  [234] = {.lex_state = 31},
  [235] = {.lex_state = 31},
  [236] = {.lex_state = 31},
  [237] = {.lex_state = 32},
  [238] = {.lex_state = 31},
  [239] = {.lex_state = 31},
  [240] = {.lex_state = 31},
  [241] = {.lex_state = 673},
  [242] = {.lex_state = 31},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 31},
  [245] = {.lex_state = 670},
  [246] = {.lex_state = 667},
  [247] = {.lex_state = 31},
  [248] = {.lex_state = 31},
  [249] = {.lex_state = 673},
  [250] = {.lex_state = 31},
  [251] = {.lex_state = 667},
  [252] = {.lex_state = 673},
  [253] = {.lex_state = 32},
  [254] = {.lex_state = 663},
  [255] = {.lex_state = 30},
  [256] = {.lex_state = 31},
  [257] = {.lex_state = 31},
  [258] = {.lex_state = 670},
  [259] = {.lex_state = 673},
  [260] = {.lex_state = 31},
  [261] = {.lex_state = 31},
  [262] = {.lex_state = 673},
  [263] = {.lex_state = 31},
  [264] = {.lex_state = 31},
  [265] = {.lex_state = 670},
  [266] = {.lex_state = 670},
  [267] = {.lex_state = 31},
  [268] = {.lex_state = 31},
  [269] = {.lex_state = 30},
  [270] = {.lex_state = 31},
  [271] = {.lex_state = 31},
  [272] = {.lex_state = 673},
  [273] = {.lex_state = 31},
  [274] = {.lex_state = 31},
  [275] = {.lex_state = 31},
  [276] = {.lex_state = 31},
  [277] = {.lex_state = 31},
  [278] = {.lex_state = 31},
  [279] = {.lex_state = 31},
  [280] = {.lex_state = 673},
  [281] = {.lex_state = 31},
  [282] = {.lex_state = 31},
  [283] = {.lex_state = 31},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 31},
  [287] = {.lex_state = 32},
  [288] = {.lex_state = 31},
  [289] = {.lex_state = 31},
  [290] = {.lex_state = 31},
  [291] = {.lex_state = 31},
  [292] = {.lex_state = 673},
  [293] = {.lex_state = 31},
  [294] = {.lex_state = 31},
  [295] = {.lex_state = 31},
  [296] = {.lex_state = 673},
  [297] = {.lex_state = 31},
  [298] = {.lex_state = 31},
  [299] = {.lex_state = 31},
  [300] = {.lex_state = 31},
  [301] = {.lex_state = 667},
  [302] = {.lex_state = 31},
  [303] = {.lex_state = 667},
  [304] = {.lex_state = 667},
  [305] = {.lex_state = 667},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
    [sym_http_version] = ACTIONS(1),
    [aux_sym__target_url_line_token1] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym__target_url_line_token2] = ACTIONS(1),
    [aux_sym_target_url_token1] = ACTIONS(1),
    [aux_sym_target_url_token2] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_header_token1] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_xml_body_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_mutation] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_header_entity] = ACTIONS(1),
    [aux_sym__blank_line_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(243),
    [sym_comment] = STATE(54),
    [sym_request_separator] = STATE(54),
    [aux_sym__target_url_line] = STATE(162),
    [sym_target_url] = STATE(230),
    [sym_request] = STATE(54),
    [sym_variable] = STATE(162),
    [sym_pre_request_script] = STATE(167),
    [sym_variable_declaration] = STATE(54),
    [sym__blank_line] = STATE(54),
    [aux_sym_document_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(7),
    [sym_method] = ACTIONS(9),
    [aux_sym__target_url_line_token1] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(13),
    [aux_sym__target_url_line_token2] = ACTIONS(11),
    [aux_sym_target_url_token2] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym__blank_line_token1] = ACTIONS(23),
  },
  [2] = {
    [sym_response] = STATE(247),
    [sym_query_param] = STATE(211),
    [sym_header] = STATE(15),
    [sym_variable] = STATE(161),
    [sym_res_handler_script] = STATE(118),
    [sym_xml_body] = STATE(69),
    [sym_json_body] = STATE(69),
    [sym_graphql_body] = STATE(69),
    [sym_external_body] = STATE(69),
    [sym_form_data] = STATE(69),
    [sym_value] = STATE(206),
    [sym__blank_line] = STATE(53),
    [aux_sym_request_repeat1] = STATE(15),
    [aux_sym_request_repeat2] = STATE(53),
    [aux_sym_value_repeat1] = STATE(161),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_comment_token1] = ACTIONS(27),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(25),
    [sym_method] = ACTIONS(27),
    [sym_http_version] = ACTIONS(29),
    [aux_sym__target_url_line_token1] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(25),
    [aux_sym__target_url_line_token2] = ACTIONS(31),
    [aux_sym_target_url_token2] = ACTIONS(33),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(25),
    [aux_sym_xml_body_token1] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_query] = ACTIONS(47),
    [anon_sym_mutation] = ACTIONS(47),
    [sym_header_entity] = ACTIONS(49),
    [aux_sym__blank_line_token1] = ACTIONS(51),
  },
  [3] = {
    [sym_response] = STATE(267),
    [sym_query_param] = STATE(211),
    [sym_header] = STATE(13),
    [sym_variable] = STATE(161),
    [sym_res_handler_script] = STATE(109),
    [sym_xml_body] = STATE(73),
    [sym_json_body] = STATE(73),
    [sym_graphql_body] = STATE(73),
    [sym_external_body] = STATE(73),
    [sym_form_data] = STATE(73),
    [sym_value] = STATE(206),
    [sym__blank_line] = STATE(46),
    [aux_sym_request_repeat1] = STATE(13),
    [aux_sym_request_repeat2] = STATE(46),
    [aux_sym_value_repeat1] = STATE(161),
    [ts_builtin_sym_end] = ACTIONS(53),
    [aux_sym_comment_token1] = ACTIONS(55),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(53),
    [sym_method] = ACTIONS(55),
    [sym_http_version] = ACTIONS(29),
    [aux_sym__target_url_line_token1] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(53),
    [aux_sym__target_url_line_token2] = ACTIONS(31),
    [aux_sym_target_url_token2] = ACTIONS(33),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(53),
    [aux_sym_xml_body_token1] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_query] = ACTIONS(47),
    [anon_sym_mutation] = ACTIONS(47),
    [sym_header_entity] = ACTIONS(49),
    [aux_sym__blank_line_token1] = ACTIONS(57),
  },
  [4] = {
    [sym_response] = STATE(244),
    [sym_query_param] = STATE(211),
    [sym_header] = STATE(12),
    [sym_variable] = STATE(161),
    [sym_res_handler_script] = STATE(107),
    [sym_xml_body] = STATE(95),
    [sym_json_body] = STATE(95),
    [sym_graphql_body] = STATE(95),
    [sym_external_body] = STATE(95),
    [sym_form_data] = STATE(95),
    [sym_value] = STATE(206),
    [sym__blank_line] = STATE(43),
    [aux_sym_request_repeat1] = STATE(12),
    [aux_sym_request_repeat2] = STATE(43),
    [aux_sym_value_repeat1] = STATE(161),
    [ts_builtin_sym_end] = ACTIONS(59),
    [aux_sym_comment_token1] = ACTIONS(61),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(59),
    [sym_method] = ACTIONS(61),
    [sym_http_version] = ACTIONS(29),
    [aux_sym__target_url_line_token1] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(59),
    [aux_sym__target_url_line_token2] = ACTIONS(31),
    [aux_sym_target_url_token2] = ACTIONS(33),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(59),
    [aux_sym_xml_body_token1] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_query] = ACTIONS(47),
    [anon_sym_mutation] = ACTIONS(47),
    [sym_header_entity] = ACTIONS(49),
    [aux_sym__blank_line_token1] = ACTIONS(63),
  },
  [5] = {
    [sym_response] = STATE(263),
    [sym_query_param] = STATE(211),
    [sym_header] = STATE(16),
    [sym_variable] = STATE(161),
    [sym_res_handler_script] = STATE(124),
    [sym_xml_body] = STATE(87),
    [sym_json_body] = STATE(87),
    [sym_graphql_body] = STATE(87),
    [sym_external_body] = STATE(87),
    [sym_form_data] = STATE(87),
    [sym_value] = STATE(206),
    [sym__blank_line] = STATE(52),
    [aux_sym_request_repeat1] = STATE(16),
    [aux_sym_request_repeat2] = STATE(52),
    [aux_sym_value_repeat1] = STATE(161),
    [ts_builtin_sym_end] = ACTIONS(65),
    [aux_sym_comment_token1] = ACTIONS(67),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(65),
    [sym_method] = ACTIONS(67),
    [sym_http_version] = ACTIONS(29),
    [aux_sym__target_url_line_token1] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(65),
    [aux_sym__target_url_line_token2] = ACTIONS(31),
    [aux_sym_target_url_token2] = ACTIONS(33),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(65),
    [aux_sym_xml_body_token1] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_query] = ACTIONS(47),
    [anon_sym_mutation] = ACTIONS(47),
    [sym_header_entity] = ACTIONS(49),
    [aux_sym__blank_line_token1] = ACTIONS(69),
  },
  [6] = {
    [sym_response] = STATE(288),
    [sym_query_param] = STATE(211),
    [sym_header] = STATE(25),
    [sym_variable] = STATE(161),
    [sym_res_handler_script] = STATE(102),
    [sym_xml_body] = STATE(91),
    [sym_json_body] = STATE(91),
    [sym_graphql_body] = STATE(91),
    [sym_external_body] = STATE(91),
    [sym_form_data] = STATE(91),
    [sym_value] = STATE(206),
    [sym__blank_line] = STATE(36),
    [aux_sym_request_repeat1] = STATE(25),
    [aux_sym_request_repeat2] = STATE(36),
    [aux_sym_value_repeat1] = STATE(161),
    [ts_builtin_sym_end] = ACTIONS(71),
    [aux_sym_comment_token1] = ACTIONS(73),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(71),
    [sym_method] = ACTIONS(73),
    [sym_http_version] = ACTIONS(29),
    [aux_sym__target_url_line_token1] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(71),
    [aux_sym__target_url_line_token2] = ACTIONS(31),
    [aux_sym_target_url_token2] = ACTIONS(33),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(71),
    [aux_sym_xml_body_token1] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_query] = ACTIONS(47),
    [anon_sym_mutation] = ACTIONS(47),
    [sym_header_entity] = ACTIONS(49),
    [aux_sym__blank_line_token1] = ACTIONS(75),
  },
  [7] = {
    [sym_response] = STATE(281),
    [sym_query_param] = STATE(211),
    [sym_header] = STATE(26),
    [sym_variable] = STATE(161),
    [sym_res_handler_script] = STATE(104),
    [sym_xml_body] = STATE(68),
    [sym_json_body] = STATE(68),
    [sym_graphql_body] = STATE(68),
    [sym_external_body] = STATE(68),
    [sym_form_data] = STATE(68),
    [sym_value] = STATE(206),
    [sym__blank_line] = STATE(34),
    [aux_sym_request_repeat1] = STATE(26),
    [aux_sym_request_repeat2] = STATE(34),
    [aux_sym_value_repeat1] = STATE(161),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_comment_token1] = ACTIONS(79),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(77),
    [sym_method] = ACTIONS(79),
    [sym_http_version] = ACTIONS(29),
    [aux_sym__target_url_line_token1] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(77),
    [aux_sym__target_url_line_token2] = ACTIONS(31),
    [aux_sym_target_url_token2] = ACTIONS(33),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(77),
    [aux_sym_xml_body_token1] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_query] = ACTIONS(47),
    [anon_sym_mutation] = ACTIONS(47),
    [sym_header_entity] = ACTIONS(49),
    [aux_sym__blank_line_token1] = ACTIONS(81),
  },
  [8] = {
    [sym_response] = STATE(277),
    [sym_query_param] = STATE(211),
    [sym_header] = STATE(28),
    [sym_variable] = STATE(161),
    [sym_res_handler_script] = STATE(157),
    [sym_xml_body] = STATE(71),
    [sym_json_body] = STATE(71),
    [sym_graphql_body] = STATE(71),
    [sym_external_body] = STATE(71),
    [sym_form_data] = STATE(71),
    [sym_value] = STATE(206),
    [sym__blank_line] = STATE(32),
    [aux_sym_request_repeat1] = STATE(28),
    [aux_sym_request_repeat2] = STATE(32),
    [aux_sym_value_repeat1] = STATE(161),
    [ts_builtin_sym_end] = ACTIONS(83),
    [aux_sym_comment_token1] = ACTIONS(85),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(83),
    [sym_method] = ACTIONS(85),
    [sym_http_version] = ACTIONS(29),
    [aux_sym__target_url_line_token1] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(83),
    [aux_sym__target_url_line_token2] = ACTIONS(31),
    [aux_sym_target_url_token2] = ACTIONS(33),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(83),
    [aux_sym_xml_body_token1] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_query] = ACTIONS(47),
    [anon_sym_mutation] = ACTIONS(47),
    [sym_header_entity] = ACTIONS(49),
    [aux_sym__blank_line_token1] = ACTIONS(87),
  },
  [9] = {
    [sym_response] = STATE(300),
    [sym_query_param] = STATE(211),
    [sym_header] = STATE(19),
    [sym_variable] = STATE(161),
    [sym_res_handler_script] = STATE(126),
    [sym_xml_body] = STATE(88),
    [sym_json_body] = STATE(88),
    [sym_graphql_body] = STATE(88),
    [sym_external_body] = STATE(88),
    [sym_form_data] = STATE(88),
    [sym_value] = STATE(206),
    [sym__blank_line] = STATE(50),
    [aux_sym_request_repeat1] = STATE(19),
    [aux_sym_request_repeat2] = STATE(50),
    [aux_sym_value_repeat1] = STATE(161),
    [ts_builtin_sym_end] = ACTIONS(89),
    [aux_sym_comment_token1] = ACTIONS(91),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(89),
    [sym_method] = ACTIONS(91),
    [sym_http_version] = ACTIONS(29),
    [aux_sym__target_url_line_token1] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(89),
    [aux_sym__target_url_line_token2] = ACTIONS(31),
    [aux_sym_target_url_token2] = ACTIONS(33),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(89),
    [aux_sym_xml_body_token1] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_query] = ACTIONS(47),
    [anon_sym_mutation] = ACTIONS(47),
    [sym_header_entity] = ACTIONS(49),
    [aux_sym__blank_line_token1] = ACTIONS(93),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(81), 1,
      aux_sym__blank_line_token1,
    STATE(104), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(79), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(26), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(34), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(68), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [74] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(99), 1,
      aux_sym__blank_line_token1,
    STATE(144), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(97), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(44), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(56), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(77), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [148] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(105), 1,
      aux_sym__blank_line_token1,
    STATE(137), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(103), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(47), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(56), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(79), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [222] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(111), 1,
      aux_sym__blank_line_token1,
    STATE(143), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(109), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(31), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(56), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(76), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [296] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(117), 1,
      aux_sym__blank_line_token1,
    STATE(98), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(115), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(30), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(56), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(90), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [370] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(123), 1,
      aux_sym__blank_line_token1,
    STATE(103), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(121), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(41), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(56), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(119), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(92), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [444] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(129), 1,
      aux_sym__blank_line_token1,
    STATE(159), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(127), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(39), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(56), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(70), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [518] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(135), 1,
      aux_sym__blank_line_token1,
    STATE(100), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(133), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(45), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(56), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(131), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(94), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [592] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(141), 1,
      aux_sym__blank_line_token1,
    STATE(127), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(139), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(11), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(48), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(86), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [666] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(147), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(145), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(40), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(56), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(82), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [740] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(69), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(67), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(16), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(52), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(87), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [814] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(87), 1,
      aux_sym__blank_line_token1,
    STATE(157), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(85), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(28), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(32), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(71), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [888] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(153), 1,
      aux_sym__blank_line_token1,
    STATE(114), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(151), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(14), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(42), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(149), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(66), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [962] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(159), 1,
      aux_sym__blank_line_token1,
    STATE(150), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(157), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(29), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(33), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(74), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [1036] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(165), 1,
      aux_sym__blank_line_token1,
    STATE(119), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(163), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(17), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(51), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(89), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [1110] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(171), 1,
      aux_sym__blank_line_token1,
    STATE(146), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(169), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(35), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(56), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(75), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [1184] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(177), 1,
      aux_sym__blank_line_token1,
    STATE(140), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(175), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(37), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(56), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(173), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(78), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [1258] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(93), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(91), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(19), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(50), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(88), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [1332] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(183), 1,
      aux_sym__blank_line_token1,
    STATE(134), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(181), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(38), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(56), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(179), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(67), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [1406] = 20,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      sym_header_entity,
    ACTIONS(189), 1,
      aux_sym__blank_line_token1,
    STATE(129), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(47), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(187), 2,
      aux_sym_comment_token1,
      sym_method,
    STATE(49), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(56), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(185), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(85), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [1480] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(138), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(80), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [1547] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(157), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(71), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [1614] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(134), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(67), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [1681] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(129), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(85), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [1748] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(140), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(78), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [1815] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(88), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [1882] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(169), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(146), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(75), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [1949] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(119), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(89), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [2016] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(114), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(66), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [2083] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(150), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(74), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [2150] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(127), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(86), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [2217] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(87), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [2284] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(98), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(90), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [2351] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(137), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(79), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [2418] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    ACTIONS(201), 1,
      aux_sym_comment_token1,
    STATE(156), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(199), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(72), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [2485] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    ACTIONS(205), 1,
      aux_sym_comment_token1,
    STATE(132), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(203), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(83), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [2552] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(109), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(143), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(76), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [2619] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(104), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(68), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [2686] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(144), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(77), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [2753] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    ACTIONS(209), 1,
      aux_sym_comment_token1,
    STATE(111), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(207), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(81), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [2820] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(82), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [2887] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(100), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(94), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [2954] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(159), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(70), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [3021] = 18,
    ACTIONS(33), 1,
      aux_sym_target_url_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_GT,
    ACTIONS(41), 1,
      aux_sym_xml_body_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      aux_sym_comment_token1,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    STATE(103), 1,
      sym_res_handler_script,
    STATE(206), 1,
      sym_value,
    STATE(211), 1,
      sym_query_param,
    ACTIONS(31), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(195), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_AT,
    STATE(92), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
  [3088] = 15,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(9), 1,
      sym_method,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(15), 1,
      aux_sym_target_url_token2,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      aux_sym__blank_line_token1,
    STATE(167), 1,
      sym_pre_request_script,
    STATE(230), 1,
      sym_target_url,
    ACTIONS(11), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    STATE(162), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(55), 6,
      sym_comment,
      sym_request_separator,
      sym_request,
      sym_variable_declaration,
      sym__blank_line,
      aux_sym_document_repeat1,
  [3141] = 15,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      aux_sym_comment_token1,
    ACTIONS(220), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(223), 1,
      sym_method,
    ACTIONS(229), 1,
      anon_sym_QMARK,
    ACTIONS(232), 1,
      aux_sym_target_url_token2,
    ACTIONS(235), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(241), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      aux_sym__blank_line_token1,
    STATE(167), 1,
      sym_pre_request_script,
    STATE(230), 1,
      sym_target_url,
    ACTIONS(226), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    STATE(162), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(55), 6,
      sym_comment,
      sym_request_separator,
      sym_request,
      sym_variable_declaration,
      sym__blank_line,
      aux_sym_document_repeat1,
  [3194] = 4,
    ACTIONS(251), 1,
      sym_header_entity,
    STATE(56), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(247), 9,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_xml_body_token1,
      anon_sym_LBRACK,
    ACTIONS(249), 9,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_query,
      anon_sym_mutation,
      aux_sym__blank_line_token1,
  [3224] = 5,
    ACTIONS(258), 1,
      aux_sym_target_url_token2,
    ACTIONS(261), 1,
      aux_sym__blank_line_token1,
    STATE(57), 2,
      sym__blank_line,
      aux_sym_request_repeat2,
    ACTIONS(256), 5,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(254), 11,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_xml_body_token1,
      anon_sym_LBRACK,
      anon_sym_query,
      anon_sym_mutation,
  [3255] = 2,
    ACTIONS(264), 9,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_xml_body_token1,
      anon_sym_LBRACK,
    ACTIONS(266), 10,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_query,
      anon_sym_mutation,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [3279] = 2,
    ACTIONS(268), 9,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_xml_body_token1,
      anon_sym_LBRACK,
    ACTIONS(270), 10,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_query,
      anon_sym_mutation,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [3303] = 2,
    ACTIONS(272), 9,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_xml_body_token1,
      anon_sym_LBRACK,
    ACTIONS(274), 10,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_query,
      anon_sym_mutation,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [3327] = 2,
    ACTIONS(278), 6,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      anon_sym_LT,
      anon_sym_LBRACE,
      aux_sym__blank_line_token1,
    ACTIONS(276), 12,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_xml_body_token1,
      anon_sym_LBRACK,
      anon_sym_query,
      anon_sym_mutation,
  [3350] = 4,
    ACTIONS(284), 1,
      aux_sym_comment_token2,
    STATE(62), 1,
      aux_sym_script_repeat1,
    ACTIONS(280), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
    ACTIONS(282), 9,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      anon_sym_QMARK,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token2,
      anon_sym_LT,
      anon_sym_AT,
      aux_sym__blank_line_token1,
  [3374] = 4,
    ACTIONS(291), 1,
      aux_sym_comment_token2,
    STATE(62), 1,
      aux_sym_script_repeat1,
    ACTIONS(287), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
    ACTIONS(289), 9,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      anon_sym_QMARK,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token2,
      anon_sym_LT,
      anon_sym_AT,
      aux_sym__blank_line_token1,
  [3398] = 4,
    ACTIONS(291), 1,
      aux_sym_comment_token2,
    STATE(62), 1,
      aux_sym_script_repeat1,
    ACTIONS(293), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
    ACTIONS(295), 9,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      anon_sym_QMARK,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token2,
      anon_sym_LT,
      anon_sym_AT,
      aux_sym__blank_line_token1,
  [3422] = 4,
    ACTIONS(291), 1,
      aux_sym_comment_token2,
    STATE(62), 1,
      aux_sym_script_repeat1,
    ACTIONS(297), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
    ACTIONS(299), 9,
      aux_sym_comment_token1,
      sym_method,
      aux_sym__target_url_line_token1,
      anon_sym_QMARK,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token2,
      anon_sym_LT,
      anon_sym_AT,
      aux_sym__blank_line_token1,
  [3446] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(131), 1,
      sym_res_handler_script,
    ACTIONS(303), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(301), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3469] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(116), 1,
      sym_res_handler_script,
    ACTIONS(307), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(305), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3492] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(141), 1,
      sym_res_handler_script,
    ACTIONS(311), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(309), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3515] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(101), 1,
      sym_res_handler_script,
    ACTIONS(315), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(313), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3538] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(152), 1,
      sym_res_handler_script,
    ACTIONS(319), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(317), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3561] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(135), 1,
      sym_res_handler_script,
    ACTIONS(323), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(321), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3584] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(106), 1,
      sym_res_handler_script,
    ACTIONS(327), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(325), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3607] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(142), 1,
      sym_res_handler_script,
    ACTIONS(331), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(329), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3630] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(130), 1,
      sym_res_handler_script,
    ACTIONS(335), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(333), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3653] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(121), 1,
      sym_res_handler_script,
    ACTIONS(339), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(337), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3676] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(155), 1,
      sym_res_handler_script,
    ACTIONS(343), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(341), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3699] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(151), 1,
      sym_res_handler_script,
    ACTIONS(347), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(345), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3722] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(120), 1,
      sym_res_handler_script,
    ACTIONS(351), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(349), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3745] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_res_handler_script,
    ACTIONS(355), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(353), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3768] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(148), 1,
      sym_res_handler_script,
    ACTIONS(359), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(357), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3791] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(123), 1,
      sym_res_handler_script,
    ACTIONS(363), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(361), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3814] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(125), 1,
      sym_res_handler_script,
    ACTIONS(367), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(365), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3837] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(145), 1,
      sym_res_handler_script,
    ACTIONS(371), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(369), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3860] = 3,
    ACTIONS(377), 1,
      anon_sym_AMP,
    ACTIONS(375), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(373), 9,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
  [3881] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(112), 1,
      sym_res_handler_script,
    ACTIONS(381), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(379), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3904] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(139), 1,
      sym_res_handler_script,
    ACTIONS(385), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(383), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3927] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(158), 1,
      sym_res_handler_script,
    ACTIONS(389), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(387), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3950] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(110), 1,
      sym_res_handler_script,
    ACTIONS(393), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(391), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3973] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(105), 1,
      sym_res_handler_script,
    ACTIONS(397), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(395), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [3996] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(133), 1,
      sym_res_handler_script,
    ACTIONS(401), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(399), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4019] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(147), 1,
      sym_res_handler_script,
    ACTIONS(405), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(403), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4042] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(99), 1,
      sym_res_handler_script,
    ACTIONS(409), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(407), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4065] = 3,
    ACTIONS(377), 1,
      anon_sym_AMP,
    ACTIONS(413), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(411), 9,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
  [4086] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(128), 1,
      sym_res_handler_script,
    ACTIONS(417), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(415), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4109] = 4,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(136), 1,
      sym_res_handler_script,
    ACTIONS(421), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(419), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4132] = 2,
    ACTIONS(425), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(423), 9,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
  [4150] = 2,
    ACTIONS(429), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(427), 9,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT,
  [4168] = 2,
    ACTIONS(193), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(191), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4185] = 2,
    ACTIONS(433), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(431), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4202] = 2,
    ACTIONS(205), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(203), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4219] = 2,
    ACTIONS(437), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(435), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4236] = 2,
    ACTIONS(169), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(167), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4253] = 2,
    ACTIONS(67), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(65), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4270] = 2,
    ACTIONS(175), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(173), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4287] = 2,
    ACTIONS(441), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(439), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4304] = 2,
    ACTIONS(445), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(443), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4321] = 2,
    ACTIONS(103), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(101), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4338] = 2,
    ACTIONS(139), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(137), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4355] = 2,
    ACTIONS(109), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4372] = 2,
    ACTIONS(449), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(447), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4389] = 2,
    ACTIONS(453), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(451), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4406] = 2,
    ACTIONS(457), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(455), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4423] = 2,
    ACTIONS(461), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(459), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4440] = 2,
    ACTIONS(115), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(113), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4457] = 2,
    ACTIONS(465), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(463), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4474] = 2,
    ACTIONS(469), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(467), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4491] = 2,
    ACTIONS(473), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(471), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4508] = 2,
    ACTIONS(121), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(119), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4525] = 2,
    ACTIONS(133), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(131), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4542] = 2,
    ACTIONS(477), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(475), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4559] = 2,
    ACTIONS(481), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(479), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4576] = 2,
    ACTIONS(278), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(276), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4593] = 2,
    ACTIONS(485), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(483), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4610] = 2,
    ACTIONS(127), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(125), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4627] = 2,
    ACTIONS(489), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(487), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4644] = 2,
    ACTIONS(145), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(143), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4661] = 2,
    ACTIONS(97), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(95), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4678] = 2,
    ACTIONS(493), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(491), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4695] = 2,
    ACTIONS(209), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(207), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4712] = 2,
    ACTIONS(497), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(495), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4729] = 2,
    ACTIONS(501), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(499), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4746] = 2,
    ACTIONS(505), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(503), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4763] = 2,
    ACTIONS(509), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(507), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4780] = 2,
    ACTIONS(151), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(149), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4797] = 2,
    ACTIONS(513), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(511), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4814] = 2,
    ACTIONS(517), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(515), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4831] = 2,
    ACTIONS(79), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4848] = 2,
    ACTIONS(521), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(519), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4865] = 2,
    ACTIONS(525), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(523), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4882] = 2,
    ACTIONS(163), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(161), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4899] = 2,
    ACTIONS(529), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(527), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4916] = 2,
    ACTIONS(533), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(531), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4933] = 2,
    ACTIONS(85), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(83), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4950] = 2,
    ACTIONS(201), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(199), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4967] = 2,
    ACTIONS(537), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(535), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [4984] = 2,
    ACTIONS(91), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(89), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [5001] = 2,
    ACTIONS(541), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(539), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [5018] = 2,
    ACTIONS(545), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(543), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [5035] = 2,
    ACTIONS(549), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(547), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [5052] = 2,
    ACTIONS(187), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(185), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [5069] = 2,
    ACTIONS(553), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(551), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [5086] = 2,
    ACTIONS(557), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(555), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [5103] = 2,
    ACTIONS(561), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(559), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [5120] = 2,
    ACTIONS(565), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(563), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [5137] = 2,
    ACTIONS(569), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(567), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [5154] = 2,
    ACTIONS(573), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(571), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [5171] = 2,
    ACTIONS(181), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [5188] = 2,
    ACTIONS(577), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(575), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [5205] = 2,
    ACTIONS(157), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(155), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [5222] = 2,
    ACTIONS(581), 4,
      aux_sym_comment_token1,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
      aux_sym__blank_line_token1,
    ACTIONS(579), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_method,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT,
  [5239] = 6,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(585), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(587), 1,
      aux_sym_target_url_token1,
    ACTIONS(583), 2,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
    ACTIONS(589), 2,
      anon_sym_EQ,
      anon_sym_AMP,
    STATE(163), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [5261] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(593), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(595), 1,
      aux_sym_target_url_token1,
    ACTIONS(598), 1,
      aux_sym_target_url_token2,
    STATE(208), 1,
      aux_sym_target_url_repeat1,
    ACTIONS(591), 2,
      aux_sym__target_url_line_token1,
      anon_sym_QMARK,
    STATE(169), 2,
      aux_sym__target_url_line,
      sym_variable,
  [5285] = 6,
    ACTIONS(603), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(606), 1,
      aux_sym_target_url_token1,
    ACTIONS(610), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(600), 2,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
    ACTIONS(608), 2,
      anon_sym_EQ,
      anon_sym_AMP,
    STATE(163), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [5307] = 7,
    ACTIONS(615), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(617), 1,
      aux_sym_target_url_token1,
    ACTIONS(619), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(621), 1,
      anon_sym_AMP,
    STATE(217), 1,
      sym_value,
    ACTIONS(613), 2,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
    STATE(174), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [5331] = 6,
    ACTIONS(31), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(206), 1,
      sym_value,
    STATE(229), 1,
      sym_query_param,
    ACTIONS(623), 2,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [5352] = 6,
    ACTIONS(606), 1,
      aux_sym_target_url_token1,
    ACTIONS(608), 1,
      anon_sym_AMP,
    ACTIONS(628), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(631), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(625), 2,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
    STATE(166), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [5373] = 6,
    ACTIONS(13), 1,
      anon_sym_QMARK,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(634), 1,
      sym_method,
    STATE(236), 1,
      sym_target_url,
    ACTIONS(11), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    STATE(162), 2,
      aux_sym__target_url_line,
      sym_variable,
  [5394] = 6,
    ACTIONS(31), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(206), 1,
      sym_value,
    STATE(219), 1,
      sym_query_param,
    ACTIONS(623), 2,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
    STATE(161), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [5415] = 6,
    ACTIONS(639), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(642), 1,
      aux_sym_target_url_token1,
    ACTIONS(644), 1,
      aux_sym_target_url_token2,
    ACTIONS(646), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(636), 2,
      aux_sym__target_url_line_token1,
      anon_sym_QMARK,
    STATE(169), 2,
      aux_sym__target_url_line,
      sym_variable,
  [5436] = 6,
    ACTIONS(649), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(653), 1,
      aux_sym_header_token1,
    ACTIONS(655), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(302), 1,
      sym_value,
    ACTIONS(651), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token2,
    STATE(180), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [5457] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(593), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(657), 1,
      aux_sym_target_url_token1,
    ACTIONS(659), 1,
      aux_sym_target_url_token2,
    ACTIONS(591), 2,
      aux_sym__target_url_line_token1,
      anon_sym_QMARK,
    STATE(169), 2,
      aux_sym__target_url_line,
      sym_variable,
  [5478] = 6,
    ACTIONS(649), 1,
      aux_sym__target_url_line_token1,
    ACTIONS(655), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(661), 1,
      aux_sym_header_token1,
    STATE(278), 1,
      sym_value,
    ACTIONS(651), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token2,
    STATE(180), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [5499] = 3,
    ACTIONS(667), 1,
      aux_sym__blank_line_token1,
    ACTIONS(665), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(663), 5,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AMP,
  [5514] = 6,
    ACTIONS(587), 1,
      aux_sym_target_url_token1,
    ACTIONS(589), 1,
      anon_sym_AMP,
    ACTIONS(619), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(671), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(669), 2,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
    STATE(166), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [5535] = 2,
    ACTIONS(675), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(673), 5,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AMP,
  [5547] = 2,
    ACTIONS(679), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(677), 5,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AMP,
  [5559] = 5,
    ACTIONS(11), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(235), 1,
      sym_target_url,
    ACTIONS(13), 2,
      aux_sym__target_url_line_token1,
      anon_sym_QMARK,
    STATE(162), 2,
      aux_sym__target_url_line,
      sym_variable,
  [5577] = 5,
    ACTIONS(651), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(655), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(278), 1,
      sym_value,
    ACTIONS(649), 2,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
    STATE(180), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [5595] = 5,
    ACTIONS(651), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(655), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(293), 1,
      sym_value,
    ACTIONS(649), 2,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
    STATE(180), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [5613] = 5,
    ACTIONS(587), 1,
      aux_sym_target_url_token1,
    ACTIONS(655), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(683), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(681), 2,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [5631] = 5,
    ACTIONS(651), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(655), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(275), 1,
      sym_value,
    ACTIONS(649), 2,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
    STATE(180), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [5649] = 5,
    ACTIONS(11), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(240), 1,
      sym_target_url,
    ACTIONS(13), 2,
      aux_sym__target_url_line_token1,
      anon_sym_QMARK,
    STATE(162), 2,
      aux_sym__target_url_line,
      sym_variable,
  [5667] = 5,
    ACTIONS(651), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(655), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(242), 1,
      sym_value,
    ACTIONS(649), 2,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
    STATE(180), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [5685] = 2,
    ACTIONS(687), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(685), 5,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AMP,
  [5697] = 5,
    ACTIONS(606), 1,
      aux_sym_target_url_token1,
    ACTIONS(692), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(695), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(689), 2,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [5715] = 2,
    ACTIONS(700), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(698), 5,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AMP,
  [5727] = 2,
    ACTIONS(700), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(698), 4,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AMP,
  [5738] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(704), 1,
      aux_sym__target_url_line_token2,
    ACTIONS(702), 2,
      aux_sym__target_url_line_token1,
      anon_sym_QMARK,
    STATE(171), 2,
      aux_sym__target_url_line,
      sym_variable,
  [5753] = 2,
    ACTIONS(687), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(685), 4,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AMP,
  [5764] = 2,
    ACTIONS(679), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(677), 4,
      aux_sym__target_url_line_token1,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
  [5775] = 2,
    ACTIONS(700), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(698), 4,
      aux_sym__target_url_line_token1,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
  [5786] = 2,
    ACTIONS(675), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(673), 4,
      aux_sym__target_url_line_token1,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
  [5797] = 4,
    ACTIONS(706), 1,
      aux_sym_target_url_token2,
    STATE(289), 1,
      sym_boolean,
    ACTIONS(708), 2,
      sym_number,
      sym_string,
    ACTIONS(710), 2,
      anon_sym_true,
      anon_sym_false,
  [5812] = 2,
    ACTIONS(679), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(677), 4,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AMP,
  [5823] = 2,
    ACTIONS(675), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(673), 4,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AMP,
  [5834] = 4,
    ACTIONS(712), 1,
      aux_sym_target_url_token2,
    STATE(257), 1,
      sym_boolean,
    ACTIONS(710), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(714), 2,
      sym_number,
      sym_string,
  [5849] = 2,
    ACTIONS(687), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(685), 4,
      aux_sym__target_url_line_token1,
      anon_sym_QMARK,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
  [5860] = 2,
    ACTIONS(675), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(673), 3,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
  [5870] = 2,
    ACTIONS(700), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(698), 3,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
  [5880] = 2,
    ACTIONS(718), 2,
      aux_sym__target_url_line_token1,
      aux_sym__target_url_line_token2,
    ACTIONS(716), 3,
      sym_method,
      anon_sym_QMARK,
      anon_sym_LBRACE_LBRACE,
  [5890] = 3,
    STATE(289), 1,
      sym_boolean,
    ACTIONS(708), 2,
      sym_number,
      sym_string,
    ACTIONS(710), 2,
      anon_sym_true,
      anon_sym_false,
  [5902] = 2,
    ACTIONS(687), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(685), 3,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
  [5912] = 2,
    ACTIONS(679), 2,
      aux_sym__target_url_line_token2,
      aux_sym_target_url_token1,
    ACTIONS(677), 3,
      aux_sym__target_url_line_token1,
      aux_sym_target_url_token2,
      anon_sym_LBRACE_LBRACE,
  [5922] = 3,
    STATE(261), 1,
      sym_boolean,
    ACTIONS(710), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(720), 2,
      sym_number,
      sym_string,
  [5934] = 3,
    ACTIONS(722), 1,
      aux_sym_comment_token2,
    ACTIONS(724), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(207), 1,
      aux_sym_script_repeat1,
  [5944] = 2,
    ACTIONS(728), 1,
      anon_sym_EQ,
    ACTIONS(726), 2,
      aux_sym_target_url_token1,
      anon_sym_AMP,
  [5952] = 3,
    ACTIONS(730), 1,
      aux_sym_comment_token2,
    ACTIONS(732), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(210), 1,
      aux_sym_script_repeat1,
  [5962] = 3,
    ACTIONS(734), 1,
      aux_sym_target_url_token1,
    ACTIONS(737), 1,
      aux_sym_target_url_token2,
    STATE(212), 1,
      aux_sym_target_url_repeat1,
  [5972] = 3,
    ACTIONS(739), 1,
      aux_sym_target_url_token1,
    ACTIONS(741), 1,
      anon_sym_AMP,
    STATE(213), 1,
      aux_sym_form_data_repeat1,
  [5982] = 3,
    ACTIONS(280), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(743), 1,
      aux_sym_comment_token2,
    STATE(210), 1,
      aux_sym_script_repeat1,
  [5992] = 3,
    ACTIONS(741), 1,
      anon_sym_AMP,
    ACTIONS(746), 1,
      aux_sym_target_url_token1,
    STATE(209), 1,
      aux_sym_form_data_repeat1,
  [6002] = 3,
    ACTIONS(748), 1,
      aux_sym_target_url_token1,
    ACTIONS(751), 1,
      aux_sym_target_url_token2,
    STATE(212), 1,
      aux_sym_target_url_repeat1,
  [6012] = 3,
    ACTIONS(753), 1,
      aux_sym_target_url_token1,
    ACTIONS(756), 1,
      anon_sym_AMP,
    STATE(213), 1,
      aux_sym_form_data_repeat1,
  [6022] = 2,
    ACTIONS(759), 1,
      aux_sym_comment_token2,
    STATE(64), 1,
      aux_sym_script_repeat1,
  [6029] = 2,
    ACTIONS(761), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(297), 1,
      sym_script,
  [6036] = 2,
    ACTIONS(763), 1,
      sym_identifier,
    ACTIONS(765), 1,
      aux_sym_target_url_token2,
  [6043] = 1,
    ACTIONS(767), 2,
      aux_sym_target_url_token1,
      anon_sym_AMP,
  [6048] = 2,
    ACTIONS(769), 1,
      aux_sym_target_url_token2,
    ACTIONS(771), 1,
      anon_sym_RBRACE_RBRACE,
  [6055] = 1,
    ACTIONS(773), 2,
      aux_sym_target_url_token1,
      anon_sym_AMP,
  [6060] = 2,
    ACTIONS(775), 1,
      sym_identifier,
    ACTIONS(777), 1,
      aux_sym_target_url_token2,
  [6067] = 2,
    ACTIONS(779), 1,
      sym_identifier,
    ACTIONS(781), 1,
      aux_sym_target_url_token2,
  [6074] = 2,
    ACTIONS(783), 1,
      aux_sym_target_url_token2,
    ACTIONS(785), 1,
      anon_sym_RBRACE_RBRACE,
  [6081] = 2,
    ACTIONS(787), 1,
      aux_sym_comment_token2,
    STATE(65), 1,
      aux_sym_script_repeat1,
  [6088] = 2,
    ACTIONS(789), 1,
      aux_sym_target_url_token2,
    ACTIONS(791), 1,
      anon_sym_RBRACE_RBRACE,
  [6095] = 2,
    ACTIONS(793), 1,
      aux_sym_target_url_token2,
    ACTIONS(795), 1,
      anon_sym_RBRACE_RBRACE,
  [6102] = 2,
    ACTIONS(797), 1,
      aux_sym_target_url_token2,
    ACTIONS(799), 1,
      anon_sym_RBRACE_RBRACE,
  [6109] = 2,
    ACTIONS(801), 1,
      aux_sym_target_url_token2,
    ACTIONS(803), 1,
      anon_sym_RBRACE_RBRACE,
  [6116] = 2,
    ACTIONS(805), 1,
      aux_sym_target_url_token2,
    ACTIONS(807), 1,
      anon_sym_RBRACE_RBRACE,
  [6123] = 1,
    ACTIONS(809), 2,
      aux_sym_target_url_token1,
      anon_sym_AMP,
  [6128] = 2,
    ACTIONS(811), 1,
      aux_sym_target_url_token1,
    ACTIONS(813), 1,
      aux_sym_target_url_token2,
  [6135] = 2,
    ACTIONS(815), 1,
      aux_sym_comment_token2,
    STATE(63), 1,
      aux_sym_script_repeat1,
  [6142] = 2,
    ACTIONS(817), 1,
      aux_sym_target_url_token2,
    ACTIONS(819), 1,
      anon_sym_EQ,
  [6149] = 2,
    ACTIONS(821), 1,
      aux_sym_target_url_token2,
    ACTIONS(823), 1,
      anon_sym_AT,
  [6156] = 2,
    ACTIONS(825), 1,
      aux_sym_target_url_token2,
    ACTIONS(827), 1,
      anon_sym_RBRACE_RBRACE,
  [6163] = 2,
    ACTIONS(829), 1,
      aux_sym_target_url_token1,
    ACTIONS(831), 1,
      aux_sym_target_url_token2,
  [6170] = 2,
    ACTIONS(833), 1,
      aux_sym_target_url_token1,
    ACTIONS(835), 1,
      aux_sym_target_url_token2,
  [6177] = 2,
    ACTIONS(837), 1,
      sym_identifier,
    ACTIONS(839), 1,
      aux_sym_target_url_token2,
  [6184] = 2,
    ACTIONS(761), 1,
      anon_sym_LBRACE_PERCENT,
    STATE(283), 1,
      sym_script,
  [6191] = 2,
    ACTIONS(841), 1,
      aux_sym_target_url_token2,
    ACTIONS(843), 1,
      anon_sym_COLON,
  [6198] = 2,
    ACTIONS(845), 1,
      aux_sym_target_url_token1,
    ACTIONS(847), 1,
      aux_sym_target_url_token2,
  [6205] = 1,
    ACTIONS(849), 1,
      aux_sym_target_url_token2,
  [6209] = 1,
    ACTIONS(851), 1,
      aux_sym_target_url_token1,
  [6213] = 1,
    ACTIONS(853), 1,
      ts_builtin_sym_end,
  [6217] = 1,
    ACTIONS(855), 1,
      aux_sym_target_url_token1,
  [6221] = 1,
    ACTIONS(857), 1,
      sym_http_version,
  [6225] = 1,
    ACTIONS(859), 1,
      sym_identifier,
  [6229] = 1,
    ACTIONS(861), 1,
      aux_sym_target_url_token1,
  [6233] = 1,
    ACTIONS(863), 1,
      anon_sym_COLON,
  [6237] = 1,
    ACTIONS(865), 1,
      aux_sym_target_url_token2,
  [6241] = 1,
    ACTIONS(867), 1,
      anon_sym_LPAREN,
  [6245] = 1,
    ACTIONS(869), 1,
      sym_identifier,
  [6249] = 1,
    ACTIONS(871), 1,
      aux_sym_target_url_token2,
  [6253] = 1,
    ACTIONS(873), 1,
      aux_sym__blank_line_token1,
  [6257] = 1,
    ACTIONS(875), 1,
      sym_status_code,
  [6261] = 1,
    ACTIONS(877), 1,
      aux_sym_comment_token2,
  [6265] = 1,
    ACTIONS(879), 1,
      aux_sym_target_url_token1,
  [6269] = 1,
    ACTIONS(881), 1,
      aux_sym_target_url_token1,
  [6273] = 1,
    ACTIONS(883), 1,
      sym_http_version,
  [6277] = 1,
    ACTIONS(885), 1,
      aux_sym_target_url_token2,
  [6281] = 1,
    ACTIONS(887), 1,
      aux_sym_target_url_token1,
  [6285] = 1,
    ACTIONS(889), 1,
      aux_sym_target_url_token1,
  [6289] = 1,
    ACTIONS(891), 1,
      aux_sym_target_url_token2,
  [6293] = 1,
    ACTIONS(893), 1,
      aux_sym_target_url_token1,
  [6297] = 1,
    ACTIONS(895), 1,
      anon_sym_RBRACE_RBRACE,
  [6301] = 1,
    ACTIONS(897), 1,
      sym_http_version,
  [6305] = 1,
    ACTIONS(899), 1,
      sym_http_version,
  [6309] = 1,
    ACTIONS(901), 1,
      aux_sym_target_url_token1,
  [6313] = 1,
    ACTIONS(903), 1,
      aux_sym_target_url_token1,
  [6317] = 1,
    ACTIONS(905), 1,
      aux_sym_comment_token2,
  [6321] = 1,
    ACTIONS(907), 1,
      aux_sym_target_url_token1,
  [6325] = 1,
    ACTIONS(909), 1,
      sym_status_text,
  [6329] = 1,
    ACTIONS(911), 1,
      aux_sym_target_url_token2,
  [6333] = 1,
    ACTIONS(913), 1,
      anon_sym_RBRACE_RBRACE,
  [6337] = 1,
    ACTIONS(915), 1,
      aux_sym_target_url_token1,
  [6341] = 1,
    ACTIONS(917), 1,
      aux_sym_target_url_token1,
  [6345] = 1,
    ACTIONS(919), 1,
      aux_sym_target_url_token1,
  [6349] = 1,
    ACTIONS(921), 1,
      aux_sym_target_url_token1,
  [6353] = 1,
    ACTIONS(923), 1,
      aux_sym_target_url_token1,
  [6357] = 1,
    ACTIONS(925), 1,
      aux_sym_target_url_token1,
  [6361] = 1,
    ACTIONS(927), 1,
      aux_sym_target_url_token2,
  [6365] = 1,
    ACTIONS(929), 1,
      aux_sym_target_url_token1,
  [6369] = 1,
    ACTIONS(931), 1,
      aux_sym_target_url_token1,
  [6373] = 1,
    ACTIONS(933), 1,
      aux_sym_target_url_token1,
  [6377] = 1,
    ACTIONS(935), 1,
      anon_sym_EQ,
  [6381] = 1,
    ACTIONS(377), 1,
      anon_sym_AMP,
  [6385] = 1,
    ACTIONS(937), 1,
      aux_sym_target_url_token1,
  [6389] = 1,
    ACTIONS(939), 1,
      aux_sym__blank_line_token1,
  [6393] = 1,
    ACTIONS(941), 1,
      aux_sym_target_url_token1,
  [6397] = 1,
    ACTIONS(943), 1,
      aux_sym_target_url_token1,
  [6401] = 1,
    ACTIONS(945), 1,
      anon_sym_RBRACE_RBRACE,
  [6405] = 1,
    ACTIONS(947), 1,
      anon_sym_RBRACE_RBRACE,
  [6409] = 1,
    ACTIONS(949), 1,
      aux_sym_target_url_token2,
  [6413] = 1,
    ACTIONS(951), 1,
      aux_sym_target_url_token1,
  [6417] = 1,
    ACTIONS(953), 1,
      anon_sym_RBRACE_RBRACE,
  [6421] = 1,
    ACTIONS(955), 1,
      anon_sym_RBRACE_RBRACE,
  [6425] = 1,
    ACTIONS(957), 1,
      aux_sym_target_url_token2,
  [6429] = 1,
    ACTIONS(959), 1,
      aux_sym_target_url_token1,
  [6433] = 1,
    ACTIONS(961), 1,
      anon_sym_RBRACE_RBRACE,
  [6437] = 1,
    ACTIONS(963), 1,
      anon_sym_RBRACE_RBRACE,
  [6441] = 1,
    ACTIONS(965), 1,
      aux_sym_target_url_token1,
  [6445] = 1,
    ACTIONS(967), 1,
      sym_identifier,
  [6449] = 1,
    ACTIONS(969), 1,
      aux_sym_target_url_token1,
  [6453] = 1,
    ACTIONS(971), 1,
      sym_identifier,
  [6457] = 1,
    ACTIONS(973), 1,
      sym_identifier,
  [6461] = 1,
    ACTIONS(975), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 74,
  [SMALL_STATE(12)] = 148,
  [SMALL_STATE(13)] = 222,
  [SMALL_STATE(14)] = 296,
  [SMALL_STATE(15)] = 370,
  [SMALL_STATE(16)] = 444,
  [SMALL_STATE(17)] = 518,
  [SMALL_STATE(18)] = 592,
  [SMALL_STATE(19)] = 666,
  [SMALL_STATE(20)] = 740,
  [SMALL_STATE(21)] = 814,
  [SMALL_STATE(22)] = 888,
  [SMALL_STATE(23)] = 962,
  [SMALL_STATE(24)] = 1036,
  [SMALL_STATE(25)] = 1110,
  [SMALL_STATE(26)] = 1184,
  [SMALL_STATE(27)] = 1258,
  [SMALL_STATE(28)] = 1332,
  [SMALL_STATE(29)] = 1406,
  [SMALL_STATE(30)] = 1480,
  [SMALL_STATE(31)] = 1547,
  [SMALL_STATE(32)] = 1614,
  [SMALL_STATE(33)] = 1681,
  [SMALL_STATE(34)] = 1748,
  [SMALL_STATE(35)] = 1815,
  [SMALL_STATE(36)] = 1882,
  [SMALL_STATE(37)] = 1949,
  [SMALL_STATE(38)] = 2016,
  [SMALL_STATE(39)] = 2083,
  [SMALL_STATE(40)] = 2150,
  [SMALL_STATE(41)] = 2217,
  [SMALL_STATE(42)] = 2284,
  [SMALL_STATE(43)] = 2351,
  [SMALL_STATE(44)] = 2418,
  [SMALL_STATE(45)] = 2485,
  [SMALL_STATE(46)] = 2552,
  [SMALL_STATE(47)] = 2619,
  [SMALL_STATE(48)] = 2686,
  [SMALL_STATE(49)] = 2753,
  [SMALL_STATE(50)] = 2820,
  [SMALL_STATE(51)] = 2887,
  [SMALL_STATE(52)] = 2954,
  [SMALL_STATE(53)] = 3021,
  [SMALL_STATE(54)] = 3088,
  [SMALL_STATE(55)] = 3141,
  [SMALL_STATE(56)] = 3194,
  [SMALL_STATE(57)] = 3224,
  [SMALL_STATE(58)] = 3255,
  [SMALL_STATE(59)] = 3279,
  [SMALL_STATE(60)] = 3303,
  [SMALL_STATE(61)] = 3327,
  [SMALL_STATE(62)] = 3350,
  [SMALL_STATE(63)] = 3374,
  [SMALL_STATE(64)] = 3398,
  [SMALL_STATE(65)] = 3422,
  [SMALL_STATE(66)] = 3446,
  [SMALL_STATE(67)] = 3469,
  [SMALL_STATE(68)] = 3492,
  [SMALL_STATE(69)] = 3515,
  [SMALL_STATE(70)] = 3538,
  [SMALL_STATE(71)] = 3561,
  [SMALL_STATE(72)] = 3584,
  [SMALL_STATE(73)] = 3607,
  [SMALL_STATE(74)] = 3630,
  [SMALL_STATE(75)] = 3653,
  [SMALL_STATE(76)] = 3676,
  [SMALL_STATE(77)] = 3699,
  [SMALL_STATE(78)] = 3722,
  [SMALL_STATE(79)] = 3745,
  [SMALL_STATE(80)] = 3768,
  [SMALL_STATE(81)] = 3791,
  [SMALL_STATE(82)] = 3814,
  [SMALL_STATE(83)] = 3837,
  [SMALL_STATE(84)] = 3860,
  [SMALL_STATE(85)] = 3881,
  [SMALL_STATE(86)] = 3904,
  [SMALL_STATE(87)] = 3927,
  [SMALL_STATE(88)] = 3950,
  [SMALL_STATE(89)] = 3973,
  [SMALL_STATE(90)] = 3996,
  [SMALL_STATE(91)] = 4019,
  [SMALL_STATE(92)] = 4042,
  [SMALL_STATE(93)] = 4065,
  [SMALL_STATE(94)] = 4086,
  [SMALL_STATE(95)] = 4109,
  [SMALL_STATE(96)] = 4132,
  [SMALL_STATE(97)] = 4150,
  [SMALL_STATE(98)] = 4168,
  [SMALL_STATE(99)] = 4185,
  [SMALL_STATE(100)] = 4202,
  [SMALL_STATE(101)] = 4219,
  [SMALL_STATE(102)] = 4236,
  [SMALL_STATE(103)] = 4253,
  [SMALL_STATE(104)] = 4270,
  [SMALL_STATE(105)] = 4287,
  [SMALL_STATE(106)] = 4304,
  [SMALL_STATE(107)] = 4321,
  [SMALL_STATE(108)] = 4338,
  [SMALL_STATE(109)] = 4355,
  [SMALL_STATE(110)] = 4372,
  [SMALL_STATE(111)] = 4389,
  [SMALL_STATE(112)] = 4406,
  [SMALL_STATE(113)] = 4423,
  [SMALL_STATE(114)] = 4440,
  [SMALL_STATE(115)] = 4457,
  [SMALL_STATE(116)] = 4474,
  [SMALL_STATE(117)] = 4491,
  [SMALL_STATE(118)] = 4508,
  [SMALL_STATE(119)] = 4525,
  [SMALL_STATE(120)] = 4542,
  [SMALL_STATE(121)] = 4559,
  [SMALL_STATE(122)] = 4576,
  [SMALL_STATE(123)] = 4593,
  [SMALL_STATE(124)] = 4610,
  [SMALL_STATE(125)] = 4627,
  [SMALL_STATE(126)] = 4644,
  [SMALL_STATE(127)] = 4661,
  [SMALL_STATE(128)] = 4678,
  [SMALL_STATE(129)] = 4695,
  [SMALL_STATE(130)] = 4712,
  [SMALL_STATE(131)] = 4729,
  [SMALL_STATE(132)] = 4746,
  [SMALL_STATE(133)] = 4763,
  [SMALL_STATE(134)] = 4780,
  [SMALL_STATE(135)] = 4797,
  [SMALL_STATE(136)] = 4814,
  [SMALL_STATE(137)] = 4831,
  [SMALL_STATE(138)] = 4848,
  [SMALL_STATE(139)] = 4865,
  [SMALL_STATE(140)] = 4882,
  [SMALL_STATE(141)] = 4899,
  [SMALL_STATE(142)] = 4916,
  [SMALL_STATE(143)] = 4933,
  [SMALL_STATE(144)] = 4950,
  [SMALL_STATE(145)] = 4967,
  [SMALL_STATE(146)] = 4984,
  [SMALL_STATE(147)] = 5001,
  [SMALL_STATE(148)] = 5018,
  [SMALL_STATE(149)] = 5035,
  [SMALL_STATE(150)] = 5052,
  [SMALL_STATE(151)] = 5069,
  [SMALL_STATE(152)] = 5086,
  [SMALL_STATE(153)] = 5103,
  [SMALL_STATE(154)] = 5120,
  [SMALL_STATE(155)] = 5137,
  [SMALL_STATE(156)] = 5154,
  [SMALL_STATE(157)] = 5171,
  [SMALL_STATE(158)] = 5188,
  [SMALL_STATE(159)] = 5205,
  [SMALL_STATE(160)] = 5222,
  [SMALL_STATE(161)] = 5239,
  [SMALL_STATE(162)] = 5261,
  [SMALL_STATE(163)] = 5285,
  [SMALL_STATE(164)] = 5307,
  [SMALL_STATE(165)] = 5331,
  [SMALL_STATE(166)] = 5352,
  [SMALL_STATE(167)] = 5373,
  [SMALL_STATE(168)] = 5394,
  [SMALL_STATE(169)] = 5415,
  [SMALL_STATE(170)] = 5436,
  [SMALL_STATE(171)] = 5457,
  [SMALL_STATE(172)] = 5478,
  [SMALL_STATE(173)] = 5499,
  [SMALL_STATE(174)] = 5514,
  [SMALL_STATE(175)] = 5535,
  [SMALL_STATE(176)] = 5547,
  [SMALL_STATE(177)] = 5559,
  [SMALL_STATE(178)] = 5577,
  [SMALL_STATE(179)] = 5595,
  [SMALL_STATE(180)] = 5613,
  [SMALL_STATE(181)] = 5631,
  [SMALL_STATE(182)] = 5649,
  [SMALL_STATE(183)] = 5667,
  [SMALL_STATE(184)] = 5685,
  [SMALL_STATE(185)] = 5697,
  [SMALL_STATE(186)] = 5715,
  [SMALL_STATE(187)] = 5727,
  [SMALL_STATE(188)] = 5738,
  [SMALL_STATE(189)] = 5753,
  [SMALL_STATE(190)] = 5764,
  [SMALL_STATE(191)] = 5775,
  [SMALL_STATE(192)] = 5786,
  [SMALL_STATE(193)] = 5797,
  [SMALL_STATE(194)] = 5812,
  [SMALL_STATE(195)] = 5823,
  [SMALL_STATE(196)] = 5834,
  [SMALL_STATE(197)] = 5849,
  [SMALL_STATE(198)] = 5860,
  [SMALL_STATE(199)] = 5870,
  [SMALL_STATE(200)] = 5880,
  [SMALL_STATE(201)] = 5890,
  [SMALL_STATE(202)] = 5902,
  [SMALL_STATE(203)] = 5912,
  [SMALL_STATE(204)] = 5922,
  [SMALL_STATE(205)] = 5934,
  [SMALL_STATE(206)] = 5944,
  [SMALL_STATE(207)] = 5952,
  [SMALL_STATE(208)] = 5962,
  [SMALL_STATE(209)] = 5972,
  [SMALL_STATE(210)] = 5982,
  [SMALL_STATE(211)] = 5992,
  [SMALL_STATE(212)] = 6002,
  [SMALL_STATE(213)] = 6012,
  [SMALL_STATE(214)] = 6022,
  [SMALL_STATE(215)] = 6029,
  [SMALL_STATE(216)] = 6036,
  [SMALL_STATE(217)] = 6043,
  [SMALL_STATE(218)] = 6048,
  [SMALL_STATE(219)] = 6055,
  [SMALL_STATE(220)] = 6060,
  [SMALL_STATE(221)] = 6067,
  [SMALL_STATE(222)] = 6074,
  [SMALL_STATE(223)] = 6081,
  [SMALL_STATE(224)] = 6088,
  [SMALL_STATE(225)] = 6095,
  [SMALL_STATE(226)] = 6102,
  [SMALL_STATE(227)] = 6109,
  [SMALL_STATE(228)] = 6116,
  [SMALL_STATE(229)] = 6123,
  [SMALL_STATE(230)] = 6128,
  [SMALL_STATE(231)] = 6135,
  [SMALL_STATE(232)] = 6142,
  [SMALL_STATE(233)] = 6149,
  [SMALL_STATE(234)] = 6156,
  [SMALL_STATE(235)] = 6163,
  [SMALL_STATE(236)] = 6170,
  [SMALL_STATE(237)] = 6177,
  [SMALL_STATE(238)] = 6184,
  [SMALL_STATE(239)] = 6191,
  [SMALL_STATE(240)] = 6198,
  [SMALL_STATE(241)] = 6205,
  [SMALL_STATE(242)] = 6209,
  [SMALL_STATE(243)] = 6213,
  [SMALL_STATE(244)] = 6217,
  [SMALL_STATE(245)] = 6221,
  [SMALL_STATE(246)] = 6225,
  [SMALL_STATE(247)] = 6229,
  [SMALL_STATE(248)] = 6233,
  [SMALL_STATE(249)] = 6237,
  [SMALL_STATE(250)] = 6241,
  [SMALL_STATE(251)] = 6245,
  [SMALL_STATE(252)] = 6249,
  [SMALL_STATE(253)] = 6253,
  [SMALL_STATE(254)] = 6257,
  [SMALL_STATE(255)] = 6261,
  [SMALL_STATE(256)] = 6265,
  [SMALL_STATE(257)] = 6269,
  [SMALL_STATE(258)] = 6273,
  [SMALL_STATE(259)] = 6277,
  [SMALL_STATE(260)] = 6281,
  [SMALL_STATE(261)] = 6285,
  [SMALL_STATE(262)] = 6289,
  [SMALL_STATE(263)] = 6293,
  [SMALL_STATE(264)] = 6297,
  [SMALL_STATE(265)] = 6301,
  [SMALL_STATE(266)] = 6305,
  [SMALL_STATE(267)] = 6309,
  [SMALL_STATE(268)] = 6313,
  [SMALL_STATE(269)] = 6317,
  [SMALL_STATE(270)] = 6321,
  [SMALL_STATE(271)] = 6325,
  [SMALL_STATE(272)] = 6329,
  [SMALL_STATE(273)] = 6333,
  [SMALL_STATE(274)] = 6337,
  [SMALL_STATE(275)] = 6341,
  [SMALL_STATE(276)] = 6345,
  [SMALL_STATE(277)] = 6349,
  [SMALL_STATE(278)] = 6353,
  [SMALL_STATE(279)] = 6357,
  [SMALL_STATE(280)] = 6361,
  [SMALL_STATE(281)] = 6365,
  [SMALL_STATE(282)] = 6369,
  [SMALL_STATE(283)] = 6373,
  [SMALL_STATE(284)] = 6377,
  [SMALL_STATE(285)] = 6381,
  [SMALL_STATE(286)] = 6385,
  [SMALL_STATE(287)] = 6389,
  [SMALL_STATE(288)] = 6393,
  [SMALL_STATE(289)] = 6397,
  [SMALL_STATE(290)] = 6401,
  [SMALL_STATE(291)] = 6405,
  [SMALL_STATE(292)] = 6409,
  [SMALL_STATE(293)] = 6413,
  [SMALL_STATE(294)] = 6417,
  [SMALL_STATE(295)] = 6421,
  [SMALL_STATE(296)] = 6425,
  [SMALL_STATE(297)] = 6429,
  [SMALL_STATE(298)] = 6433,
  [SMALL_STATE(299)] = 6437,
  [SMALL_STATE(300)] = 6441,
  [SMALL_STATE(301)] = 6445,
  [SMALL_STATE(302)] = 6449,
  [SMALL_STATE(303)] = 6453,
  [SMALL_STATE(304)] = 6457,
  [SMALL_STATE(305)] = 6461,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 6),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 6),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 14),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 14),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 5),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 5),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 6),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 6),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 14),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 14),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 14),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 14),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 5),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 6),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 6),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 6),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 6),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 14),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 14),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 14),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 14),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 6),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 6),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 5),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 5),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 14),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 14),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 5),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 5),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 6),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 6),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 6),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 6),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 14),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 14),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(255),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(287),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(57),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 25),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 25),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 19),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 19),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 31),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, 0, 31),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 4, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 4, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 35),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 35),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 29),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 29),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 22),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 22),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 20),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 20),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 23),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 23),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 12, 0, 44),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 12, 0, 44),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 10),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 10),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 26),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 26),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 27),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 27),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 16),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 16),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 43),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 43),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 28),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 28),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 15),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 15),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 42),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 42),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 36),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 36),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 37),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 37),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 41),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 41),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 32),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 32),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 40),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 40),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 12),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 12),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 33),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 33),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 34),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 34),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 39),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 39),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 21),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 21),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 8),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 8),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 38),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 38),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 9),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 9),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 6, 0, 30),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 6, 0, 30),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, 0, 18),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 4, 0, 18),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 8),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 8),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 34),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 34),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 13, 0, 44),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 13, 0, 44),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 33),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 33),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 32),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 32),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 11),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 11),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 29),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 29),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 2, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 28),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 28),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 27),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 27),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 36),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 36),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 37),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 37),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 38),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 38),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 26),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 26),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 35),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 35),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 5),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 5),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 39),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 39),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 23),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 23),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 9),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 9),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 6),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 6),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 40),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 40),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 22),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 22),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 10),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 10),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 41),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 41),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 21),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 21),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 12, 0, 42),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 12, 0, 42),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 17),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 17),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 12, 0, 43),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 12, 0, 43),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 20),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 20),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, 0, 24),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, 0, 24),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 16),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 16),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 12, 0, 14),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 12, 0, 14),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 12),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 12),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 15),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 15),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_target_url, 1, 0, 0), SHIFT(272),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1, 0, 0),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, 0, 4),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, 0, 4),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(169),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(169),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_url_line, 2, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(237),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 1, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 1, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 2),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 7),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 7),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 7),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 7),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 2),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 1, 0, 4),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0), SHIFT(272),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [743] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, 0, 13),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 2, 0, 0),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 3, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [853] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 4, 0, 0),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 3, 0, 0),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_http(void) {
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
