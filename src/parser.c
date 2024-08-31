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
#define STATE_COUNT 293
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 63

enum ts_symbol_identifiers {
  aux_sym_WORD_CHAR_token1 = 1,
  aux_sym_PUNCTUATION_token1 = 2,
  aux_sym_WS_token1 = 3,
  aux_sym_NL_token1 = 4,
  aux_sym_LINE_TAIL_token1 = 5,
  aux_sym__comment_prefix_token1 = 6,
  aux_sym__comment_prefix_token2 = 7,
  anon_sym_AT = 8,
  anon_sym_EQ = 9,
  aux_sym_comment_token1 = 10,
  aux_sym_request_separator_token1 = 11,
  sym_method = 12,
  sym_http_version = 13,
  sym_status_code = 14,
  sym_status_text = 15,
  anon_sym_COLON = 16,
  anon_sym_LBRACE_LBRACE = 17,
  anon_sym_RBRACE_RBRACE = 18,
  anon_sym_LT = 19,
  aux_sym_pre_request_script_token1 = 20,
  anon_sym_GT = 21,
  anon_sym_LBRACE_PERCENT = 22,
  anon_sym_PERCENT_RBRACE = 23,
  anon_sym_AT2 = 24,
  aux_sym_xml_body_token1 = 25,
  aux_sym_xml_body_token2 = 26,
  aux_sym_json_body_token1 = 27,
  aux_sym_graphql_data_token1 = 28,
  anon_sym_LT2 = 29,
  anon_sym_DASH_DASH = 30,
  aux_sym_multipart_form_data_token1 = 31,
  aux_sym_multipart_form_data_token2 = 32,
  aux_sym_raw_body_token1 = 33,
  sym__not_comment = 34,
  sym_header_entity = 35,
  sym_identifier = 36,
  aux_sym_path_token1 = 37,
  aux_sym__blank_line_token1 = 38,
  sym_document = 39,
  sym__comment_prefix = 40,
  sym_comment = 41,
  sym_var_comment = 42,
  sym_request_separator = 43,
  sym_section = 44,
  sym__section_content = 45,
  aux_sym__target_url_line = 46,
  sym_target_url = 47,
  sym_response = 48,
  sym_request = 49,
  sym_header = 50,
  sym_variable = 51,
  sym_pre_request_script = 52,
  sym_res_handler_script = 53,
  sym_script = 54,
  sym_variable_declaration = 55,
  sym_xml_body = 56,
  sym_json_body = 57,
  sym_graphql_body = 58,
  sym_graphql_data = 59,
  sym__external_body = 60,
  sym_external_body = 61,
  sym_multipart_form_data = 62,
  sym_raw_body = 63,
  sym__raw_body = 64,
  sym_path = 65,
  sym_value = 66,
  sym__blank_line = 67,
  aux_sym_document_repeat1 = 68,
  aux_sym_target_url_repeat1 = 69,
  aux_sym_request_repeat1 = 70,
  aux_sym_request_repeat2 = 71,
  aux_sym_request_repeat3 = 72,
  aux_sym_request_repeat4 = 73,
  aux_sym_script_repeat1 = 74,
  aux_sym_xml_body_repeat1 = 75,
  aux_sym_multipart_form_data_repeat1 = 76,
  aux_sym_path_repeat1 = 77,
  aux_sym_value_repeat1 = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_WORD_CHAR_token1] = "WORD_CHAR_token1",
  [aux_sym_PUNCTUATION_token1] = "PUNCTUATION_token1",
  [aux_sym_WS_token1] = "WS_token1",
  [aux_sym_NL_token1] = "NL_token1",
  [aux_sym_LINE_TAIL_token1] = "LINE_TAIL_token1",
  [aux_sym__comment_prefix_token1] = "_comment_prefix_token1",
  [aux_sym__comment_prefix_token2] = "_comment_prefix_token2",
  [anon_sym_AT] = "@",
  [anon_sym_EQ] = "=",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_request_separator_token1] = "request_separator_token1",
  [sym_method] = "method",
  [sym_http_version] = "http_version",
  [sym_status_code] = "status_code",
  [sym_status_text] = "status_text",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LT] = "<",
  [aux_sym_pre_request_script_token1] = "pre_request_script_token1",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_AT2] = "@",
  [aux_sym_xml_body_token1] = "xml_body_token1",
  [aux_sym_xml_body_token2] = "xml_body_token2",
  [aux_sym_json_body_token1] = "json_body_token1",
  [aux_sym_graphql_data_token1] = "graphql_data_token1",
  [anon_sym_LT2] = "<",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_multipart_form_data_token1] = "multipart_form_data_token1",
  [aux_sym_multipart_form_data_token2] = "multipart_form_data_token2",
  [aux_sym_raw_body_token1] = "raw_body_token1",
  [sym__not_comment] = "_not_comment",
  [sym_header_entity] = "header_entity",
  [sym_identifier] = "identifier",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [sym_document] = "document",
  [sym__comment_prefix] = "_comment_prefix",
  [sym_comment] = "comment",
  [sym_var_comment] = "comment",
  [sym_request_separator] = "request_separator",
  [sym_section] = "section",
  [sym__section_content] = "_section_content",
  [aux_sym__target_url_line] = "_target_url_line",
  [sym_target_url] = "target_url",
  [sym_response] = "response",
  [sym_request] = "request",
  [sym_header] = "header",
  [sym_variable] = "variable",
  [sym_pre_request_script] = "pre_request_script",
  [sym_res_handler_script] = "res_handler_script",
  [sym_script] = "script",
  [sym_variable_declaration] = "variable_declaration",
  [sym_xml_body] = "xml_body",
  [sym_json_body] = "json_body",
  [sym_graphql_body] = "graphql_body",
  [sym_graphql_data] = "graphql_data",
  [sym__external_body] = "_external_body",
  [sym_external_body] = "external_body",
  [sym_multipart_form_data] = "multipart_form_data",
  [sym_raw_body] = "raw_body",
  [sym__raw_body] = "_raw_body",
  [sym_path] = "path",
  [sym_value] = "value",
  [sym__blank_line] = "_blank_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_target_url_repeat1] = "target_url_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_request_repeat3] = "request_repeat3",
  [aux_sym_request_repeat4] = "request_repeat4",
  [aux_sym_script_repeat1] = "script_repeat1",
  [aux_sym_xml_body_repeat1] = "xml_body_repeat1",
  [aux_sym_multipart_form_data_repeat1] = "multipart_form_data_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_WORD_CHAR_token1] = aux_sym_WORD_CHAR_token1,
  [aux_sym_PUNCTUATION_token1] = aux_sym_PUNCTUATION_token1,
  [aux_sym_WS_token1] = aux_sym_WS_token1,
  [aux_sym_NL_token1] = aux_sym_NL_token1,
  [aux_sym_LINE_TAIL_token1] = aux_sym_LINE_TAIL_token1,
  [aux_sym__comment_prefix_token1] = aux_sym__comment_prefix_token1,
  [aux_sym__comment_prefix_token2] = aux_sym__comment_prefix_token2,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_request_separator_token1] = aux_sym_request_separator_token1,
  [sym_method] = sym_method,
  [sym_http_version] = sym_http_version,
  [sym_status_code] = sym_status_code,
  [sym_status_text] = sym_status_text,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_pre_request_script_token1] = aux_sym_pre_request_script_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_AT2] = anon_sym_AT,
  [aux_sym_xml_body_token1] = aux_sym_xml_body_token1,
  [aux_sym_xml_body_token2] = aux_sym_xml_body_token2,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [aux_sym_graphql_data_token1] = aux_sym_graphql_data_token1,
  [anon_sym_LT2] = anon_sym_LT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_multipart_form_data_token1] = aux_sym_multipart_form_data_token1,
  [aux_sym_multipart_form_data_token2] = aux_sym_multipart_form_data_token2,
  [aux_sym_raw_body_token1] = aux_sym_raw_body_token1,
  [sym__not_comment] = sym__not_comment,
  [sym_header_entity] = sym_header_entity,
  [sym_identifier] = sym_identifier,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym__blank_line_token1] = aux_sym__blank_line_token1,
  [sym_document] = sym_document,
  [sym__comment_prefix] = sym__comment_prefix,
  [sym_comment] = sym_comment,
  [sym_var_comment] = sym_comment,
  [sym_request_separator] = sym_request_separator,
  [sym_section] = sym_section,
  [sym__section_content] = sym__section_content,
  [aux_sym__target_url_line] = aux_sym__target_url_line,
  [sym_target_url] = sym_target_url,
  [sym_response] = sym_response,
  [sym_request] = sym_request,
  [sym_header] = sym_header,
  [sym_variable] = sym_variable,
  [sym_pre_request_script] = sym_pre_request_script,
  [sym_res_handler_script] = sym_res_handler_script,
  [sym_script] = sym_script,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_xml_body] = sym_xml_body,
  [sym_json_body] = sym_json_body,
  [sym_graphql_body] = sym_graphql_body,
  [sym_graphql_data] = sym_graphql_data,
  [sym__external_body] = sym__external_body,
  [sym_external_body] = sym_external_body,
  [sym_multipart_form_data] = sym_multipart_form_data,
  [sym_raw_body] = sym_raw_body,
  [sym__raw_body] = sym__raw_body,
  [sym_path] = sym_path,
  [sym_value] = sym_value,
  [sym__blank_line] = sym__blank_line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_target_url_repeat1] = aux_sym_target_url_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_request_repeat3] = aux_sym_request_repeat3,
  [aux_sym_request_repeat4] = aux_sym_request_repeat4,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
  [aux_sym_xml_body_repeat1] = aux_sym_xml_body_repeat1,
  [aux_sym_multipart_form_data_repeat1] = aux_sym_multipart_form_data_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_WORD_CHAR_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_PUNCTUATION_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_WS_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_NL_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_LINE_TAIL_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comment_prefix_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comment_prefix_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_separator_token1] = {
    .visible = false,
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
  [sym_status_code] = {
    .visible = true,
    .named = true,
  },
  [sym_status_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pre_request_script_token1] = {
    .visible = false,
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
  [anon_sym_AT2] = {
    .visible = true,
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
  [aux_sym_graphql_data_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multipart_form_data_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multipart_form_data_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_body_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__not_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_header_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_path_token1] = {
    .visible = false,
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
  [sym__comment_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_var_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_request_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__section_content] = {
    .visible = false,
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
  [sym_graphql_data] = {
    .visible = true,
    .named = true,
  },
  [sym__external_body] = {
    .visible = false,
    .named = true,
  },
  [sym_external_body] = {
    .visible = true,
    .named = true,
  },
  [sym_multipart_form_data] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_body] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_body] = {
    .visible = false,
    .named = true,
  },
  [sym_path] = {
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
  [aux_sym_request_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multipart_form_data_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
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
  field_header = 2,
  field_method = 3,
  field_name = 4,
  field_path = 5,
  field_request = 6,
  field_url = 7,
  field_value = 8,
  field_version = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_header] = "header",
  [field_method] = "method",
  [field_name] = "name",
  [field_path] = "path",
  [field_request] = "request",
  [field_url] = "url",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 1},
  [12] = {.index = 13, .length = 2},
  [13] = {.index = 15, .length = 2},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 1},
  [16] = {.index = 20, .length = 2},
  [17] = {.index = 22, .length = 3},
  [18] = {.index = 25, .length = 2},
  [19] = {.index = 27, .length = 3},
  [20] = {.index = 30, .length = 1},
  [21] = {.index = 31, .length = 2},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 3},
  [24] = {.index = 38, .length = 2},
  [25] = {.index = 40, .length = 3},
  [26] = {.index = 43, .length = 3},
  [27] = {.index = 46, .length = 3},
  [28] = {.index = 49, .length = 2},
  [29] = {.index = 51, .length = 2},
  [30] = {.index = 53, .length = 3},
  [31] = {.index = 56, .length = 3},
  [32] = {.index = 59, .length = 2},
  [33] = {.index = 61, .length = 3},
  [34] = {.index = 64, .length = 2},
  [35] = {.index = 66, .length = 1},
  [36] = {.index = 67, .length = 4},
  [37] = {.index = 71, .length = 3},
  [38] = {.index = 74, .length = 3},
  [39] = {.index = 77, .length = 4},
  [40] = {.index = 81, .length = 2},
  [41] = {.index = 83, .length = 2},
  [42] = {.index = 85, .length = 3},
  [43] = {.index = 88, .length = 3},
  [44] = {.index = 91, .length = 4},
  [45] = {.index = 95, .length = 2},
  [46] = {.index = 97, .length = 3},
  [47] = {.index = 100, .length = 4},
  [48] = {.index = 104, .length = 4},
  [49] = {.index = 108, .length = 4},
  [50] = {.index = 112, .length = 3},
  [51] = {.index = 115, .length = 4},
  [52] = {.index = 119, .length = 3},
  [53] = {.index = 122, .length = 2},
  [54] = {.index = 124, .length = 2},
  [55] = {.index = 126, .length = 4},
  [56] = {.index = 130, .length = 4},
  [57] = {.index = 134, .length = 5},
  [58] = {.index = 139, .length = 4},
  [59] = {.index = 143, .length = 4},
  [60] = {.index = 147, .length = 5},
  [61] = {.index = 152, .length = 4},
  [62] = {.index = 156, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_request, 0, .inherited = true},
  [1] =
    {field_request, 0},
  [2] =
    {field_request, 1, .inherited = true},
  [3] =
    {field_url, 0},
  [4] =
    {field_value, 1},
  [5] =
    {field_name, 1},
  [6] =
    {field_header, 0},
  [7] =
    {field_header, 2, .inherited = true},
    {field_url, 0},
  [9] =
    {field_value, 2},
  [10] =
    {field_method, 0},
    {field_url, 2},
  [12] =
    {field_name, 2},
  [13] =
    {field_url, 0},
    {field_version, 2},
  [15] =
    {field_header, 3, .inherited = true},
    {field_url, 0},
  [17] =
    {field_header, 0, .inherited = true},
    {field_header, 1, .inherited = true},
  [19] =
    {field_body, 0},
  [20] =
    {field_body, 3, .inherited = true},
    {field_url, 0},
  [22] =
    {field_header, 4, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [25] =
    {field_name, 1},
    {field_value, 3},
  [27] =
    {field_header, 4, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [30] =
    {field_name, 0},
  [31] =
    {field_body, 4, .inherited = true},
    {field_url, 0},
  [33] =
    {field_header, 4, .inherited = true},
    {field_url, 0},
  [35] =
    {field_body, 4, .inherited = true},
    {field_header, 2, .inherited = true},
    {field_url, 0},
  [38] =
    {field_body, 0, .inherited = true},
    {field_body, 1, .inherited = true},
  [40] =
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [43] =
    {field_header, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [46] =
    {field_body, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [49] =
    {field_name, 1},
    {field_value, 4},
  [51] =
    {field_name, 2},
    {field_value, 4},
  [53] =
    {field_header, 5, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [56] =
    {field_body, 5, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [59] =
    {field_name, 0},
    {field_value, 2},
  [61] =
    {field_body, 5, .inherited = true},
    {field_header, 3, .inherited = true},
    {field_url, 0},
  [64] =
    {field_body, 5, .inherited = true},
    {field_url, 0},
  [66] =
    {field_path, 2},
  [67] =
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [71] =
    {field_body, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [74] =
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [77] =
    {field_body, 6, .inherited = true},
    {field_header, 4, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [81] =
    {field_name, 1},
    {field_value, 5},
  [83] =
    {field_name, 2},
    {field_value, 5},
  [85] =
    {field_body, 6, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [88] =
    {field_header, 6, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [91] =
    {field_body, 6, .inherited = true},
    {field_header, 4, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [95] =
    {field_name, 0},
    {field_value, 3},
  [97] =
    {field_body, 6, .inherited = true},
    {field_header, 4, .inherited = true},
    {field_url, 0},
  [100] =
    {field_header, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [104] =
    {field_body, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [108] =
    {field_body, 7, .inherited = true},
    {field_header, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [112] =
    {field_body, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [115] =
    {field_body, 7, .inherited = true},
    {field_header, 5, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [119] =
    {field_body, 7, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [122] =
    {field_name, 0},
    {field_value, 4},
  [124] =
    {field_name, 2},
    {field_path, 4},
  [126] =
    {field_body, 8, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [130] =
    {field_header, 8, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [134] =
    {field_body, 8, .inherited = true},
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [139] =
    {field_body, 8, .inherited = true},
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [143] =
    {field_body, 8, .inherited = true},
    {field_header, 6, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [147] =
    {field_body, 9, .inherited = true},
    {field_header, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [152] =
    {field_body, 9, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [156] =
    {field_body, 10, .inherited = true},
    {field_header, 8, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
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
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
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
  [127] = 68,
  [128] = 81,
  [129] = 82,
  [130] = 86,
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
  [141] = 68,
  [142] = 89,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 86,
  [148] = 148,
  [149] = 82,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 81,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 165,
  [172] = 165,
  [173] = 173,
  [174] = 174,
  [175] = 170,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 174,
  [183] = 183,
  [184] = 174,
  [185] = 185,
  [186] = 186,
  [187] = 167,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 192,
  [194] = 189,
  [195] = 190,
  [196] = 190,
  [197] = 192,
  [198] = 191,
  [199] = 191,
  [200] = 189,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 203,
  [205] = 205,
  [206] = 203,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 211,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 219,
  [224] = 224,
  [225] = 211,
  [226] = 226,
  [227] = 227,
  [228] = 218,
  [229] = 219,
  [230] = 230,
  [231] = 231,
  [232] = 220,
  [233] = 220,
  [234] = 218,
  [235] = 235,
  [236] = 236,
  [237] = 237,
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
  [270] = 237,
  [271] = 266,
  [272] = 260,
  [273] = 273,
  [274] = 262,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 237,
  [279] = 279,
  [280] = 260,
  [281] = 273,
  [282] = 262,
  [283] = 283,
  [284] = 243,
  [285] = 240,
  [286] = 273,
  [287] = 287,
  [288] = 288,
  [289] = 243,
  [290] = 240,
  [291] = 291,
  [292] = 292,
};

static TSCharacterRange aux_sym_WORD_CHAR_token1_character_set_1[] = {
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
  {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x108fb, 0x1091b},
};

static TSCharacterRange aux_sym_PUNCTUATION_token1_character_set_1[] = {
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
  {0x108b0, 0x108df}, {0x108f3, 0x108f3}, {0x108f6, 0x108fa}, {0x1091c, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(789);
      ADVANCE_MAP(
        0, 943,
        '\n', 943,
        '\r', 944,
        '#', 887,
        '-', 866,
        '/', 867,
        ':', 905,
        '<', 937,
        '=', 893,
        '>', 913,
        '@', 892,
        'C', 840,
        'D', 829,
        'G', 830,
        'H', 835,
        'L', 838,
        'O', 843,
        'P', 828,
        'T', 844,
        'W', 831,
        '[', 869,
        '\\', 871,
        '_', 870,
        '{', 865,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(847);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(877);
      if (lookahead == '\r') ADVANCE(879);
      if (lookahead == '\\') ADVANCE(871);
      if (lookahead == '{') ADVANCE(868);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(876);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(847);
      END_STATE();
    case 2:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(877);
      if (lookahead == '\r') ADVANCE(879);
      if (lookahead == '{') ADVANCE(868);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(894);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(847);
      END_STATE();
    case 3:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(877);
      if (lookahead == '\r') ADVANCE(879);
      if (lookahead == '{') ADVANCE(868);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(876);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(847);
      END_STATE();
    case 4:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == '#') ADVANCE(895);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 5:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'A') ADVANCE(29);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 6:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'A') ADVANCE(13);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 7:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'A') ADVANCE(12);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 8:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'B') ADVANCE(33);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 9:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 10:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'C') ADVANCE(21);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 11:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'C') ADVANCE(18);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 12:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'C') ADVANCE(15);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 13:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'D') ADVANCE(898);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 14:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 15:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(898);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 16:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(9);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 17:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 18:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'H') ADVANCE(898);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 19:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'H') ADVANCE(30);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 20:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 21:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'K') ADVANCE(14);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 22:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'L') ADVANCE(17);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 23:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'L') ADVANCE(898);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 24:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 25:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'N') ADVANCE(16);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 26:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'N') ADVANCE(32);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 27:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 28:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'O') ADVANCE(10);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 29:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'P') ADVANCE(19);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 30:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'Q') ADVANCE(23);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 31:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 32:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'S') ADVANCE(898);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 33:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'S') ADVANCE(28);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 34:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'T') ADVANCE(898);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 35:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 36:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'T') ADVANCE(11);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 37:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 38:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 39:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 40:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 41:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 42:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 43:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 44:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 45:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 46:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'y') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 47:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(49);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 48:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 49:
      if ((!eof && lookahead == 00)) ADVANCE(947);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(49);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 50:
      if ((!eof && lookahead == 00)) ADVANCE(947);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 51:
      if ((!eof && lookahead == 00)) ADVANCE(932);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '\r') ADVANCE(931);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 52:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == '#') ADVANCE(895);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 53:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'A') ADVANCE(77);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 54:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 55:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'A') ADVANCE(60);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 56:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'B') ADVANCE(80);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 57:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'C') ADVANCE(69);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 58:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 59:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 60:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 61:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'D') ADVANCE(899);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 62:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'E') ADVANCE(899);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 63:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 64:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 65:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 66:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'H') ADVANCE(899);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 67:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'H') ADVANCE(78);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 68:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 69:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'K') ADVANCE(63);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 70:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'L') ADVANCE(899);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 71:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'L') ADVANCE(65);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 72:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'N') ADVANCE(74);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 73:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'N') ADVANCE(79);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 74:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 75:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 76:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'O') ADVANCE(57);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 77:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'P') ADVANCE(67);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 78:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'Q') ADVANCE(70);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 79:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'S') ADVANCE(899);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 80:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 81:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'S') ADVANCE(82);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 82:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'T') ADVANCE(899);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 83:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'T') ADVANCE(68);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 84:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 85:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 86:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 87:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 88:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 89:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 90:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 91:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 92:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 93:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 94:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'y') ADVANCE(95);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 95:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(97);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 96:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 97:
      if ((!eof && lookahead == 00)) ADVANCE(942);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(942);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(97);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 98:
      if ((!eof && lookahead == 00)) ADVANCE(942);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(942);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 99:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == '#') ADVANCE(895);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 100:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'A') ADVANCE(124);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 101:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 102:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'A') ADVANCE(107);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 103:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'B') ADVANCE(127);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 104:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 105:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'C') ADVANCE(113);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 106:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'C') ADVANCE(129);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 107:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 108:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'D') ADVANCE(900);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 109:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'E') ADVANCE(900);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 110:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 111:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 112:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 113:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'H') ADVANCE(900);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 114:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'H') ADVANCE(125);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 115:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 116:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'K') ADVANCE(110);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 117:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'L') ADVANCE(900);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 118:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'L') ADVANCE(112);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 119:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'N') ADVANCE(121);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 120:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'N') ADVANCE(126);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 121:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 122:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'O') ADVANCE(120);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 123:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'O') ADVANCE(104);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 124:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'P') ADVANCE(114);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 125:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'Q') ADVANCE(117);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 126:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'S') ADVANCE(900);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 127:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'S') ADVANCE(123);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 128:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'S') ADVANCE(129);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 129:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'T') ADVANCE(900);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 130:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 131:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'T') ADVANCE(105);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 132:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'T') ADVANCE(109);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 133:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 134:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 135:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 136:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 137:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 138:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 139:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 140:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 141:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'y') ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 142:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(144);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 143:
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 144:
      if ((!eof && lookahead == 00)) ADVANCE(925);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(925);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 145:
      if ((!eof && lookahead == 00)) ADVANCE(925);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(925);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 146:
      if ((!eof && lookahead == 00)) ADVANCE(863);
      if (lookahead == '\n') ADVANCE(912);
      if (lookahead == '\r') ADVANCE(912);
      if (lookahead == '\\') ADVANCE(871);
      if (lookahead == '{') ADVANCE(868);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(790);
      if ((!eof && set_contains(aux_sym_PUNCTUATION_token1_character_set_1, 484, lookahead))) ADVANCE(847);
      END_STATE();
    case 147:
      if ((!eof && lookahead == 00)) ADVANCE(881);
      if (lookahead == '\n') ADVANCE(880);
      if (lookahead == '\r') ADVANCE(881);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 148:
      if ((!eof && lookahead == 00)) ADVANCE(881);
      if (lookahead == '\n') ADVANCE(880);
      if (lookahead == '\r') ADVANCE(881);
      if (lookahead == '@') ADVANCE(892);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 149:
      if ((!eof && lookahead == 00)) ADVANCE(881);
      if (lookahead == '\n') ADVANCE(880);
      if (lookahead == '\r') ADVANCE(881);
      if (lookahead == '}') ADVANCE(915);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 150:
      if ((!eof && lookahead == 00)) ADVANCE(881);
      if (lookahead == '\n') ADVANCE(880);
      if (lookahead == '\r') ADVANCE(881);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 151:
      if ((!eof && lookahead == 00)) ADVANCE(934);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '\r') ADVANCE(933);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 152:
      if (lookahead == '\r') ADVANCE(989);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(988);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(986);
      END_STATE();
    case 153:
      ADVANCE_MAP(
        '\r', 879,
        ':', 905,
        '=', 893,
        'A', 349,
        'B', 301,
        'C', 586,
        'E', 767,
        'F', 302,
        'G', 303,
        'H', 293,
        'I', 209,
        'L', 399,
        'M', 393,
        'N', 400,
        'O', 248,
        'P', 304,
        'R', 312,
        'S', 390,
        'T', 394,
        'U', 272,
        'V', 308,
        '}', 778,
        0, 877,
        '\n', 877,
      );
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(780);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(876);
      END_STATE();
    case 154:
      if (lookahead == '\r') ADVANCE(912);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(912);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(876);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(875);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(986);
      END_STATE();
    case 155:
      if (lookahead == '\r') ADVANCE(948);
      if (lookahead == '@') ADVANCE(892);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(948);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == '\r') ADVANCE(948);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(156);
      END_STATE();
    case 157:
      if (lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 158:
      if (lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 159:
      if (lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 160:
      if (lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 161:
      if (lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 162:
      if (lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 163:
      if (lookahead == ' ') ADVANCE(244);
      END_STATE();
    case 164:
      if (lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 165:
      if (lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 166:
      if (lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 167:
      if (lookahead == ' ') ADVANCE(228);
      END_STATE();
    case 168:
      if (lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 169:
      if (lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 170:
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 171:
      if (lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 172:
      if (lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 173:
      if (lookahead == ' ') ADVANCE(269);
      if (lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 174:
      if (lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 175:
      if (lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 176:
      if (lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 177:
      if (lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 178:
      if (lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 179:
      if (lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 180:
      if (lookahead == ' ') ADVANCE(319);
      END_STATE();
    case 181:
      if (lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 182:
      if (lookahead == ' ') ADVANCE(252);
      END_STATE();
    case 183:
      if (lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 184:
      if (lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 185:
      if (lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 186:
      if (lookahead == ' ') ADVANCE(225);
      END_STATE();
    case 187:
      if (lookahead == ' ') ADVANCE(225);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 188:
      if (lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 189:
      if (lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 190:
      if (lookahead == ' ') ADVANCE(226);
      END_STATE();
    case 191:
      if (lookahead == ' ') ADVANCE(294);
      END_STATE();
    case 192:
      if (lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 193:
      if (lookahead == ' ') ADVANCE(295);
      END_STATE();
    case 194:
      if (lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 195:
      if (lookahead == ' ') ADVANCE(727);
      END_STATE();
    case 196:
      if (lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 197:
      if (lookahead == ' ') ADVANCE(229);
      END_STATE();
    case 198:
      if (lookahead == ' ') ADVANCE(217);
      END_STATE();
    case 199:
      if (lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 200:
      if (lookahead == ' ') ADVANCE(219);
      END_STATE();
    case 201:
      if (lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 202:
      if (lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 203:
      if (lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 204:
      if (lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 205:
      if (lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 206:
      if (lookahead == ' ') ADVANCE(273);
      END_STATE();
    case 207:
      if (lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 208:
      if (lookahead == '#') ADVANCE(895);
      END_STATE();
    case 209:
      if (lookahead == '\'') ADVANCE(545);
      if (lookahead == 'M') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(680);
      END_STATE();
    case 210:
      if (lookahead == '-') ADVANCE(215);
      END_STATE();
    case 211:
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == 'p') ADVANCE(540);
      END_STATE();
    case 212:
      if (lookahead == 'A') ADVANCE(266);
      END_STATE();
    case 213:
      if (lookahead == 'A') ADVANCE(227);
      END_STATE();
    case 214:
      if (lookahead == 'A') ADVANCE(224);
      END_STATE();
    case 215:
      if (lookahead == 'A') ADVANCE(754);
      END_STATE();
    case 216:
      if (lookahead == 'A') ADVANCE(366);
      if (lookahead == 'E') ADVANCE(769);
      if (lookahead == 'F') ADVANCE(589);
      if (lookahead == 'I') ADVANCE(547);
      if (lookahead == 'M') ADVANCE(613);
      END_STATE();
    case 217:
      if (lookahead == 'A') ADVANCE(752);
      END_STATE();
    case 218:
      if (lookahead == 'A') ADVANCE(528);
      END_STATE();
    case 219:
      if (lookahead == 'A') ADVANCE(531);
      END_STATE();
    case 220:
      if (lookahead == 'B') ADVANCE(281);
      END_STATE();
    case 221:
      if (lookahead == 'C') ADVANCE(287);
      END_STATE();
    case 222:
      if (lookahead == 'C') ADVANCE(249);
      END_STATE();
    case 223:
      if (lookahead == 'C') ADVANCE(242);
      END_STATE();
    case 224:
      if (lookahead == 'C') ADVANCE(231);
      END_STATE();
    case 225:
      if (lookahead == 'C') ADVANCE(593);
      END_STATE();
    case 226:
      if (lookahead == 'C') ADVANCE(478);
      END_STATE();
    case 227:
      if (lookahead == 'D') ADVANCE(897);
      END_STATE();
    case 228:
      if (lookahead == 'D') ADVANCE(449);
      END_STATE();
    case 229:
      if (lookahead == 'D') ADVANCE(437);
      END_STATE();
    case 230:
      if (lookahead == 'E') ADVANCE(287);
      END_STATE();
    case 231:
      if (lookahead == 'E') ADVANCE(897);
      END_STATE();
    case 232:
      if (lookahead == 'E') ADVANCE(221);
      END_STATE();
    case 233:
      if (lookahead == 'E') ADVANCE(291);
      END_STATE();
    case 234:
      if (lookahead == 'E') ADVANCE(664);
      END_STATE();
    case 235:
      if (lookahead == 'E') ADVANCE(567);
      END_STATE();
    case 236:
      if (lookahead == 'E') ADVANCE(316);
      if (lookahead == 'M') ADVANCE(318);
      END_STATE();
    case 237:
      if (lookahead == 'F') ADVANCE(499);
      END_STATE();
    case 238:
      if (lookahead == 'F') ADVANCE(339);
      END_STATE();
    case 239:
      if (lookahead == 'F') ADVANCE(339);
      if (lookahead == 'R') ADVANCE(439);
      END_STATE();
    case 240:
      if (lookahead == 'F') ADVANCE(619);
      END_STATE();
    case 241:
      if (lookahead == 'G') ADVANCE(340);
      if (lookahead == 'R') ADVANCE(391);
      END_STATE();
    case 242:
      if (lookahead == 'H') ADVANCE(897);
      END_STATE();
    case 243:
      if (lookahead == 'H') ADVANCE(271);
      END_STATE();
    case 244:
      if (lookahead == 'H') ADVANCE(447);
      if (lookahead == 'T') ADVANCE(505);
      END_STATE();
    case 245:
      if (lookahead == 'I') ADVANCE(263);
      END_STATE();
    case 246:
      if (lookahead == 'I') ADVANCE(191);
      END_STATE();
    case 247:
      if (lookahead == 'I') ADVANCE(557);
      END_STATE();
    case 248:
      if (lookahead == 'K') ADVANCE(904);
      END_STATE();
    case 249:
      if (lookahead == 'K') ADVANCE(230);
      END_STATE();
    case 250:
      if (lookahead == 'L') ADVANCE(233);
      END_STATE();
    case 251:
      if (lookahead == 'L') ADVANCE(897);
      END_STATE();
    case 252:
      if (lookahead == 'L') ADVANCE(412);
      END_STATE();
    case 253:
      if (lookahead == 'L') ADVANCE(322);
      END_STATE();
    case 254:
      if (lookahead == 'L') ADVANCE(602);
      END_STATE();
    case 255:
      if (lookahead == 'M') ADVANCE(448);
      END_STATE();
    case 256:
      if (lookahead == 'N') ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'N') ADVANCE(232);
      END_STATE();
    case 258:
      if (lookahead == 'N') ADVANCE(280);
      END_STATE();
    case 259:
      if (lookahead == 'N') ADVANCE(622);
      END_STATE();
    case 260:
      if (lookahead == 'N') ADVANCE(409);
      END_STATE();
    case 261:
      if (lookahead == 'N') ADVANCE(623);
      END_STATE();
    case 262:
      if (lookahead == 'N') ADVANCE(624);
      END_STATE();
    case 263:
      if (lookahead == 'O') ADVANCE(258);
      END_STATE();
    case 264:
      if (lookahead == 'O') ADVANCE(222);
      END_STATE();
    case 265:
      if (lookahead == 'O') ADVANCE(701);
      END_STATE();
    case 266:
      if (lookahead == 'P') ADVANCE(243);
      END_STATE();
    case 267:
      if (lookahead == 'P') ADVANCE(161);
      END_STATE();
    case 268:
      if (lookahead == 'P') ADVANCE(460);
      END_STATE();
    case 269:
      if (lookahead == 'P') ADVANCE(659);
      END_STATE();
    case 270:
      if (lookahead == 'P') ADVANCE(661);
      END_STATE();
    case 271:
      if (lookahead == 'Q') ADVANCE(251);
      END_STATE();
    case 272:
      if (lookahead == 'R') ADVANCE(246);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == 'p') ADVANCE(468);
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 273:
      if (lookahead == 'R') ADVANCE(391);
      END_STATE();
    case 274:
      if (lookahead == 'R') ADVANCE(459);
      END_STATE();
    case 275:
      if (lookahead == 'R') ADVANCE(439);
      END_STATE();
    case 276:
      if (lookahead == 'R') ADVANCE(427);
      END_STATE();
    case 277:
      if (lookahead == 'R') ADVANCE(455);
      END_STATE();
    case 278:
      if (lookahead == 'R') ADVANCE(458);
      END_STATE();
    case 279:
      if (lookahead == 'S') ADVANCE(287);
      END_STATE();
    case 280:
      if (lookahead == 'S') ADVANCE(897);
      END_STATE();
    case 281:
      if (lookahead == 'S') ADVANCE(264);
      END_STATE();
    case 282:
      if (lookahead == 'S') ADVANCE(736);
      END_STATE();
    case 283:
      if (lookahead == 'S') ADVANCE(422);
      END_STATE();
    case 284:
      if (lookahead == 'S') ADVANCE(710);
      END_STATE();
    case 285:
      if (lookahead == 'S') ADVANCE(335);
      END_STATE();
    case 286:
      if (lookahead == 'S') ADVANCE(757);
      END_STATE();
    case 287:
      if (lookahead == 'T') ADVANCE(897);
      END_STATE();
    case 288:
      if (lookahead == 'T') ADVANCE(245);
      END_STATE();
    case 289:
      if (lookahead == 'T') ADVANCE(223);
      END_STATE();
    case 290:
      if (lookahead == 'T') ADVANCE(267);
      END_STATE();
    case 291:
      if (lookahead == 'T') ADVANCE(231);
      END_STATE();
    case 292:
      if (lookahead == 'T') ADVANCE(774);
      END_STATE();
    case 293:
      if (lookahead == 'T') ADVANCE(290);
      END_STATE();
    case 294:
      if (lookahead == 'T') ADVANCE(611);
      END_STATE();
    case 295:
      if (lookahead == 'T') ADVANCE(505);
      END_STATE();
    case 296:
      if (lookahead == 'T') ADVANCE(618);
      END_STATE();
    case 297:
      if (lookahead == 'U') ADVANCE(684);
      END_STATE();
    case 298:
      if (lookahead == 'U') ADVANCE(564);
      END_STATE();
    case 299:
      if (lookahead == 'V') ADVANCE(415);
      END_STATE();
    case 300:
      if (lookahead == '\\') ADVANCE(871);
      if (lookahead == '{') ADVANCE(864);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(790);
      if ((!eof && set_contains(aux_sym_PUNCTUATION_token1_character_set_1, 484, lookahead))) ADVANCE(847);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 302:
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead == 'o') ADVANCE(647);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(702);
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead == 'e') ADVANCE(650);
      if (lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(751);
      if (lookahead == 'p') ADVANCE(654);
      if (lookahead == 's') ADVANCE(746);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 307:
      if (lookahead == 'a') ADVANCE(770);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(649);
      END_STATE();
    case 309:
      if (lookahead == 'a') ADVANCE(762);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(556);
      if (lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 315:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(657);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(691);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(705);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(655);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(490);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(708);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(584);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(632);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(709);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(772);
      END_STATE();
    case 332:
      if (lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 333:
      if (lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 334:
      if (lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 335:
      if (lookahead == 'a') ADVANCE(715);
      END_STATE();
    case 336:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 337:
      if (lookahead == 'a') ADVANCE(718);
      END_STATE();
    case 338:
      if (lookahead == 'a') ADVANCE(725);
      END_STATE();
    case 339:
      if (lookahead == 'a') ADVANCE(512);
      END_STATE();
    case 340:
      if (lookahead == 'a') ADVANCE(731);
      END_STATE();
    case 341:
      if (lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 342:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 343:
      if (lookahead == 'a') ADVANCE(742);
      END_STATE();
    case 344:
      if (lookahead == 'a') ADVANCE(743);
      END_STATE();
    case 345:
      if (lookahead == 'b') ADVANCE(486);
      END_STATE();
    case 346:
      if (lookahead == 'b') ADVANCE(526);
      END_STATE();
    case 347:
      if (lookahead == 'b') ADVANCE(541);
      END_STATE();
    case 348:
      if (lookahead == 'b') ADVANCE(542);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead == 'l') ADVANCE(651);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(770);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(475);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(707);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(695);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(401);
      if (lookahead == 'x') ADVANCE(771);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(520);
      END_STATE();
    case 358:
      if (lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 359:
      if (lookahead == 'c') ADVANCE(595);
      END_STATE();
    case 360:
      if (lookahead == 'c') ADVANCE(414);
      END_STATE();
    case 361:
      if (lookahead == 'c') ADVANCE(708);
      END_STATE();
    case 362:
      if (lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 363:
      if (lookahead == 'c') ADVANCE(594);
      END_STATE();
    case 364:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 365:
      if (lookahead == 'c') ADVANCE(738);
      END_STATE();
    case 366:
      if (lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 367:
      if (lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 368:
      if (lookahead == 'd') ADVANCE(904);
      END_STATE();
    case 369:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 370:
      if (lookahead == 'd') ADVANCE(501);
      END_STATE();
    case 371:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 372:
      if (lookahead == 'd') ADVANCE(398);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(502);
      END_STATE();
    case 374:
      if (lookahead == 'd') ADVANCE(693);
      END_STATE();
    case 375:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 376:
      if (lookahead == 'd') ADVANCE(419);
      END_STATE();
    case 377:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 378:
      if (lookahead == 'd') ADVANCE(425);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(430);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(773);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(518);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(426);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(504);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(511);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 387:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 388:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'w') ADVANCE(489);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == 'i') ADVANCE(681);
      if (lookahead == 'o') ADVANCE(759);
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(758);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(766);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(737);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 461:
      if (lookahead == 'f') ADVANCE(463);
      END_STATE();
    case 462:
      if (lookahead == 'f') ADVANCE(529);
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 463:
      if (lookahead == 'f') ADVANCE(487);
      END_STATE();
    case 464:
      if (lookahead == 'f') ADVANCE(495);
      END_STATE();
    case 465:
      if (lookahead == 'f') ADVANCE(626);
      END_STATE();
    case 466:
      if (lookahead == 'f') ADVANCE(496);
      END_STATE();
    case 467:
      if (lookahead == 'g') ADVANCE(904);
      END_STATE();
    case 468:
      if (lookahead == 'g') ADVANCE(672);
      END_STATE();
    case 469:
      if (lookahead == 'g') ADVANCE(389);
      END_STATE();
    case 470:
      if (lookahead == 'g') ADVANCE(698);
      END_STATE();
    case 471:
      if (lookahead == 'g') ADVANCE(621);
      END_STATE();
    case 472:
      if (lookahead == 'g') ADVANCE(421);
      END_STATE();
    case 473:
      if (lookahead == 'g') ADVANCE(333);
      END_STATE();
    case 474:
      if (lookahead == 'g') ADVANCE(203);
      END_STATE();
    case 475:
      if (lookahead == 'h') ADVANCE(173);
      END_STATE();
    case 476:
      if (lookahead == 'h') ADVANCE(620);
      END_STATE();
    case 477:
      if (lookahead == 'h') ADVANCE(614);
      END_STATE();
    case 478:
      if (lookahead == 'h') ADVANCE(627);
      END_STATE();
    case 479:
      if (lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 480:
      if (lookahead == 'h') ADVANCE(418);
      END_STATE();
    case 481:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 482:
      if (lookahead == 'h') ADVANCE(600);
      END_STATE();
    case 483:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 484:
      if (lookahead == 'i') ADVANCE(777);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(543);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(572);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(700);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 491:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 493:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 494:
      if (lookahead == 'i') ADVANCE(688);
      END_STATE();
    case 495:
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 496:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 497:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 498:
      if (lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 499:
      if (lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 500:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(663);
      END_STATE();
    case 502:
      if (lookahead == 'i') ADVANCE(464);
      END_STATE();
    case 503:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 504:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 505:
      if (lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 507:
      if (lookahead == 'i') ADVANCE(658);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(761);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 510:
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(671);
      END_STATE();
    case 512:
      if (lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 513:
      if (lookahead == 'i') ADVANCE(605);
      END_STATE();
    case 514:
      if (lookahead == 'i') ADVANCE(616);
      END_STATE();
    case 515:
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 516:
      if (lookahead == 'i') ADVANCE(599);
      END_STATE();
    case 517:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 518:
      if (lookahead == 'i') ADVANCE(740);
      END_STATE();
    case 519:
      if (lookahead == 'i') ADVANCE(739);
      END_STATE();
    case 520:
      if (lookahead == 'i') ADVANCE(457);
      END_STATE();
    case 521:
      if (lookahead == 'k') ADVANCE(398);
      END_STATE();
    case 522:
      if (lookahead == 'k') ADVANCE(198);
      END_STATE();
    case 523:
      if (lookahead == 'l') ADVANCE(770);
      END_STATE();
    case 524:
      if (lookahead == 'l') ADVANCE(703);
      END_STATE();
    case 525:
      if (lookahead == 'l') ADVANCE(625);
      if (lookahead == 'm') ADVANCE(413);
      END_STATE();
    case 526:
      if (lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 527:
      if (lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 528:
      if (lookahead == 'l') ADVANCE(690);
      END_STATE();
    case 529:
      if (lookahead == 'l') ADVANCE(503);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(679);
      END_STATE();
    case 531:
      if (lookahead == 'l') ADVANCE(536);
      END_STATE();
    case 532:
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 533:
      if (lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 534:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 535:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 536:
      if (lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 537:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 538:
      if (lookahead == 'l') ADVANCE(403);
      END_STATE();
    case 539:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 540:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 541:
      if (lookahead == 'l') ADVANCE(432);
      END_STATE();
    case 542:
      if (lookahead == 'l') ADVANCE(433);
      END_STATE();
    case 543:
      if (lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 544:
      if (lookahead == 'm') ADVANCE(635);
      END_STATE();
    case 545:
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 546:
      if (lookahead == 'm') ADVANCE(326);
      END_STATE();
    case 547:
      if (lookahead == 'm') ADVANCE(634);
      END_STATE();
    case 548:
      if (lookahead == 'm') ADVANCE(453);
      END_STATE();
    case 549:
      if (lookahead == 'm') ADVANCE(424);
      END_STATE();
    case 550:
      if (lookahead == 'm') ADVANCE(332);
      END_STATE();
    case 551:
      if (lookahead == 'm') ADVANCE(344);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(904);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(470);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(474);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(467);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(679);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(695);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(704);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(735);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(708);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(747);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(721);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(714);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(776);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(719);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(724);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 586:
      if (lookahead == 'o') ADVANCE(553);
      if (lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 587:
      if (lookahead == 'o') ADVANCE(768);
      END_STATE();
    case 588:
      if (lookahead == 'o') ADVANCE(765);
      END_STATE();
    case 589:
      if (lookahead == 'o') ADVANCE(745);
      END_STATE();
    case 590:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 591:
      if (lookahead == 'o') ADVANCE(648);
      END_STATE();
    case 592:
      if (lookahead == 'o') ADVANCE(673);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(678);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(695);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(646);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(552);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(674);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(717);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(559);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(662);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(606);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(660);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(749);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(569);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(609);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(667);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(720);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(723);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(732);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(726);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 629:
      if (lookahead == 'p') ADVANCE(397);
      END_STATE();
    case 630:
      if (lookahead == 'p') ADVANCE(389);
      END_STATE();
    case 631:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 632:
      if (lookahead == 'p') ADVANCE(597);
      END_STATE();
    case 633:
      if (lookahead == 'p') ADVANCE(708);
      END_STATE();
    case 634:
      if (lookahead == 'p') ADVANCE(538);
      END_STATE();
    case 635:
      if (lookahead == 'p') ADVANCE(592);
      END_STATE();
    case 636:
      if (lookahead == 'p') ADVANCE(596);
      END_STATE();
    case 637:
      if (lookahead == 'p') ADVANCE(711);
      END_STATE();
    case 638:
      if (lookahead == 'p') ADVANCE(636);
      END_STATE();
    case 639:
      if (lookahead == 'p') ADVANCE(454);
      END_STATE();
    case 640:
      if (lookahead == 'p') ADVANCE(628);
      END_STATE();
    case 641:
      if (lookahead == 'p') ADVANCE(640);
      END_STATE();
    case 642:
      if (lookahead == 'q') ADVANCE(750);
      if (lookahead == 's') ADVANCE(410);
      END_STATE();
    case 643:
      if (lookahead == 'q') ADVANCE(756);
      END_STATE();
    case 644:
      if (lookahead == 'q') ADVANCE(753);
      END_STATE();
    case 645:
      if (lookahead == 'q') ADVANCE(755);
      END_STATE();
    case 646:
      if (lookahead == 'r') ADVANCE(904);
      END_STATE();
    case 647:
      if (lookahead == 'r') ADVANCE(345);
      if (lookahead == 'u') ADVANCE(555);
      END_STATE();
    case 648:
      if (lookahead == 'r') ADVANCE(522);
      END_STATE();
    case 649:
      if (lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 650:
      if (lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 651:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(729);
      if (lookahead == 'y') ADVANCE(525);
      END_STATE();
    case 653:
      if (lookahead == 'r') ADVANCE(692);
      END_STATE();
    case 654:
      if (lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(587);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(708);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(760);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(519);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(775);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(741);
      END_STATE();
    case 679:
      if (lookahead == 's') ADVANCE(904);
      END_STATE();
    case 680:
      if (lookahead == 's') ADVANCE(744);
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 681:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 682:
      if (lookahead == 's') ADVANCE(687);
      END_STATE();
    case 683:
      if (lookahead == 's') ADVANCE(694);
      END_STATE();
    case 684:
      if (lookahead == 's') ADVANCE(398);
      END_STATE();
    case 685:
      if (lookahead == 's') ADVANCE(695);
      END_STATE();
    case 686:
      if (lookahead == 's') ADVANCE(706);
      END_STATE();
    case 687:
      if (lookahead == 's') ADVANCE(497);
      END_STATE();
    case 688:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 689:
      if (lookahead == 's') ADVANCE(716);
      END_STATE();
    case 690:
      if (lookahead == 's') ADVANCE(610);
      END_STATE();
    case 691:
      if (lookahead == 's') ADVANCE(608);
      END_STATE();
    case 692:
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 693:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 694:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 695:
      if (lookahead == 't') ADVANCE(904);
      END_STATE();
    case 696:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 697:
      if (lookahead == 't') ADVANCE(763);
      END_STATE();
    case 698:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(770);
      END_STATE();
    case 700:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 701:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 702:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 703:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 704:
      if (lookahead == 't') ADVANCE(523);
      END_STATE();
    case 705:
      if (lookahead == 't') ADVANCE(748);
      END_STATE();
    case 706:
      if (lookahead == 't') ADVANCE(679);
      END_STATE();
    case 707:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 708:
      if (lookahead == 't') ADVANCE(398);
      END_STATE();
    case 709:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 710:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 711:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 712:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 713:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 714:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 715:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 716:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 717:
      if (lookahead == 't') ADVANCE(612);
      END_STATE();
    case 718:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 719:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 727:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 728:
      if (lookahead == 't') ADVANCE(477);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 744:
      if (lookahead == 'u') ADVANCE(461);
      END_STATE();
    case 745:
      if (lookahead == 'u') ADVANCE(555);
      END_STATE();
    case 746:
      if (lookahead == 'u') ADVANCE(638);
      END_STATE();
    case 747:
      if (lookahead == 'u') ADVANCE(389);
      END_STATE();
    case 748:
      if (lookahead == 'u') ADVANCE(679);
      END_STATE();
    case 749:
      if (lookahead == 'u') ADVANCE(695);
      END_STATE();
    case 750:
      if (lookahead == 'u') ADVANCE(404);
      END_STATE();
    case 751:
      if (lookahead == 'u') ADVANCE(728);
      if (lookahead == 'v') ADVANCE(324);
      END_STATE();
    case 752:
      if (lookahead == 'u') ADVANCE(730);
      END_STATE();
    case 753:
      if (lookahead == 'u') ADVANCE(443);
      END_STATE();
    case 754:
      if (lookahead == 'u') ADVANCE(733);
      END_STATE();
    case 755:
      if (lookahead == 'u') ADVANCE(446);
      END_STATE();
    case 756:
      if (lookahead == 'u') ADVANCE(507);
      END_STATE();
    case 757:
      if (lookahead == 'u') ADVANCE(641);
      END_STATE();
    case 758:
      if (lookahead == 'v') ADVANCE(500);
      END_STATE();
    case 759:
      if (lookahead == 'v') ADVANCE(436);
      END_STATE();
    case 760:
      if (lookahead == 'v') ADVANCE(444);
      END_STATE();
    case 761:
      if (lookahead == 'v') ADVANCE(434);
      END_STATE();
    case 762:
      if (lookahead == 'v') ADVANCE(330);
      END_STATE();
    case 763:
      if (lookahead == 'w') ADVANCE(591);
      END_STATE();
    case 764:
      if (lookahead == 'w') ADVANCE(331);
      END_STATE();
    case 765:
      if (lookahead == 'w') ADVANCE(398);
      END_STATE();
    case 766:
      if (lookahead == 'w') ADVANCE(307);
      END_STATE();
    case 767:
      if (lookahead == 'x') ADVANCE(629);
      END_STATE();
    case 768:
      if (lookahead == 'x') ADVANCE(770);
      END_STATE();
    case 769:
      if (lookahead == 'x') ADVANCE(722);
      END_STATE();
    case 770:
      if (lookahead == 'y') ADVANCE(904);
      END_STATE();
    case 771:
      if (lookahead == 'y') ADVANCE(198);
      END_STATE();
    case 772:
      if (lookahead == 'y') ADVANCE(193);
      END_STATE();
    case 773:
      if (lookahead == 'y') ADVANCE(196);
      END_STATE();
    case 774:
      if (lookahead == 'y') ADVANCE(630);
      END_STATE();
    case 775:
      if (lookahead == 'y') ADVANCE(201);
      END_STATE();
    case 776:
      if (lookahead == 'y') ADVANCE(202);
      END_STATE();
    case 777:
      if (lookahead == 'z') ADVANCE(398);
      END_STATE();
    case 778:
      if (lookahead == '}') ADVANCE(910);
      END_STATE();
    case 779:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(903);
      END_STATE();
    case 780:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      END_STATE();
    case 781:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(902);
      END_STATE();
    case 782:
      if (eof) ADVANCE(789);
      ADVANCE_MAP(
        0, 943,
        '\n', 943,
        '\r', 944,
        '#', 885,
        '-', 855,
        '/', 856,
        '<', 935,
        '>', 913,
        '@', 918,
        'C', 809,
        'D', 805,
        'G', 806,
        'H', 807,
        'L', 808,
        'O', 810,
        'P', 803,
        'T', 811,
        'W', 804,
        '[', 854,
        'm', 813,
        'q', 812,
        '{', 853,
        0x2028, 96,
        0x2029, 96,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(873);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(814);
      if (lookahead != 0) ADVANCE(857);
      END_STATE();
    case 783:
      if (eof) ADVANCE(789);
      ADVANCE_MAP(
        0, 847,
        '\n', 988,
        '\r', 989,
        '#', 887,
        '/', 867,
        '<', 911,
        '@', 916,
        'C', 840,
        'D', 829,
        'G', 830,
        'H', 835,
        'L', 838,
        'O', 843,
        'P', 828,
        'T', 844,
        'W', 831,
        '{', 868,
        '-', 870,
        '_', 870,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(847);
      END_STATE();
    case 784:
      if (eof) ADVANCE(789);
      ADVANCE_MAP(
        0, 847,
        '\n', 988,
        '\r', 989,
        '#', 887,
        '/', 867,
        '<', 911,
        '@', 916,
        'C', 840,
        'D', 829,
        'G', 830,
        'H', 836,
        'L', 838,
        'O', 843,
        'P', 828,
        'T', 844,
        'W', 831,
        '{', 868,
        '-', 870,
        '_', 870,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(847);
      END_STATE();
    case 785:
      if (eof) ADVANCE(789);
      ADVANCE_MAP(
        0, 847,
        '\n', 988,
        '\r', 989,
        '#', 887,
        '/', 867,
        '<', 911,
        '@', 916,
        'C', 841,
        'D', 832,
        'G', 833,
        'H', 837,
        'L', 839,
        'O', 842,
        'P', 827,
        'T', 845,
        'W', 834,
        '{', 868,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(876);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(847);
      END_STATE();
    case 786:
      if (eof) ADVANCE(789);
      ADVANCE_MAP(
        0, 852,
        '\n', 877,
        '\r', 878,
        '#', 884,
        '-', 850,
        '/', 851,
        '<', 935,
        '>', 913,
        '@', 917,
        'C', 797,
        'D', 792,
        'G', 793,
        'H', 795,
        'L', 796,
        'O', 798,
        'P', 791,
        'T', 799,
        'W', 794,
        '[', 849,
        'm', 800,
        'q', 801,
        '{', 848,
        0x2028, 48,
        0x2029, 48,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(872);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(802);
      if (lookahead != 0) ADVANCE(852);
      END_STATE();
    case 787:
      if (eof) ADVANCE(789);
      ADVANCE_MAP(
        0, 941,
        '\n', 940,
        '\r', 941,
        '#', 885,
        '-', 855,
        '/', 856,
        '<', 935,
        '>', 913,
        '@', 918,
        'C', 809,
        'D', 805,
        'G', 806,
        'H', 807,
        'L', 808,
        'O', 810,
        'P', 803,
        'T', 811,
        'W', 804,
        '[', 854,
        'm', 813,
        'q', 812,
        '{', 853,
        0x2028, 96,
        0x2029, 96,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(873);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(814);
      if (lookahead != 0) ADVANCE(857);
      END_STATE();
    case 788:
      if (eof) ADVANCE(789);
      ADVANCE_MAP(
        0, 923,
        '\n', 922,
        '\r', 923,
        '#', 882,
        '-', 858,
        '/', 859,
        '<', 936,
        '>', 913,
        '@', 919,
        'C', 821,
        'D', 817,
        'G', 819,
        'H', 818,
        'L', 820,
        'O', 822,
        'P', 815,
        'T', 823,
        'W', 816,
        '[', 862,
        'm', 825,
        'q', 824,
        '{', 861,
        0x2028, 143,
        0x2029, 143,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(874);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(826);
      if (lookahead != 0) ADVANCE(860);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'U') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == 'R') ADVANCE(5);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(6);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'O') ADVANCE(24);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'P') ADVANCE(35);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'R') ADVANCE(7);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead == 'U') ADVANCE(82);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'P') ADVANCE(83);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'R') ADVANCE(55);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'A') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(128);
      if (lookahead == 'U') ADVANCE(129);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == 'R') ADVANCE(100);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'I') ADVANCE(128);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'P') ADVANCE(130);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == 'u') ADVANCE(139);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'A') ADVANCE(289);
      if (lookahead == 'O') ADVANCE(279);
      if (lookahead == 'U') ADVANCE(287);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'A') ADVANCE(982);
      if (lookahead == 'O') ADVANCE(977);
      if (lookahead == 'U') ADVANCE(980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(967);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(980);
      if (lookahead == 'R') ADVANCE(950);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(953);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(250);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(287);
      if (lookahead == 'R') ADVANCE(212);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(220);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(951);
      if (lookahead == 'T') ADVANCE(983);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(951);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(213);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'I') ADVANCE(977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'I') ADVANCE(279);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'O') ADVANCE(969);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'O') ADVANCE(256);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'P') ADVANCE(288);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'P') ADVANCE(981);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'R') ADVANCE(952);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'R') ADVANCE(214);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(929);
      if (lookahead == '\r') ADVANCE(928);
      if (lookahead == '{') ADVANCE(907);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(929);
      if (lookahead == '\r') ADVANCE(928);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == '-') ADVANCE(938);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(929);
      if (lookahead == '\r') ADVANCE(928);
      if (lookahead == '{') ADVANCE(908);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(929);
      if (lookahead == '\r') ADVANCE(928);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == '-') ADVANCE(938);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == '-') ADVANCE(939);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(926);
      if (lookahead == '\r') ADVANCE(924);
      if (lookahead == '{') ADVANCE(909);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(927);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(926);
      if (lookahead == '\r') ADVANCE(924);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(927);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '\r') ADVANCE(912);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(912);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '%') ADVANCE(914);
      if (lookahead == '{') ADVANCE(906);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '%') ADVANCE(914);
      if (lookahead == '{') ADVANCE(906);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(929);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '-') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '/') ADVANCE(891);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '{') ADVANCE(906);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(929);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(987);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(872);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(873);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(874);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(876);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(875);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(986);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(876);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_NL_token1);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_NL_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_NL_token1);
      if (lookahead == '\n') ADVANCE(877);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_LINE_TAIL_token1);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_LINE_TAIL_token1);
      if ((!eof && lookahead == 00)) ADVANCE(881);
      if (lookahead == '\n') ADVANCE(880);
      if (lookahead == '\r') ADVANCE(881);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '\r') ADVANCE(883);
      if (lookahead == '#') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(883);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '\r') ADVANCE(883);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(883);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '\r') ADVANCE(886);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(886);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '\r') ADVANCE(886);
      if (lookahead == '#') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(886);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '\n') ADVANCE(888);
      if (lookahead == '\r') ADVANCE(886);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(886);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '#') ADVANCE(208);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(888);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(888);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token2);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(891);
      if (lookahead == '\r') ADVANCE(889);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token2);
      if (lookahead == '\n') ADVANCE(891);
      if (lookahead == '\r') ADVANCE(890);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(890);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(891);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(894);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == '#') ADVANCE(895);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(896);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(896);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_http_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(902);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_status_text);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_pre_request_script_token1);
      if (lookahead == '\r') ADVANCE(912);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(912);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(926);
      if (lookahead == '\r') ADVANCE(924);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(927);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      if ((!eof && lookahead == 00)) ADVANCE(925);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(925);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(929);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(926);
      if (lookahead == '\r') ADVANCE(924);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(927);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (lookahead == '\n') ADVANCE(929);
      if (lookahead == '\r') ADVANCE(928);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(928);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(929);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(947);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(947);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(942);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '\r') ADVANCE(942);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(942);
      if (lookahead == '\r') ADVANCE(942);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_LT2);
      if ((!eof && lookahead == 00)) ADVANCE(920);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(920);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_LT2);
      if ((!eof && lookahead == 00)) ADVANCE(921);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '@') ADVANCE(143);
      if (lookahead != 0) ADVANCE(921);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_LT2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(920);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead == '\n') ADVANCE(922);
      if (lookahead == '\r') ADVANCE(923);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(942);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(942);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token2);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token2);
      if (lookahead == '\n') ADVANCE(943);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(947);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym__not_comment);
      if (lookahead == '\r') ADVANCE(948);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(156);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '/') ADVANCE(781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(974);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(958);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(957);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'B') ADVANCE(979);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(966);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'D') ADVANCE(901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(954);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(976);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'I') ADVANCE(972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'K') ADVANCE(959);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(970);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(961);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(978);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(955);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(949);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'Q') ADVANCE(968);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(956);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(975);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(986);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(988);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 785},
  [2] = {.lex_state = 786},
  [3] = {.lex_state = 786},
  [4] = {.lex_state = 786},
  [5] = {.lex_state = 786},
  [6] = {.lex_state = 786},
  [7] = {.lex_state = 786},
  [8] = {.lex_state = 786},
  [9] = {.lex_state = 786},
  [10] = {.lex_state = 786},
  [11] = {.lex_state = 786},
  [12] = {.lex_state = 786},
  [13] = {.lex_state = 786},
  [14] = {.lex_state = 786},
  [15] = {.lex_state = 786},
  [16] = {.lex_state = 786},
  [17] = {.lex_state = 786},
  [18] = {.lex_state = 786},
  [19] = {.lex_state = 786},
  [20] = {.lex_state = 786},
  [21] = {.lex_state = 786},
  [22] = {.lex_state = 786},
  [23] = {.lex_state = 786},
  [24] = {.lex_state = 786},
  [25] = {.lex_state = 786},
  [26] = {.lex_state = 786},
  [27] = {.lex_state = 786},
  [28] = {.lex_state = 786},
  [29] = {.lex_state = 786},
  [30] = {.lex_state = 786},
  [31] = {.lex_state = 786},
  [32] = {.lex_state = 786},
  [33] = {.lex_state = 786},
  [34] = {.lex_state = 786},
  [35] = {.lex_state = 786},
  [36] = {.lex_state = 786},
  [37] = {.lex_state = 786},
  [38] = {.lex_state = 786},
  [39] = {.lex_state = 786},
  [40] = {.lex_state = 786},
  [41] = {.lex_state = 786},
  [42] = {.lex_state = 786},
  [43] = {.lex_state = 786},
  [44] = {.lex_state = 786},
  [45] = {.lex_state = 786},
  [46] = {.lex_state = 786},
  [47] = {.lex_state = 786},
  [48] = {.lex_state = 786},
  [49] = {.lex_state = 786},
  [50] = {.lex_state = 786},
  [51] = {.lex_state = 786},
  [52] = {.lex_state = 786},
  [53] = {.lex_state = 786},
  [54] = {.lex_state = 786},
  [55] = {.lex_state = 786},
  [56] = {.lex_state = 786},
  [57] = {.lex_state = 786},
  [58] = {.lex_state = 786},
  [59] = {.lex_state = 782},
  [60] = {.lex_state = 782},
  [61] = {.lex_state = 782},
  [62] = {.lex_state = 785},
  [63] = {.lex_state = 785},
  [64] = {.lex_state = 787},
  [65] = {.lex_state = 787},
  [66] = {.lex_state = 787},
  [67] = {.lex_state = 787},
  [68] = {.lex_state = 782},
  [69] = {.lex_state = 783},
  [70] = {.lex_state = 783},
  [71] = {.lex_state = 788},
  [72] = {.lex_state = 785},
  [73] = {.lex_state = 785},
  [74] = {.lex_state = 782},
  [75] = {.lex_state = 783},
  [76] = {.lex_state = 783},
  [77] = {.lex_state = 783},
  [78] = {.lex_state = 786},
  [79] = {.lex_state = 788},
  [80] = {.lex_state = 783},
  [81] = {.lex_state = 782},
  [82] = {.lex_state = 782},
  [83] = {.lex_state = 783},
  [84] = {.lex_state = 788},
  [85] = {.lex_state = 788},
  [86] = {.lex_state = 782},
  [87] = {.lex_state = 783},
  [88] = {.lex_state = 786},
  [89] = {.lex_state = 786},
  [90] = {.lex_state = 786},
  [91] = {.lex_state = 786},
  [92] = {.lex_state = 786},
  [93] = {.lex_state = 786},
  [94] = {.lex_state = 786},
  [95] = {.lex_state = 786},
  [96] = {.lex_state = 786},
  [97] = {.lex_state = 786},
  [98] = {.lex_state = 786},
  [99] = {.lex_state = 786},
  [100] = {.lex_state = 786},
  [101] = {.lex_state = 784},
  [102] = {.lex_state = 784},
  [103] = {.lex_state = 784},
  [104] = {.lex_state = 784},
  [105] = {.lex_state = 784},
  [106] = {.lex_state = 784},
  [107] = {.lex_state = 784},
  [108] = {.lex_state = 784},
  [109] = {.lex_state = 784},
  [110] = {.lex_state = 784},
  [111] = {.lex_state = 784},
  [112] = {.lex_state = 784},
  [113] = {.lex_state = 784},
  [114] = {.lex_state = 784},
  [115] = {.lex_state = 784},
  [116] = {.lex_state = 784},
  [117] = {.lex_state = 784},
  [118] = {.lex_state = 784},
  [119] = {.lex_state = 784},
  [120] = {.lex_state = 784},
  [121] = {.lex_state = 784},
  [122] = {.lex_state = 784},
  [123] = {.lex_state = 784},
  [124] = {.lex_state = 783},
  [125] = {.lex_state = 784},
  [126] = {.lex_state = 784},
  [127] = {.lex_state = 783},
  [128] = {.lex_state = 783},
  [129] = {.lex_state = 783},
  [130] = {.lex_state = 783},
  [131] = {.lex_state = 784},
  [132] = {.lex_state = 784},
  [133] = {.lex_state = 784},
  [134] = {.lex_state = 784},
  [135] = {.lex_state = 784},
  [136] = {.lex_state = 784},
  [137] = {.lex_state = 784},
  [138] = {.lex_state = 784},
  [139] = {.lex_state = 784},
  [140] = {.lex_state = 785},
  [141] = {.lex_state = 785},
  [142] = {.lex_state = 785},
  [143] = {.lex_state = 785},
  [144] = {.lex_state = 785},
  [145] = {.lex_state = 785},
  [146] = {.lex_state = 785},
  [147] = {.lex_state = 785},
  [148] = {.lex_state = 785},
  [149] = {.lex_state = 785},
  [150] = {.lex_state = 785},
  [151] = {.lex_state = 785},
  [152] = {.lex_state = 785},
  [153] = {.lex_state = 785},
  [154] = {.lex_state = 785},
  [155] = {.lex_state = 785},
  [156] = {.lex_state = 785},
  [157] = {.lex_state = 300},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 300},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 146},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 146},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 146},
  [197] = {.lex_state = 146},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 146},
  [200] = {.lex_state = 146},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 147},
  [203] = {.lex_state = 153},
  [204] = {.lex_state = 153},
  [205] = {.lex_state = 153},
  [206] = {.lex_state = 153},
  [207] = {.lex_state = 147},
  [208] = {.lex_state = 153},
  [209] = {.lex_state = 147},
  [210] = {.lex_state = 153},
  [211] = {.lex_state = 154},
  [212] = {.lex_state = 143},
  [213] = {.lex_state = 154},
  [214] = {.lex_state = 785},
  [215] = {.lex_state = 143},
  [216] = {.lex_state = 153},
  [217] = {.lex_state = 153},
  [218] = {.lex_state = 148},
  [219] = {.lex_state = 153},
  [220] = {.lex_state = 153},
  [221] = {.lex_state = 153},
  [222] = {.lex_state = 153},
  [223] = {.lex_state = 153},
  [224] = {.lex_state = 155},
  [225] = {.lex_state = 154},
  [226] = {.lex_state = 153},
  [227] = {.lex_state = 153},
  [228] = {.lex_state = 148},
  [229] = {.lex_state = 153},
  [230] = {.lex_state = 153},
  [231] = {.lex_state = 153},
  [232] = {.lex_state = 153},
  [233] = {.lex_state = 153},
  [234] = {.lex_state = 148},
  [235] = {.lex_state = 143},
  [236] = {.lex_state = 153},
  [237] = {.lex_state = 153},
  [238] = {.lex_state = 153},
  [239] = {.lex_state = 153},
  [240] = {.lex_state = 152},
  [241] = {.lex_state = 153},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 152},
  [244] = {.lex_state = 153},
  [245] = {.lex_state = 153},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 152},
  [248] = {.lex_state = 785},
  [249] = {.lex_state = 153},
  [250] = {.lex_state = 96},
  [251] = {.lex_state = 153},
  [252] = {.lex_state = 154},
  [253] = {.lex_state = 153},
  [254] = {.lex_state = 153},
  [255] = {.lex_state = 785},
  [256] = {.lex_state = 785},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 785},
  [259] = {.lex_state = 154},
  [260] = {.lex_state = 153},
  [261] = {.lex_state = 153},
  [262] = {.lex_state = 153},
  [263] = {.lex_state = 153},
  [264] = {.lex_state = 785},
  [265] = {.lex_state = 154},
  [266] = {.lex_state = 152},
  [267] = {.lex_state = 785},
  [268] = {.lex_state = 153},
  [269] = {.lex_state = 153},
  [270] = {.lex_state = 153},
  [271] = {.lex_state = 152},
  [272] = {.lex_state = 153},
  [273] = {.lex_state = 153},
  [274] = {.lex_state = 153},
  [275] = {.lex_state = 152},
  [276] = {.lex_state = 155},
  [277] = {.lex_state = 152},
  [278] = {.lex_state = 153},
  [279] = {.lex_state = 153},
  [280] = {.lex_state = 153},
  [281] = {.lex_state = 153},
  [282] = {.lex_state = 153},
  [283] = {.lex_state = 785},
  [284] = {.lex_state = 152},
  [285] = {.lex_state = 152},
  [286] = {.lex_state = 153},
  [287] = {.lex_state = 153},
  [288] = {.lex_state = 154},
  [289] = {.lex_state = 152},
  [290] = {.lex_state = 152},
  [291] = {.lex_state = 153},
  [292] = {.lex_state = 153},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_WORD_CHAR_token1] = ACTIONS(1),
    [aux_sym_PUNCTUATION_token1] = ACTIONS(1),
    [aux_sym_WS_token1] = ACTIONS(1),
    [aux_sym_NL_token1] = ACTIONS(1),
    [aux_sym__comment_prefix_token1] = ACTIONS(1),
    [aux_sym__comment_prefix_token2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_request_separator_token1] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
    [sym_http_version] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_AT2] = ACTIONS(1),
    [aux_sym_xml_body_token1] = ACTIONS(1),
    [aux_sym_json_body_token1] = ACTIONS(1),
    [anon_sym_LT2] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [aux_sym_multipart_form_data_token2] = ACTIONS(1),
    [sym_header_entity] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [aux_sym__blank_line_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(246),
    [sym__comment_prefix] = STATE(234),
    [sym_comment] = STATE(73),
    [sym_request_separator] = STATE(72),
    [sym_section] = STATE(62),
    [sym__section_content] = STATE(144),
    [aux_sym__target_url_line] = STATE(168),
    [sym_target_url] = STATE(231),
    [sym_request] = STATE(140),
    [sym_variable] = STATE(168),
    [sym_pre_request_script] = STATE(73),
    [sym_variable_declaration] = STATE(73),
    [sym__blank_line] = STATE(73),
    [aux_sym_document_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_WORD_CHAR_token1] = ACTIONS(5),
    [aux_sym_PUNCTUATION_token1] = ACTIONS(5),
    [aux_sym_WS_token1] = ACTIONS(7),
    [aux_sym__comment_prefix_token1] = ACTIONS(9),
    [aux_sym__comment_prefix_token2] = ACTIONS(11),
    [aux_sym_request_separator_token1] = ACTIONS(13),
    [sym_method] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_AT2] = ACTIONS(21),
    [aux_sym__blank_line_token1] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_NL_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(45), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(27), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [75] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(57), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(33), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(55), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [150] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(63), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(61), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [225] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(69), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(58), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(67), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [300] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(75), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(37), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(73), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [375] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(81), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(39), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(79), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [450] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(87), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(51), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(85), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [525] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(93), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(55), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(91), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [600] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(99), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(48), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(97), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [675] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(105), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(47), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(103), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [750] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(111), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(46), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(109), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [825] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(117), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(41), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(115), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [900] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(119), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(31), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(67), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [975] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(125), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(123), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1050] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(131), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(40), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(129), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1125] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(137), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(36), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(135), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1200] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(143), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(35), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(141), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1275] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(145), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(34), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(135), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1350] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(151), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(43), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(149), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1425] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(157), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(49), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(155), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1500] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(163), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(32), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(161), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1575] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(165), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(54), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(149), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1650] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(171), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(57), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(169), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1725] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(177), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(38), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(175), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1800] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(183), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(53), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(181), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1875] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(189), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(50), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(187), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1950] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(195), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(56), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(193), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [2025] = 20,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(197), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(30), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(55), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [2100] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(201), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2167] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(207), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2234] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(211), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2301] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(201), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2368] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(215), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2435] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(219), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2502] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(215), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2569] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(223), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2636] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(227), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2703] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(231), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2770] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(235), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2837] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(239), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2904] = 17,
    ACTIONS(245), 1,
      aux_sym_NL_token1,
    ACTIONS(248), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(251), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(254), 1,
      anon_sym_GT,
    ACTIONS(257), 1,
      aux_sym_xml_body_token1,
    ACTIONS(260), 1,
      aux_sym_json_body_token1,
    ACTIONS(263), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(266), 1,
      anon_sym_LT2,
    ACTIONS(269), 1,
      anon_sym_DASH_DASH,
    ACTIONS(272), 1,
      aux_sym_raw_body_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(243), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2971] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(277), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3038] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(281), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3105] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(285), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3172] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(289), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3239] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(293), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3306] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(297), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3373] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(301), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3440] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(305), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3507] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(309), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3574] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(313), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3641] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(317), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3708] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(277), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3775] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(321), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3842] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(325), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3909] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(329), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3976] = 17,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_raw_body_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(88), 1,
      sym_graphql_data,
    STATE(224), 1,
      sym__comment_prefix,
    STATE(292), 1,
      sym_external_body,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(96), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(207), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [4043] = 10,
    ACTIONS(335), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(338), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(344), 1,
      anon_sym_LT2,
    ACTIONS(347), 1,
      aux_sym_multipart_form_data_token1,
    STATE(226), 1,
      sym_external_body,
    STATE(228), 1,
      sym__comment_prefix,
    STATE(59), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(331), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_graphql_data_token1,
    ACTIONS(341), 4,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(333), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4090] = 10,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(354), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(356), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(360), 1,
      aux_sym_multipart_form_data_token1,
    STATE(226), 1,
      sym_external_body,
    STATE(228), 1,
      sym__comment_prefix,
    STATE(61), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(350), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_graphql_data_token1,
    ACTIONS(358), 4,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(352), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4137] = 10,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(354), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(356), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(368), 1,
      aux_sym_multipart_form_data_token1,
    STATE(226), 1,
      sym_external_body,
    STATE(228), 1,
      sym__comment_prefix,
    STATE(59), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(362), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_graphql_data_token1,
    ACTIONS(366), 4,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(364), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4184] = 19,
    ACTIONS(7), 1,
      aux_sym_WS_token1,
    ACTIONS(9), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(11), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(13), 1,
      aux_sym_request_separator_token1,
    ACTIONS(15), 1,
      sym_method,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_AT2,
    ACTIONS(23), 1,
      aux_sym__blank_line_token1,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_request_separator,
    STATE(140), 1,
      sym_request,
    STATE(144), 1,
      sym__section_content,
    STATE(231), 1,
      sym_target_url,
    STATE(234), 1,
      sym__comment_prefix,
    ACTIONS(5), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    STATE(63), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(168), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(73), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4248] = 19,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(377), 1,
      aux_sym_WS_token1,
    ACTIONS(380), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(383), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(386), 1,
      aux_sym_request_separator_token1,
    ACTIONS(389), 1,
      sym_method,
    ACTIONS(392), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(395), 1,
      anon_sym_LT,
    ACTIONS(398), 1,
      anon_sym_AT2,
    ACTIONS(401), 1,
      aux_sym__blank_line_token1,
    STATE(72), 1,
      sym_request_separator,
    STATE(140), 1,
      sym_request,
    STATE(144), 1,
      sym__section_content,
    STATE(231), 1,
      sym_target_url,
    STATE(234), 1,
      sym__comment_prefix,
    ACTIONS(374), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    STATE(63), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(168), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(73), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4312] = 7,
    ACTIONS(408), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(411), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(414), 1,
      aux_sym_multipart_form_data_token1,
    STATE(97), 1,
      sym__raw_body,
    STATE(276), 1,
      sym__comment_prefix,
    ACTIONS(404), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(406), 11,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4350] = 7,
    ACTIONS(414), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(420), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(423), 1,
      aux_sym__comment_prefix_token2,
    STATE(92), 1,
      sym__raw_body,
    STATE(276), 1,
      sym__comment_prefix,
    ACTIONS(416), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(418), 11,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4388] = 7,
    ACTIONS(414), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(430), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(433), 1,
      aux_sym__comment_prefix_token2,
    STATE(94), 1,
      sym__raw_body,
    STATE(276), 1,
      sym__comment_prefix,
    ACTIONS(426), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(428), 11,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4426] = 7,
    ACTIONS(414), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(440), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(443), 1,
      aux_sym__comment_prefix_token2,
    STATE(90), 1,
      sym__raw_body,
    STATE(276), 1,
      sym__comment_prefix,
    ACTIONS(436), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(438), 11,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4464] = 2,
    ACTIONS(446), 9,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(448), 13,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4491] = 14,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(456), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(458), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(460), 1,
      sym_http_version,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(464), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      sym_response,
    STATE(112), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(218), 1,
      sym__comment_prefix,
    STATE(4), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(87), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(452), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(450), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4542] = 14,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(456), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(458), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(460), 1,
      sym_http_version,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(466), 1,
      aux_sym__blank_line_token1,
    STATE(105), 1,
      aux_sym_request_repeat2,
    STATE(106), 1,
      sym_response,
    STATE(132), 1,
      sym_header,
    STATE(218), 1,
      sym__comment_prefix,
    STATE(28), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(124), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(73), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4593] = 4,
    ACTIONS(472), 1,
      aux_sym_xml_body_token2,
    STATE(79), 1,
      aux_sym_xml_body_repeat1,
    ACTIONS(468), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(470), 17,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4624] = 16,
    ACTIONS(7), 1,
      aux_sym_WS_token1,
    ACTIONS(9), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(11), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(15), 1,
      sym_method,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_AT2,
    ACTIONS(23), 1,
      aux_sym__blank_line_token1,
    STATE(140), 1,
      sym_request,
    STATE(151), 1,
      sym__section_content,
    STATE(231), 1,
      sym_target_url,
    STATE(234), 1,
      sym__comment_prefix,
    ACTIONS(5), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(474), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(168), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(73), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4679] = 16,
    ACTIONS(481), 1,
      aux_sym_WS_token1,
    ACTIONS(484), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(487), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(490), 1,
      sym_method,
    ACTIONS(493), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(496), 1,
      anon_sym_LT,
    ACTIONS(499), 1,
      anon_sym_AT2,
    ACTIONS(502), 1,
      aux_sym__blank_line_token1,
    STATE(140), 1,
      sym_request,
    STATE(148), 1,
      sym__section_content,
    STATE(231), 1,
      sym_target_url,
    STATE(234), 1,
      sym__comment_prefix,
    ACTIONS(476), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(478), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    STATE(168), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(73), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4734] = 2,
    ACTIONS(331), 9,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(333), 13,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4761] = 14,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(456), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(458), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(460), 1,
      sym_http_version,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(509), 1,
      aux_sym__blank_line_token1,
    STATE(113), 1,
      aux_sym_request_repeat2,
    STATE(114), 1,
      sym_response,
    STATE(132), 1,
      sym_header,
    STATE(218), 1,
      sym__comment_prefix,
    STATE(6), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(70), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(507), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(505), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4812] = 14,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(456), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(458), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(460), 1,
      sym_http_version,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(515), 1,
      aux_sym__blank_line_token1,
    STATE(121), 1,
      sym_response,
    STATE(122), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(218), 1,
      sym__comment_prefix,
    STATE(9), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(83), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(513), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(511), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4863] = 14,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(456), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(458), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(460), 1,
      sym_http_version,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(521), 1,
      aux_sym__blank_line_token1,
    STATE(102), 1,
      aux_sym_request_repeat2,
    STATE(115), 1,
      sym_response,
    STATE(132), 1,
      sym_header,
    STATE(218), 1,
      sym__comment_prefix,
    STATE(25), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(80), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(519), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(517), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4914] = 5,
    ACTIONS(527), 1,
      aux_sym_WS_token1,
    ACTIONS(530), 1,
      aux_sym__blank_line_token1,
    STATE(78), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(523), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(525), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
  [4947] = 4,
    ACTIONS(537), 1,
      aux_sym_xml_body_token2,
    STATE(79), 1,
      aux_sym_xml_body_repeat1,
    ACTIONS(533), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(535), 17,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4978] = 14,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(456), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(458), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(460), 1,
      sym_http_version,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(540), 1,
      aux_sym__blank_line_token1,
    STATE(118), 1,
      sym_response,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(218), 1,
      sym__comment_prefix,
    STATE(7), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(124), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(175), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5029] = 2,
    ACTIONS(542), 9,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(544), 13,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5056] = 2,
    ACTIONS(546), 9,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(548), 13,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5083] = 14,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(456), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(458), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(460), 1,
      sym_http_version,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(550), 1,
      aux_sym__blank_line_token1,
    STATE(117), 1,
      aux_sym_request_repeat2,
    STATE(119), 1,
      sym_response,
    STATE(132), 1,
      sym_header,
    STATE(218), 1,
      sym__comment_prefix,
    STATE(11), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(124), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(91), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5134] = 4,
    ACTIONS(472), 1,
      aux_sym_xml_body_token2,
    STATE(79), 1,
      aux_sym_xml_body_repeat1,
    ACTIONS(552), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(554), 17,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5165] = 4,
    ACTIONS(472), 1,
      aux_sym_xml_body_token2,
    STATE(79), 1,
      aux_sym_xml_body_repeat1,
    ACTIONS(556), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(558), 17,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5196] = 2,
    ACTIONS(560), 9,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(562), 13,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5223] = 14,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(456), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(458), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(460), 1,
      sym_http_version,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(564), 1,
      aux_sym__blank_line_token1,
    STATE(101), 1,
      sym_response,
    STATE(125), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(218), 1,
      sym__comment_prefix,
    STATE(8), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(124), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(61), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5274] = 4,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    STATE(98), 1,
      sym_json_body,
    ACTIONS(566), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(568), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5304] = 2,
    ACTIONS(570), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(572), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5329] = 2,
    ACTIONS(574), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(576), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5354] = 2,
    ACTIONS(578), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(580), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5379] = 2,
    ACTIONS(436), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(438), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5404] = 2,
    ACTIONS(582), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(584), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5429] = 2,
    ACTIONS(586), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(588), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5454] = 2,
    ACTIONS(590), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(592), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5479] = 2,
    ACTIONS(594), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(596), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5504] = 2,
    ACTIONS(426), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(428), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5529] = 2,
    ACTIONS(598), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(600), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5554] = 2,
    ACTIONS(602), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(604), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5579] = 2,
    ACTIONS(606), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(608), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5604] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(610), 1,
      aux_sym__blank_line_token1,
    STATE(109), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(18), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(85), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(83), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5638] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(616), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(16), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(614), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(612), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5672] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(622), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(14), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(620), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(618), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5706] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(628), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(13), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(626), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(624), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5740] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(634), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(20), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(632), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(630), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5774] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(636), 1,
      aux_sym__blank_line_token1,
    STATE(104), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(21), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(193), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(191), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5808] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(638), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(23), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(632), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(630), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5842] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(644), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(26), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(642), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(640), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5876] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(650), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(15), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(648), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(646), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5910] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(656), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(17), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(654), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(652), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5944] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(564), 1,
      aux_sym__blank_line_token1,
    STATE(110), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(8), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(61), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5978] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(662), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(10), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(660), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(658), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6012] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(668), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(27), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(666), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(664), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6046] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(466), 1,
      aux_sym__blank_line_token1,
    STATE(107), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(28), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(73), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6080] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(540), 1,
      aux_sym__blank_line_token1,
    STATE(103), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(7), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(175), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(173), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6114] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(674), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(2), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(672), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(670), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6148] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(680), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(29), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(678), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(676), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6182] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(682), 1,
      aux_sym__blank_line_token1,
    STATE(116), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(24), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(79), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6216] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(684), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(22), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(103), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6250] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(686), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(3), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(678), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(676), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6284] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(550), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(11), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(91), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6318] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(692), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(12), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(690), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(688), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6352] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(694), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(5), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(620), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(618), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6386] = 6,
    ACTIONS(700), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(703), 1,
      aux_sym__comment_prefix_token2,
    STATE(218), 1,
      sym__comment_prefix,
    STATE(124), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(698), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(696), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6416] = 8,
    ACTIONS(454), 1,
      aux_sym_WS_token1,
    ACTIONS(462), 1,
      sym_header_entity,
    ACTIONS(706), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(19), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(654), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(652), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6450] = 5,
    ACTIONS(712), 1,
      sym_header_entity,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    ACTIONS(710), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      aux_sym__blank_line_token1,
    ACTIONS(708), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6476] = 2,
    ACTIONS(448), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(446), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6495] = 2,
    ACTIONS(544), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(542), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6514] = 2,
    ACTIONS(548), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(546), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6533] = 2,
    ACTIONS(562), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(560), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6552] = 2,
    ACTIONS(717), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(715), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6570] = 2,
    ACTIONS(721), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(719), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6588] = 2,
    ACTIONS(725), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(723), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6606] = 2,
    ACTIONS(729), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(727), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6624] = 2,
    ACTIONS(733), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(731), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6642] = 2,
    ACTIONS(737), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(735), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6660] = 2,
    ACTIONS(741), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(739), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6678] = 2,
    ACTIONS(745), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(743), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6696] = 2,
    ACTIONS(749), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(747), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6714] = 2,
    ACTIONS(753), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(751), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6731] = 2,
    ACTIONS(448), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(446), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6748] = 2,
    ACTIONS(572), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(570), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6765] = 2,
    ACTIONS(757), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(755), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6782] = 2,
    ACTIONS(761), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(759), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6799] = 2,
    ACTIONS(765), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(763), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6816] = 2,
    ACTIONS(769), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(767), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6833] = 2,
    ACTIONS(562), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(560), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6850] = 2,
    ACTIONS(773), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(771), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6867] = 2,
    ACTIONS(548), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(546), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6884] = 2,
    ACTIONS(777), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(775), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6901] = 2,
    ACTIONS(781), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(779), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6918] = 2,
    ACTIONS(785), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(783), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6935] = 2,
    ACTIONS(789), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(787), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6952] = 2,
    ACTIONS(793), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(791), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6969] = 2,
    ACTIONS(797), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(795), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6986] = 2,
    ACTIONS(544), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(542), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [7003] = 6,
    ACTIONS(801), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(803), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(799), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(187), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(259), 2,
      sym_script,
      sym_path,
  [7025] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(807), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(811), 1,
      aux_sym_NL_token1,
    ACTIONS(813), 1,
      aux_sym_comment_token1,
    STATE(249), 1,
      sym_value,
    ACTIONS(809), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7049] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(807), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(815), 1,
      aux_sym_NL_token1,
    ACTIONS(817), 1,
      aux_sym_comment_token1,
    STATE(261), 1,
      sym_value,
    ACTIONS(809), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7073] = 6,
    ACTIONS(801), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(803), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(799), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(187), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(252), 2,
      sym_script,
      sym_path,
  [7095] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(807), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(819), 1,
      aux_sym_NL_token1,
    ACTIONS(821), 1,
      aux_sym_comment_token1,
    STATE(279), 1,
      sym_value,
    ACTIONS(809), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7119] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(809), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(823), 1,
      aux_sym_NL_token1,
    STATE(238), 1,
      sym_value,
    ACTIONS(807), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7140] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(807), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(825), 1,
      aux_sym_comment_token1,
    STATE(241), 1,
      sym_value,
    ACTIONS(809), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7161] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(809), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(827), 1,
      aux_sym_NL_token1,
    STATE(244), 1,
      sym_value,
    ACTIONS(807), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7182] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(807), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(829), 1,
      aux_sym_comment_token1,
    STATE(281), 1,
      sym_value,
    ACTIONS(809), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7203] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(807), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(831), 1,
      aux_sym_comment_token1,
    STATE(287), 1,
      sym_value,
    ACTIONS(809), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7224] = 6,
    ACTIONS(835), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(837), 1,
      aux_sym_WS_token1,
    ACTIONS(839), 1,
      aux_sym_NL_token1,
    ACTIONS(841), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(833), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(170), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7245] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(843), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(845), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(847), 1,
      aux_sym_WS_token1,
    ACTIONS(849), 1,
      aux_sym_NL_token1,
    STATE(208), 1,
      aux_sym_target_url_repeat1,
    STATE(183), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7268] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(807), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(852), 1,
      aux_sym_comment_token1,
    STATE(236), 1,
      sym_value,
    ACTIONS(809), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7289] = 6,
    ACTIONS(857), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(860), 1,
      aux_sym_WS_token1,
    ACTIONS(862), 1,
      aux_sym_NL_token1,
    ACTIONS(864), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(854), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(170), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7310] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(807), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(867), 1,
      aux_sym_comment_token1,
    STATE(286), 1,
      sym_value,
    ACTIONS(809), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7331] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(807), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(869), 1,
      aux_sym_comment_token1,
    STATE(273), 1,
      sym_value,
    ACTIONS(809), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7352] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(809), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(815), 1,
      aux_sym_NL_token1,
    STATE(261), 1,
      sym_value,
    ACTIONS(807), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7373] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(809), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(274), 1,
      sym_value,
    ACTIONS(807), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7391] = 5,
    ACTIONS(862), 1,
      aux_sym_pre_request_script_token1,
    ACTIONS(874), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(877), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(871), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7409] = 5,
    ACTIONS(841), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(882), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(230), 1,
      sym_path,
    ACTIONS(880), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(167), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7427] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(886), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(888), 1,
      aux_sym_NL_token1,
    ACTIONS(884), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7445] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(809), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(239), 1,
      sym_value,
    ACTIONS(807), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7463] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(809), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(263), 1,
      sym_value,
    ACTIONS(807), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7481] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(843), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(845), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(890), 1,
      aux_sym_WS_token1,
    ACTIONS(892), 1,
      aux_sym_NL_token1,
    STATE(183), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7501] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(809), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(287), 1,
      sym_value,
    ACTIONS(807), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7519] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(809), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(262), 1,
      sym_value,
    ACTIONS(807), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7537] = 6,
    ACTIONS(894), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(897), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(900), 1,
      aux_sym_WS_token1,
    ACTIONS(902), 1,
      aux_sym_NL_token1,
    ACTIONS(904), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(183), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7557] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(809), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(282), 1,
      sym_value,
    ACTIONS(807), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7575] = 5,
    ACTIONS(910), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(913), 1,
      aux_sym_NL_token1,
    ACTIONS(915), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(907), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(185), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7593] = 5,
    ACTIONS(841), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(882), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(221), 1,
      sym_path,
    ACTIONS(880), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(167), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7611] = 5,
    ACTIONS(803), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(839), 1,
      aux_sym_pre_request_script_token1,
    ACTIONS(920), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(918), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7629] = 5,
    ACTIONS(5), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(922), 1,
      aux_sym_WORD_CHAR_token1,
    STATE(227), 1,
      sym_target_url,
    STATE(168), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7646] = 2,
    ACTIONS(926), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(924), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7657] = 2,
    ACTIONS(930), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(928), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7668] = 2,
    ACTIONS(934), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(932), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7679] = 2,
    ACTIONS(938), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(936), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7690] = 2,
    ACTIONS(938), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(936), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [7700] = 2,
    ACTIONS(926), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(924), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [7710] = 2,
    ACTIONS(930), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(928), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [7720] = 2,
    ACTIONS(930), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_pre_request_script_token1,
    ACTIONS(928), 3,
      aux_sym_WORD_CHAR_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7730] = 2,
    ACTIONS(938), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_pre_request_script_token1,
    ACTIONS(936), 3,
      aux_sym_WORD_CHAR_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7740] = 2,
    ACTIONS(934), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(932), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [7750] = 2,
    ACTIONS(934), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_pre_request_script_token1,
    ACTIONS(932), 3,
      aux_sym_WORD_CHAR_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7760] = 2,
    ACTIONS(926), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_pre_request_script_token1,
    ACTIONS(924), 3,
      aux_sym_WORD_CHAR_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7770] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(940), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(942), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(180), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7784] = 3,
    ACTIONS(944), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(946), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(207), 1,
      aux_sym_script_repeat1,
  [7794] = 2,
    ACTIONS(950), 1,
      aux_sym_NL_token1,
    ACTIONS(948), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [7802] = 2,
    ACTIONS(954), 1,
      aux_sym_NL_token1,
    ACTIONS(952), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [7810] = 2,
    ACTIONS(958), 1,
      aux_sym_NL_token1,
    ACTIONS(956), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [7818] = 2,
    ACTIONS(962), 1,
      aux_sym_NL_token1,
    ACTIONS(960), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [7826] = 3,
    ACTIONS(964), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(966), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(209), 1,
      aux_sym_script_repeat1,
  [7836] = 3,
    ACTIONS(968), 1,
      aux_sym_WS_token1,
    ACTIONS(970), 1,
      aux_sym_NL_token1,
    STATE(210), 1,
      aux_sym_target_url_repeat1,
  [7846] = 3,
    ACTIONS(973), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(976), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(209), 1,
      aux_sym_script_repeat1,
  [7856] = 3,
    ACTIONS(978), 1,
      aux_sym_WS_token1,
    ACTIONS(980), 1,
      aux_sym_NL_token1,
    STATE(210), 1,
      aux_sym_target_url_repeat1,
  [7866] = 2,
    ACTIONS(983), 1,
      aux_sym_WS_token1,
    ACTIONS(985), 1,
      sym_identifier,
  [7873] = 2,
    ACTIONS(987), 1,
      aux_sym_xml_body_token2,
    STATE(84), 1,
      aux_sym_xml_body_repeat1,
  [7880] = 2,
    ACTIONS(989), 1,
      aux_sym_WS_token1,
    ACTIONS(991), 1,
      sym_identifier,
  [7887] = 2,
    ACTIONS(993), 1,
      aux_sym_WS_token1,
    ACTIONS(995), 1,
      anon_sym_AT2,
  [7894] = 2,
    ACTIONS(997), 1,
      aux_sym_xml_body_token2,
    STATE(71), 1,
      aux_sym_xml_body_repeat1,
  [7901] = 2,
    ACTIONS(999), 1,
      aux_sym_WS_token1,
    ACTIONS(1001), 1,
      anon_sym_COLON,
  [7908] = 2,
    ACTIONS(1003), 1,
      aux_sym_WS_token1,
    ACTIONS(1005), 1,
      anon_sym_EQ,
  [7915] = 2,
    ACTIONS(1007), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(1009), 1,
      anon_sym_AT,
  [7922] = 2,
    ACTIONS(1011), 1,
      aux_sym_WS_token1,
    ACTIONS(1013), 1,
      anon_sym_RBRACE_RBRACE,
  [7929] = 2,
    ACTIONS(1015), 1,
      aux_sym_WS_token1,
    ACTIONS(1017), 1,
      anon_sym_RBRACE_RBRACE,
  [7936] = 1,
    ACTIONS(1019), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [7941] = 2,
    ACTIONS(1021), 1,
      aux_sym_NL_token1,
    ACTIONS(1023), 1,
      sym_status_text,
  [7948] = 2,
    ACTIONS(1025), 1,
      aux_sym_WS_token1,
    ACTIONS(1027), 1,
      anon_sym_RBRACE_RBRACE,
  [7955] = 2,
    ACTIONS(1029), 1,
      anon_sym_AT,
    ACTIONS(1031), 1,
      sym__not_comment,
  [7962] = 2,
    ACTIONS(1033), 1,
      aux_sym_WS_token1,
    ACTIONS(1035), 1,
      sym_identifier,
  [7969] = 1,
    ACTIONS(1037), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [7974] = 2,
    ACTIONS(1039), 1,
      aux_sym_WS_token1,
    ACTIONS(1041), 1,
      aux_sym_NL_token1,
  [7981] = 2,
    ACTIONS(1043), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(1045), 1,
      anon_sym_AT,
  [7988] = 2,
    ACTIONS(1047), 1,
      aux_sym_WS_token1,
    ACTIONS(1049), 1,
      anon_sym_RBRACE_RBRACE,
  [7995] = 1,
    ACTIONS(1051), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [8000] = 2,
    ACTIONS(1053), 1,
      aux_sym_WS_token1,
    ACTIONS(1055), 1,
      aux_sym_NL_token1,
  [8007] = 2,
    ACTIONS(1057), 1,
      aux_sym_WS_token1,
    ACTIONS(1059), 1,
      anon_sym_RBRACE_RBRACE,
  [8014] = 2,
    ACTIONS(1061), 1,
      aux_sym_WS_token1,
    ACTIONS(1063), 1,
      anon_sym_RBRACE_RBRACE,
  [8021] = 2,
    ACTIONS(1065), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(1067), 1,
      anon_sym_AT,
  [8028] = 2,
    ACTIONS(1069), 1,
      aux_sym_xml_body_token2,
    STATE(85), 1,
      aux_sym_xml_body_repeat1,
  [8035] = 1,
    ACTIONS(1071), 1,
      aux_sym_NL_token1,
  [8039] = 1,
    ACTIONS(1073), 1,
      anon_sym_RBRACE_RBRACE,
  [8043] = 1,
    ACTIONS(1075), 1,
      aux_sym_NL_token1,
  [8047] = 1,
    ACTIONS(1077), 1,
      aux_sym_NL_token1,
  [8051] = 1,
    ACTIONS(1079), 1,
      sym_identifier,
  [8055] = 1,
    ACTIONS(1081), 1,
      aux_sym_NL_token1,
  [8059] = 1,
    ACTIONS(1083), 1,
      sym_http_version,
  [8063] = 1,
    ACTIONS(1085), 1,
      sym_identifier,
  [8067] = 1,
    ACTIONS(1087), 1,
      aux_sym_NL_token1,
  [8071] = 1,
    ACTIONS(1089), 1,
      aux_sym_NL_token1,
  [8075] = 1,
    ACTIONS(1091), 1,
      ts_builtin_sym_end,
  [8079] = 1,
    ACTIONS(1093), 1,
      sym_identifier,
  [8083] = 1,
    ACTIONS(1095), 1,
      aux_sym_WS_token1,
  [8087] = 1,
    ACTIONS(1097), 1,
      aux_sym_NL_token1,
  [8091] = 1,
    ACTIONS(1099), 1,
      aux_sym_multipart_form_data_token1,
  [8095] = 1,
    ACTIONS(1101), 1,
      aux_sym_NL_token1,
  [8099] = 1,
    ACTIONS(1103), 1,
      aux_sym_pre_request_script_token1,
  [8103] = 1,
    ACTIONS(1105), 1,
      anon_sym_EQ,
  [8107] = 1,
    ACTIONS(1107), 1,
      aux_sym_NL_token1,
  [8111] = 1,
    ACTIONS(1109), 1,
      aux_sym_WS_token1,
  [8115] = 1,
    ACTIONS(1111), 1,
      aux_sym_WS_token1,
  [8119] = 1,
    ACTIONS(1113), 1,
      sym_http_version,
  [8123] = 1,
    ACTIONS(1115), 1,
      aux_sym_WS_token1,
  [8127] = 1,
    ACTIONS(1117), 1,
      aux_sym_pre_request_script_token1,
  [8131] = 1,
    ACTIONS(1119), 1,
      anon_sym_RBRACE_RBRACE,
  [8135] = 1,
    ACTIONS(1121), 1,
      aux_sym_NL_token1,
  [8139] = 1,
    ACTIONS(1123), 1,
      aux_sym_NL_token1,
  [8143] = 1,
    ACTIONS(1125), 1,
      aux_sym_NL_token1,
  [8147] = 1,
    ACTIONS(1127), 1,
      aux_sym_WS_token1,
  [8151] = 1,
    ACTIONS(1129), 1,
      aux_sym_pre_request_script_token1,
  [8155] = 1,
    ACTIONS(1131), 1,
      aux_sym__blank_line_token1,
  [8159] = 1,
    ACTIONS(1133), 1,
      aux_sym_WS_token1,
  [8163] = 1,
    ACTIONS(1135), 1,
      sym_status_code,
  [8167] = 1,
    ACTIONS(1137), 1,
      anon_sym_COLON,
  [8171] = 1,
    ACTIONS(1139), 1,
      anon_sym_RBRACE_RBRACE,
  [8175] = 1,
    ACTIONS(1141), 1,
      aux_sym__blank_line_token1,
  [8179] = 1,
    ACTIONS(1143), 1,
      anon_sym_RBRACE_RBRACE,
  [8183] = 1,
    ACTIONS(1145), 1,
      aux_sym_NL_token1,
  [8187] = 1,
    ACTIONS(1147), 1,
      aux_sym_NL_token1,
  [8191] = 1,
    ACTIONS(1149), 1,
      sym_identifier,
  [8195] = 1,
    ACTIONS(1151), 1,
      sym__not_comment,
  [8199] = 1,
    ACTIONS(1153), 1,
      sym_identifier,
  [8203] = 1,
    ACTIONS(1155), 1,
      anon_sym_RBRACE_RBRACE,
  [8207] = 1,
    ACTIONS(1157), 1,
      aux_sym_NL_token1,
  [8211] = 1,
    ACTIONS(1159), 1,
      anon_sym_RBRACE_RBRACE,
  [8215] = 1,
    ACTIONS(1161), 1,
      aux_sym_NL_token1,
  [8219] = 1,
    ACTIONS(1163), 1,
      aux_sym_NL_token1,
  [8223] = 1,
    ACTIONS(1165), 1,
      aux_sym_WS_token1,
  [8227] = 1,
    ACTIONS(1167), 1,
      sym_identifier,
  [8231] = 1,
    ACTIONS(1169), 1,
      sym_identifier,
  [8235] = 1,
    ACTIONS(1171), 1,
      aux_sym_NL_token1,
  [8239] = 1,
    ACTIONS(1173), 1,
      aux_sym_NL_token1,
  [8243] = 1,
    ACTIONS(1175), 1,
      aux_sym_pre_request_script_token1,
  [8247] = 1,
    ACTIONS(1177), 1,
      sym_identifier,
  [8251] = 1,
    ACTIONS(1179), 1,
      sym_identifier,
  [8255] = 1,
    ACTIONS(1181), 1,
      aux_sym_NL_token1,
  [8259] = 1,
    ACTIONS(1183), 1,
      aux_sym_NL_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 75,
  [SMALL_STATE(4)] = 150,
  [SMALL_STATE(5)] = 225,
  [SMALL_STATE(6)] = 300,
  [SMALL_STATE(7)] = 375,
  [SMALL_STATE(8)] = 450,
  [SMALL_STATE(9)] = 525,
  [SMALL_STATE(10)] = 600,
  [SMALL_STATE(11)] = 675,
  [SMALL_STATE(12)] = 750,
  [SMALL_STATE(13)] = 825,
  [SMALL_STATE(14)] = 900,
  [SMALL_STATE(15)] = 975,
  [SMALL_STATE(16)] = 1050,
  [SMALL_STATE(17)] = 1125,
  [SMALL_STATE(18)] = 1200,
  [SMALL_STATE(19)] = 1275,
  [SMALL_STATE(20)] = 1350,
  [SMALL_STATE(21)] = 1425,
  [SMALL_STATE(22)] = 1500,
  [SMALL_STATE(23)] = 1575,
  [SMALL_STATE(24)] = 1650,
  [SMALL_STATE(25)] = 1725,
  [SMALL_STATE(26)] = 1800,
  [SMALL_STATE(27)] = 1875,
  [SMALL_STATE(28)] = 1950,
  [SMALL_STATE(29)] = 2025,
  [SMALL_STATE(30)] = 2100,
  [SMALL_STATE(31)] = 2167,
  [SMALL_STATE(32)] = 2234,
  [SMALL_STATE(33)] = 2301,
  [SMALL_STATE(34)] = 2368,
  [SMALL_STATE(35)] = 2435,
  [SMALL_STATE(36)] = 2502,
  [SMALL_STATE(37)] = 2569,
  [SMALL_STATE(38)] = 2636,
  [SMALL_STATE(39)] = 2703,
  [SMALL_STATE(40)] = 2770,
  [SMALL_STATE(41)] = 2837,
  [SMALL_STATE(42)] = 2904,
  [SMALL_STATE(43)] = 2971,
  [SMALL_STATE(44)] = 3038,
  [SMALL_STATE(45)] = 3105,
  [SMALL_STATE(46)] = 3172,
  [SMALL_STATE(47)] = 3239,
  [SMALL_STATE(48)] = 3306,
  [SMALL_STATE(49)] = 3373,
  [SMALL_STATE(50)] = 3440,
  [SMALL_STATE(51)] = 3507,
  [SMALL_STATE(52)] = 3574,
  [SMALL_STATE(53)] = 3641,
  [SMALL_STATE(54)] = 3708,
  [SMALL_STATE(55)] = 3775,
  [SMALL_STATE(56)] = 3842,
  [SMALL_STATE(57)] = 3909,
  [SMALL_STATE(58)] = 3976,
  [SMALL_STATE(59)] = 4043,
  [SMALL_STATE(60)] = 4090,
  [SMALL_STATE(61)] = 4137,
  [SMALL_STATE(62)] = 4184,
  [SMALL_STATE(63)] = 4248,
  [SMALL_STATE(64)] = 4312,
  [SMALL_STATE(65)] = 4350,
  [SMALL_STATE(66)] = 4388,
  [SMALL_STATE(67)] = 4426,
  [SMALL_STATE(68)] = 4464,
  [SMALL_STATE(69)] = 4491,
  [SMALL_STATE(70)] = 4542,
  [SMALL_STATE(71)] = 4593,
  [SMALL_STATE(72)] = 4624,
  [SMALL_STATE(73)] = 4679,
  [SMALL_STATE(74)] = 4734,
  [SMALL_STATE(75)] = 4761,
  [SMALL_STATE(76)] = 4812,
  [SMALL_STATE(77)] = 4863,
  [SMALL_STATE(78)] = 4914,
  [SMALL_STATE(79)] = 4947,
  [SMALL_STATE(80)] = 4978,
  [SMALL_STATE(81)] = 5029,
  [SMALL_STATE(82)] = 5056,
  [SMALL_STATE(83)] = 5083,
  [SMALL_STATE(84)] = 5134,
  [SMALL_STATE(85)] = 5165,
  [SMALL_STATE(86)] = 5196,
  [SMALL_STATE(87)] = 5223,
  [SMALL_STATE(88)] = 5274,
  [SMALL_STATE(89)] = 5304,
  [SMALL_STATE(90)] = 5329,
  [SMALL_STATE(91)] = 5354,
  [SMALL_STATE(92)] = 5379,
  [SMALL_STATE(93)] = 5404,
  [SMALL_STATE(94)] = 5429,
  [SMALL_STATE(95)] = 5454,
  [SMALL_STATE(96)] = 5479,
  [SMALL_STATE(97)] = 5504,
  [SMALL_STATE(98)] = 5529,
  [SMALL_STATE(99)] = 5554,
  [SMALL_STATE(100)] = 5579,
  [SMALL_STATE(101)] = 5604,
  [SMALL_STATE(102)] = 5638,
  [SMALL_STATE(103)] = 5672,
  [SMALL_STATE(104)] = 5706,
  [SMALL_STATE(105)] = 5740,
  [SMALL_STATE(106)] = 5774,
  [SMALL_STATE(107)] = 5808,
  [SMALL_STATE(108)] = 5842,
  [SMALL_STATE(109)] = 5876,
  [SMALL_STATE(110)] = 5910,
  [SMALL_STATE(111)] = 5944,
  [SMALL_STATE(112)] = 5978,
  [SMALL_STATE(113)] = 6012,
  [SMALL_STATE(114)] = 6046,
  [SMALL_STATE(115)] = 6080,
  [SMALL_STATE(116)] = 6114,
  [SMALL_STATE(117)] = 6148,
  [SMALL_STATE(118)] = 6182,
  [SMALL_STATE(119)] = 6216,
  [SMALL_STATE(120)] = 6250,
  [SMALL_STATE(121)] = 6284,
  [SMALL_STATE(122)] = 6318,
  [SMALL_STATE(123)] = 6352,
  [SMALL_STATE(124)] = 6386,
  [SMALL_STATE(125)] = 6416,
  [SMALL_STATE(126)] = 6450,
  [SMALL_STATE(127)] = 6476,
  [SMALL_STATE(128)] = 6495,
  [SMALL_STATE(129)] = 6514,
  [SMALL_STATE(130)] = 6533,
  [SMALL_STATE(131)] = 6552,
  [SMALL_STATE(132)] = 6570,
  [SMALL_STATE(133)] = 6588,
  [SMALL_STATE(134)] = 6606,
  [SMALL_STATE(135)] = 6624,
  [SMALL_STATE(136)] = 6642,
  [SMALL_STATE(137)] = 6660,
  [SMALL_STATE(138)] = 6678,
  [SMALL_STATE(139)] = 6696,
  [SMALL_STATE(140)] = 6714,
  [SMALL_STATE(141)] = 6731,
  [SMALL_STATE(142)] = 6748,
  [SMALL_STATE(143)] = 6765,
  [SMALL_STATE(144)] = 6782,
  [SMALL_STATE(145)] = 6799,
  [SMALL_STATE(146)] = 6816,
  [SMALL_STATE(147)] = 6833,
  [SMALL_STATE(148)] = 6850,
  [SMALL_STATE(149)] = 6867,
  [SMALL_STATE(150)] = 6884,
  [SMALL_STATE(151)] = 6901,
  [SMALL_STATE(152)] = 6918,
  [SMALL_STATE(153)] = 6935,
  [SMALL_STATE(154)] = 6952,
  [SMALL_STATE(155)] = 6969,
  [SMALL_STATE(156)] = 6986,
  [SMALL_STATE(157)] = 7003,
  [SMALL_STATE(158)] = 7025,
  [SMALL_STATE(159)] = 7049,
  [SMALL_STATE(160)] = 7073,
  [SMALL_STATE(161)] = 7095,
  [SMALL_STATE(162)] = 7119,
  [SMALL_STATE(163)] = 7140,
  [SMALL_STATE(164)] = 7161,
  [SMALL_STATE(165)] = 7182,
  [SMALL_STATE(166)] = 7203,
  [SMALL_STATE(167)] = 7224,
  [SMALL_STATE(168)] = 7245,
  [SMALL_STATE(169)] = 7268,
  [SMALL_STATE(170)] = 7289,
  [SMALL_STATE(171)] = 7310,
  [SMALL_STATE(172)] = 7331,
  [SMALL_STATE(173)] = 7352,
  [SMALL_STATE(174)] = 7373,
  [SMALL_STATE(175)] = 7391,
  [SMALL_STATE(176)] = 7409,
  [SMALL_STATE(177)] = 7427,
  [SMALL_STATE(178)] = 7445,
  [SMALL_STATE(179)] = 7463,
  [SMALL_STATE(180)] = 7481,
  [SMALL_STATE(181)] = 7501,
  [SMALL_STATE(182)] = 7519,
  [SMALL_STATE(183)] = 7537,
  [SMALL_STATE(184)] = 7557,
  [SMALL_STATE(185)] = 7575,
  [SMALL_STATE(186)] = 7593,
  [SMALL_STATE(187)] = 7611,
  [SMALL_STATE(188)] = 7629,
  [SMALL_STATE(189)] = 7646,
  [SMALL_STATE(190)] = 7657,
  [SMALL_STATE(191)] = 7668,
  [SMALL_STATE(192)] = 7679,
  [SMALL_STATE(193)] = 7690,
  [SMALL_STATE(194)] = 7700,
  [SMALL_STATE(195)] = 7710,
  [SMALL_STATE(196)] = 7720,
  [SMALL_STATE(197)] = 7730,
  [SMALL_STATE(198)] = 7740,
  [SMALL_STATE(199)] = 7750,
  [SMALL_STATE(200)] = 7760,
  [SMALL_STATE(201)] = 7770,
  [SMALL_STATE(202)] = 7784,
  [SMALL_STATE(203)] = 7794,
  [SMALL_STATE(204)] = 7802,
  [SMALL_STATE(205)] = 7810,
  [SMALL_STATE(206)] = 7818,
  [SMALL_STATE(207)] = 7826,
  [SMALL_STATE(208)] = 7836,
  [SMALL_STATE(209)] = 7846,
  [SMALL_STATE(210)] = 7856,
  [SMALL_STATE(211)] = 7866,
  [SMALL_STATE(212)] = 7873,
  [SMALL_STATE(213)] = 7880,
  [SMALL_STATE(214)] = 7887,
  [SMALL_STATE(215)] = 7894,
  [SMALL_STATE(216)] = 7901,
  [SMALL_STATE(217)] = 7908,
  [SMALL_STATE(218)] = 7915,
  [SMALL_STATE(219)] = 7922,
  [SMALL_STATE(220)] = 7929,
  [SMALL_STATE(221)] = 7936,
  [SMALL_STATE(222)] = 7941,
  [SMALL_STATE(223)] = 7948,
  [SMALL_STATE(224)] = 7955,
  [SMALL_STATE(225)] = 7962,
  [SMALL_STATE(226)] = 7969,
  [SMALL_STATE(227)] = 7974,
  [SMALL_STATE(228)] = 7981,
  [SMALL_STATE(229)] = 7988,
  [SMALL_STATE(230)] = 7995,
  [SMALL_STATE(231)] = 8000,
  [SMALL_STATE(232)] = 8007,
  [SMALL_STATE(233)] = 8014,
  [SMALL_STATE(234)] = 8021,
  [SMALL_STATE(235)] = 8028,
  [SMALL_STATE(236)] = 8035,
  [SMALL_STATE(237)] = 8039,
  [SMALL_STATE(238)] = 8043,
  [SMALL_STATE(239)] = 8047,
  [SMALL_STATE(240)] = 8051,
  [SMALL_STATE(241)] = 8055,
  [SMALL_STATE(242)] = 8059,
  [SMALL_STATE(243)] = 8063,
  [SMALL_STATE(244)] = 8067,
  [SMALL_STATE(245)] = 8071,
  [SMALL_STATE(246)] = 8075,
  [SMALL_STATE(247)] = 8079,
  [SMALL_STATE(248)] = 8083,
  [SMALL_STATE(249)] = 8087,
  [SMALL_STATE(250)] = 8091,
  [SMALL_STATE(251)] = 8095,
  [SMALL_STATE(252)] = 8099,
  [SMALL_STATE(253)] = 8103,
  [SMALL_STATE(254)] = 8107,
  [SMALL_STATE(255)] = 8111,
  [SMALL_STATE(256)] = 8115,
  [SMALL_STATE(257)] = 8119,
  [SMALL_STATE(258)] = 8123,
  [SMALL_STATE(259)] = 8127,
  [SMALL_STATE(260)] = 8131,
  [SMALL_STATE(261)] = 8135,
  [SMALL_STATE(262)] = 8139,
  [SMALL_STATE(263)] = 8143,
  [SMALL_STATE(264)] = 8147,
  [SMALL_STATE(265)] = 8151,
  [SMALL_STATE(266)] = 8155,
  [SMALL_STATE(267)] = 8159,
  [SMALL_STATE(268)] = 8163,
  [SMALL_STATE(269)] = 8167,
  [SMALL_STATE(270)] = 8171,
  [SMALL_STATE(271)] = 8175,
  [SMALL_STATE(272)] = 8179,
  [SMALL_STATE(273)] = 8183,
  [SMALL_STATE(274)] = 8187,
  [SMALL_STATE(275)] = 8191,
  [SMALL_STATE(276)] = 8195,
  [SMALL_STATE(277)] = 8199,
  [SMALL_STATE(278)] = 8203,
  [SMALL_STATE(279)] = 8207,
  [SMALL_STATE(280)] = 8211,
  [SMALL_STATE(281)] = 8215,
  [SMALL_STATE(282)] = 8219,
  [SMALL_STATE(283)] = 8223,
  [SMALL_STATE(284)] = 8227,
  [SMALL_STATE(285)] = 8231,
  [SMALL_STATE(286)] = 8235,
  [SMALL_STATE(287)] = 8239,
  [SMALL_STATE(288)] = 8243,
  [SMALL_STATE(289)] = 8247,
  [SMALL_STATE(290)] = 8251,
  [SMALL_STATE(291)] = 8255,
  [SMALL_STATE(292)] = 8259,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 22),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 22),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 30),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 30),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 10),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 10),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 13),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 13),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 25),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 25),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 10),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 10),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 12),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 12),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 17),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 17),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 12),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 12),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 19),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 19),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 56),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 56),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 38),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 38),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 8),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 8),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 26),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 26),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 10),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 10),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 47),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 47),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 25),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 25),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 12),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 12),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 43),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 43),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 36),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 36),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 25),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 25),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 51),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 51),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 33),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 33),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 52),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 52),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 49),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 49),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 50),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 50),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 48),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 48),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 16),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 16),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 21),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 21),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 23),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 23),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 62),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 62),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(42),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(224),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(224),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(267),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(215),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(235),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(212),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(214),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(250),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(64),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 60),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 60),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 27),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 27),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 46),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 46),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 44),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 44),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 42),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 42),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 39),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 39),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 61),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 61),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 57),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 57),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 37),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 37),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 58),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 58),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 59),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 59),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 31),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 31),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 55),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 55),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 34),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 34),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(264),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(258),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 1, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0), SHIFT(276),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_raw_body, 1, 0, 0), SHIFT(276),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 1, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(276),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(276),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 2, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 2, 0, 0),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_raw_body, 2, 0, 0), SHIFT(276),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_raw_body, 2, 0, 0), SHIFT(276),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 2, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(276),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(276),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 7, 0, 41),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 7, 0, 41),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 10),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 10),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 2, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 2, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(168),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(271),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(234),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(234),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(264),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(225),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(258),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(247),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(73),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 25),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 25),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 12),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 12),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 4),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 4),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0), SHIFT_REPEAT(266),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0), SHIFT_REPEAT(78),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xml_body_repeat1, 2, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_body_repeat1, 2, 0, 0),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_body_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6, 0, 29),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6, 0, 29),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4, 0, 11),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4, 0, 11),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 3, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 3, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 4, 0, 11),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 4, 0, 11),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 6, 0, 29),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 6, 0, 29),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 3, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 3, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 7, 0, 41),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 7, 0, 41),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 1, 0, 15),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 1, 0, 15),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__external_body, 2, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__external_body, 2, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 8),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 8),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 13),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 13),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 56),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 56),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 47),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 47),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 43),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 43),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 38),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 38),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 26),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 26),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 17),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 17),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 36),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 36),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 22),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 22),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 30),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 30),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 19),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 19),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [700] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14), SHIFT_REPEAT(216),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 45),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 45),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 1, 0, 7),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 1, 0, 7),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 20),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 20),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 20),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 20),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 32),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 32),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 20),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 20),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 53),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, 0, 53),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 2),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 2),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 2, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 2, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 1),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 18),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 18),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 2, 0, 3),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 2, 0, 3),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, 0, 40),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, 0, 40),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 3),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, 0, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 5),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 5),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 28),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 28),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 4, 0, 9),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 4, 0, 9),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1, 0, 0),
  [849] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_target_url, 1, 0, 0), SHIFT(248),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [857] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [864] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [871] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [874] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(183),
  [897] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(183),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_url_line, 2, 0, 0),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(225),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 11),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 11),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 6),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 6),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 6),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 6),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 11),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 11),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0), SHIFT(248),
  [973] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0),
  [980] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, 0, 54),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, 0, 35),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1091] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 4, 0, 0),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 3, 0, 0),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
