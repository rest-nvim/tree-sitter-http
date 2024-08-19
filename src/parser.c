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
#define STATE_COUNT 503
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 77

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
  anon_sym_GT = 20,
  anon_sym_LBRACE_PERCENT = 21,
  anon_sym_PERCENT_RBRACE = 22,
  anon_sym_AT2 = 23,
  aux_sym_xml_body_token1 = 24,
  aux_sym_json_body_token1 = 25,
  aux_sym_graphql_data_token1 = 26,
  anon_sym_LT2 = 27,
  anon_sym_DASH_DASH = 28,
  aux_sym_multipart_form_data_token1 = 29,
  sym__not_comment = 30,
  sym_header_entity = 31,
  sym_identifier = 32,
  aux_sym_path_token1 = 33,
  aux_sym__blank_line_token1 = 34,
  sym_document = 35,
  sym__comment_prefix = 36,
  sym_comment = 37,
  sym_var_comment = 38,
  sym_request_separator = 39,
  sym_section = 40,
  sym__section_content = 41,
  aux_sym__target_url_line = 42,
  sym_target_url = 43,
  sym_response = 44,
  sym_request = 45,
  sym_header = 46,
  sym_variable = 47,
  sym_pre_request_script = 48,
  sym_res_handler_script = 49,
  sym_script = 50,
  sym_variable_declaration = 51,
  sym_xml_body = 52,
  sym_json_body = 53,
  sym_graphql_body = 54,
  sym_graphql_data = 55,
  sym__external_body = 56,
  sym_external_body = 57,
  sym_multipart_form_data = 58,
  sym_raw_body = 59,
  sym__raw_body = 60,
  sym_path = 61,
  sym_value = 62,
  sym__blank_line = 63,
  aux_sym_document_repeat1 = 64,
  aux_sym__section_content_repeat1 = 65,
  aux_sym__section_content_repeat2 = 66,
  aux_sym_target_url_repeat1 = 67,
  aux_sym_request_repeat1 = 68,
  aux_sym_request_repeat2 = 69,
  aux_sym_request_repeat3 = 70,
  aux_sym_request_repeat4 = 71,
  aux_sym_script_repeat1 = 72,
  aux_sym_multipart_form_data_repeat1 = 73,
  aux_sym_path_repeat1 = 74,
  aux_sym_value_repeat1 = 75,
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
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_AT2] = "@",
  [aux_sym_xml_body_token1] = "xml_body_token1",
  [aux_sym_json_body_token1] = "json_body_token1",
  [aux_sym_graphql_data_token1] = "graphql_data_token1",
  [anon_sym_LT2] = "<",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_multipart_form_data_token1] = "multipart_form_data_token1",
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
  [aux_sym__section_content_repeat1] = "_section_content_repeat1",
  [aux_sym__section_content_repeat2] = "_section_content_repeat2",
  [aux_sym_target_url_repeat1] = "target_url_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_request_repeat3] = "request_repeat3",
  [aux_sym_request_repeat4] = "request_repeat4",
  [aux_sym_script_repeat1] = "script_repeat1",
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
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_AT2] = anon_sym_AT,
  [aux_sym_xml_body_token1] = aux_sym_xml_body_token1,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [aux_sym_graphql_data_token1] = aux_sym_graphql_data_token1,
  [anon_sym_LT2] = anon_sym_LT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_multipart_form_data_token1] = aux_sym_multipart_form_data_token1,
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
  [aux_sym__section_content_repeat1] = aux_sym__section_content_repeat1,
  [aux_sym__section_content_repeat2] = aux_sym__section_content_repeat2,
  [aux_sym_target_url_repeat1] = aux_sym_target_url_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_request_repeat3] = aux_sym_request_repeat3,
  [aux_sym_request_repeat4] = aux_sym_request_repeat4,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
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
  [aux_sym__section_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__section_content_repeat2] = {
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
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 3},
  [17] = {.index = 24, .length = 2},
  [18] = {.index = 26, .length = 3},
  [19] = {.index = 29, .length = 1},
  [20] = {.index = 30, .length = 2},
  [21] = {.index = 32, .length = 2},
  [22] = {.index = 34, .length = 3},
  [23] = {.index = 37, .length = 3},
  [24] = {.index = 40, .length = 3},
  [25] = {.index = 43, .length = 3},
  [26] = {.index = 46, .length = 2},
  [27] = {.index = 48, .length = 2},
  [28] = {.index = 50, .length = 3},
  [29] = {.index = 53, .length = 3},
  [30] = {.index = 56, .length = 2},
  [31] = {.index = 58, .length = 3},
  [32] = {.index = 61, .length = 2},
  [33] = {.index = 63, .length = 3},
  [34] = {.index = 66, .length = 1},
  [35] = {.index = 67, .length = 4},
  [36] = {.index = 71, .length = 3},
  [37] = {.index = 74, .length = 3},
  [38] = {.index = 77, .length = 4},
  [39] = {.index = 81, .length = 2},
  [40] = {.index = 83, .length = 2},
  [41] = {.index = 85, .length = 3},
  [42] = {.index = 88, .length = 3},
  [43] = {.index = 91, .length = 4},
  [44] = {.index = 95, .length = 2},
  [45] = {.index = 97, .length = 3},
  [46] = {.index = 100, .length = 3},
  [47] = {.index = 103, .length = 2},
  [48] = {.index = 105, .length = 4},
  [49] = {.index = 109, .length = 4},
  [50] = {.index = 113, .length = 4},
  [51] = {.index = 117, .length = 3},
  [52] = {.index = 120, .length = 4},
  [53] = {.index = 124, .length = 4},
  [54] = {.index = 128, .length = 3},
  [55] = {.index = 131, .length = 4},
  [56] = {.index = 135, .length = 2},
  [57] = {.index = 137, .length = 3},
  [58] = {.index = 140, .length = 2},
  [59] = {.index = 142, .length = 4},
  [60] = {.index = 146, .length = 4},
  [61] = {.index = 150, .length = 5},
  [62] = {.index = 155, .length = 4},
  [63] = {.index = 159, .length = 4},
  [64] = {.index = 163, .length = 3},
  [65] = {.index = 166, .length = 4},
  [66] = {.index = 170, .length = 4},
  [67] = {.index = 174, .length = 3},
  [68] = {.index = 177, .length = 5},
  [69] = {.index = 182, .length = 4},
  [70] = {.index = 186, .length = 5},
  [71] = {.index = 191, .length = 4},
  [72] = {.index = 195, .length = 4},
  [73] = {.index = 199, .length = 5},
  [74] = {.index = 204, .length = 5},
  [75] = {.index = 209, .length = 4},
  [76] = {.index = 213, .length = 5},
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
    {field_body, 3},
    {field_url, 0},
  [21] =
    {field_header, 4, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [24] =
    {field_name, 1},
    {field_value, 3},
  [26] =
    {field_header, 4, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [29] =
    {field_name, 0},
  [30] =
    {field_body, 4},
    {field_url, 0},
  [32] =
    {field_header, 4, .inherited = true},
    {field_url, 0},
  [34] =
    {field_body, 4},
    {field_header, 2, .inherited = true},
    {field_url, 0},
  [37] =
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [40] =
    {field_header, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [43] =
    {field_body, 5},
    {field_method, 0},
    {field_url, 2},
  [46] =
    {field_name, 1},
    {field_value, 4},
  [48] =
    {field_name, 2},
    {field_value, 4},
  [50] =
    {field_header, 5, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [53] =
    {field_body, 5},
    {field_url, 0},
    {field_version, 2},
  [56] =
    {field_name, 0},
    {field_value, 2},
  [58] =
    {field_body, 5},
    {field_header, 3, .inherited = true},
    {field_url, 0},
  [61] =
    {field_body, 5},
    {field_url, 0},
  [63] =
    {field_body, 5},
    {field_header, 2, .inherited = true},
    {field_url, 0},
  [66] =
    {field_path, 2},
  [67] =
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [71] =
    {field_body, 6},
    {field_method, 0},
    {field_url, 2},
  [74] =
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [77] =
    {field_body, 6},
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
    {field_body, 6},
    {field_url, 0},
    {field_version, 2},
  [88] =
    {field_header, 6, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [91] =
    {field_body, 6},
    {field_header, 4, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [95] =
    {field_name, 0},
    {field_value, 3},
  [97] =
    {field_body, 6},
    {field_header, 3, .inherited = true},
    {field_url, 0},
  [100] =
    {field_body, 6},
    {field_header, 4, .inherited = true},
    {field_url, 0},
  [103] =
    {field_body, 6},
    {field_url, 0},
  [105] =
    {field_header, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [109] =
    {field_body, 7},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [113] =
    {field_body, 7},
    {field_header, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [117] =
    {field_body, 7},
    {field_method, 0},
    {field_url, 2},
  [120] =
    {field_body, 7},
    {field_header, 4, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [124] =
    {field_body, 7},
    {field_header, 5, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [128] =
    {field_body, 7},
    {field_url, 0},
    {field_version, 2},
  [131] =
    {field_body, 7},
    {field_header, 4, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [135] =
    {field_name, 0},
    {field_value, 4},
  [137] =
    {field_body, 7},
    {field_header, 4, .inherited = true},
    {field_url, 0},
  [140] =
    {field_name, 2},
    {field_path, 4},
  [142] =
    {field_body, 8},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [146] =
    {field_header, 8, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [150] =
    {field_body, 8},
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [155] =
    {field_body, 8},
    {field_header, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [159] =
    {field_body, 8},
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [163] =
    {field_body, 8},
    {field_method, 0},
    {field_url, 2},
  [166] =
    {field_body, 8},
    {field_header, 5, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [170] =
    {field_body, 8},
    {field_header, 6, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [174] =
    {field_body, 8},
    {field_url, 0},
    {field_version, 2},
  [177] =
    {field_body, 9},
    {field_header, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [182] =
    {field_body, 9},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [186] =
    {field_body, 9},
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [191] =
    {field_body, 9},
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [195] =
    {field_body, 9},
    {field_header, 6, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [199] =
    {field_body, 10},
    {field_header, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [204] =
    {field_body, 10},
    {field_header, 8, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [209] =
    {field_body, 10},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [213] =
    {field_body, 11},
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
  [114] = 110,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 113,
  [119] = 112,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 121,
  [124] = 124,
  [125] = 78,
  [126] = 126,
  [127] = 117,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 75,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 76,
  [136] = 136,
  [137] = 77,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
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
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
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
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 78,
  [362] = 113,
  [363] = 363,
  [364] = 117,
  [365] = 365,
  [366] = 366,
  [367] = 112,
  [368] = 368,
  [369] = 121,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 379,
  [382] = 375,
  [383] = 383,
  [384] = 384,
  [385] = 379,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 395,
  [397] = 397,
  [398] = 391,
  [399] = 391,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 401,
  [407] = 404,
  [408] = 408,
  [409] = 405,
  [410] = 403,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 413,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 110,
  [419] = 413,
  [420] = 411,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 424,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 429,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 424,
  [437] = 437,
  [438] = 425,
  [439] = 430,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 457,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 471,
  [481] = 481,
  [482] = 445,
  [483] = 448,
  [484] = 463,
  [485] = 479,
  [486] = 457,
  [487] = 487,
  [488] = 488,
  [489] = 445,
  [490] = 448,
  [491] = 491,
  [492] = 465,
  [493] = 487,
  [494] = 476,
  [495] = 495,
  [496] = 478,
  [497] = 497,
  [498] = 498,
  [499] = 487,
  [500] = 500,
  [501] = 501,
  [502] = 498,
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
  {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x108fb, 0x1091b}, {0x10920, 0x1092b},
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
  {0x108b0, 0x108df}, {0x108f3, 0x108f3}, {0x108f6, 0x108fa}, {0x1091c, 0x1091f}, {0x1092c, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(732);
      ADVANCE_MAP(
        0, 776,
        '\n', 801,
        '\r', 802,
        '#', 808,
        '-', 790,
        '/', 791,
        ':', 824,
        '<', 845,
        '=', 813,
        '>', 831,
        '@', 812,
        'C', 769,
        'D', 758,
        'G', 759,
        'H', 764,
        'L', 767,
        'O', 772,
        'P', 757,
        'T', 773,
        'W', 760,
        '[', 794,
        '\\', 796,
        '_', 795,
        '{', 789,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(775);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(776);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) ADVANCE(776);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == '\\') ADVANCE(796);
      if (lookahead == '{') ADVANCE(792);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(800);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(776);
      END_STATE();
    case 2:
      if ((!eof && lookahead == 00)) ADVANCE(776);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == '{') ADVANCE(792);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(814);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(776);
      END_STATE();
    case 3:
      if ((!eof && lookahead == 00)) ADVANCE(776);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == '{') ADVANCE(792);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(800);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(776);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        0, 776,
        '\n', 890,
        '\r', 891,
        '#', 809,
        '/', 791,
        '<', 828,
        '@', 834,
        'C', 770,
        'D', 761,
        'G', 762,
        'H', 766,
        'L', 768,
        'O', 771,
        'P', 756,
        'T', 774,
        'W', 763,
        '{', 792,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(800);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(776);
      END_STATE();
    case 5:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == '#') ADVANCE(815);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 6:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'A') ADVANCE(30);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 7:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'A') ADVANCE(14);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 8:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'A') ADVANCE(13);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 9:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'B') ADVANCE(34);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 10:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'C') ADVANCE(35);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 11:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'C') ADVANCE(22);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 12:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'C') ADVANCE(19);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 13:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'C') ADVANCE(16);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 14:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'D') ADVANCE(818);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 15:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'E') ADVANCE(35);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 16:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'E') ADVANCE(818);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 17:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'E') ADVANCE(10);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 18:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'E') ADVANCE(38);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 19:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'H') ADVANCE(818);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 20:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'H') ADVANCE(31);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 21:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'I') ADVANCE(28);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 22:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'K') ADVANCE(15);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 23:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'L') ADVANCE(18);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 24:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'L') ADVANCE(818);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 25:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'N') ADVANCE(26);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 26:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'N') ADVANCE(17);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 27:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'N') ADVANCE(33);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 28:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'O') ADVANCE(27);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 29:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'O') ADVANCE(11);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 30:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'P') ADVANCE(20);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 31:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'Q') ADVANCE(24);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 32:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 33:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'S') ADVANCE(818);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 34:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'S') ADVANCE(29);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 35:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'T') ADVANCE(818);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 36:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'T') ADVANCE(21);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 37:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 38:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 39:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 40:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 41:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 42:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 43:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 44:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 45:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 46:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 47:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'y') ADVANCE(48);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 48:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(50);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 49:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 50:
      if ((!eof && lookahead == 00)) ADVANCE(849);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(849);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(50);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 51:
      if ((!eof && lookahead == 00)) ADVANCE(849);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(849);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 52:
      if ((!eof && lookahead == 00)) ADVANCE(842);
      if (lookahead == '\n') ADVANCE(840);
      if (lookahead == '\r') ADVANCE(841);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 53:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == '#') ADVANCE(815);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 54:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 55:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == '@') ADVANCE(812);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 56:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 57:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 58:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'A') ADVANCE(63);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 59:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'B') ADVANCE(83);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 60:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'C') ADVANCE(72);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 61:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'C') ADVANCE(69);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 62:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 63:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'C') ADVANCE(65);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 64:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'D') ADVANCE(819);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 65:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'E') ADVANCE(819);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 66:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 67:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'E') ADVANCE(62);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 68:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 69:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'H') ADVANCE(819);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 70:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'H') ADVANCE(81);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 71:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 72:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'K') ADVANCE(66);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 73:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'L') ADVANCE(819);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 74:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'L') ADVANCE(68);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 75:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 76:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 77:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'N') ADVANCE(67);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 78:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 79:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'O') ADVANCE(60);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 80:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'P') ADVANCE(70);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 81:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'Q') ADVANCE(73);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 82:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'S') ADVANCE(819);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 83:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 84:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 85:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'T') ADVANCE(819);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 86:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'T') ADVANCE(71);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 87:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'T') ADVANCE(61);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 88:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'T') ADVANCE(65);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 89:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == '}') ADVANCE(833);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 90:
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 91:
      ADVANCE_MAP(
        '\r', 802,
        ':', 824,
        '=', 813,
        '@', 812,
        'A', 287,
        'B', 239,
        'C', 524,
        'E', 705,
        'F', 240,
        'G', 241,
        'H', 231,
        'I', 147,
        'L', 337,
        'M', 331,
        'N', 338,
        'O', 186,
        'P', 242,
        'R', 250,
        'S', 328,
        'T', 332,
        'U', 210,
        'V', 246,
        '}', 716,
        0, 801,
        '\n', 801,
      );
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(718);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(800);
      END_STATE();
    case 92:
      if (lookahead == '\r') ADVANCE(891);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(890);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(800);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(799);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(888);
      END_STATE();
    case 93:
      if (lookahead == '\r') ADVANCE(850);
      if (lookahead == '@') ADVANCE(812);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(850);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == '\r') ADVANCE(850);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 96:
      if (lookahead == ' ') ADVANCE(179);
      END_STATE();
    case 97:
      if (lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 98:
      if (lookahead == ' ') ADVANCE(174);
      END_STATE();
    case 99:
      if (lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 100:
      if (lookahead == ' ') ADVANCE(213);
      END_STATE();
    case 101:
      if (lookahead == ' ') ADVANCE(182);
      END_STATE();
    case 102:
      if (lookahead == ' ') ADVANCE(176);
      END_STATE();
    case 103:
      if (lookahead == ' ') ADVANCE(193);
      END_STATE();
    case 104:
      if (lookahead == ' ') ADVANCE(177);
      END_STATE();
    case 105:
      if (lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 106:
      if (lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 107:
      if (lookahead == ' ') ADVANCE(214);
      END_STATE();
    case 108:
      if (lookahead == ' ') ADVANCE(178);
      END_STATE();
    case 109:
      if (lookahead == ' ') ADVANCE(192);
      END_STATE();
    case 110:
      if (lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 111:
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 112:
      if (lookahead == ' ') ADVANCE(185);
      END_STATE();
    case 113:
      if (lookahead == ' ') ADVANCE(203);
      END_STATE();
    case 114:
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 115:
      if (lookahead == ' ') ADVANCE(197);
      END_STATE();
    case 116:
      if (lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 117:
      if (lookahead == ' ') ADVANCE(206);
      END_STATE();
    case 118:
      if (lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 119:
      if (lookahead == ' ') ADVANCE(198);
      END_STATE();
    case 120:
      if (lookahead == ' ') ADVANCE(190);
      END_STATE();
    case 121:
      if (lookahead == ' ') ADVANCE(156);
      END_STATE();
    case 122:
      if (lookahead == ' ') ADVANCE(221);
      END_STATE();
    case 123:
      if (lookahead == ' ') ADVANCE(173);
      END_STATE();
    case 124:
      if (lookahead == ' ') ADVANCE(163);
      END_STATE();
    case 125:
      if (lookahead == ' ') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 126:
      if (lookahead == ' ') ADVANCE(223);
      END_STATE();
    case 127:
      if (lookahead == ' ') ADVANCE(172);
      END_STATE();
    case 128:
      if (lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 129:
      if (lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 130:
      if (lookahead == ' ') ADVANCE(224);
      END_STATE();
    case 131:
      if (lookahead == ' ') ADVANCE(233);
      END_STATE();
    case 132:
      if (lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 133:
      if (lookahead == ' ') ADVANCE(665);
      END_STATE();
    case 134:
      if (lookahead == ' ') ADVANCE(215);
      END_STATE();
    case 135:
      if (lookahead == ' ') ADVANCE(167);
      END_STATE();
    case 136:
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 137:
      if (lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 138:
      if (lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 139:
      if (lookahead == ' ') ADVANCE(212);
      END_STATE();
    case 140:
      if (lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 141:
      if (lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 142:
      if (lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 143:
      if (lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 144:
      if (lookahead == ' ') ADVANCE(211);
      END_STATE();
    case 145:
      if (lookahead == ' ') ADVANCE(200);
      END_STATE();
    case 146:
      if (lookahead == '#') ADVANCE(815);
      END_STATE();
    case 147:
      if (lookahead == '\'') ADVANCE(483);
      if (lookahead == 'M') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(618);
      END_STATE();
    case 148:
      if (lookahead == '-') ADVANCE(153);
      END_STATE();
    case 149:
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(478);
      END_STATE();
    case 150:
      if (lookahead == 'A') ADVANCE(204);
      END_STATE();
    case 151:
      if (lookahead == 'A') ADVANCE(165);
      END_STATE();
    case 152:
      if (lookahead == 'A') ADVANCE(162);
      END_STATE();
    case 153:
      if (lookahead == 'A') ADVANCE(692);
      END_STATE();
    case 154:
      if (lookahead == 'A') ADVANCE(304);
      if (lookahead == 'E') ADVANCE(707);
      if (lookahead == 'F') ADVANCE(527);
      if (lookahead == 'I') ADVANCE(485);
      if (lookahead == 'M') ADVANCE(551);
      END_STATE();
    case 155:
      if (lookahead == 'A') ADVANCE(690);
      END_STATE();
    case 156:
      if (lookahead == 'A') ADVANCE(466);
      END_STATE();
    case 157:
      if (lookahead == 'A') ADVANCE(469);
      END_STATE();
    case 158:
      if (lookahead == 'B') ADVANCE(219);
      END_STATE();
    case 159:
      if (lookahead == 'C') ADVANCE(225);
      END_STATE();
    case 160:
      if (lookahead == 'C') ADVANCE(187);
      END_STATE();
    case 161:
      if (lookahead == 'C') ADVANCE(180);
      END_STATE();
    case 162:
      if (lookahead == 'C') ADVANCE(169);
      END_STATE();
    case 163:
      if (lookahead == 'C') ADVANCE(531);
      END_STATE();
    case 164:
      if (lookahead == 'C') ADVANCE(416);
      END_STATE();
    case 165:
      if (lookahead == 'D') ADVANCE(817);
      END_STATE();
    case 166:
      if (lookahead == 'D') ADVANCE(387);
      END_STATE();
    case 167:
      if (lookahead == 'D') ADVANCE(375);
      END_STATE();
    case 168:
      if (lookahead == 'E') ADVANCE(225);
      END_STATE();
    case 169:
      if (lookahead == 'E') ADVANCE(817);
      END_STATE();
    case 170:
      if (lookahead == 'E') ADVANCE(159);
      END_STATE();
    case 171:
      if (lookahead == 'E') ADVANCE(229);
      END_STATE();
    case 172:
      if (lookahead == 'E') ADVANCE(602);
      END_STATE();
    case 173:
      if (lookahead == 'E') ADVANCE(505);
      END_STATE();
    case 174:
      if (lookahead == 'E') ADVANCE(254);
      if (lookahead == 'M') ADVANCE(256);
      END_STATE();
    case 175:
      if (lookahead == 'F') ADVANCE(437);
      END_STATE();
    case 176:
      if (lookahead == 'F') ADVANCE(277);
      END_STATE();
    case 177:
      if (lookahead == 'F') ADVANCE(277);
      if (lookahead == 'R') ADVANCE(377);
      END_STATE();
    case 178:
      if (lookahead == 'F') ADVANCE(557);
      END_STATE();
    case 179:
      if (lookahead == 'G') ADVANCE(278);
      if (lookahead == 'R') ADVANCE(329);
      END_STATE();
    case 180:
      if (lookahead == 'H') ADVANCE(817);
      END_STATE();
    case 181:
      if (lookahead == 'H') ADVANCE(209);
      END_STATE();
    case 182:
      if (lookahead == 'H') ADVANCE(385);
      if (lookahead == 'T') ADVANCE(443);
      END_STATE();
    case 183:
      if (lookahead == 'I') ADVANCE(201);
      END_STATE();
    case 184:
      if (lookahead == 'I') ADVANCE(129);
      END_STATE();
    case 185:
      if (lookahead == 'I') ADVANCE(495);
      END_STATE();
    case 186:
      if (lookahead == 'K') ADVANCE(823);
      END_STATE();
    case 187:
      if (lookahead == 'K') ADVANCE(168);
      END_STATE();
    case 188:
      if (lookahead == 'L') ADVANCE(171);
      END_STATE();
    case 189:
      if (lookahead == 'L') ADVANCE(817);
      END_STATE();
    case 190:
      if (lookahead == 'L') ADVANCE(350);
      END_STATE();
    case 191:
      if (lookahead == 'L') ADVANCE(260);
      END_STATE();
    case 192:
      if (lookahead == 'L') ADVANCE(540);
      END_STATE();
    case 193:
      if (lookahead == 'M') ADVANCE(386);
      END_STATE();
    case 194:
      if (lookahead == 'N') ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'N') ADVANCE(170);
      END_STATE();
    case 196:
      if (lookahead == 'N') ADVANCE(218);
      END_STATE();
    case 197:
      if (lookahead == 'N') ADVANCE(560);
      END_STATE();
    case 198:
      if (lookahead == 'N') ADVANCE(347);
      END_STATE();
    case 199:
      if (lookahead == 'N') ADVANCE(561);
      END_STATE();
    case 200:
      if (lookahead == 'N') ADVANCE(562);
      END_STATE();
    case 201:
      if (lookahead == 'O') ADVANCE(196);
      END_STATE();
    case 202:
      if (lookahead == 'O') ADVANCE(160);
      END_STATE();
    case 203:
      if (lookahead == 'O') ADVANCE(639);
      END_STATE();
    case 204:
      if (lookahead == 'P') ADVANCE(181);
      END_STATE();
    case 205:
      if (lookahead == 'P') ADVANCE(99);
      END_STATE();
    case 206:
      if (lookahead == 'P') ADVANCE(398);
      END_STATE();
    case 207:
      if (lookahead == 'P') ADVANCE(597);
      END_STATE();
    case 208:
      if (lookahead == 'P') ADVANCE(599);
      END_STATE();
    case 209:
      if (lookahead == 'Q') ADVANCE(189);
      END_STATE();
    case 210:
      if (lookahead == 'R') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 211:
      if (lookahead == 'R') ADVANCE(329);
      END_STATE();
    case 212:
      if (lookahead == 'R') ADVANCE(397);
      END_STATE();
    case 213:
      if (lookahead == 'R') ADVANCE(377);
      END_STATE();
    case 214:
      if (lookahead == 'R') ADVANCE(365);
      END_STATE();
    case 215:
      if (lookahead == 'R') ADVANCE(393);
      END_STATE();
    case 216:
      if (lookahead == 'R') ADVANCE(396);
      END_STATE();
    case 217:
      if (lookahead == 'S') ADVANCE(225);
      END_STATE();
    case 218:
      if (lookahead == 'S') ADVANCE(817);
      END_STATE();
    case 219:
      if (lookahead == 'S') ADVANCE(202);
      END_STATE();
    case 220:
      if (lookahead == 'S') ADVANCE(674);
      END_STATE();
    case 221:
      if (lookahead == 'S') ADVANCE(360);
      END_STATE();
    case 222:
      if (lookahead == 'S') ADVANCE(648);
      END_STATE();
    case 223:
      if (lookahead == 'S') ADVANCE(273);
      END_STATE();
    case 224:
      if (lookahead == 'S') ADVANCE(695);
      END_STATE();
    case 225:
      if (lookahead == 'T') ADVANCE(817);
      END_STATE();
    case 226:
      if (lookahead == 'T') ADVANCE(183);
      END_STATE();
    case 227:
      if (lookahead == 'T') ADVANCE(161);
      END_STATE();
    case 228:
      if (lookahead == 'T') ADVANCE(205);
      END_STATE();
    case 229:
      if (lookahead == 'T') ADVANCE(169);
      END_STATE();
    case 230:
      if (lookahead == 'T') ADVANCE(712);
      END_STATE();
    case 231:
      if (lookahead == 'T') ADVANCE(228);
      END_STATE();
    case 232:
      if (lookahead == 'T') ADVANCE(549);
      END_STATE();
    case 233:
      if (lookahead == 'T') ADVANCE(443);
      END_STATE();
    case 234:
      if (lookahead == 'T') ADVANCE(556);
      END_STATE();
    case 235:
      if (lookahead == 'U') ADVANCE(622);
      END_STATE();
    case 236:
      if (lookahead == 'U') ADVANCE(502);
      END_STATE();
    case 237:
      if (lookahead == 'V') ADVANCE(353);
      END_STATE();
    case 238:
      if (lookahead == '\\') ADVANCE(796);
      if (lookahead == '{') ADVANCE(788);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(733);
      if ((!eof && set_contains(aux_sym_PUNCTUATION_token1_character_set_1, 485, lookahead))) ADVANCE(776);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 242:
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 243:
      if (lookahead == 'a') ADVANCE(689);
      if (lookahead == 'p') ADVANCE(592);
      if (lookahead == 's') ADVANCE(684);
      END_STATE();
    case 244:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 245:
      if (lookahead == 'a') ADVANCE(708);
      END_STATE();
    case 246:
      if (lookahead == 'a') ADVANCE(587);
      END_STATE();
    case 247:
      if (lookahead == 'a') ADVANCE(700);
      END_STATE();
    case 248:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 249:
      if (lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 250:
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 251:
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 252:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 253:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 254:
      if (lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 255:
      if (lookahead == 'a') ADVANCE(614);
      END_STATE();
    case 256:
      if (lookahead == 'a') ADVANCE(517);
      END_STATE();
    case 257:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 258:
      if (lookahead == 'a') ADVANCE(629);
      END_STATE();
    case 259:
      if (lookahead == 'a') ADVANCE(643);
      END_STATE();
    case 260:
      if (lookahead == 'a') ADVANCE(593);
      END_STATE();
    case 261:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 262:
      if (lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 263:
      if (lookahead == 'a') ADVANCE(646);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(647);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 269:
      if (lookahead == 'a') ADVANCE(710);
      END_STATE();
    case 270:
      if (lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 271:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 272:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 273:
      if (lookahead == 'a') ADVANCE(653);
      END_STATE();
    case 274:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 275:
      if (lookahead == 'a') ADVANCE(656);
      END_STATE();
    case 276:
      if (lookahead == 'a') ADVANCE(663);
      END_STATE();
    case 277:
      if (lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 278:
      if (lookahead == 'a') ADVANCE(669);
      END_STATE();
    case 279:
      if (lookahead == 'a') ADVANCE(519);
      END_STATE();
    case 280:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 281:
      if (lookahead == 'a') ADVANCE(680);
      END_STATE();
    case 282:
      if (lookahead == 'a') ADVANCE(681);
      END_STATE();
    case 283:
      if (lookahead == 'b') ADVANCE(424);
      END_STATE();
    case 284:
      if (lookahead == 'b') ADVANCE(464);
      END_STATE();
    case 285:
      if (lookahead == 'b') ADVANCE(479);
      END_STATE();
    case 286:
      if (lookahead == 'b') ADVANCE(480);
      END_STATE();
    case 287:
      if (lookahead == 'c') ADVANCE(290);
      if (lookahead == 'l') ADVANCE(589);
      END_STATE();
    case 288:
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(569);
      END_STATE();
    case 289:
      if (lookahead == 'c') ADVANCE(708);
      END_STATE();
    case 290:
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 291:
      if (lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 292:
      if (lookahead == 'c') ADVANCE(645);
      END_STATE();
    case 293:
      if (lookahead == 'c') ADVANCE(633);
      END_STATE();
    case 294:
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 'x') ADVANCE(709);
      END_STATE();
    case 295:
      if (lookahead == 'c') ADVANCE(458);
      END_STATE();
    case 296:
      if (lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 297:
      if (lookahead == 'c') ADVANCE(533);
      END_STATE();
    case 298:
      if (lookahead == 'c') ADVANCE(352);
      END_STATE();
    case 299:
      if (lookahead == 'c') ADVANCE(646);
      END_STATE();
    case 300:
      if (lookahead == 'c') ADVANCE(346);
      END_STATE();
    case 301:
      if (lookahead == 'c') ADVANCE(532);
      END_STATE();
    case 302:
      if (lookahead == 'c') ADVANCE(380);
      END_STATE();
    case 303:
      if (lookahead == 'c') ADVANCE(676);
      END_STATE();
    case 304:
      if (lookahead == 'c') ADVANCE(300);
      END_STATE();
    case 305:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 306:
      if (lookahead == 'd') ADVANCE(823);
      END_STATE();
    case 307:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 308:
      if (lookahead == 'd') ADVANCE(439);
      END_STATE();
    case 309:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 310:
      if (lookahead == 'd') ADVANCE(336);
      END_STATE();
    case 311:
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 312:
      if (lookahead == 'd') ADVANCE(631);
      END_STATE();
    case 313:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 314:
      if (lookahead == 'd') ADVANCE(357);
      END_STATE();
    case 315:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 316:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 317:
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 318:
      if (lookahead == 'd') ADVANCE(711);
      END_STATE();
    case 319:
      if (lookahead == 'd') ADVANCE(456);
      END_STATE();
    case 320:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 321:
      if (lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 322:
      if (lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 323:
      if (lookahead == 'd') ADVANCE(449);
      END_STATE();
    case 324:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 325:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 326:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == 'w') ADVANCE(427);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == 'i') ADVANCE(619);
      if (lookahead == 'o') ADVANCE(697);
      if (lookahead == 'u') ADVANCE(462);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(696);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 399:
      if (lookahead == 'f') ADVANCE(401);
      END_STATE();
    case 400:
      if (lookahead == 'f') ADVANCE(467);
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 401:
      if (lookahead == 'f') ADVANCE(425);
      END_STATE();
    case 402:
      if (lookahead == 'f') ADVANCE(433);
      END_STATE();
    case 403:
      if (lookahead == 'f') ADVANCE(564);
      END_STATE();
    case 404:
      if (lookahead == 'f') ADVANCE(434);
      END_STATE();
    case 405:
      if (lookahead == 'g') ADVANCE(823);
      END_STATE();
    case 406:
      if (lookahead == 'g') ADVANCE(610);
      END_STATE();
    case 407:
      if (lookahead == 'g') ADVANCE(327);
      END_STATE();
    case 408:
      if (lookahead == 'g') ADVANCE(636);
      END_STATE();
    case 409:
      if (lookahead == 'g') ADVANCE(559);
      END_STATE();
    case 410:
      if (lookahead == 'g') ADVANCE(359);
      END_STATE();
    case 411:
      if (lookahead == 'g') ADVANCE(271);
      END_STATE();
    case 412:
      if (lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 413:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 414:
      if (lookahead == 'h') ADVANCE(558);
      END_STATE();
    case 415:
      if (lookahead == 'h') ADVANCE(552);
      END_STATE();
    case 416:
      if (lookahead == 'h') ADVANCE(565);
      END_STATE();
    case 417:
      if (lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 418:
      if (lookahead == 'h') ADVANCE(356);
      END_STATE();
    case 419:
      if (lookahead == 'h') ADVANCE(366);
      END_STATE();
    case 420:
      if (lookahead == 'h') ADVANCE(538);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(715);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(481);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(638);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(470);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(637);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(601);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(487);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(472);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(541);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(543);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 459:
      if (lookahead == 'k') ADVANCE(336);
      END_STATE();
    case 460:
      if (lookahead == 'k') ADVANCE(136);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(708);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(641);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 'm') ADVANCE(351);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(327);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(628);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(441);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(617);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(526);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(369);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 482:
      if (lookahead == 'm') ADVANCE(573);
      END_STATE();
    case 483:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 484:
      if (lookahead == 'm') ADVANCE(264);
      END_STATE();
    case 485:
      if (lookahead == 'm') ADVANCE(572);
      END_STATE();
    case 486:
      if (lookahead == 'm') ADVANCE(391);
      END_STATE();
    case 487:
      if (lookahead == 'm') ADVANCE(362);
      END_STATE();
    case 488:
      if (lookahead == 'm') ADVANCE(270);
      END_STATE();
    case 489:
      if (lookahead == 'm') ADVANCE(282);
      END_STATE();
    case 490:
      if (lookahead == 'n') ADVANCE(823);
      END_STATE();
    case 491:
      if (lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 492:
      if (lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 493:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 494:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 495:
      if (lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 496:
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 497:
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 498:
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 499:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 500:
      if (lookahead == 'n') ADVANCE(617);
      END_STATE();
    case 501:
      if (lookahead == 'n') ADVANCE(633);
      END_STATE();
    case 502:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 503:
      if (lookahead == 'n') ADVANCE(642);
      END_STATE();
    case 504:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 505:
      if (lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 506:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 508:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 509:
      if (lookahead == 'n') ADVANCE(646);
      END_STATE();
    case 510:
      if (lookahead == 'n') ADVANCE(685);
      END_STATE();
    case 511:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 512:
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 513:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 514:
      if (lookahead == 'n') ADVANCE(659);
      END_STATE();
    case 515:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 514:
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 515:
      if (lookahead == 'r') ADVANCE(610);
      END_STATE();
    case 516:
      if (lookahead == 'n') ADVANCE(652);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(714);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(657);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(672);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(662);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 524:
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 525:
      if (lookahead == 'o') ADVANCE(706);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(703);
      END_STATE();
    case 527:
      if (lookahead == 'o') ADVANCE(683);
      END_STATE();
    case 528:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 529:
      if (lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 530:
      if (lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 531:
      if (lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 532:
      if (lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 533:
      if (lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 534:
      if (lookahead == 'o') ADVANCE(616);
      END_STATE();
    case 535:
      if (lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 536:
      if (lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 538:
      if (lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 539:
      if (lookahead == 'o') ADVANCE(655);
      END_STATE();
    case 540:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 541:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 542:
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 543:
      if (lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 546:
      if (lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 547:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 548:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 550:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 551:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(687);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(661);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(664);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(608);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(606);
      END_STATE();
    case 567:
      if (lookahead == 'p') ADVANCE(335);
      END_STATE();
    case 568:
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 569:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 570:
      if (lookahead == 'p') ADVANCE(535);
      END_STATE();
    case 571:
      if (lookahead == 'p') ADVANCE(646);
      END_STATE();
    case 572:
      if (lookahead == 'p') ADVANCE(476);
      END_STATE();
    case 573:
      if (lookahead == 'p') ADVANCE(530);
      END_STATE();
    case 574:
      if (lookahead == 'p') ADVANCE(534);
      END_STATE();
    case 575:
      if (lookahead == 'p') ADVANCE(649);
      END_STATE();
    case 576:
      if (lookahead == 'p') ADVANCE(574);
      END_STATE();
    case 577:
      if (lookahead == 'p') ADVANCE(392);
      END_STATE();
    case 578:
      if (lookahead == 'p') ADVANCE(566);
      END_STATE();
    case 579:
      if (lookahead == 'p') ADVANCE(578);
      END_STATE();
    case 580:
      if (lookahead == 'q') ADVANCE(688);
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 581:
      if (lookahead == 'q') ADVANCE(694);
      END_STATE();
    case 582:
      if (lookahead == 'q') ADVANCE(691);
      END_STATE();
    case 583:
      if (lookahead == 'q') ADVANCE(693);
      END_STATE();
    case 584:
      if (lookahead == 'r') ADVANCE(823);
      END_STATE();
    case 585:
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == 'u') ADVANCE(493);
      END_STATE();
    case 586:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 587:
      if (lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 588:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(373);
      END_STATE();
    case 590:
      if (lookahead == 'r') ADVANCE(667);
      if (lookahead == 'y') ADVANCE(463);
      END_STATE();
    case 591:
      if (lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(555);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(646);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(489);
      END_STATE();
    case 609:
      if (lookahead == 'r') ADVANCE(379);
      END_STATE();
    case 610:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 611:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 612:
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 613:
      if (lookahead == 'r') ADVANCE(536);
      END_STATE();
    case 614:
      if (lookahead == 'r') ADVANCE(713);
      END_STATE();
    case 615:
      if (lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 616:
      if (lookahead == 'r') ADVANCE(679);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(823);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(682);
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(625);
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
      if (lookahead == 's') ADVANCE(632);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(633);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(644);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(654);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(548);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(546);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 633:
      if (lookahead == 't') ADVANCE(823);
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
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(701);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(708);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(686);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 651:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 652:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 653:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 654:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 655:
      if (lookahead == 't') ADVANCE(550);
      END_STATE();
    case 656:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 658:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 659:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 660:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 661:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 662:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 663:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 664:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 667:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 668:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 669:
      if (lookahead == 't') ADVANCE(378);
      END_STATE();
    case 670:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 682:
      if (lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 683:
      if (lookahead == 'u') ADVANCE(493);
      END_STATE();
    case 684:
      if (lookahead == 'u') ADVANCE(576);
      END_STATE();
    case 685:
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 686:
      if (lookahead == 'u') ADVANCE(617);
      END_STATE();
    case 687:
      if (lookahead == 'u') ADVANCE(633);
      END_STATE();
    case 688:
      if (lookahead == 'u') ADVANCE(342);
      END_STATE();
    case 689:
      if (lookahead == 'u') ADVANCE(666);
      if (lookahead == 'v') ADVANCE(262);
      END_STATE();
    case 690:
      if (lookahead == 'u') ADVANCE(668);
      END_STATE();
    case 691:
      if (lookahead == 'u') ADVANCE(381);
      END_STATE();
    case 692:
      if (lookahead == 'u') ADVANCE(671);
      END_STATE();
    case 693:
      if (lookahead == 'u') ADVANCE(384);
      END_STATE();
    case 694:
      if (lookahead == 'u') ADVANCE(445);
      END_STATE();
    case 695:
      if (lookahead == 'u') ADVANCE(579);
      END_STATE();
    case 696:
      if (lookahead == 'v') ADVANCE(438);
      END_STATE();
    case 697:
      if (lookahead == 'v') ADVANCE(374);
      END_STATE();
    case 698:
      if (lookahead == 'v') ADVANCE(382);
      END_STATE();
    case 699:
      if (lookahead == 'v') ADVANCE(372);
      END_STATE();
    case 700:
      if (lookahead == 'v') ADVANCE(268);
      END_STATE();
    case 701:
      if (lookahead == 'w') ADVANCE(529);
      END_STATE();
    case 702:
      if (lookahead == 'w') ADVANCE(269);
      END_STATE();
    case 703:
      if (lookahead == 'w') ADVANCE(336);
      END_STATE();
    case 704:
      if (lookahead == 'w') ADVANCE(245);
      END_STATE();
    case 705:
      if (lookahead == 'x') ADVANCE(567);
      END_STATE();
    case 706:
      if (lookahead == 'x') ADVANCE(708);
      END_STATE();
    case 707:
      if (lookahead == 'x') ADVANCE(660);
      END_STATE();
    case 708:
      if (lookahead == 'y') ADVANCE(823);
      END_STATE();
    case 709:
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 710:
      if (lookahead == 'y') ADVANCE(131);
      END_STATE();
    case 711:
      if (lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 712:
      if (lookahead == 'y') ADVANCE(568);
      END_STATE();
    case 713:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 714:
      if (lookahead == 'y') ADVANCE(140);
      END_STATE();
    case 715:
      if (lookahead == 'z') ADVANCE(336);
      END_STATE();
    case 716:
      if (lookahead == '}') ADVANCE(827);
      END_STATE();
    case 717:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(822);
      END_STATE();
    case 718:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(717);
      END_STATE();
    case 719:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(821);
      END_STATE();
    case 720:
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(888);
      END_STATE();
    case 721:
      if (eof) ADVANCE(732);
      ADVANCE_MAP(
        0, 776,
        '\n', 801,
        '\r', 802,
        '#', 808,
        '/', 791,
        '<', 828,
        '>', 831,
        '@', 834,
        'C', 770,
        'D', 761,
        'G', 762,
        'H', 766,
        'L', 768,
        'O', 771,
        'P', 756,
        'T', 774,
        'W', 763,
        '{', 792,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(800);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(776);
      END_STATE();
    case 722:
      if (eof) ADVANCE(732);
      ADVANCE_MAP(
        0, 776,
        '\n', 890,
        '\r', 891,
        '#', 808,
        '/', 791,
        '<', 828,
        '>', 831,
        '@', 834,
        'C', 769,
        'D', 758,
        'G', 759,
        'H', 764,
        'L', 767,
        'O', 772,
        'P', 757,
        'T', 773,
        'W', 760,
        '{', 792,
        '-', 795,
        '_', 795,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(775);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(776);
      END_STATE();
    case 723:
      if (eof) ADVANCE(732);
      ADVANCE_MAP(
        0, 776,
        '\n', 890,
        '\r', 891,
        '#', 808,
        '/', 791,
        '<', 828,
        '>', 831,
        '@', 834,
        'C', 769,
        'D', 758,
        'G', 759,
        'H', 765,
        'L', 767,
        'O', 772,
        'P', 757,
        'T', 773,
        'W', 760,
        '{', 792,
        '-', 795,
        '_', 795,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(775);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(776);
      END_STATE();
    case 724:
      if (eof) ADVANCE(732);
      ADVANCE_MAP(
        0, 776,
        '\n', 890,
        '\r', 891,
        '#', 808,
        '/', 791,
        '<', 828,
        '>', 831,
        '@', 834,
        'C', 770,
        'D', 761,
        'G', 762,
        'H', 766,
        'L', 768,
        'O', 771,
        'P', 756,
        'T', 774,
        'W', 763,
        '[', 794,
        '{', 793,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(800);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(776);
      END_STATE();
    case 725:
      if (eof) ADVANCE(732);
      ADVANCE_MAP(
        0, 776,
        '\n', 890,
        '\r', 891,
        '#', 808,
        '/', 791,
        '<', 828,
        '>', 831,
        '@', 834,
        'C', 770,
        'D', 761,
        'G', 762,
        'H', 766,
        'L', 768,
        'O', 771,
        'P', 756,
        'T', 774,
        'W', 763,
        '{', 792,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(800);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(776);
      END_STATE();
    case 726:
      if (eof) ADVANCE(732);
      ADVANCE_MAP(
        0, 776,
        '\n', 890,
        '\r', 891,
        '#', 808,
        '/', 791,
        '<', 828,
        '@', 834,
        'C', 770,
        'D', 761,
        'G', 762,
        'H', 766,
        'L', 768,
        'O', 771,
        'P', 756,
        'T', 774,
        'W', 763,
        '{', 792,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(800);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(776);
      END_STATE();
    case 727:
      if (eof) ADVANCE(732);
      ADVANCE_MAP(
        0, 848,
        '\n', 847,
        '\r', 848,
        '#', 805,
        '-', 779,
        '/', 780,
        '<', 844,
        '>', 831,
        '@', 835,
        'C', 740,
        'D', 735,
        'G', 736,
        'H', 738,
        'L', 739,
        'O', 741,
        'P', 734,
        'T', 742,
        'W', 737,
        '[', 778,
        'm', 743,
        'q', 744,
        '{', 777,
        0x2028, 49,
        0x2029, 49,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(797);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(745);
      if (lookahead != 0) ADVANCE(782);
      END_STATE();
    case 728:
      if (eof) ADVANCE(732);
      ADVANCE_MAP(
        0, 848,
        '\n', 847,
        '\r', 848,
        '#', 805,
        '/', 780,
        '<', 843,
        '>', 831,
        '@', 835,
        'C', 740,
        'D', 735,
        'G', 736,
        'H', 738,
        'L', 739,
        'O', 741,
        'P', 734,
        'T', 742,
        'W', 737,
        '{', 781,
        0x2028, 49,
        0x2029, 49,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(797);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(745);
      if (lookahead != 0) ADVANCE(782);
      END_STATE();
    case 729:
      if (eof) ADVANCE(732);
      ADVANCE_MAP(
        0, 848,
        '\n', 847,
        '\r', 848,
        '#', 805,
        '/', 780,
        '<', 829,
        '>', 831,
        '@', 835,
        'C', 740,
        'D', 735,
        'G', 736,
        'H', 738,
        'L', 739,
        'O', 741,
        'P', 734,
        'T', 742,
        'W', 737,
        '{', 781,
        0x2028, 49,
        0x2029, 49,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(797);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(745);
      if (lookahead != 0) ADVANCE(782);
      END_STATE();
    case 730:
      if (eof) ADVANCE(732);
      ADVANCE_MAP(
        0, 787,
        '\n', 803,
        '\r', 804,
        '#', 806,
        '/', 785,
        '<', 830,
        '>', 831,
        '@', 836,
        'C', 752,
        'D', 748,
        'G', 749,
        'H', 750,
        'L', 751,
        'O', 753,
        'P', 746,
        'T', 754,
        'W', 747,
        '[', 784,
        '{', 783,
        0x2028, 90,
        0x2029, 90,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(798);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(755);
      if (lookahead != 0) ADVANCE(787);
      END_STATE();
    case 731:
      if (eof) ADVANCE(732);
      ADVANCE_MAP(
        0, 787,
        '\n', 803,
        '\r', 804,
        '#', 806,
        '/', 785,
        '<', 830,
        '>', 831,
        '@', 836,
        'C', 752,
        'D', 748,
        'G', 749,
        'H', 750,
        'L', 751,
        'O', 753,
        'P', 746,
        'T', 754,
        'W', 747,
        '{', 786,
        0x2028, 90,
        0x2029, 90,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(798);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(755);
      if (lookahead != 0) ADVANCE(787);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == 'U') ADVANCE(35);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'E') ADVANCE(35);
      if (lookahead == 'R') ADVANCE(6);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'E') ADVANCE(9);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'E') ADVANCE(7);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'I') ADVANCE(32);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'O') ADVANCE(25);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'P') ADVANCE(36);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'R') ADVANCE(8);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'O') ADVANCE(84);
      if (lookahead == 'U') ADVANCE(85);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(56);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'O') ADVANCE(75);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'P') ADVANCE(86);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'A') ADVANCE(227);
      if (lookahead == 'O') ADVANCE(217);
      if (lookahead == 'U') ADVANCE(225);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'A') ADVANCE(884);
      if (lookahead == 'O') ADVANCE(879);
      if (lookahead == 'U') ADVANCE(882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(869);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(882);
      if (lookahead == 'R') ADVANCE(852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(855);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(188);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(225);
      if (lookahead == 'R') ADVANCE(150);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(853);
      if (lookahead == 'T') ADVANCE(885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(151);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'I') ADVANCE(879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'I') ADVANCE(217);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'O') ADVANCE(871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'O') ADVANCE(194);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'P') ADVANCE(226);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'P') ADVANCE(883);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'R') ADVANCE(854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'R') ADVANCE(152);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(839);
      if (lookahead == '\r') ADVANCE(838);
      if (lookahead == '{') ADVANCE(826);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(838);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(839);
      if (lookahead == '\r') ADVANCE(838);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(838);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == '-') ADVANCE(846);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == '/') ADVANCE(810);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(839);
      if (lookahead == '\r') ADVANCE(838);
      if (lookahead == '{') ADVANCE(825);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(838);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(839);
      if (lookahead == '\r') ADVANCE(838);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(838);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == '/') ADVANCE(810);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == '{') ADVANCE(825);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '{') ADVANCE(825);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '{') ADVANCE(825);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(839);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '-') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '/') ADVANCE(811);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '{') ADVANCE(825);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '{') ADVANCE(825);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(839);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(839);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(889);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(797);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(798);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(800);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(799);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(888);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(800);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_NL_token1);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_NL_token1);
      if (lookahead == '\n') ADVANCE(801);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_LINE_TAIL_token1);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_LINE_TAIL_token1);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '\n') ADVANCE(809);
      if (lookahead == '\r') ADVANCE(807);
      if (lookahead == '#') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(807);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '\n') ADVANCE(809);
      if (lookahead == '\r') ADVANCE(807);
      if (lookahead == '#') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(807);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '\n') ADVANCE(809);
      if (lookahead == '\r') ADVANCE(807);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(807);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '#') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token2);
      if (lookahead == '\n') ADVANCE(811);
      if (lookahead == '\r') ADVANCE(810);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(810);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(811);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(814);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == '#') ADVANCE(815);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(816);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(816);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_http_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(821);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_status_text);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_LT);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_LT);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(804);
      if (lookahead == '\n') ADVANCE(803);
      if (lookahead == '\r') ADVANCE(804);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (lookahead == '\n') ADVANCE(839);
      if (lookahead == '\r') ADVANCE(838);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(838);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(839);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(849);
      if (lookahead == '\n') ADVANCE(840);
      if (lookahead == '\r') ADVANCE(849);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(849);
      if (lookahead == '\r') ADVANCE(849);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_LT2);
      if ((!eof && lookahead == 00)) ADVANCE(837);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(837);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_LT2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(837);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(849);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(849);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__not_comment);
      if (lookahead == '\r') ADVANCE(850);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(94);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(860);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'B') ADVANCE(881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(865);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'D') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(856);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(886);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'I') ADVANCE(874);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'K') ADVANCE(861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(872);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(863);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(880);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(857);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(866);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'Q') ADVANCE(870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(875);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(888);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(890);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 726},
  [2] = {.lex_state = 727},
  [3] = {.lex_state = 727},
  [4] = {.lex_state = 727},
  [5] = {.lex_state = 727},
  [6] = {.lex_state = 727},
  [7] = {.lex_state = 727},
  [8] = {.lex_state = 727},
  [9] = {.lex_state = 727},
  [10] = {.lex_state = 727},
  [11] = {.lex_state = 727},
  [12] = {.lex_state = 727},
  [13] = {.lex_state = 727},
  [14] = {.lex_state = 727},
  [15] = {.lex_state = 727},
  [16] = {.lex_state = 727},
  [17] = {.lex_state = 727},
  [18] = {.lex_state = 727},
  [19] = {.lex_state = 727},
  [20] = {.lex_state = 727},
  [21] = {.lex_state = 727},
  [22] = {.lex_state = 727},
  [23] = {.lex_state = 727},
  [24] = {.lex_state = 727},
  [25] = {.lex_state = 727},
  [26] = {.lex_state = 727},
  [27] = {.lex_state = 727},
  [28] = {.lex_state = 727},
  [29] = {.lex_state = 727},
  [30] = {.lex_state = 727},
  [31] = {.lex_state = 727},
  [32] = {.lex_state = 727},
  [33] = {.lex_state = 727},
  [34] = {.lex_state = 727},
  [35] = {.lex_state = 727},
  [36] = {.lex_state = 727},
  [37] = {.lex_state = 727},
  [38] = {.lex_state = 727},
  [39] = {.lex_state = 727},
  [40] = {.lex_state = 727},
  [41] = {.lex_state = 727},
  [42] = {.lex_state = 727},
  [43] = {.lex_state = 727},
  [44] = {.lex_state = 727},
  [45] = {.lex_state = 727},
  [46] = {.lex_state = 727},
  [47] = {.lex_state = 727},
  [48] = {.lex_state = 727},
  [49] = {.lex_state = 727},
  [50] = {.lex_state = 727},
  [51] = {.lex_state = 727},
  [52] = {.lex_state = 727},
  [53] = {.lex_state = 727},
  [54] = {.lex_state = 727},
  [55] = {.lex_state = 727},
  [56] = {.lex_state = 727},
  [57] = {.lex_state = 727},
  [58] = {.lex_state = 726},
  [59] = {.lex_state = 726},
  [60] = {.lex_state = 722},
  [61] = {.lex_state = 722},
  [62] = {.lex_state = 722},
  [63] = {.lex_state = 722},
  [64] = {.lex_state = 722},
  [65] = {.lex_state = 722},
  [66] = {.lex_state = 722},
  [67] = {.lex_state = 722},
  [68] = {.lex_state = 726},
  [69] = {.lex_state = 727},
  [70] = {.lex_state = 727},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 728},
  [73] = {.lex_state = 728},
  [74] = {.lex_state = 728},
  [75] = {.lex_state = 727},
  [76] = {.lex_state = 727},
  [77] = {.lex_state = 727},
  [78] = {.lex_state = 727},
  [79] = {.lex_state = 723},
  [80] = {.lex_state = 723},
  [81] = {.lex_state = 723},
  [82] = {.lex_state = 723},
  [83] = {.lex_state = 723},
  [84] = {.lex_state = 723},
  [85] = {.lex_state = 723},
  [86] = {.lex_state = 723},
  [87] = {.lex_state = 723},
  [88] = {.lex_state = 723},
  [89] = {.lex_state = 723},
  [90] = {.lex_state = 723},
  [91] = {.lex_state = 722},
  [92] = {.lex_state = 723},
  [93] = {.lex_state = 723},
  [94] = {.lex_state = 723},
  [95] = {.lex_state = 723},
  [96] = {.lex_state = 723},
  [97] = {.lex_state = 723},
  [98] = {.lex_state = 723},
  [99] = {.lex_state = 723},
  [100] = {.lex_state = 723},
  [101] = {.lex_state = 723},
  [102] = {.lex_state = 723},
  [103] = {.lex_state = 723},
  [104] = {.lex_state = 725},
  [105] = {.lex_state = 725},
  [106] = {.lex_state = 725},
  [107] = {.lex_state = 729},
  [108] = {.lex_state = 729},
  [109] = {.lex_state = 730},
  [110] = {.lex_state = 730},
  [111] = {.lex_state = 723},
  [112] = {.lex_state = 728},
  [113] = {.lex_state = 728},
  [114] = {.lex_state = 731},
  [115] = {.lex_state = 721},
  [116] = {.lex_state = 731},
  [117] = {.lex_state = 722},
  [118] = {.lex_state = 722},
  [119] = {.lex_state = 722},
  [120] = {.lex_state = 731},
  [121] = {.lex_state = 728},
  [122] = {.lex_state = 721},
  [123] = {.lex_state = 722},
  [124] = {.lex_state = 724},
  [125] = {.lex_state = 728},
  [126] = {.lex_state = 728},
  [127] = {.lex_state = 728},
  [128] = {.lex_state = 721},
  [129] = {.lex_state = 721},
  [130] = {.lex_state = 723},
  [131] = {.lex_state = 721},
  [132] = {.lex_state = 723},
  [133] = {.lex_state = 723},
  [134] = {.lex_state = 723},
  [135] = {.lex_state = 721},
  [136] = {.lex_state = 723},
  [137] = {.lex_state = 721},
  [138] = {.lex_state = 723},
  [139] = {.lex_state = 723},
  [140] = {.lex_state = 723},
  [141] = {.lex_state = 725},
  [142] = {.lex_state = 725},
  [143] = {.lex_state = 725},
  [144] = {.lex_state = 725},
  [145] = {.lex_state = 725},
  [146] = {.lex_state = 725},
  [147] = {.lex_state = 725},
  [148] = {.lex_state = 725},
  [149] = {.lex_state = 725},
  [150] = {.lex_state = 725},
  [151] = {.lex_state = 725},
  [152] = {.lex_state = 725},
  [153] = {.lex_state = 725},
  [154] = {.lex_state = 725},
  [155] = {.lex_state = 725},
  [156] = {.lex_state = 725},
  [157] = {.lex_state = 725},
  [158] = {.lex_state = 725},
  [159] = {.lex_state = 725},
  [160] = {.lex_state = 725},
  [161] = {.lex_state = 725},
  [162] = {.lex_state = 725},
  [163] = {.lex_state = 725},
  [164] = {.lex_state = 725},
  [165] = {.lex_state = 725},
  [166] = {.lex_state = 725},
  [167] = {.lex_state = 725},
  [168] = {.lex_state = 725},
  [169] = {.lex_state = 725},
  [170] = {.lex_state = 725},
  [171] = {.lex_state = 725},
  [172] = {.lex_state = 725},
  [173] = {.lex_state = 725},
  [174] = {.lex_state = 725},
  [175] = {.lex_state = 725},
  [176] = {.lex_state = 725},
  [177] = {.lex_state = 725},
  [178] = {.lex_state = 725},
  [179] = {.lex_state = 725},
  [180] = {.lex_state = 725},
  [181] = {.lex_state = 725},
  [182] = {.lex_state = 725},
  [183] = {.lex_state = 725},
  [184] = {.lex_state = 725},
  [185] = {.lex_state = 725},
  [186] = {.lex_state = 725},
  [187] = {.lex_state = 725},
  [188] = {.lex_state = 725},
  [189] = {.lex_state = 725},
  [190] = {.lex_state = 725},
  [191] = {.lex_state = 725},
  [192] = {.lex_state = 725},
  [193] = {.lex_state = 725},
  [194] = {.lex_state = 725},
  [195] = {.lex_state = 725},
  [196] = {.lex_state = 725},
  [197] = {.lex_state = 725},
  [198] = {.lex_state = 725},
  [199] = {.lex_state = 725},
  [200] = {.lex_state = 725},
  [201] = {.lex_state = 725},
  [202] = {.lex_state = 725},
  [203] = {.lex_state = 725},
  [204] = {.lex_state = 725},
  [205] = {.lex_state = 725},
  [206] = {.lex_state = 725},
  [207] = {.lex_state = 725},
  [208] = {.lex_state = 725},
  [209] = {.lex_state = 725},
  [210] = {.lex_state = 725},
  [211] = {.lex_state = 725},
  [212] = {.lex_state = 725},
  [213] = {.lex_state = 725},
  [214] = {.lex_state = 725},
  [215] = {.lex_state = 725},
  [216] = {.lex_state = 725},
  [217] = {.lex_state = 725},
  [218] = {.lex_state = 725},
  [219] = {.lex_state = 725},
  [220] = {.lex_state = 725},
  [221] = {.lex_state = 725},
  [222] = {.lex_state = 725},
  [223] = {.lex_state = 725},
  [224] = {.lex_state = 725},
  [225] = {.lex_state = 725},
  [226] = {.lex_state = 725},
  [227] = {.lex_state = 725},
  [228] = {.lex_state = 725},
  [229] = {.lex_state = 725},
  [230] = {.lex_state = 725},
  [231] = {.lex_state = 725},
  [232] = {.lex_state = 725},
  [233] = {.lex_state = 725},
  [234] = {.lex_state = 725},
  [235] = {.lex_state = 725},
  [236] = {.lex_state = 725},
  [237] = {.lex_state = 725},
  [238] = {.lex_state = 725},
  [239] = {.lex_state = 725},
  [240] = {.lex_state = 725},
  [241] = {.lex_state = 725},
  [242] = {.lex_state = 725},
  [243] = {.lex_state = 725},
  [244] = {.lex_state = 725},
  [245] = {.lex_state = 725},
  [246] = {.lex_state = 725},
  [247] = {.lex_state = 725},
  [248] = {.lex_state = 725},
  [249] = {.lex_state = 725},
  [250] = {.lex_state = 725},
  [251] = {.lex_state = 725},
  [252] = {.lex_state = 725},
  [253] = {.lex_state = 725},
  [254] = {.lex_state = 725},
  [255] = {.lex_state = 725},
  [256] = {.lex_state = 725},
  [257] = {.lex_state = 725},
  [258] = {.lex_state = 725},
  [259] = {.lex_state = 725},
  [260] = {.lex_state = 725},
  [261] = {.lex_state = 725},
  [262] = {.lex_state = 725},
  [263] = {.lex_state = 725},
  [264] = {.lex_state = 725},
  [265] = {.lex_state = 725},
  [266] = {.lex_state = 725},
  [267] = {.lex_state = 725},
  [268] = {.lex_state = 725},
  [269] = {.lex_state = 725},
  [270] = {.lex_state = 725},
  [271] = {.lex_state = 725},
  [272] = {.lex_state = 725},
  [273] = {.lex_state = 725},
  [274] = {.lex_state = 725},
  [275] = {.lex_state = 725},
  [276] = {.lex_state = 725},
  [277] = {.lex_state = 725},
  [278] = {.lex_state = 725},
  [279] = {.lex_state = 725},
  [280] = {.lex_state = 725},
  [281] = {.lex_state = 725},
  [282] = {.lex_state = 725},
  [283] = {.lex_state = 725},
  [284] = {.lex_state = 725},
  [285] = {.lex_state = 725},
  [286] = {.lex_state = 725},
  [287] = {.lex_state = 725},
  [288] = {.lex_state = 725},
  [289] = {.lex_state = 725},
  [290] = {.lex_state = 725},
  [291] = {.lex_state = 725},
  [292] = {.lex_state = 725},
  [293] = {.lex_state = 725},
  [294] = {.lex_state = 725},
  [295] = {.lex_state = 725},
  [296] = {.lex_state = 725},
  [297] = {.lex_state = 725},
  [298] = {.lex_state = 725},
  [299] = {.lex_state = 725},
  [300] = {.lex_state = 725},
  [301] = {.lex_state = 725},
  [302] = {.lex_state = 725},
  [303] = {.lex_state = 725},
  [304] = {.lex_state = 725},
  [305] = {.lex_state = 725},
  [306] = {.lex_state = 725},
  [307] = {.lex_state = 725},
  [308] = {.lex_state = 725},
  [309] = {.lex_state = 725},
  [310] = {.lex_state = 725},
  [311] = {.lex_state = 725},
  [312] = {.lex_state = 725},
  [313] = {.lex_state = 725},
  [314] = {.lex_state = 725},
  [315] = {.lex_state = 725},
  [316] = {.lex_state = 725},
  [317] = {.lex_state = 725},
  [318] = {.lex_state = 725},
  [319] = {.lex_state = 725},
  [320] = {.lex_state = 725},
  [321] = {.lex_state = 725},
  [322] = {.lex_state = 725},
  [323] = {.lex_state = 725},
  [324] = {.lex_state = 725},
  [325] = {.lex_state = 725},
  [326] = {.lex_state = 725},
  [327] = {.lex_state = 725},
  [328] = {.lex_state = 725},
  [329] = {.lex_state = 725},
  [330] = {.lex_state = 725},
  [331] = {.lex_state = 725},
  [332] = {.lex_state = 725},
  [333] = {.lex_state = 725},
  [334] = {.lex_state = 725},
  [335] = {.lex_state = 725},
  [336] = {.lex_state = 725},
  [337] = {.lex_state = 725},
  [338] = {.lex_state = 725},
  [339] = {.lex_state = 725},
  [340] = {.lex_state = 725},
  [341] = {.lex_state = 725},
  [342] = {.lex_state = 725},
  [343] = {.lex_state = 725},
  [344] = {.lex_state = 725},
  [345] = {.lex_state = 725},
  [346] = {.lex_state = 725},
  [347] = {.lex_state = 725},
  [348] = {.lex_state = 725},
  [349] = {.lex_state = 725},
  [350] = {.lex_state = 725},
  [351] = {.lex_state = 725},
  [352] = {.lex_state = 725},
  [353] = {.lex_state = 725},
  [354] = {.lex_state = 726},
  [355] = {.lex_state = 726},
  [356] = {.lex_state = 726},
  [357] = {.lex_state = 726},
  [358] = {.lex_state = 726},
  [359] = {.lex_state = 726},
  [360] = {.lex_state = 726},
  [361] = {.lex_state = 4},
  [362] = {.lex_state = 4},
  [363] = {.lex_state = 4},
  [364] = {.lex_state = 4},
  [365] = {.lex_state = 4},
  [366] = {.lex_state = 4},
  [367] = {.lex_state = 4},
  [368] = {.lex_state = 4},
  [369] = {.lex_state = 4},
  [370] = {.lex_state = 2},
  [371] = {.lex_state = 238},
  [372] = {.lex_state = 2},
  [373] = {.lex_state = 2},
  [374] = {.lex_state = 238},
  [375] = {.lex_state = 2},
  [376] = {.lex_state = 2},
  [377] = {.lex_state = 3},
  [378] = {.lex_state = 2},
  [379] = {.lex_state = 2},
  [380] = {.lex_state = 3},
  [381] = {.lex_state = 2},
  [382] = {.lex_state = 2},
  [383] = {.lex_state = 1},
  [384] = {.lex_state = 3},
  [385] = {.lex_state = 2},
  [386] = {.lex_state = 1},
  [387] = {.lex_state = 3},
  [388] = {.lex_state = 3},
  [389] = {.lex_state = 3},
  [390] = {.lex_state = 3},
  [391] = {.lex_state = 3},
  [392] = {.lex_state = 1},
  [393] = {.lex_state = 3},
  [394] = {.lex_state = 3},
  [395] = {.lex_state = 3},
  [396] = {.lex_state = 3},
  [397] = {.lex_state = 3},
  [398] = {.lex_state = 3},
  [399] = {.lex_state = 3},
  [400] = {.lex_state = 1},
  [401] = {.lex_state = 1},
  [402] = {.lex_state = 2},
  [403] = {.lex_state = 1},
  [404] = {.lex_state = 1},
  [405] = {.lex_state = 1},
  [406] = {.lex_state = 3},
  [407] = {.lex_state = 3},
  [408] = {.lex_state = 2},
  [409] = {.lex_state = 3},
  [410] = {.lex_state = 3},
  [411] = {.lex_state = 91},
  [412] = {.lex_state = 54},
  [413] = {.lex_state = 91},
  [414] = {.lex_state = 91},
  [415] = {.lex_state = 91},
  [416] = {.lex_state = 54},
  [417] = {.lex_state = 91},
  [418] = {.lex_state = 54},
  [419] = {.lex_state = 91},
  [420] = {.lex_state = 91},
  [421] = {.lex_state = 90},
  [422] = {.lex_state = 726},
  [423] = {.lex_state = 93},
  [424] = {.lex_state = 55},
  [425] = {.lex_state = 92},
  [426] = {.lex_state = 55},
  [427] = {.lex_state = 91},
  [428] = {.lex_state = 91},
  [429] = {.lex_state = 91},
  [430] = {.lex_state = 91},
  [431] = {.lex_state = 90},
  [432] = {.lex_state = 91},
  [433] = {.lex_state = 91},
  [434] = {.lex_state = 91},
  [435] = {.lex_state = 90},
  [436] = {.lex_state = 55},
  [437] = {.lex_state = 91},
  [438] = {.lex_state = 92},
  [439] = {.lex_state = 91},
  [440] = {.lex_state = 91},
  [441] = {.lex_state = 91},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 91},
  [444] = {.lex_state = 91},
  [445] = {.lex_state = 91},
  [446] = {.lex_state = 726},
  [447] = {.lex_state = 91},
  [448] = {.lex_state = 91},
  [449] = {.lex_state = 91},
  [450] = {.lex_state = 93},
  [451] = {.lex_state = 720},
  [452] = {.lex_state = 91},
  [453] = {.lex_state = 91},
  [454] = {.lex_state = 91},
  [455] = {.lex_state = 91},
  [456] = {.lex_state = 91},
  [457] = {.lex_state = 92},
  [458] = {.lex_state = 91},
  [459] = {.lex_state = 91},
  [460] = {.lex_state = 91},
  [461] = {.lex_state = 90},
  [462] = {.lex_state = 726},
  [463] = {.lex_state = 91},
  [464] = {.lex_state = 726},
  [465] = {.lex_state = 720},
  [466] = {.lex_state = 91},
  [467] = {.lex_state = 91},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 720},
  [470] = {.lex_state = 726},
  [471] = {.lex_state = 91},
  [472] = {.lex_state = 726},
  [473] = {.lex_state = 91},
  [474] = {.lex_state = 92},
  [475] = {.lex_state = 91},
  [476] = {.lex_state = 720},
  [477] = {.lex_state = 726},
  [478] = {.lex_state = 91},
  [479] = {.lex_state = 91},
  [480] = {.lex_state = 91},
  [481] = {.lex_state = 91},
  [482] = {.lex_state = 91},
  [483] = {.lex_state = 91},
  [484] = {.lex_state = 91},
  [485] = {.lex_state = 91},
  [486] = {.lex_state = 92},
  [487] = {.lex_state = 720},
  [488] = {.lex_state = 91},
  [489] = {.lex_state = 91},
  [490] = {.lex_state = 91},
  [491] = {.lex_state = 91},
  [492] = {.lex_state = 720},
  [493] = {.lex_state = 720},
  [494] = {.lex_state = 720},
  [495] = {.lex_state = 91},
  [496] = {.lex_state = 91},
  [497] = {.lex_state = 91},
  [498] = {.lex_state = 91},
  [499] = {.lex_state = 720},
  [500] = {.lex_state = 726},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 91},
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
    [sym_header_entity] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [aux_sym__blank_line_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(468),
    [sym__comment_prefix] = STATE(424),
    [sym_comment] = STATE(71),
    [sym_request_separator] = STATE(68),
    [sym_section] = STATE(58),
    [sym__section_content] = STATE(356),
    [aux_sym__target_url_line] = STATE(380),
    [sym_target_url] = STATE(428),
    [sym_request] = STATE(104),
    [sym_variable] = STATE(380),
    [sym_pre_request_script] = STATE(71),
    [sym_variable_declaration] = STATE(71),
    [sym__blank_line] = STATE(71),
    [aux_sym_document_repeat1] = STATE(58),
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
  [0] = 24,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(242), 1,
      sym_xml_body,
    STATE(243), 1,
      sym_json_body,
    STATE(244), 1,
      sym_graphql_body,
    STATE(245), 1,
      sym__external_body,
    STATE(246), 1,
      sym_multipart_form_data,
    STATE(247), 1,
      sym_raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(53), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(27), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [82] = 19,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(57), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(51), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(146), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [154] = 19,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(48), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(55), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(194), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [226] = 19,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(43), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(59), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(315), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [298] = 24,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(347), 1,
      sym_xml_body,
    STATE(348), 1,
      sym_json_body,
    STATE(349), 1,
      sym_graphql_body,
    STATE(350), 1,
      sym__external_body,
    STATE(351), 1,
      sym_multipart_form_data,
    STATE(352), 1,
      sym_raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(32), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(63), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [380] = 19,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(30), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(67), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(180), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [452] = 19,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(38), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(71), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(222), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [524] = 24,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(227), 1,
      sym_xml_body,
    STATE(228), 1,
      sym_json_body,
    STATE(229), 1,
      sym_graphql_body,
    STATE(230), 1,
      sym__external_body,
    STATE(231), 1,
      sym_multipart_form_data,
    STATE(232), 1,
      sym_raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(52), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(75), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [606] = 19,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(33), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(79), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(342), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [678] = 19,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(56), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(83), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(167), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [750] = 19,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(55), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(87), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(237), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [822] = 24,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(308), 1,
      sym_xml_body,
    STATE(309), 1,
      sym_json_body,
    STATE(310), 1,
      sym_graphql_body,
    STATE(311), 1,
      sym__external_body,
    STATE(312), 1,
      sym_multipart_form_data,
    STATE(313), 1,
      sym_raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(31), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(91), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [904] = 24,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(197), 1,
      sym_xml_body,
    STATE(198), 1,
      sym_json_body,
    STATE(199), 1,
      sym_graphql_body,
    STATE(200), 1,
      sym__external_body,
    STATE(201), 1,
      sym_multipart_form_data,
    STATE(202), 1,
      sym_raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(44), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(95), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [986] = 24,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(219), 1,
      sym_raw_body,
    STATE(220), 1,
      sym_multipart_form_data,
    STATE(221), 1,
      sym__external_body,
    STATE(223), 1,
      sym_graphql_body,
    STATE(224), 1,
      sym_json_body,
    STATE(225), 1,
      sym_xml_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(39), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(99), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1068] = 24,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(187), 1,
      sym_xml_body,
    STATE(188), 1,
      sym_json_body,
    STATE(189), 1,
      sym_graphql_body,
    STATE(190), 1,
      sym__external_body,
    STATE(191), 1,
      sym_multipart_form_data,
    STATE(192), 1,
      sym_raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(51), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(95), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1150] = 24,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(317), 1,
      sym_raw_body,
    STATE(324), 1,
      sym_multipart_form_data,
    STATE(331), 1,
      sym__external_body,
    STATE(332), 1,
      sym_graphql_body,
    STATE(339), 1,
      sym_json_body,
    STATE(340), 1,
      sym_xml_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(34), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(103), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1232] = 24,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(259), 1,
      sym_xml_body,
    STATE(260), 1,
      sym_json_body,
    STATE(261), 1,
      sym_graphql_body,
    STATE(262), 1,
      sym__external_body,
    STATE(263), 1,
      sym_multipart_form_data,
    STATE(264), 1,
      sym_raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(40), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(107), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1314] = 24,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(265), 1,
      sym_raw_body,
    STATE(273), 1,
      sym_multipart_form_data,
    STATE(274), 1,
      sym__external_body,
    STATE(275), 1,
      sym_graphql_body,
    STATE(276), 1,
      sym_json_body,
    STATE(277), 1,
      sym_xml_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(35), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(111), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1396] = 24,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(295), 1,
      sym_xml_body,
    STATE(296), 1,
      sym_json_body,
    STATE(297), 1,
      sym_graphql_body,
    STATE(298), 1,
      sym__external_body,
    STATE(299), 1,
      sym_multipart_form_data,
    STATE(300), 1,
      sym_raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(46), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(115), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1478] = 19,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(47), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(119), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(292), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1550] = 24,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(285), 1,
      sym_xml_body,
    STATE(286), 1,
      sym_json_body,
    STATE(287), 1,
      sym_graphql_body,
    STATE(288), 1,
      sym__external_body,
    STATE(289), 1,
      sym_multipart_form_data,
    STATE(290), 1,
      sym_raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(49), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(115), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1632] = 19,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(50), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(123), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(283), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1704] = 24,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(165), 1,
      sym_raw_body,
    STATE(166), 1,
      sym_multipart_form_data,
    STATE(168), 1,
      sym__external_body,
    STATE(169), 1,
      sym_graphql_body,
    STATE(170), 1,
      sym_json_body,
    STATE(171), 1,
      sym_xml_body,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(41), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(127), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1786] = 19,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(54), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(131), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(183), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1858] = 24,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(233), 1,
      sym_raw_body,
    STATE(234), 1,
      sym_multipart_form_data,
    STATE(235), 1,
      sym__external_body,
    STATE(236), 1,
      sym_graphql_body,
    STATE(238), 1,
      sym_json_body,
    STATE(239), 1,
      sym_xml_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(36), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(99), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1940] = 24,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(142), 1,
      sym_multipart_form_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(318), 1,
      sym_xml_body,
    STATE(319), 1,
      sym_json_body,
    STATE(320), 1,
      sym_graphql_body,
    STATE(321), 1,
      sym__external_body,
    STATE(323), 1,
      sym_raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(42), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(91), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [2022] = 24,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(143), 1,
      sym_multipart_form_data,
    STATE(144), 1,
      sym_raw_body,
    STATE(148), 1,
      sym_xml_body,
    STATE(151), 1,
      sym_json_body,
    STATE(154), 1,
      sym_graphql_body,
    STATE(179), 1,
      sym__raw_body,
    STATE(322), 1,
      sym__external_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(45), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(135), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [2104] = 19,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(37), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(139), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(226), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [2176] = 16,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(237), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(87), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2240] = 21,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(141), 1,
      sym_json_body,
    STATE(179), 1,
      sym__raw_body,
    STATE(278), 1,
      sym_raw_body,
    STATE(279), 1,
      sym_multipart_form_data,
    STATE(280), 1,
      sym__external_body,
    STATE(281), 1,
      sym_graphql_body,
    STATE(282), 1,
      sym_xml_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(143), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2314] = 21,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(212), 1,
      sym_raw_body,
    STATE(213), 1,
      sym_multipart_form_data,
    STATE(215), 1,
      sym__external_body,
    STATE(216), 1,
      sym_graphql_body,
    STATE(217), 1,
      sym_json_body,
    STATE(218), 1,
      sym_xml_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(147), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2388] = 16,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(226), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(139), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2452] = 21,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(193), 1,
      sym_raw_body,
    STATE(195), 1,
      sym_multipart_form_data,
    STATE(196), 1,
      sym__external_body,
    STATE(203), 1,
      sym_graphql_body,
    STATE(210), 1,
      sym_json_body,
    STATE(211), 1,
      sym_xml_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(151), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2526] = 21,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(178), 1,
      sym_raw_body,
    STATE(179), 1,
      sym__raw_body,
    STATE(181), 1,
      sym_multipart_form_data,
    STATE(182), 1,
      sym__external_body,
    STATE(184), 1,
      sym_graphql_body,
    STATE(185), 1,
      sym_json_body,
    STATE(186), 1,
      sym_xml_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(155), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2600] = 21,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(172), 1,
      sym_raw_body,
    STATE(173), 1,
      sym_multipart_form_data,
    STATE(174), 1,
      sym__external_body,
    STATE(175), 1,
      sym_graphql_body,
    STATE(176), 1,
      sym_json_body,
    STATE(177), 1,
      sym_xml_body,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(157), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(159), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2674] = 16,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(164), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(163), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2738] = 16,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(292), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(119), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2802] = 21,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(158), 1,
      sym_raw_body,
    STATE(159), 1,
      sym_multipart_form_data,
    STATE(160), 1,
      sym__external_body,
    STATE(161), 1,
      sym_graphql_body,
    STATE(162), 1,
      sym_json_body,
    STATE(163), 1,
      sym_xml_body,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(157), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(159), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2876] = 21,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(333), 1,
      sym_xml_body,
    STATE(334), 1,
      sym_json_body,
    STATE(335), 1,
      sym_graphql_body,
    STATE(336), 1,
      sym__external_body,
    STATE(337), 1,
      sym_multipart_form_data,
    STATE(338), 1,
      sym_raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(167), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2950] = 21,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(145), 1,
      sym_raw_body,
    STATE(147), 1,
      sym_multipart_form_data,
    STATE(149), 1,
      sym__external_body,
    STATE(150), 1,
      sym_graphql_body,
    STATE(152), 1,
      sym_json_body,
    STATE(157), 1,
      sym_xml_body,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(171), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3024] = 21,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(240), 1,
      sym_raw_body,
    STATE(241), 1,
      sym_multipart_form_data,
    STATE(248), 1,
      sym__external_body,
    STATE(249), 1,
      sym_graphql_body,
    STATE(250), 1,
      sym_json_body,
    STATE(251), 1,
      sym_xml_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(143), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3098] = 16,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(252), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(175), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3162] = 21,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(267), 1,
      sym_xml_body,
    STATE(268), 1,
      sym_json_body,
    STATE(269), 1,
      sym_graphql_body,
    STATE(270), 1,
      sym__external_body,
    STATE(271), 1,
      sym_multipart_form_data,
    STATE(272), 1,
      sym_raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(177), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(179), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3236] = 21,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(204), 1,
      sym_xml_body,
    STATE(205), 1,
      sym_json_body,
    STATE(206), 1,
      sym_graphql_body,
    STATE(207), 1,
      sym__external_body,
    STATE(208), 1,
      sym_multipart_form_data,
    STATE(209), 1,
      sym_raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(181), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(183), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3310] = 21,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(284), 1,
      sym_raw_body,
    STATE(291), 1,
      sym_multipart_form_data,
    STATE(293), 1,
      sym__external_body,
    STATE(294), 1,
      sym_graphql_body,
    STATE(301), 1,
      sym_json_body,
    STATE(314), 1,
      sym_xml_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(185), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(187), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3384] = 16,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(189), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(316), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(191), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3448] = 16,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(193), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(266), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(195), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3512] = 21,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(341), 1,
      sym_raw_body,
    STATE(343), 1,
      sym_multipart_form_data,
    STATE(344), 1,
      sym__external_body,
    STATE(345), 1,
      sym_graphql_body,
    STATE(346), 1,
      sym_json_body,
    STATE(353), 1,
      sym_xml_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(185), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(187), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3586] = 16,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(342), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(79), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3650] = 21,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(253), 1,
      sym_xml_body,
    STATE(254), 1,
      sym_json_body,
    STATE(255), 1,
      sym_graphql_body,
    STATE(256), 1,
      sym__external_body,
    STATE(257), 1,
      sym_multipart_form_data,
    STATE(258), 1,
      sym_raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(177), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(179), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3724] = 21,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(302), 1,
      sym_xml_body,
    STATE(303), 1,
      sym_json_body,
    STATE(304), 1,
      sym_graphql_body,
    STATE(305), 1,
      sym__external_body,
    STATE(306), 1,
      sym_multipart_form_data,
    STATE(307), 1,
      sym_raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(199), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3798] = 21,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(325), 1,
      sym_xml_body,
    STATE(326), 1,
      sym_json_body,
    STATE(327), 1,
      sym_graphql_body,
    STATE(328), 1,
      sym__external_body,
    STATE(329), 1,
      sym_multipart_form_data,
    STATE(330), 1,
      sym_raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(203), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3872] = 16,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(146), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(51), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3936] = 16,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(315), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(59), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [4000] = 16,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(222), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(71), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [4064] = 16,
    ACTIONS(31), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    STATE(124), 1,
      sym_graphql_data,
    STATE(179), 1,
      sym__raw_body,
    STATE(423), 1,
      sym__comment_prefix,
    STATE(458), 1,
      sym_external_body,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(194), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(55), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [4128] = 19,
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
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(68), 1,
      sym_request_separator,
    STATE(104), 1,
      sym_request,
    STATE(356), 1,
      sym__section_content,
    STATE(424), 1,
      sym__comment_prefix,
    STATE(428), 1,
      sym_target_url,
    ACTIONS(5), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    STATE(59), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(380), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(71), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4192] = 19,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      aux_sym_WS_token1,
    ACTIONS(215), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(218), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(221), 1,
      aux_sym_request_separator_token1,
    ACTIONS(224), 1,
      sym_method,
    ACTIONS(227), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(230), 1,
      anon_sym_LT,
    ACTIONS(233), 1,
      anon_sym_AT2,
    ACTIONS(236), 1,
      aux_sym__blank_line_token1,
    STATE(68), 1,
      sym_request_separator,
    STATE(104), 1,
      sym_request,
    STATE(356), 1,
      sym__section_content,
    STATE(424), 1,
      sym__comment_prefix,
    STATE(428), 1,
      sym_target_url,
    ACTIONS(209), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    STATE(59), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(380), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(71), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4256] = 14,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(245), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(247), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(249), 1,
      sym_http_version,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(253), 1,
      aux_sym__blank_line_token1,
    STATE(100), 1,
      sym_response,
    STATE(102), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(426), 1,
      sym__comment_prefix,
    STATE(25), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(62), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(241), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(239), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [4308] = 14,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(245), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(247), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(249), 1,
      sym_http_version,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(259), 1,
      aux_sym__blank_line_token1,
    STATE(80), 1,
      aux_sym_request_repeat2,
    STATE(94), 1,
      sym_response,
    STATE(139), 1,
      sym_header,
    STATE(426), 1,
      sym__comment_prefix,
    STATE(11), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(63), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(257), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(255), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [4360] = 14,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(245), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(247), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(249), 1,
      sym_http_version,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(261), 1,
      aux_sym__blank_line_token1,
    STATE(90), 1,
      sym_response,
    STATE(92), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(426), 1,
      sym__comment_prefix,
    STATE(3), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(91), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(131), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [4412] = 14,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(245), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(247), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(249), 1,
      sym_http_version,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(263), 1,
      aux_sym__blank_line_token1,
    STATE(89), 1,
      sym_response,
    STATE(93), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(426), 1,
      sym__comment_prefix,
    STATE(8), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(91), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(83), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [4464] = 14,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(245), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(247), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(249), 1,
      sym_http_version,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(265), 1,
      aux_sym__blank_line_token1,
    STATE(81), 1,
      aux_sym_request_repeat2,
    STATE(98), 1,
      sym_response,
    STATE(139), 1,
      sym_header,
    STATE(426), 1,
      sym__comment_prefix,
    STATE(10), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(91), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(123), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [4516] = 14,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(245), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(247), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(249), 1,
      sym_http_version,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(271), 1,
      aux_sym__blank_line_token1,
    STATE(88), 1,
      aux_sym_request_repeat2,
    STATE(101), 1,
      sym_response,
    STATE(139), 1,
      sym_header,
    STATE(426), 1,
      sym__comment_prefix,
    STATE(7), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(67), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(269), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(267), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [4568] = 14,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(245), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(247), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(249), 1,
      sym_http_version,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(277), 1,
      aux_sym__blank_line_token1,
    STATE(85), 1,
      aux_sym_request_repeat2,
    STATE(87), 1,
      sym_response,
    STATE(139), 1,
      sym_header,
    STATE(426), 1,
      sym__comment_prefix,
    STATE(23), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(64), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(275), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(273), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [4620] = 14,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(245), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(247), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(249), 1,
      sym_http_version,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(279), 1,
      aux_sym__blank_line_token1,
    STATE(86), 1,
      sym_response,
    STATE(103), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(426), 1,
      sym__comment_prefix,
    STATE(12), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(91), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(67), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(65), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [4672] = 16,
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
    STATE(104), 1,
      sym_request,
    STATE(359), 1,
      sym__section_content,
    STATE(424), 1,
      sym__comment_prefix,
    STATE(428), 1,
      sym_target_url,
    ACTIONS(5), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(380), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(71), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4727] = 6,
    ACTIONS(287), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(290), 1,
      aux_sym__comment_prefix_token2,
    STATE(502), 1,
      sym__comment_prefix,
    STATE(69), 2,
      sym_var_comment,
      aux_sym_request_repeat4,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(285), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [4762] = 5,
    ACTIONS(297), 1,
      aux_sym_WS_token1,
    ACTIONS(300), 1,
      aux_sym__blank_line_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(293), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(295), 9,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
  [4794] = 14,
    ACTIONS(7), 1,
      aux_sym_WS_token1,
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
    STATE(104), 1,
      sym_request,
    STATE(358), 1,
      sym__section_content,
    STATE(424), 1,
      sym__comment_prefix,
    STATE(428), 1,
      sym_target_url,
    ACTIONS(5), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(11), 2,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
    STATE(380), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(71), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4843] = 10,
    ACTIONS(307), 1,
      aux_sym_WS_token1,
    ACTIONS(310), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(313), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(316), 1,
      anon_sym_LT2,
    STATE(434), 1,
      sym_external_body,
    STATE(436), 1,
      sym__comment_prefix,
    ACTIONS(319), 2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
    ACTIONS(303), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(72), 3,
      sym_comment,
      sym__blank_line,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(305), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4884] = 10,
    ACTIONS(326), 1,
      aux_sym_WS_token1,
    ACTIONS(328), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(330), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(332), 1,
      anon_sym_LT2,
    STATE(434), 1,
      sym_external_body,
    STATE(436), 1,
      sym__comment_prefix,
    ACTIONS(334), 2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
    ACTIONS(322), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(72), 3,
      sym_comment,
      sym__blank_line,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(324), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4925] = 10,
    ACTIONS(326), 1,
      aux_sym_WS_token1,
    ACTIONS(328), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(330), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(332), 1,
      anon_sym_LT2,
    STATE(434), 1,
      sym_external_body,
    STATE(436), 1,
      sym__comment_prefix,
    ACTIONS(340), 2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
    ACTIONS(336), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(73), 3,
      sym_comment,
      sym__blank_line,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(338), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4966] = 2,
    ACTIONS(342), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(344), 11,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [4990] = 2,
    ACTIONS(346), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(348), 11,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5014] = 2,
    ACTIONS(350), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(352), 11,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5038] = 2,
    ACTIONS(354), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(356), 11,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5062] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(362), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(16), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(360), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(358), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5097] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(368), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(9), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(366), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(364), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5132] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(374), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(15), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(372), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(370), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5167] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(380), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(17), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(378), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(376), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5202] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(386), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(13), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(384), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(382), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5237] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(392), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(22), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(390), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(388), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5272] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(398), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(6), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(396), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(394), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5307] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(400), 1,
      aux_sym__blank_line_token1,
    STATE(96), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(5), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(87), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5342] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(265), 1,
      aux_sym__blank_line_token1,
    STATE(97), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(10), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(123), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5377] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(406), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(2), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(404), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(402), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5412] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(408), 1,
      aux_sym__blank_line_token1,
    STATE(82), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(21), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(71), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5447] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(410), 1,
      aux_sym__blank_line_token1,
    STATE(99), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(4), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(51), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(49), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5482] = 6,
    ACTIONS(416), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(419), 1,
      aux_sym__comment_prefix_token2,
    STATE(426), 1,
      sym__comment_prefix,
    STATE(91), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(414), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(412), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5513] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(422), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(14), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(360), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(358), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5548] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(424), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(20), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(390), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(388), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5583] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(263), 1,
      aux_sym__blank_line_token1,
    STATE(84), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(8), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(83), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5618] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(430), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(24), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(428), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(426), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5653] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(436), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(19), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(434), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(432), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5688] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(438), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(26), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(372), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(370), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5723] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(440), 1,
      aux_sym__blank_line_token1,
    STATE(95), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(29), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(79), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5758] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(446), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(18), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(444), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(442), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5793] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(261), 1,
      aux_sym__blank_line_token1,
    STATE(79), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(3), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(131), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5828] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(279), 1,
      aux_sym__blank_line_token1,
    STATE(83), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(12), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(67), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5863] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(452), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(28), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(450), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(448), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5898] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(454), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(27), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(384), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(382), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5933] = 8,
    ACTIONS(460), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(463), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(466), 1,
      anon_sym_GT,
    STATE(106), 1,
      aux_sym__section_content_repeat2,
    STATE(498), 1,
      sym__comment_prefix,
    STATE(122), 2,
      sym_var_comment,
      sym_res_handler_script,
    ACTIONS(458), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__blank_line_token1,
    ACTIONS(456), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5967] = 8,
    ACTIONS(472), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(475), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(478), 1,
      anon_sym_GT,
    STATE(105), 1,
      aux_sym__section_content_repeat2,
    STATE(498), 1,
      sym__comment_prefix,
    STATE(122), 2,
      sym_var_comment,
      sym_res_handler_script,
    ACTIONS(470), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__blank_line_token1,
    ACTIONS(468), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6001] = 8,
    ACTIONS(466), 1,
      anon_sym_GT,
    ACTIONS(485), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(488), 1,
      aux_sym__comment_prefix_token2,
    STATE(105), 1,
      aux_sym__section_content_repeat2,
    STATE(498), 1,
      sym__comment_prefix,
    STATE(122), 2,
      sym_var_comment,
      sym_res_handler_script,
    ACTIONS(483), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__blank_line_token1,
    ACTIONS(481), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6035] = 7,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(495), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(498), 1,
      aux_sym__comment_prefix_token2,
    STATE(153), 1,
      sym__raw_body,
    STATE(450), 1,
      sym__comment_prefix,
    ACTIONS(491), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(493), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6066] = 7,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(505), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(508), 1,
      aux_sym__comment_prefix_token2,
    STATE(214), 1,
      sym__raw_body,
    STATE(450), 1,
      sym__comment_prefix,
    ACTIONS(501), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(503), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6097] = 4,
    ACTIONS(515), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(110), 1,
      aux_sym_script_repeat1,
    ACTIONS(511), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      aux_sym_json_body_token1,
    ACTIONS(513), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6122] = 4,
    ACTIONS(521), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(110), 1,
      aux_sym_script_repeat1,
    ACTIONS(517), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      aux_sym_json_body_token1,
    ACTIONS(519), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6147] = 5,
    ACTIONS(528), 1,
      sym_header_entity,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    ACTIONS(526), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      aux_sym__blank_line_token1,
    ACTIONS(524), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6174] = 2,
    ACTIONS(531), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(533), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [6194] = 2,
    ACTIONS(535), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(537), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [6214] = 4,
    ACTIONS(539), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(114), 1,
      aux_sym_script_repeat1,
    ACTIONS(517), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
    ACTIONS(519), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6238] = 4,
    ACTIONS(546), 1,
      aux_sym_NL_token1,
    STATE(115), 1,
      aux_sym__section_content_repeat1,
    ACTIONS(544), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(542), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6262] = 4,
    ACTIONS(553), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(114), 1,
      aux_sym_script_repeat1,
    ACTIONS(549), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
    ACTIONS(551), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6286] = 2,
    ACTIONS(557), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(555), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6306] = 2,
    ACTIONS(537), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(535), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6326] = 2,
    ACTIONS(533), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(531), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6346] = 4,
    ACTIONS(553), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(114), 1,
      aux_sym_script_repeat1,
    ACTIONS(559), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
    ACTIONS(561), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6370] = 2,
    ACTIONS(563), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(565), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [6390] = 4,
    ACTIONS(571), 1,
      aux_sym_NL_token1,
    STATE(128), 1,
      aux_sym__section_content_repeat1,
    ACTIONS(569), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(567), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6414] = 2,
    ACTIONS(565), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(563), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6434] = 4,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    STATE(155), 1,
      sym_json_body,
    ACTIONS(575), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(573), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6458] = 2,
    ACTIONS(354), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(356), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [6478] = 2,
    ACTIONS(303), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(305), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [6498] = 2,
    ACTIONS(555), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(557), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [6518] = 4,
    ACTIONS(577), 1,
      aux_sym_NL_token1,
    STATE(115), 1,
      aux_sym__section_content_repeat1,
    ACTIONS(470), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(468), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6542] = 2,
    ACTIONS(581), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(579), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6561] = 2,
    ACTIONS(585), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(583), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6580] = 2,
    ACTIONS(344), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(342), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6599] = 2,
    ACTIONS(589), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(587), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6618] = 2,
    ACTIONS(593), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(591), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6637] = 2,
    ACTIONS(597), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(595), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6656] = 2,
    ACTIONS(348), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(346), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6675] = 2,
    ACTIONS(601), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(599), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6694] = 2,
    ACTIONS(352), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(350), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6713] = 2,
    ACTIONS(605), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(603), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6732] = 2,
    ACTIONS(609), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(607), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6751] = 2,
    ACTIONS(613), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(611), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6770] = 2,
    ACTIONS(617), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(615), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6788] = 2,
    ACTIONS(621), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(619), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6806] = 2,
    ACTIONS(625), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(623), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6824] = 2,
    ACTIONS(625), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(623), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6842] = 2,
    ACTIONS(629), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(627), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6860] = 2,
    ACTIONS(633), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(631), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6878] = 2,
    ACTIONS(629), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(627), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6896] = 2,
    ACTIONS(625), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(623), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6914] = 2,
    ACTIONS(629), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(627), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6932] = 2,
    ACTIONS(629), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(627), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6950] = 2,
    ACTIONS(625), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(623), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6968] = 2,
    ACTIONS(629), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(627), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6986] = 2,
    ACTIONS(503), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(501), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7004] = 2,
    ACTIONS(625), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(623), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7022] = 2,
    ACTIONS(637), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(635), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7040] = 2,
    ACTIONS(641), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(639), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7058] = 2,
    ACTIONS(629), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(627), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7076] = 2,
    ACTIONS(645), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(643), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7094] = 2,
    ACTIONS(645), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(643), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7112] = 2,
    ACTIONS(645), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(643), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7130] = 2,
    ACTIONS(645), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(643), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7148] = 2,
    ACTIONS(645), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(643), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7166] = 2,
    ACTIONS(645), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(643), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7184] = 2,
    ACTIONS(649), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(647), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7202] = 2,
    ACTIONS(653), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(651), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7220] = 2,
    ACTIONS(653), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(651), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7238] = 2,
    ACTIONS(657), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(655), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7256] = 2,
    ACTIONS(653), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(651), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7274] = 2,
    ACTIONS(653), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(651), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7292] = 2,
    ACTIONS(653), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(651), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7310] = 2,
    ACTIONS(653), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(651), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7328] = 2,
    ACTIONS(645), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(643), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7346] = 2,
    ACTIONS(645), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(643), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7364] = 2,
    ACTIONS(645), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(643), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7382] = 2,
    ACTIONS(645), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(643), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7400] = 2,
    ACTIONS(645), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(643), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7418] = 2,
    ACTIONS(645), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(643), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7436] = 2,
    ACTIONS(661), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(659), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7454] = 2,
    ACTIONS(665), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(663), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7472] = 2,
    ACTIONS(669), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(667), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7490] = 2,
    ACTIONS(661), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(659), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7508] = 2,
    ACTIONS(661), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(659), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7526] = 2,
    ACTIONS(673), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(671), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7544] = 2,
    ACTIONS(661), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(659), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7562] = 2,
    ACTIONS(661), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(659), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7580] = 2,
    ACTIONS(661), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(659), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7598] = 2,
    ACTIONS(677), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(675), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7616] = 2,
    ACTIONS(677), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(675), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7634] = 2,
    ACTIONS(677), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(675), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7652] = 2,
    ACTIONS(677), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(675), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7670] = 2,
    ACTIONS(677), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(675), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7688] = 2,
    ACTIONS(677), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(675), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7706] = 2,
    ACTIONS(681), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(679), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7724] = 2,
    ACTIONS(685), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(683), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7742] = 2,
    ACTIONS(681), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(679), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7760] = 2,
    ACTIONS(681), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(679), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7778] = 2,
    ACTIONS(677), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(675), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7796] = 2,
    ACTIONS(677), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(675), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7814] = 2,
    ACTIONS(677), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(675), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7832] = 2,
    ACTIONS(677), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(675), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7850] = 2,
    ACTIONS(677), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(675), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7868] = 2,
    ACTIONS(677), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(675), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7886] = 2,
    ACTIONS(681), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(679), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7904] = 2,
    ACTIONS(689), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(687), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7922] = 2,
    ACTIONS(689), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(687), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7940] = 2,
    ACTIONS(689), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(687), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7958] = 2,
    ACTIONS(689), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(687), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7976] = 2,
    ACTIONS(689), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(687), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7994] = 2,
    ACTIONS(689), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(687), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8012] = 2,
    ACTIONS(681), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(679), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8030] = 2,
    ACTIONS(681), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(679), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8048] = 2,
    ACTIONS(693), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(691), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8066] = 2,
    ACTIONS(693), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(691), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8084] = 2,
    ACTIONS(697), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(695), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8102] = 2,
    ACTIONS(693), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(691), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8120] = 2,
    ACTIONS(693), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(691), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8138] = 2,
    ACTIONS(693), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(691), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8156] = 2,
    ACTIONS(693), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(691), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8174] = 2,
    ACTIONS(701), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(699), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8192] = 2,
    ACTIONS(701), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(699), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8210] = 2,
    ACTIONS(701), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(699), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8228] = 2,
    ACTIONS(705), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(703), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8246] = 2,
    ACTIONS(701), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(699), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8264] = 2,
    ACTIONS(701), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(699), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8282] = 2,
    ACTIONS(701), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(699), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8300] = 2,
    ACTIONS(709), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(707), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8318] = 2,
    ACTIONS(713), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(711), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8336] = 2,
    ACTIONS(713), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(711), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8354] = 2,
    ACTIONS(713), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(711), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8372] = 2,
    ACTIONS(713), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(711), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8390] = 2,
    ACTIONS(713), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(711), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8408] = 2,
    ACTIONS(713), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(711), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8426] = 2,
    ACTIONS(701), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(699), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8444] = 2,
    ACTIONS(701), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(699), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8462] = 2,
    ACTIONS(701), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(699), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8480] = 2,
    ACTIONS(701), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(699), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8498] = 2,
    ACTIONS(717), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(715), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8516] = 2,
    ACTIONS(701), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(699), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8534] = 2,
    ACTIONS(701), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(699), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8552] = 2,
    ACTIONS(617), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(615), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8570] = 2,
    ACTIONS(617), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(615), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8588] = 2,
    ACTIONS(721), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(719), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8606] = 2,
    ACTIONS(721), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(719), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8624] = 2,
    ACTIONS(721), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(719), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8642] = 2,
    ACTIONS(721), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(719), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8660] = 2,
    ACTIONS(721), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(719), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8678] = 2,
    ACTIONS(721), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(719), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8696] = 2,
    ACTIONS(617), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(615), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8714] = 2,
    ACTIONS(617), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(615), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8732] = 2,
    ACTIONS(617), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(615), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8750] = 2,
    ACTIONS(617), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(615), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8768] = 2,
    ACTIONS(725), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(723), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8786] = 2,
    ACTIONS(729), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(727), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8804] = 2,
    ACTIONS(729), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(727), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8822] = 2,
    ACTIONS(729), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(727), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8840] = 2,
    ACTIONS(729), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(727), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8858] = 2,
    ACTIONS(729), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(727), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8876] = 2,
    ACTIONS(729), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(727), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8894] = 2,
    ACTIONS(733), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(731), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8912] = 2,
    ACTIONS(733), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(731), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8930] = 2,
    ACTIONS(733), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(731), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8948] = 2,
    ACTIONS(733), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(731), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8966] = 2,
    ACTIONS(733), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(731), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8984] = 2,
    ACTIONS(733), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(731), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9002] = 2,
    ACTIONS(737), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(735), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9020] = 2,
    ACTIONS(741), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(739), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9038] = 2,
    ACTIONS(729), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(727), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9056] = 2,
    ACTIONS(729), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(727), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9074] = 2,
    ACTIONS(729), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(727), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9092] = 2,
    ACTIONS(729), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(727), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9110] = 2,
    ACTIONS(729), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(727), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9128] = 2,
    ACTIONS(729), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(727), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9146] = 2,
    ACTIONS(737), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(735), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9164] = 2,
    ACTIONS(737), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(735), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9182] = 2,
    ACTIONS(737), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(735), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9200] = 2,
    ACTIONS(737), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(735), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9218] = 2,
    ACTIONS(737), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(735), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9236] = 2,
    ACTIONS(617), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(615), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9254] = 2,
    ACTIONS(617), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(615), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9272] = 2,
    ACTIONS(617), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(615), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9290] = 2,
    ACTIONS(617), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(615), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9308] = 2,
    ACTIONS(617), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(615), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9326] = 2,
    ACTIONS(745), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(743), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9344] = 2,
    ACTIONS(749), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(747), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9362] = 2,
    ACTIONS(753), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(751), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9380] = 2,
    ACTIONS(753), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(751), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9398] = 2,
    ACTIONS(753), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(751), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9416] = 2,
    ACTIONS(753), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(751), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9434] = 2,
    ACTIONS(753), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(751), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9452] = 2,
    ACTIONS(753), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(751), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9470] = 2,
    ACTIONS(749), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(747), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9488] = 2,
    ACTIONS(757), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(755), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9506] = 2,
    ACTIONS(749), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(747), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9524] = 2,
    ACTIONS(749), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(747), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9542] = 2,
    ACTIONS(753), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(751), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9560] = 2,
    ACTIONS(753), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(751), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9578] = 2,
    ACTIONS(753), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(751), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9596] = 2,
    ACTIONS(753), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(751), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9614] = 2,
    ACTIONS(753), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(751), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9632] = 2,
    ACTIONS(753), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(751), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9650] = 2,
    ACTIONS(749), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(747), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9668] = 2,
    ACTIONS(761), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(759), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9686] = 2,
    ACTIONS(761), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(759), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9704] = 2,
    ACTIONS(761), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(759), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9722] = 2,
    ACTIONS(761), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(759), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9740] = 2,
    ACTIONS(761), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(759), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9758] = 2,
    ACTIONS(761), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(759), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9776] = 2,
    ACTIONS(621), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(619), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9794] = 2,
    ACTIONS(621), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(619), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9812] = 2,
    ACTIONS(621), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(619), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9830] = 2,
    ACTIONS(621), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(619), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9848] = 2,
    ACTIONS(621), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(619), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9866] = 2,
    ACTIONS(621), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(619), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9884] = 2,
    ACTIONS(749), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(747), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9902] = 2,
    ACTIONS(765), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(763), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9920] = 2,
    ACTIONS(769), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(767), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9938] = 2,
    ACTIONS(773), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(771), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9956] = 2,
    ACTIONS(621), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(619), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9974] = 2,
    ACTIONS(621), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(619), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9992] = 2,
    ACTIONS(621), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(619), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10010] = 2,
    ACTIONS(621), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(619), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10028] = 2,
    ACTIONS(625), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(623), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10046] = 2,
    ACTIONS(621), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(619), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10064] = 2,
    ACTIONS(773), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(771), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10082] = 2,
    ACTIONS(777), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(775), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10100] = 2,
    ACTIONS(777), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(775), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10118] = 2,
    ACTIONS(777), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(775), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10136] = 2,
    ACTIONS(777), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(775), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10154] = 2,
    ACTIONS(777), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(775), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10172] = 2,
    ACTIONS(777), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(775), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10190] = 2,
    ACTIONS(773), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(771), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10208] = 2,
    ACTIONS(773), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(771), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10226] = 2,
    ACTIONS(781), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(779), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10244] = 2,
    ACTIONS(781), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(779), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10262] = 2,
    ACTIONS(781), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(779), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10280] = 2,
    ACTIONS(781), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(779), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10298] = 2,
    ACTIONS(781), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(779), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10316] = 2,
    ACTIONS(781), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(779), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10334] = 2,
    ACTIONS(773), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(771), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10352] = 2,
    ACTIONS(773), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(771), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10370] = 2,
    ACTIONS(749), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(747), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10388] = 2,
    ACTIONS(785), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(783), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10406] = 2,
    ACTIONS(749), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(747), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10424] = 2,
    ACTIONS(749), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(747), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10442] = 2,
    ACTIONS(749), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(747), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10460] = 2,
    ACTIONS(749), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(747), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10478] = 2,
    ACTIONS(789), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(787), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10496] = 2,
    ACTIONS(789), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(787), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10514] = 2,
    ACTIONS(789), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(787), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10532] = 2,
    ACTIONS(789), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(787), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10550] = 2,
    ACTIONS(789), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(787), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10568] = 2,
    ACTIONS(789), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(787), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10586] = 2,
    ACTIONS(749), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(747), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10604] = 2,
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
  [10621] = 2,
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
  [10638] = 2,
    ACTIONS(801), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(799), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10655] = 2,
    ACTIONS(805), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(803), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10672] = 2,
    ACTIONS(809), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(807), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10689] = 2,
    ACTIONS(813), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(811), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10706] = 2,
    ACTIONS(817), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(815), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10723] = 2,
    ACTIONS(356), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__blank_line_token1,
    ACTIONS(354), 7,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10738] = 2,
    ACTIONS(537), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__blank_line_token1,
    ACTIONS(535), 7,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10753] = 2,
    ACTIONS(819), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__blank_line_token1,
    ACTIONS(821), 7,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10768] = 2,
    ACTIONS(557), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__blank_line_token1,
    ACTIONS(555), 7,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10783] = 2,
    ACTIONS(823), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__blank_line_token1,
    ACTIONS(825), 7,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10798] = 2,
    ACTIONS(827), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__blank_line_token1,
    ACTIONS(829), 7,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10813] = 2,
    ACTIONS(533), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__blank_line_token1,
    ACTIONS(531), 7,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10828] = 2,
    ACTIONS(831), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__blank_line_token1,
    ACTIONS(833), 7,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10843] = 2,
    ACTIONS(565), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__blank_line_token1,
    ACTIONS(563), 7,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10858] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(839), 1,
      aux_sym_NL_token1,
    ACTIONS(841), 1,
      aux_sym_comment_token1,
    STATE(453), 1,
      sym_value,
    ACTIONS(837), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [10882] = 6,
    ACTIONS(845), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(847), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(849), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(843), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(386), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(491), 2,
      sym_script,
      sym_path,
  [10904] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(851), 1,
      aux_sym_NL_token1,
    ACTIONS(853), 1,
      aux_sym_comment_token1,
    STATE(460), 1,
      sym_value,
    ACTIONS(837), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [10928] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(855), 1,
      aux_sym_NL_token1,
    ACTIONS(857), 1,
      aux_sym_comment_token1,
    STATE(456), 1,
      sym_value,
    ACTIONS(837), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [10952] = 6,
    ACTIONS(845), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(847), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(849), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(843), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(386), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(452), 2,
      sym_script,
      sym_path,
  [10974] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(859), 1,
      aux_sym_comment_token1,
    STATE(463), 1,
      sym_value,
    ACTIONS(837), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [10995] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(861), 1,
      aux_sym_comment_token1,
    STATE(455), 1,
      sym_value,
    ACTIONS(837), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11016] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(851), 1,
      aux_sym_NL_token1,
    STATE(460), 1,
      sym_value,
    ACTIONS(835), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11037] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(863), 1,
      aux_sym_comment_token1,
    STATE(467), 1,
      sym_value,
    ACTIONS(837), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11058] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(865), 1,
      aux_sym_comment_token1,
    STATE(489), 1,
      sym_value,
    ACTIONS(837), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11079] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(867), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(869), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(871), 1,
      aux_sym_WS_token1,
    ACTIONS(873), 1,
      aux_sym_NL_token1,
    STATE(417), 1,
      aux_sym_target_url_repeat1,
    STATE(389), 2,
      aux_sym__target_url_line,
      sym_variable,
  [11102] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(876), 1,
      aux_sym_comment_token1,
    STATE(445), 1,
      sym_value,
    ACTIONS(837), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11123] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(878), 1,
      aux_sym_comment_token1,
    STATE(484), 1,
      sym_value,
    ACTIONS(837), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11144] = 6,
    ACTIONS(883), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(886), 1,
      aux_sym_WS_token1,
    ACTIONS(888), 1,
      aux_sym_NL_token1,
    ACTIONS(890), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(880), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(383), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [11165] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(893), 1,
      aux_sym_NL_token1,
    STATE(497), 1,
      sym_value,
    ACTIONS(835), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11186] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(835), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(895), 1,
      aux_sym_comment_token1,
    STATE(482), 1,
      sym_value,
    ACTIONS(837), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11207] = 6,
    ACTIONS(847), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(899), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(901), 1,
      aux_sym_WS_token1,
    ACTIONS(903), 1,
      aux_sym_NL_token1,
    ACTIONS(897), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(383), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [11228] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(905), 1,
      aux_sym_NL_token1,
    STATE(475), 1,
      sym_value,
    ACTIONS(835), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11249] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(455), 1,
      sym_value,
    ACTIONS(835), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11267] = 6,
    ACTIONS(907), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(910), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(913), 1,
      aux_sym_WS_token1,
    ACTIONS(915), 1,
      aux_sym_NL_token1,
    ACTIONS(917), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(389), 2,
      aux_sym__target_url_line,
      sym_variable,
  [11287] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(922), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(924), 1,
      aux_sym_NL_token1,
    ACTIONS(920), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(397), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11305] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(490), 1,
      sym_value,
    ACTIONS(835), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11323] = 5,
    ACTIONS(845), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(847), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(441), 1,
      sym_path,
    ACTIONS(843), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(386), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [11341] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(454), 1,
      sym_value,
    ACTIONS(835), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11359] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(867), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(869), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(926), 1,
      aux_sym_WS_token1,
    ACTIONS(928), 1,
      aux_sym_NL_token1,
    STATE(389), 2,
      aux_sym__target_url_line,
      sym_variable,
  [11379] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(485), 1,
      sym_value,
    ACTIONS(835), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11397] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(479), 1,
      sym_value,
    ACTIONS(835), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11415] = 5,
    ACTIONS(933), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(936), 1,
      aux_sym_NL_token1,
    ACTIONS(938), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(930), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(397), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11433] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(483), 1,
      sym_value,
    ACTIONS(835), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11451] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(448), 1,
      sym_value,
    ACTIONS(835), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11469] = 5,
    ACTIONS(845), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(847), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      sym_path,
    ACTIONS(843), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(386), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [11487] = 2,
    ACTIONS(943), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(941), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [11498] = 5,
    ACTIONS(5), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(945), 1,
      aux_sym_WORD_CHAR_token1,
    STATE(440), 1,
      sym_target_url,
    STATE(380), 2,
      aux_sym__target_url_line,
      sym_variable,
  [11515] = 2,
    ACTIONS(949), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(947), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [11526] = 2,
    ACTIONS(953), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(951), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [11537] = 2,
    ACTIONS(957), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(955), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [11548] = 2,
    ACTIONS(943), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(941), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [11558] = 2,
    ACTIONS(953), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(951), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [11568] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(959), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(961), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(394), 2,
      aux_sym__target_url_line,
      sym_variable,
  [11582] = 2,
    ACTIONS(957), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(955), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [11592] = 2,
    ACTIONS(949), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(947), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [11602] = 2,
    ACTIONS(965), 1,
      aux_sym_NL_token1,
    ACTIONS(963), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [11610] = 3,
    ACTIONS(967), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(969), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(416), 1,
      aux_sym_script_repeat1,
  [11620] = 2,
    ACTIONS(973), 1,
      aux_sym_NL_token1,
    ACTIONS(971), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [11628] = 2,
    ACTIONS(977), 1,
      aux_sym_NL_token1,
    ACTIONS(975), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [11636] = 3,
    ACTIONS(979), 1,
      aux_sym_WS_token1,
    ACTIONS(981), 1,
      aux_sym_NL_token1,
    STATE(415), 1,
      aux_sym_target_url_repeat1,
  [11646] = 3,
    ACTIONS(984), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(986), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(418), 1,
      aux_sym_script_repeat1,
  [11656] = 3,
    ACTIONS(988), 1,
      aux_sym_WS_token1,
    ACTIONS(990), 1,
      aux_sym_NL_token1,
    STATE(415), 1,
      aux_sym_target_url_repeat1,
  [11666] = 3,
    ACTIONS(517), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(993), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(418), 1,
      aux_sym_script_repeat1,
  [11676] = 2,
    ACTIONS(998), 1,
      aux_sym_NL_token1,
    ACTIONS(996), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [11684] = 2,
    ACTIONS(1002), 1,
      aux_sym_NL_token1,
    ACTIONS(1000), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [11692] = 2,
    ACTIONS(1004), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(116), 1,
      aux_sym_script_repeat1,
  [11699] = 2,
    ACTIONS(1006), 1,
      aux_sym_WS_token1,
    ACTIONS(1008), 1,
      anon_sym_AT2,
  [11706] = 2,
    ACTIONS(1010), 1,
      anon_sym_AT,
    ACTIONS(1012), 1,
      sym__not_comment,
  [11713] = 2,
    ACTIONS(1014), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(1016), 1,
      anon_sym_AT,
  [11720] = 2,
    ACTIONS(1018), 1,
      aux_sym_WS_token1,
    ACTIONS(1020), 1,
      sym_identifier,
  [11727] = 2,
    ACTIONS(1022), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(1024), 1,
      anon_sym_AT,
  [11734] = 2,
    ACTIONS(1026), 1,
      aux_sym_WS_token1,
    ACTIONS(1028), 1,
      anon_sym_COLON,
  [11741] = 2,
    ACTIONS(1030), 1,
      aux_sym_WS_token1,
    ACTIONS(1032), 1,
      aux_sym_NL_token1,
  [11748] = 2,
    ACTIONS(1034), 1,
      aux_sym_WS_token1,
    ACTIONS(1036), 1,
      anon_sym_RBRACE_RBRACE,
  [11755] = 2,
    ACTIONS(1038), 1,
      aux_sym_WS_token1,
    ACTIONS(1040), 1,
      anon_sym_RBRACE_RBRACE,
  [11762] = 2,
    ACTIONS(1042), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(109), 1,
      aux_sym_script_repeat1,
  [11769] = 2,
    ACTIONS(1044), 1,
      aux_sym_WS_token1,
    ACTIONS(1046), 1,
      anon_sym_RBRACE_RBRACE,
  [11776] = 1,
    ACTIONS(1048), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [11781] = 1,
    ACTIONS(1050), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [11786] = 2,
    ACTIONS(1052), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(120), 1,
      aux_sym_script_repeat1,
  [11793] = 2,
    ACTIONS(1054), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(1056), 1,
      anon_sym_AT,
  [11800] = 2,
    ACTIONS(1058), 1,
      aux_sym_WS_token1,
    ACTIONS(1060), 1,
      anon_sym_EQ,
  [11807] = 2,
    ACTIONS(1062), 1,
      aux_sym_WS_token1,
    ACTIONS(1064), 1,
      sym_identifier,
  [11814] = 2,
    ACTIONS(1066), 1,
      aux_sym_WS_token1,
    ACTIONS(1068), 1,
      anon_sym_RBRACE_RBRACE,
  [11821] = 2,
    ACTIONS(1070), 1,
      aux_sym_WS_token1,
    ACTIONS(1072), 1,
      aux_sym_NL_token1,
  [11828] = 1,
    ACTIONS(1074), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [11833] = 1,
    ACTIONS(1076), 1,
      sym_http_version,
  [11837] = 1,
    ACTIONS(1078), 1,
      aux_sym_NL_token1,
  [11841] = 1,
    ACTIONS(1080), 1,
      aux_sym_NL_token1,
  [11845] = 1,
    ACTIONS(1082), 1,
      aux_sym_NL_token1,
  [11849] = 1,
    ACTIONS(1084), 1,
      aux_sym_WS_token1,
  [11853] = 1,
    ACTIONS(1086), 1,
      aux_sym_NL_token1,
  [11857] = 1,
    ACTIONS(1088), 1,
      aux_sym_NL_token1,
  [11861] = 1,
    ACTIONS(1090), 1,
      anon_sym_COLON,
  [11865] = 1,
    ACTIONS(1012), 1,
      sym__not_comment,
  [11869] = 1,
    ACTIONS(1092), 1,
      sym_identifier,
  [11873] = 1,
    ACTIONS(1094), 1,
      aux_sym_NL_token1,
  [11877] = 1,
    ACTIONS(1096), 1,
      aux_sym_NL_token1,
  [11881] = 1,
    ACTIONS(1098), 1,
      aux_sym_NL_token1,
  [11885] = 1,
    ACTIONS(1100), 1,
      aux_sym_NL_token1,
  [11889] = 1,
    ACTIONS(1102), 1,
      aux_sym_NL_token1,
  [11893] = 1,
    ACTIONS(1104), 1,
      aux_sym__blank_line_token1,
  [11897] = 1,
    ACTIONS(1106), 1,
      aux_sym_NL_token1,
  [11901] = 1,
    ACTIONS(1108), 1,
      sym_status_text,
  [11905] = 1,
    ACTIONS(1110), 1,
      aux_sym_NL_token1,
  [11909] = 1,
    ACTIONS(1112), 1,
      aux_sym_LINE_TAIL_token1,
  [11913] = 1,
    ACTIONS(1114), 1,
      aux_sym_WS_token1,
  [11917] = 1,
    ACTIONS(1116), 1,
      aux_sym_NL_token1,
  [11921] = 1,
    ACTIONS(1118), 1,
      aux_sym_WS_token1,
  [11925] = 1,
    ACTIONS(1120), 1,
      sym_identifier,
  [11929] = 1,
    ACTIONS(1122), 1,
      sym_status_code,
  [11933] = 1,
    ACTIONS(1124), 1,
      aux_sym_NL_token1,
  [11937] = 1,
    ACTIONS(1126), 1,
      ts_builtin_sym_end,
  [11941] = 1,
    ACTIONS(1128), 1,
      sym_identifier,
  [11945] = 1,
    ACTIONS(1130), 1,
      aux_sym_WS_token1,
  [11949] = 1,
    ACTIONS(1132), 1,
      anon_sym_RBRACE_RBRACE,
  [11953] = 1,
    ACTIONS(1134), 1,
      aux_sym_WS_token1,
  [11957] = 1,
    ACTIONS(1136), 1,
      aux_sym_NL_token1,
  [11961] = 1,
    ACTIONS(1138), 1,
      aux_sym__blank_line_token1,
  [11965] = 1,
    ACTIONS(1140), 1,
      aux_sym_NL_token1,
  [11969] = 1,
    ACTIONS(1142), 1,
      sym_identifier,
  [11973] = 1,
    ACTIONS(1144), 1,
      aux_sym_WS_token1,
  [11977] = 1,
    ACTIONS(1146), 1,
      anon_sym_RBRACE_RBRACE,
  [11981] = 1,
    ACTIONS(1148), 1,
      aux_sym_NL_token1,
  [11985] = 1,
    ACTIONS(1150), 1,
      anon_sym_RBRACE_RBRACE,
  [11989] = 1,
    ACTIONS(1152), 1,
      aux_sym_NL_token1,
  [11993] = 1,
    ACTIONS(1154), 1,
      aux_sym_NL_token1,
  [11997] = 1,
    ACTIONS(1156), 1,
      aux_sym_NL_token1,
  [12001] = 1,
    ACTIONS(1158), 1,
      aux_sym_NL_token1,
  [12005] = 1,
    ACTIONS(1160), 1,
      aux_sym_NL_token1,
  [12009] = 1,
    ACTIONS(1162), 1,
      aux_sym__blank_line_token1,
  [12013] = 1,
    ACTIONS(1164), 1,
      sym_identifier,
  [12017] = 1,
    ACTIONS(1166), 1,
      anon_sym_EQ,
  [12021] = 1,
    ACTIONS(1168), 1,
      aux_sym_NL_token1,
  [12025] = 1,
    ACTIONS(1170), 1,
      aux_sym_NL_token1,
  [12029] = 1,
    ACTIONS(1172), 1,
      aux_sym_NL_token1,
  [12033] = 1,
    ACTIONS(1174), 1,
      sym_identifier,
  [12037] = 1,
    ACTIONS(1176), 1,
      sym_identifier,
  [12041] = 1,
    ACTIONS(1178), 1,
      sym_identifier,
  [12045] = 1,
    ACTIONS(1180), 1,
      aux_sym_NL_token1,
  [12049] = 1,
    ACTIONS(1182), 1,
      anon_sym_RBRACE_RBRACE,
  [12053] = 1,
    ACTIONS(1184), 1,
      aux_sym_NL_token1,
  [12057] = 1,
    ACTIONS(1186), 1,
      anon_sym_AT,
  [12061] = 1,
    ACTIONS(1188), 1,
      sym_identifier,
  [12065] = 1,
    ACTIONS(1190), 1,
      aux_sym_WS_token1,
  [12069] = 1,
    ACTIONS(1192), 1,
      sym_http_version,
  [12073] = 1,
    ACTIONS(1010), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 226,
  [SMALL_STATE(6)] = 298,
  [SMALL_STATE(7)] = 380,
  [SMALL_STATE(8)] = 452,
  [SMALL_STATE(9)] = 524,
  [SMALL_STATE(10)] = 606,
  [SMALL_STATE(11)] = 678,
  [SMALL_STATE(12)] = 750,
  [SMALL_STATE(13)] = 822,
  [SMALL_STATE(14)] = 904,
  [SMALL_STATE(15)] = 986,
  [SMALL_STATE(16)] = 1068,
  [SMALL_STATE(17)] = 1150,
  [SMALL_STATE(18)] = 1232,
  [SMALL_STATE(19)] = 1314,
  [SMALL_STATE(20)] = 1396,
  [SMALL_STATE(21)] = 1478,
  [SMALL_STATE(22)] = 1550,
  [SMALL_STATE(23)] = 1632,
  [SMALL_STATE(24)] = 1704,
  [SMALL_STATE(25)] = 1786,
  [SMALL_STATE(26)] = 1858,
  [SMALL_STATE(27)] = 1940,
  [SMALL_STATE(28)] = 2022,
  [SMALL_STATE(29)] = 2104,
  [SMALL_STATE(30)] = 2176,
  [SMALL_STATE(31)] = 2240,
  [SMALL_STATE(32)] = 2314,
  [SMALL_STATE(33)] = 2388,
  [SMALL_STATE(34)] = 2452,
  [SMALL_STATE(35)] = 2526,
  [SMALL_STATE(36)] = 2600,
  [SMALL_STATE(37)] = 2674,
  [SMALL_STATE(38)] = 2738,
  [SMALL_STATE(39)] = 2802,
  [SMALL_STATE(40)] = 2876,
  [SMALL_STATE(41)] = 2950,
  [SMALL_STATE(42)] = 3024,
  [SMALL_STATE(43)] = 3098,
  [SMALL_STATE(44)] = 3162,
  [SMALL_STATE(45)] = 3236,
  [SMALL_STATE(46)] = 3310,
  [SMALL_STATE(47)] = 3384,
  [SMALL_STATE(48)] = 3448,
  [SMALL_STATE(49)] = 3512,
  [SMALL_STATE(50)] = 3586,
  [SMALL_STATE(51)] = 3650,
  [SMALL_STATE(52)] = 3724,
  [SMALL_STATE(53)] = 3798,
  [SMALL_STATE(54)] = 3872,
  [SMALL_STATE(55)] = 3936,
  [SMALL_STATE(56)] = 4000,
  [SMALL_STATE(57)] = 4064,
  [SMALL_STATE(58)] = 4128,
  [SMALL_STATE(59)] = 4192,
  [SMALL_STATE(60)] = 4256,
  [SMALL_STATE(61)] = 4308,
  [SMALL_STATE(62)] = 4360,
  [SMALL_STATE(63)] = 4412,
  [SMALL_STATE(64)] = 4464,
  [SMALL_STATE(65)] = 4516,
  [SMALL_STATE(66)] = 4568,
  [SMALL_STATE(67)] = 4620,
  [SMALL_STATE(68)] = 4672,
  [SMALL_STATE(69)] = 4727,
  [SMALL_STATE(70)] = 4762,
  [SMALL_STATE(71)] = 4794,
  [SMALL_STATE(72)] = 4843,
  [SMALL_STATE(73)] = 4884,
  [SMALL_STATE(74)] = 4925,
  [SMALL_STATE(75)] = 4966,
  [SMALL_STATE(76)] = 4990,
  [SMALL_STATE(77)] = 5014,
  [SMALL_STATE(78)] = 5038,
  [SMALL_STATE(79)] = 5062,
  [SMALL_STATE(80)] = 5097,
  [SMALL_STATE(81)] = 5132,
  [SMALL_STATE(82)] = 5167,
  [SMALL_STATE(83)] = 5202,
  [SMALL_STATE(84)] = 5237,
  [SMALL_STATE(85)] = 5272,
  [SMALL_STATE(86)] = 5307,
  [SMALL_STATE(87)] = 5342,
  [SMALL_STATE(88)] = 5377,
  [SMALL_STATE(89)] = 5412,
  [SMALL_STATE(90)] = 5447,
  [SMALL_STATE(91)] = 5482,
  [SMALL_STATE(92)] = 5513,
  [SMALL_STATE(93)] = 5548,
  [SMALL_STATE(94)] = 5583,
  [SMALL_STATE(95)] = 5618,
  [SMALL_STATE(96)] = 5653,
  [SMALL_STATE(97)] = 5688,
  [SMALL_STATE(98)] = 5723,
  [SMALL_STATE(99)] = 5758,
  [SMALL_STATE(100)] = 5793,
  [SMALL_STATE(101)] = 5828,
  [SMALL_STATE(102)] = 5863,
  [SMALL_STATE(103)] = 5898,
  [SMALL_STATE(104)] = 5933,
  [SMALL_STATE(105)] = 5967,
  [SMALL_STATE(106)] = 6001,
  [SMALL_STATE(107)] = 6035,
  [SMALL_STATE(108)] = 6066,
  [SMALL_STATE(109)] = 6097,
  [SMALL_STATE(110)] = 6122,
  [SMALL_STATE(111)] = 6147,
  [SMALL_STATE(112)] = 6174,
  [SMALL_STATE(113)] = 6194,
  [SMALL_STATE(114)] = 6214,
  [SMALL_STATE(115)] = 6238,
  [SMALL_STATE(116)] = 6262,
  [SMALL_STATE(117)] = 6286,
  [SMALL_STATE(118)] = 6306,
  [SMALL_STATE(119)] = 6326,
  [SMALL_STATE(120)] = 6346,
  [SMALL_STATE(121)] = 6370,
  [SMALL_STATE(122)] = 6390,
  [SMALL_STATE(123)] = 6414,
  [SMALL_STATE(124)] = 6434,
  [SMALL_STATE(125)] = 6458,
  [SMALL_STATE(126)] = 6478,
  [SMALL_STATE(127)] = 6498,
  [SMALL_STATE(128)] = 6518,
  [SMALL_STATE(129)] = 6542,
  [SMALL_STATE(130)] = 6561,
  [SMALL_STATE(131)] = 6580,
  [SMALL_STATE(132)] = 6599,
  [SMALL_STATE(133)] = 6618,
  [SMALL_STATE(134)] = 6637,
  [SMALL_STATE(135)] = 6656,
  [SMALL_STATE(136)] = 6675,
  [SMALL_STATE(137)] = 6694,
  [SMALL_STATE(138)] = 6713,
  [SMALL_STATE(139)] = 6732,
  [SMALL_STATE(140)] = 6751,
  [SMALL_STATE(141)] = 6770,
  [SMALL_STATE(142)] = 6788,
  [SMALL_STATE(143)] = 6806,
  [SMALL_STATE(144)] = 6824,
  [SMALL_STATE(145)] = 6842,
  [SMALL_STATE(146)] = 6860,
  [SMALL_STATE(147)] = 6878,
  [SMALL_STATE(148)] = 6896,
  [SMALL_STATE(149)] = 6914,
  [SMALL_STATE(150)] = 6932,
  [SMALL_STATE(151)] = 6950,
  [SMALL_STATE(152)] = 6968,
  [SMALL_STATE(153)] = 6986,
  [SMALL_STATE(154)] = 7004,
  [SMALL_STATE(155)] = 7022,
  [SMALL_STATE(156)] = 7040,
  [SMALL_STATE(157)] = 7058,
  [SMALL_STATE(158)] = 7076,
  [SMALL_STATE(159)] = 7094,
  [SMALL_STATE(160)] = 7112,
  [SMALL_STATE(161)] = 7130,
  [SMALL_STATE(162)] = 7148,
  [SMALL_STATE(163)] = 7166,
  [SMALL_STATE(164)] = 7184,
  [SMALL_STATE(165)] = 7202,
  [SMALL_STATE(166)] = 7220,
  [SMALL_STATE(167)] = 7238,
  [SMALL_STATE(168)] = 7256,
  [SMALL_STATE(169)] = 7274,
  [SMALL_STATE(170)] = 7292,
  [SMALL_STATE(171)] = 7310,
  [SMALL_STATE(172)] = 7328,
  [SMALL_STATE(173)] = 7346,
  [SMALL_STATE(174)] = 7364,
  [SMALL_STATE(175)] = 7382,
  [SMALL_STATE(176)] = 7400,
  [SMALL_STATE(177)] = 7418,
  [SMALL_STATE(178)] = 7436,
  [SMALL_STATE(179)] = 7454,
  [SMALL_STATE(180)] = 7472,
  [SMALL_STATE(181)] = 7490,
  [SMALL_STATE(182)] = 7508,
  [SMALL_STATE(183)] = 7526,
  [SMALL_STATE(184)] = 7544,
  [SMALL_STATE(185)] = 7562,
  [SMALL_STATE(186)] = 7580,
  [SMALL_STATE(187)] = 7598,
  [SMALL_STATE(188)] = 7616,
  [SMALL_STATE(189)] = 7634,
  [SMALL_STATE(190)] = 7652,
  [SMALL_STATE(191)] = 7670,
  [SMALL_STATE(192)] = 7688,
  [SMALL_STATE(193)] = 7706,
  [SMALL_STATE(194)] = 7724,
  [SMALL_STATE(195)] = 7742,
  [SMALL_STATE(196)] = 7760,
  [SMALL_STATE(197)] = 7778,
  [SMALL_STATE(198)] = 7796,
  [SMALL_STATE(199)] = 7814,
  [SMALL_STATE(200)] = 7832,
  [SMALL_STATE(201)] = 7850,
  [SMALL_STATE(202)] = 7868,
  [SMALL_STATE(203)] = 7886,
  [SMALL_STATE(204)] = 7904,
  [SMALL_STATE(205)] = 7922,
  [SMALL_STATE(206)] = 7940,
  [SMALL_STATE(207)] = 7958,
  [SMALL_STATE(208)] = 7976,
  [SMALL_STATE(209)] = 7994,
  [SMALL_STATE(210)] = 8012,
  [SMALL_STATE(211)] = 8030,
  [SMALL_STATE(212)] = 8048,
  [SMALL_STATE(213)] = 8066,
  [SMALL_STATE(214)] = 8084,
  [SMALL_STATE(215)] = 8102,
  [SMALL_STATE(216)] = 8120,
  [SMALL_STATE(217)] = 8138,
  [SMALL_STATE(218)] = 8156,
  [SMALL_STATE(219)] = 8174,
  [SMALL_STATE(220)] = 8192,
  [SMALL_STATE(221)] = 8210,
  [SMALL_STATE(222)] = 8228,
  [SMALL_STATE(223)] = 8246,
  [SMALL_STATE(224)] = 8264,
  [SMALL_STATE(225)] = 8282,
  [SMALL_STATE(226)] = 8300,
  [SMALL_STATE(227)] = 8318,
  [SMALL_STATE(228)] = 8336,
  [SMALL_STATE(229)] = 8354,
  [SMALL_STATE(230)] = 8372,
  [SMALL_STATE(231)] = 8390,
  [SMALL_STATE(232)] = 8408,
  [SMALL_STATE(233)] = 8426,
  [SMALL_STATE(234)] = 8444,
  [SMALL_STATE(235)] = 8462,
  [SMALL_STATE(236)] = 8480,
  [SMALL_STATE(237)] = 8498,
  [SMALL_STATE(238)] = 8516,
  [SMALL_STATE(239)] = 8534,
  [SMALL_STATE(240)] = 8552,
  [SMALL_STATE(241)] = 8570,
  [SMALL_STATE(242)] = 8588,
  [SMALL_STATE(243)] = 8606,
  [SMALL_STATE(244)] = 8624,
  [SMALL_STATE(245)] = 8642,
  [SMALL_STATE(246)] = 8660,
  [SMALL_STATE(247)] = 8678,
  [SMALL_STATE(248)] = 8696,
  [SMALL_STATE(249)] = 8714,
  [SMALL_STATE(250)] = 8732,
  [SMALL_STATE(251)] = 8750,
  [SMALL_STATE(252)] = 8768,
  [SMALL_STATE(253)] = 8786,
  [SMALL_STATE(254)] = 8804,
  [SMALL_STATE(255)] = 8822,
  [SMALL_STATE(256)] = 8840,
  [SMALL_STATE(257)] = 8858,
  [SMALL_STATE(258)] = 8876,
  [SMALL_STATE(259)] = 8894,
  [SMALL_STATE(260)] = 8912,
  [SMALL_STATE(261)] = 8930,
  [SMALL_STATE(262)] = 8948,
  [SMALL_STATE(263)] = 8966,
  [SMALL_STATE(264)] = 8984,
  [SMALL_STATE(265)] = 9002,
  [SMALL_STATE(266)] = 9020,
  [SMALL_STATE(267)] = 9038,
  [SMALL_STATE(268)] = 9056,
  [SMALL_STATE(269)] = 9074,
  [SMALL_STATE(270)] = 9092,
  [SMALL_STATE(271)] = 9110,
  [SMALL_STATE(272)] = 9128,
  [SMALL_STATE(273)] = 9146,
  [SMALL_STATE(274)] = 9164,
  [SMALL_STATE(275)] = 9182,
  [SMALL_STATE(276)] = 9200,
  [SMALL_STATE(277)] = 9218,
  [SMALL_STATE(278)] = 9236,
  [SMALL_STATE(279)] = 9254,
  [SMALL_STATE(280)] = 9272,
  [SMALL_STATE(281)] = 9290,
  [SMALL_STATE(282)] = 9308,
  [SMALL_STATE(283)] = 9326,
  [SMALL_STATE(284)] = 9344,
  [SMALL_STATE(285)] = 9362,
  [SMALL_STATE(286)] = 9380,
  [SMALL_STATE(287)] = 9398,
  [SMALL_STATE(288)] = 9416,
  [SMALL_STATE(289)] = 9434,
  [SMALL_STATE(290)] = 9452,
  [SMALL_STATE(291)] = 9470,
  [SMALL_STATE(292)] = 9488,
  [SMALL_STATE(293)] = 9506,
  [SMALL_STATE(294)] = 9524,
  [SMALL_STATE(295)] = 9542,
  [SMALL_STATE(296)] = 9560,
  [SMALL_STATE(297)] = 9578,
  [SMALL_STATE(298)] = 9596,
  [SMALL_STATE(299)] = 9614,
  [SMALL_STATE(300)] = 9632,
  [SMALL_STATE(301)] = 9650,
  [SMALL_STATE(302)] = 9668,
  [SMALL_STATE(303)] = 9686,
  [SMALL_STATE(304)] = 9704,
  [SMALL_STATE(305)] = 9722,
  [SMALL_STATE(306)] = 9740,
  [SMALL_STATE(307)] = 9758,
  [SMALL_STATE(308)] = 9776,
  [SMALL_STATE(309)] = 9794,
  [SMALL_STATE(310)] = 9812,
  [SMALL_STATE(311)] = 9830,
  [SMALL_STATE(312)] = 9848,
  [SMALL_STATE(313)] = 9866,
  [SMALL_STATE(314)] = 9884,
  [SMALL_STATE(315)] = 9902,
  [SMALL_STATE(316)] = 9920,
  [SMALL_STATE(317)] = 9938,
  [SMALL_STATE(318)] = 9956,
  [SMALL_STATE(319)] = 9974,
  [SMALL_STATE(320)] = 9992,
  [SMALL_STATE(321)] = 10010,
  [SMALL_STATE(322)] = 10028,
  [SMALL_STATE(323)] = 10046,
  [SMALL_STATE(324)] = 10064,
  [SMALL_STATE(325)] = 10082,
  [SMALL_STATE(326)] = 10100,
  [SMALL_STATE(327)] = 10118,
  [SMALL_STATE(328)] = 10136,
  [SMALL_STATE(329)] = 10154,
  [SMALL_STATE(330)] = 10172,
  [SMALL_STATE(331)] = 10190,
  [SMALL_STATE(332)] = 10208,
  [SMALL_STATE(333)] = 10226,
  [SMALL_STATE(334)] = 10244,
  [SMALL_STATE(335)] = 10262,
  [SMALL_STATE(336)] = 10280,
  [SMALL_STATE(337)] = 10298,
  [SMALL_STATE(338)] = 10316,
  [SMALL_STATE(339)] = 10334,
  [SMALL_STATE(340)] = 10352,
  [SMALL_STATE(341)] = 10370,
  [SMALL_STATE(342)] = 10388,
  [SMALL_STATE(343)] = 10406,
  [SMALL_STATE(344)] = 10424,
  [SMALL_STATE(345)] = 10442,
  [SMALL_STATE(346)] = 10460,
  [SMALL_STATE(347)] = 10478,
  [SMALL_STATE(348)] = 10496,
  [SMALL_STATE(349)] = 10514,
  [SMALL_STATE(350)] = 10532,
  [SMALL_STATE(351)] = 10550,
  [SMALL_STATE(352)] = 10568,
  [SMALL_STATE(353)] = 10586,
  [SMALL_STATE(354)] = 10604,
  [SMALL_STATE(355)] = 10621,
  [SMALL_STATE(356)] = 10638,
  [SMALL_STATE(357)] = 10655,
  [SMALL_STATE(358)] = 10672,
  [SMALL_STATE(359)] = 10689,
  [SMALL_STATE(360)] = 10706,
  [SMALL_STATE(361)] = 10723,
  [SMALL_STATE(362)] = 10738,
  [SMALL_STATE(363)] = 10753,
  [SMALL_STATE(364)] = 10768,
  [SMALL_STATE(365)] = 10783,
  [SMALL_STATE(366)] = 10798,
  [SMALL_STATE(367)] = 10813,
  [SMALL_STATE(368)] = 10828,
  [SMALL_STATE(369)] = 10843,
  [SMALL_STATE(370)] = 10858,
  [SMALL_STATE(371)] = 10882,
  [SMALL_STATE(372)] = 10904,
  [SMALL_STATE(373)] = 10928,
  [SMALL_STATE(374)] = 10952,
  [SMALL_STATE(375)] = 10974,
  [SMALL_STATE(376)] = 10995,
  [SMALL_STATE(377)] = 11016,
  [SMALL_STATE(378)] = 11037,
  [SMALL_STATE(379)] = 11058,
  [SMALL_STATE(380)] = 11079,
  [SMALL_STATE(381)] = 11102,
  [SMALL_STATE(382)] = 11123,
  [SMALL_STATE(383)] = 11144,
  [SMALL_STATE(384)] = 11165,
  [SMALL_STATE(385)] = 11186,
  [SMALL_STATE(386)] = 11207,
  [SMALL_STATE(387)] = 11228,
  [SMALL_STATE(388)] = 11249,
  [SMALL_STATE(389)] = 11267,
  [SMALL_STATE(390)] = 11287,
  [SMALL_STATE(391)] = 11305,
  [SMALL_STATE(392)] = 11323,
  [SMALL_STATE(393)] = 11341,
  [SMALL_STATE(394)] = 11359,
  [SMALL_STATE(395)] = 11379,
  [SMALL_STATE(396)] = 11397,
  [SMALL_STATE(397)] = 11415,
  [SMALL_STATE(398)] = 11433,
  [SMALL_STATE(399)] = 11451,
  [SMALL_STATE(400)] = 11469,
  [SMALL_STATE(401)] = 11487,
  [SMALL_STATE(402)] = 11498,
  [SMALL_STATE(403)] = 11515,
  [SMALL_STATE(404)] = 11526,
  [SMALL_STATE(405)] = 11537,
  [SMALL_STATE(406)] = 11548,
  [SMALL_STATE(407)] = 11558,
  [SMALL_STATE(408)] = 11568,
  [SMALL_STATE(409)] = 11582,
  [SMALL_STATE(410)] = 11592,
  [SMALL_STATE(411)] = 11602,
  [SMALL_STATE(412)] = 11610,
  [SMALL_STATE(413)] = 11620,
  [SMALL_STATE(414)] = 11628,
  [SMALL_STATE(415)] = 11636,
  [SMALL_STATE(416)] = 11646,
  [SMALL_STATE(417)] = 11656,
  [SMALL_STATE(418)] = 11666,
  [SMALL_STATE(419)] = 11676,
  [SMALL_STATE(420)] = 11684,
  [SMALL_STATE(421)] = 11692,
  [SMALL_STATE(422)] = 11699,
  [SMALL_STATE(423)] = 11706,
  [SMALL_STATE(424)] = 11713,
  [SMALL_STATE(425)] = 11720,
  [SMALL_STATE(426)] = 11727,
  [SMALL_STATE(427)] = 11734,
  [SMALL_STATE(428)] = 11741,
  [SMALL_STATE(429)] = 11748,
  [SMALL_STATE(430)] = 11755,
  [SMALL_STATE(431)] = 11762,
  [SMALL_STATE(432)] = 11769,
  [SMALL_STATE(433)] = 11776,
  [SMALL_STATE(434)] = 11781,
  [SMALL_STATE(435)] = 11786,
  [SMALL_STATE(436)] = 11793,
  [SMALL_STATE(437)] = 11800,
  [SMALL_STATE(438)] = 11807,
  [SMALL_STATE(439)] = 11814,
  [SMALL_STATE(440)] = 11821,
  [SMALL_STATE(441)] = 11828,
  [SMALL_STATE(442)] = 11833,
  [SMALL_STATE(443)] = 11837,
  [SMALL_STATE(444)] = 11841,
  [SMALL_STATE(445)] = 11845,
  [SMALL_STATE(446)] = 11849,
  [SMALL_STATE(447)] = 11853,
  [SMALL_STATE(448)] = 11857,
  [SMALL_STATE(449)] = 11861,
  [SMALL_STATE(450)] = 11865,
  [SMALL_STATE(451)] = 11869,
  [SMALL_STATE(452)] = 11873,
  [SMALL_STATE(453)] = 11877,
  [SMALL_STATE(454)] = 11881,
  [SMALL_STATE(455)] = 11885,
  [SMALL_STATE(456)] = 11889,
  [SMALL_STATE(457)] = 11893,
  [SMALL_STATE(458)] = 11897,
  [SMALL_STATE(459)] = 11901,
  [SMALL_STATE(460)] = 11905,
  [SMALL_STATE(461)] = 11909,
  [SMALL_STATE(462)] = 11913,
  [SMALL_STATE(463)] = 11917,
  [SMALL_STATE(464)] = 11921,
  [SMALL_STATE(465)] = 11925,
  [SMALL_STATE(466)] = 11929,
  [SMALL_STATE(467)] = 11933,
  [SMALL_STATE(468)] = 11937,
  [SMALL_STATE(469)] = 11941,
  [SMALL_STATE(470)] = 11945,
  [SMALL_STATE(471)] = 11949,
  [SMALL_STATE(472)] = 11953,
  [SMALL_STATE(473)] = 11957,
  [SMALL_STATE(474)] = 11961,
  [SMALL_STATE(475)] = 11965,
  [SMALL_STATE(476)] = 11969,
  [SMALL_STATE(477)] = 11973,
  [SMALL_STATE(478)] = 11977,
  [SMALL_STATE(479)] = 11981,
  [SMALL_STATE(480)] = 11985,
  [SMALL_STATE(481)] = 11989,
  [SMALL_STATE(482)] = 11993,
  [SMALL_STATE(483)] = 11997,
  [SMALL_STATE(484)] = 12001,
  [SMALL_STATE(485)] = 12005,
  [SMALL_STATE(486)] = 12009,
  [SMALL_STATE(487)] = 12013,
  [SMALL_STATE(488)] = 12017,
  [SMALL_STATE(489)] = 12021,
  [SMALL_STATE(490)] = 12025,
  [SMALL_STATE(491)] = 12029,
  [SMALL_STATE(492)] = 12033,
  [SMALL_STATE(493)] = 12037,
  [SMALL_STATE(494)] = 12041,
  [SMALL_STATE(495)] = 12045,
  [SMALL_STATE(496)] = 12049,
  [SMALL_STATE(497)] = 12053,
  [SMALL_STATE(498)] = 12057,
  [SMALL_STATE(499)] = 12061,
  [SMALL_STATE(500)] = 12065,
  [SMALL_STATE(501)] = 12069,
  [SMALL_STATE(502)] = 12073,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 18),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 18),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 4),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 12),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 12),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 35),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 35),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 12),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 12),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 10),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 10),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 16),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 16),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 23),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 23),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 10),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 10),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 12),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 12),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 28),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 28),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 13),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 13),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 48),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 48),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 37),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 37),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 21),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 21),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 42),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 42),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 24),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 24),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 10),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 10),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 23),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 23),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 60),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 60),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 8),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 8),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 23),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 23),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 28),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 28),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 35),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 35),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 37),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 37),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 42),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 42),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 48),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 48),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 23),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 23),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 21),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 21),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 60),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 60),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 12),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 12),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 13),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 13),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 8),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 8),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 24),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 24),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 10),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 10),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 16),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 16),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 18),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 18),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(424),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(424),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(373),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(472),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(470),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(469),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 10),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 10),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 12),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 12),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 23),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 23),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 0),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 0), SHIFT_REPEAT(502),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 0), SHIFT_REPEAT(502),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0), SHIFT_REPEAT(474),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0), SHIFT_REPEAT(70),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(486),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(422),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 6, 0, 27),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 6, 0, 27),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 4, 0, 11),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 4, 0, 11),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 7, 0, 40),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 7, 0, 40),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 13),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 13),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 16),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 16),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 48),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 48),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 37),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 37),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 28),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 28),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 24),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 24),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 35),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 35),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 18),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 18),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(426),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(426),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 60),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 60),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 42),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 42),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 21),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 21),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 8),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 8),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 2),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 2), SHIFT(498),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 2), SHIFT(498),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__section_content_repeat2, 2, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__section_content_repeat2, 2, 0, 0),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__section_content_repeat2, 2, 0, 0), SHIFT_REPEAT(498),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_content_repeat2, 2, 0, 0), SHIFT_REPEAT(498),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_content_repeat2, 2, 0, 0), SHIFT_REPEAT(500),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 2, 0, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 2, 0, 2),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 2, 0, 2), SHIFT(498),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 2, 0, 2), SHIFT(498),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(450),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(450),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 2, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(450),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(450),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14), SHIFT_REPEAT(427),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4, 0, 11),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4, 0, 11),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__section_content_repeat1, 2, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__section_content_repeat1, 2, 0, 0),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__section_content_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 7, 0, 40),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 7, 0, 40),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 2, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 2, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6, 0, 27),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6, 0, 27),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__section_content_repeat2, 1, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__section_content_repeat2, 1, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 19),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 19),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 19),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 19),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 19),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 19),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 56),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, 0, 56),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 30),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 30),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 1, 0, 7),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 1, 0, 7),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 44),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 44),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 65),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 65),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 53),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 53),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 22),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 22),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 12, 0, 76),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 12, 0, 76),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 20),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 20),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__external_body, 2, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__external_body, 2, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 73),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 73),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 75),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 75),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 74),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 74),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 25),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 25),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 72),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 72),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 1, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 29),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 29),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 15),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 15),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 31),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 31),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 71),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 71),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 32),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 32),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 33),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 33),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 70),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 70),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 3, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 3, 0, 0),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 68),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 68),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 36),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 36),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 69),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 69),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 38),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 38),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 41),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 41),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 43),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 43),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 67),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 67),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 45),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 45),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 46),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 46),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 66),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 66),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 47),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 47),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 49),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 49),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 62),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 62),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 50),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 50),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 51),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 51),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 52),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 52),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 54),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 54),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 64),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 64),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 63),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 63),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 55),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 55),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 57),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 57),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 59),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 59),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 61),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 61),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 5),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 5),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 2, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 2, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 1),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 1),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 2, 0, 3),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 2, 0, 3),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 3),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, 0, 3),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 4, 0, 9),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 4, 0, 9),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, 0, 39),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, 0, 39),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 26),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 26),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 17),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 17),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1, 0, 0),
  [873] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_target_url, 1, 0, 0), SHIFT(464),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [883] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [890] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(389),
  [910] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(389),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_url_line, 2, 0, 0),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(425),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [933] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [938] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 6),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 6),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 11),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 11),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 11),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 11),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 6),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 6),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0),
  [981] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0), SHIFT_REPEAT(464),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0),
  [990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0), SHIFT(464),
  [993] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(418),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, 0, 34),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, 0, 58),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 4, 0, 0),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 3, 0, 0),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1126] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
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
