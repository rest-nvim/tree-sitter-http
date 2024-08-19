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
  [356] = 78,
  [357] = 113,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 117,
  [362] = 362,
  [363] = 363,
  [364] = 364,
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
      if (eof) ADVANCE(731);
      ADVANCE_MAP(
        0, 775,
        '\n', 800,
        '\r', 801,
        '#', 807,
        '-', 789,
        '/', 790,
        ':', 823,
        '<', 844,
        '=', 812,
        '>', 830,
        '@', 811,
        'C', 768,
        'D', 757,
        'G', 758,
        'H', 763,
        'L', 766,
        'O', 771,
        'P', 756,
        'T', 772,
        'W', 759,
        '[', 793,
        '\\', 795,
        '_', 794,
        '{', 788,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(775);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) ADVANCE(775);
      if (lookahead == '\n') ADVANCE(800);
      if (lookahead == '\r') ADVANCE(801);
      if (lookahead == '\\') ADVANCE(795);
      if (lookahead == '{') ADVANCE(791);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(799);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(775);
      END_STATE();
    case 2:
      if ((!eof && lookahead == 00)) ADVANCE(775);
      if (lookahead == '\n') ADVANCE(800);
      if (lookahead == '\r') ADVANCE(801);
      if (lookahead == '{') ADVANCE(791);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(813);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(775);
      END_STATE();
    case 3:
      if ((!eof && lookahead == 00)) ADVANCE(775);
      if (lookahead == '\n') ADVANCE(800);
      if (lookahead == '\r') ADVANCE(801);
      if (lookahead == '{') ADVANCE(791);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(799);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(775);
      END_STATE();
    case 4:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == '#') ADVANCE(814);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 5:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'A') ADVANCE(29);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 6:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'A') ADVANCE(13);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 7:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'A') ADVANCE(12);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 8:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'B') ADVANCE(33);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 9:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 10:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'C') ADVANCE(21);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 11:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'C') ADVANCE(18);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 12:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'C') ADVANCE(15);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 13:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'D') ADVANCE(817);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 14:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 15:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'E') ADVANCE(817);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 16:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'E') ADVANCE(9);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 17:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 18:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'H') ADVANCE(817);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 19:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'H') ADVANCE(30);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 20:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 21:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'K') ADVANCE(14);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 22:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'L') ADVANCE(17);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 23:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'L') ADVANCE(817);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 24:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 25:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'N') ADVANCE(16);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 26:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'N') ADVANCE(32);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 27:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 28:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'O') ADVANCE(10);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 29:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'P') ADVANCE(19);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 30:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'Q') ADVANCE(23);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 31:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 32:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'S') ADVANCE(817);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 33:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'S') ADVANCE(28);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 34:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'T') ADVANCE(817);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 35:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 36:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'T') ADVANCE(11);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 37:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 38:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 39:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 40:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 41:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 42:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 43:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 44:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 45:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 46:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'y') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 47:
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
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
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 49:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(848);
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
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 51:
      if ((!eof && lookahead == 00)) ADVANCE(841);
      if (lookahead == '\n') ADVANCE(839);
      if (lookahead == '\r') ADVANCE(840);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 52:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == '#') ADVANCE(814);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 53:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 54:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == '@') ADVANCE(811);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 55:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 56:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'A') ADVANCE(63);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 57:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'A') ADVANCE(62);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 58:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'B') ADVANCE(82);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 59:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 60:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 61:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'C') ADVANCE(84);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 62:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'C') ADVANCE(64);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 63:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'D') ADVANCE(818);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 64:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'E') ADVANCE(818);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 65:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 66:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'E') ADVANCE(61);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 67:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 68:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'H') ADVANCE(818);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 69:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'H') ADVANCE(80);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 70:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 71:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'K') ADVANCE(65);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 72:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'L') ADVANCE(818);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 73:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 74:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 75:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'N') ADVANCE(81);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 76:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'N') ADVANCE(66);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 77:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'O') ADVANCE(75);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 78:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'O') ADVANCE(59);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 79:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'P') ADVANCE(69);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 80:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'Q') ADVANCE(72);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 81:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'S') ADVANCE(818);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 82:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 83:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 84:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'T') ADVANCE(818);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 85:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'T') ADVANCE(70);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 86:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 87:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 88:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == '}') ADVANCE(832);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 89:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 90:
      ADVANCE_MAP(
        '\r', 801,
        ':', 823,
        '=', 812,
        '@', 811,
        'A', 286,
        'B', 238,
        'C', 523,
        'E', 704,
        'F', 239,
        'G', 240,
        'H', 230,
        'I', 146,
        'L', 336,
        'M', 330,
        'N', 337,
        'O', 185,
        'P', 241,
        'R', 249,
        'S', 327,
        'T', 331,
        'U', 209,
        'V', 245,
        '}', 715,
        0, 800,
        '\n', 800,
      );
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(717);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(799);
      END_STATE();
    case 91:
      if (lookahead == '\r') ADVANCE(890);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(889);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(799);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(798);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(887);
      END_STATE();
    case 92:
      if (lookahead == '\r') ADVANCE(849);
      if (lookahead == '@') ADVANCE(811);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(849);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == '\r') ADVANCE(849);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(93);
      END_STATE();
    case 94:
      if (lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 95:
      if (lookahead == ' ') ADVANCE(178);
      END_STATE();
    case 96:
      if (lookahead == ' ') ADVANCE(153);
      END_STATE();
    case 97:
      if (lookahead == ' ') ADVANCE(173);
      END_STATE();
    case 98:
      if (lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 99:
      if (lookahead == ' ') ADVANCE(212);
      END_STATE();
    case 100:
      if (lookahead == ' ') ADVANCE(181);
      END_STATE();
    case 101:
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 102:
      if (lookahead == ' ') ADVANCE(192);
      END_STATE();
    case 103:
      if (lookahead == ' ') ADVANCE(176);
      END_STATE();
    case 104:
      if (lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 105:
      if (lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 106:
      if (lookahead == ' ') ADVANCE(213);
      END_STATE();
    case 107:
      if (lookahead == ' ') ADVANCE(177);
      END_STATE();
    case 108:
      if (lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 109:
      if (lookahead == ' ') ADVANCE(206);
      END_STATE();
    case 110:
      if (lookahead == ' ') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(495);
      END_STATE();
    case 111:
      if (lookahead == ' ') ADVANCE(184);
      END_STATE();
    case 112:
      if (lookahead == ' ') ADVANCE(202);
      END_STATE();
    case 113:
      if (lookahead == ' ') ADVANCE(174);
      END_STATE();
    case 114:
      if (lookahead == ' ') ADVANCE(196);
      END_STATE();
    case 115:
      if (lookahead == ' ') ADVANCE(190);
      END_STATE();
    case 116:
      if (lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 117:
      if (lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 118:
      if (lookahead == ' ') ADVANCE(197);
      END_STATE();
    case 119:
      if (lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 120:
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 121:
      if (lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 122:
      if (lookahead == ' ') ADVANCE(172);
      END_STATE();
    case 123:
      if (lookahead == ' ') ADVANCE(162);
      END_STATE();
    case 124:
      if (lookahead == ' ') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 125:
      if (lookahead == ' ') ADVANCE(222);
      END_STATE();
    case 126:
      if (lookahead == ' ') ADVANCE(171);
      END_STATE();
    case 127:
      if (lookahead == ' ') ADVANCE(163);
      END_STATE();
    case 128:
      if (lookahead == ' ') ADVANCE(231);
      END_STATE();
    case 129:
      if (lookahead == ' ') ADVANCE(223);
      END_STATE();
    case 130:
      if (lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 131:
      if (lookahead == ' ') ADVANCE(229);
      END_STATE();
    case 132:
      if (lookahead == ' ') ADVANCE(664);
      END_STATE();
    case 133:
      if (lookahead == ' ') ADVANCE(214);
      END_STATE();
    case 134:
      if (lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 135:
      if (lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 136:
      if (lookahead == ' ') ADVANCE(219);
      END_STATE();
    case 137:
      if (lookahead == ' ') ADVANCE(156);
      END_STATE();
    case 138:
      if (lookahead == ' ') ADVANCE(211);
      END_STATE();
    case 139:
      if (lookahead == ' ') ADVANCE(215);
      END_STATE();
    case 140:
      if (lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 141:
      if (lookahead == ' ') ADVANCE(198);
      END_STATE();
    case 142:
      if (lookahead == ' ') ADVANCE(233);
      END_STATE();
    case 143:
      if (lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 144:
      if (lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 145:
      if (lookahead == '#') ADVANCE(814);
      END_STATE();
    case 146:
      if (lookahead == '\'') ADVANCE(482);
      if (lookahead == 'M') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(617);
      END_STATE();
    case 147:
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 148:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(477);
      END_STATE();
    case 149:
      if (lookahead == 'A') ADVANCE(203);
      END_STATE();
    case 150:
      if (lookahead == 'A') ADVANCE(164);
      END_STATE();
    case 151:
      if (lookahead == 'A') ADVANCE(161);
      END_STATE();
    case 152:
      if (lookahead == 'A') ADVANCE(691);
      END_STATE();
    case 153:
      if (lookahead == 'A') ADVANCE(303);
      if (lookahead == 'E') ADVANCE(706);
      if (lookahead == 'F') ADVANCE(526);
      if (lookahead == 'I') ADVANCE(484);
      if (lookahead == 'M') ADVANCE(550);
      END_STATE();
    case 154:
      if (lookahead == 'A') ADVANCE(689);
      END_STATE();
    case 155:
      if (lookahead == 'A') ADVANCE(465);
      END_STATE();
    case 156:
      if (lookahead == 'A') ADVANCE(468);
      END_STATE();
    case 157:
      if (lookahead == 'B') ADVANCE(218);
      END_STATE();
    case 158:
      if (lookahead == 'C') ADVANCE(224);
      END_STATE();
    case 159:
      if (lookahead == 'C') ADVANCE(186);
      END_STATE();
    case 160:
      if (lookahead == 'C') ADVANCE(179);
      END_STATE();
    case 161:
      if (lookahead == 'C') ADVANCE(168);
      END_STATE();
    case 162:
      if (lookahead == 'C') ADVANCE(530);
      END_STATE();
    case 163:
      if (lookahead == 'C') ADVANCE(415);
      END_STATE();
    case 164:
      if (lookahead == 'D') ADVANCE(816);
      END_STATE();
    case 165:
      if (lookahead == 'D') ADVANCE(386);
      END_STATE();
    case 166:
      if (lookahead == 'D') ADVANCE(374);
      END_STATE();
    case 167:
      if (lookahead == 'E') ADVANCE(224);
      END_STATE();
    case 168:
      if (lookahead == 'E') ADVANCE(816);
      END_STATE();
    case 169:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 170:
      if (lookahead == 'E') ADVANCE(228);
      END_STATE();
    case 171:
      if (lookahead == 'E') ADVANCE(601);
      END_STATE();
    case 172:
      if (lookahead == 'E') ADVANCE(504);
      END_STATE();
    case 173:
      if (lookahead == 'E') ADVANCE(253);
      if (lookahead == 'M') ADVANCE(255);
      END_STATE();
    case 174:
      if (lookahead == 'F') ADVANCE(436);
      END_STATE();
    case 175:
      if (lookahead == 'F') ADVANCE(276);
      END_STATE();
    case 176:
      if (lookahead == 'F') ADVANCE(276);
      if (lookahead == 'R') ADVANCE(376);
      END_STATE();
    case 177:
      if (lookahead == 'F') ADVANCE(556);
      END_STATE();
    case 178:
      if (lookahead == 'G') ADVANCE(277);
      if (lookahead == 'R') ADVANCE(328);
      END_STATE();
    case 179:
      if (lookahead == 'H') ADVANCE(816);
      END_STATE();
    case 180:
      if (lookahead == 'H') ADVANCE(208);
      END_STATE();
    case 181:
      if (lookahead == 'H') ADVANCE(384);
      if (lookahead == 'T') ADVANCE(442);
      END_STATE();
    case 182:
      if (lookahead == 'I') ADVANCE(200);
      END_STATE();
    case 183:
      if (lookahead == 'I') ADVANCE(128);
      END_STATE();
    case 184:
      if (lookahead == 'I') ADVANCE(494);
      END_STATE();
    case 185:
      if (lookahead == 'K') ADVANCE(822);
      END_STATE();
    case 186:
      if (lookahead == 'K') ADVANCE(167);
      END_STATE();
    case 187:
      if (lookahead == 'L') ADVANCE(170);
      END_STATE();
    case 188:
      if (lookahead == 'L') ADVANCE(816);
      END_STATE();
    case 189:
      if (lookahead == 'L') ADVANCE(349);
      END_STATE();
    case 190:
      if (lookahead == 'L') ADVANCE(259);
      END_STATE();
    case 191:
      if (lookahead == 'L') ADVANCE(539);
      END_STATE();
    case 192:
      if (lookahead == 'M') ADVANCE(385);
      END_STATE();
    case 193:
      if (lookahead == 'N') ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'N') ADVANCE(169);
      END_STATE();
    case 195:
      if (lookahead == 'N') ADVANCE(217);
      END_STATE();
    case 196:
      if (lookahead == 'N') ADVANCE(559);
      END_STATE();
    case 197:
      if (lookahead == 'N') ADVANCE(346);
      END_STATE();
    case 198:
      if (lookahead == 'N') ADVANCE(560);
      END_STATE();
    case 199:
      if (lookahead == 'N') ADVANCE(561);
      END_STATE();
    case 200:
      if (lookahead == 'O') ADVANCE(195);
      END_STATE();
    case 201:
      if (lookahead == 'O') ADVANCE(159);
      END_STATE();
    case 202:
      if (lookahead == 'O') ADVANCE(638);
      END_STATE();
    case 203:
      if (lookahead == 'P') ADVANCE(180);
      END_STATE();
    case 204:
      if (lookahead == 'P') ADVANCE(98);
      END_STATE();
    case 205:
      if (lookahead == 'P') ADVANCE(397);
      END_STATE();
    case 206:
      if (lookahead == 'P') ADVANCE(596);
      END_STATE();
    case 207:
      if (lookahead == 'P') ADVANCE(598);
      END_STATE();
    case 208:
      if (lookahead == 'Q') ADVANCE(188);
      END_STATE();
    case 209:
      if (lookahead == 'R') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead == 'p') ADVANCE(405);
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 210:
      if (lookahead == 'R') ADVANCE(328);
      END_STATE();
    case 211:
      if (lookahead == 'R') ADVANCE(396);
      END_STATE();
    case 212:
      if (lookahead == 'R') ADVANCE(376);
      END_STATE();
    case 213:
      if (lookahead == 'R') ADVANCE(364);
      END_STATE();
    case 214:
      if (lookahead == 'R') ADVANCE(392);
      END_STATE();
    case 215:
      if (lookahead == 'R') ADVANCE(395);
      END_STATE();
    case 216:
      if (lookahead == 'S') ADVANCE(224);
      END_STATE();
    case 217:
      if (lookahead == 'S') ADVANCE(816);
      END_STATE();
    case 218:
      if (lookahead == 'S') ADVANCE(201);
      END_STATE();
    case 219:
      if (lookahead == 'S') ADVANCE(673);
      END_STATE();
    case 220:
      if (lookahead == 'S') ADVANCE(359);
      END_STATE();
    case 221:
      if (lookahead == 'S') ADVANCE(647);
      END_STATE();
    case 222:
      if (lookahead == 'S') ADVANCE(272);
      END_STATE();
    case 223:
      if (lookahead == 'S') ADVANCE(694);
      END_STATE();
    case 224:
      if (lookahead == 'T') ADVANCE(816);
      END_STATE();
    case 225:
      if (lookahead == 'T') ADVANCE(182);
      END_STATE();
    case 226:
      if (lookahead == 'T') ADVANCE(160);
      END_STATE();
    case 227:
      if (lookahead == 'T') ADVANCE(204);
      END_STATE();
    case 228:
      if (lookahead == 'T') ADVANCE(168);
      END_STATE();
    case 229:
      if (lookahead == 'T') ADVANCE(711);
      END_STATE();
    case 230:
      if (lookahead == 'T') ADVANCE(227);
      END_STATE();
    case 231:
      if (lookahead == 'T') ADVANCE(548);
      END_STATE();
    case 232:
      if (lookahead == 'T') ADVANCE(442);
      END_STATE();
    case 233:
      if (lookahead == 'T') ADVANCE(555);
      END_STATE();
    case 234:
      if (lookahead == 'U') ADVANCE(621);
      END_STATE();
    case 235:
      if (lookahead == 'U') ADVANCE(501);
      END_STATE();
    case 236:
      if (lookahead == 'V') ADVANCE(352);
      END_STATE();
    case 237:
      if (lookahead == '\\') ADVANCE(795);
      if (lookahead == '{') ADVANCE(787);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(732);
      if ((!eof && set_contains(aux_sym_PUNCTUATION_token1_character_set_1, 485, lookahead))) ADVANCE(775);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(639);
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(589);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 242:
      if (lookahead == 'a') ADVANCE(688);
      if (lookahead == 'p') ADVANCE(591);
      if (lookahead == 's') ADVANCE(683);
      END_STATE();
    case 243:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 244:
      if (lookahead == 'a') ADVANCE(707);
      END_STATE();
    case 245:
      if (lookahead == 'a') ADVANCE(586);
      END_STATE();
    case 246:
      if (lookahead == 'a') ADVANCE(699);
      END_STATE();
    case 247:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 248:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 249:
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 250:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 251:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 252:
      if (lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 253:
      if (lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 254:
      if (lookahead == 'a') ADVANCE(613);
      END_STATE();
    case 255:
      if (lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 256:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 257:
      if (lookahead == 'a') ADVANCE(628);
      END_STATE();
    case 258:
      if (lookahead == 'a') ADVANCE(642);
      END_STATE();
    case 259:
      if (lookahead == 'a') ADVANCE(592);
      END_STATE();
    case 260:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 261:
      if (lookahead == 'a') ADVANCE(427);
      END_STATE();
    case 262:
      if (lookahead == 'a') ADVANCE(645);
      END_STATE();
    case 263:
      if (lookahead == 'a') ADVANCE(521);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(569);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(646);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(709);
      END_STATE();
    case 269:
      if (lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 270:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 271:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 272:
      if (lookahead == 'a') ADVANCE(652);
      END_STATE();
    case 273:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 274:
      if (lookahead == 'a') ADVANCE(655);
      END_STATE();
    case 275:
      if (lookahead == 'a') ADVANCE(662);
      END_STATE();
    case 276:
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 277:
      if (lookahead == 'a') ADVANCE(668);
      END_STATE();
    case 278:
      if (lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 279:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 280:
      if (lookahead == 'a') ADVANCE(679);
      END_STATE();
    case 281:
      if (lookahead == 'a') ADVANCE(680);
      END_STATE();
    case 282:
      if (lookahead == 'b') ADVANCE(423);
      END_STATE();
    case 283:
      if (lookahead == 'b') ADVANCE(463);
      END_STATE();
    case 284:
      if (lookahead == 'b') ADVANCE(478);
      END_STATE();
    case 285:
      if (lookahead == 'b') ADVANCE(479);
      END_STATE();
    case 286:
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 287:
      if (lookahead == 'c') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 288:
      if (lookahead == 'c') ADVANCE(707);
      END_STATE();
    case 289:
      if (lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 290:
      if (lookahead == 'c') ADVANCE(412);
      END_STATE();
    case 291:
      if (lookahead == 'c') ADVANCE(644);
      END_STATE();
    case 292:
      if (lookahead == 'c') ADVANCE(632);
      END_STATE();
    case 293:
      if (lookahead == 'c') ADVANCE(338);
      if (lookahead == 'x') ADVANCE(708);
      END_STATE();
    case 294:
      if (lookahead == 'c') ADVANCE(457);
      END_STATE();
    case 295:
      if (lookahead == 'c') ADVANCE(375);
      END_STATE();
    case 296:
      if (lookahead == 'c') ADVANCE(532);
      END_STATE();
    case 297:
      if (lookahead == 'c') ADVANCE(351);
      END_STATE();
    case 298:
      if (lookahead == 'c') ADVANCE(645);
      END_STATE();
    case 299:
      if (lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 300:
      if (lookahead == 'c') ADVANCE(531);
      END_STATE();
    case 301:
      if (lookahead == 'c') ADVANCE(379);
      END_STATE();
    case 302:
      if (lookahead == 'c') ADVANCE(675);
      END_STATE();
    case 303:
      if (lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 304:
      if (lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 305:
      if (lookahead == 'd') ADVANCE(822);
      END_STATE();
    case 306:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 307:
      if (lookahead == 'd') ADVANCE(438);
      END_STATE();
    case 308:
      if (lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 309:
      if (lookahead == 'd') ADVANCE(335);
      END_STATE();
    case 310:
      if (lookahead == 'd') ADVANCE(439);
      END_STATE();
    case 311:
      if (lookahead == 'd') ADVANCE(630);
      END_STATE();
    case 312:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 313:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 314:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 315:
      if (lookahead == 'd') ADVANCE(362);
      END_STATE();
    case 316:
      if (lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 317:
      if (lookahead == 'd') ADVANCE(710);
      END_STATE();
    case 318:
      if (lookahead == 'd') ADVANCE(455);
      END_STATE();
    case 319:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 320:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 321:
      if (lookahead == 'd') ADVANCE(441);
      END_STATE();
    case 322:
      if (lookahead == 'd') ADVANCE(448);
      END_STATE();
    case 323:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 324:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 325:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'w') ADVANCE(426);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead == 'i') ADVANCE(618);
      if (lookahead == 'o') ADVANCE(696);
      if (lookahead == 'u') ADVANCE(461);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 398:
      if (lookahead == 'f') ADVANCE(400);
      END_STATE();
    case 399:
      if (lookahead == 'f') ADVANCE(466);
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 400:
      if (lookahead == 'f') ADVANCE(424);
      END_STATE();
    case 401:
      if (lookahead == 'f') ADVANCE(432);
      END_STATE();
    case 402:
      if (lookahead == 'f') ADVANCE(563);
      END_STATE();
    case 403:
      if (lookahead == 'f') ADVANCE(433);
      END_STATE();
    case 404:
      if (lookahead == 'g') ADVANCE(822);
      END_STATE();
    case 405:
      if (lookahead == 'g') ADVANCE(609);
      END_STATE();
    case 406:
      if (lookahead == 'g') ADVANCE(326);
      END_STATE();
    case 407:
      if (lookahead == 'g') ADVANCE(635);
      END_STATE();
    case 408:
      if (lookahead == 'g') ADVANCE(558);
      END_STATE();
    case 409:
      if (lookahead == 'g') ADVANCE(358);
      END_STATE();
    case 410:
      if (lookahead == 'g') ADVANCE(270);
      END_STATE();
    case 411:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 412:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 413:
      if (lookahead == 'h') ADVANCE(557);
      END_STATE();
    case 414:
      if (lookahead == 'h') ADVANCE(551);
      END_STATE();
    case 415:
      if (lookahead == 'h') ADVANCE(564);
      END_STATE();
    case 416:
      if (lookahead == 'h') ADVANCE(99);
      END_STATE();
    case 417:
      if (lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 418:
      if (lookahead == 'h') ADVANCE(365);
      END_STATE();
    case 419:
      if (lookahead == 'h') ADVANCE(537);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(714);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(637);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(636);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(600);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(486);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(595);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(698);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(608);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(470);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(553);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(676);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 458:
      if (lookahead == 'k') ADVANCE(335);
      END_STATE();
    case 459:
      if (lookahead == 'k') ADVANCE(135);
      END_STATE();
    case 460:
      if (lookahead == 'l') ADVANCE(707);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(640);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(562);
      if (lookahead == 'm') ADVANCE(350);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(627);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(616);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(473);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(525);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(340);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(369);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(382);
      END_STATE();
    case 481:
      if (lookahead == 'm') ADVANCE(572);
      END_STATE();
    case 482:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 483:
      if (lookahead == 'm') ADVANCE(263);
      END_STATE();
    case 484:
      if (lookahead == 'm') ADVANCE(571);
      END_STATE();
    case 485:
      if (lookahead == 'm') ADVANCE(390);
      END_STATE();
    case 486:
      if (lookahead == 'm') ADVANCE(361);
      END_STATE();
    case 487:
      if (lookahead == 'm') ADVANCE(269);
      END_STATE();
    case 488:
      if (lookahead == 'm') ADVANCE(281);
      END_STATE();
    case 489:
      if (lookahead == 'n') ADVANCE(822);
      END_STATE();
    case 490:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 491:
      if (lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 492:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 493:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 494:
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 495:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 496:
      if (lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 497:
      if (lookahead == 'n') ADVANCE(326);
      END_STATE();
    case 498:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 499:
      if (lookahead == 'n') ADVANCE(616);
      END_STATE();
    case 500:
      if (lookahead == 'n') ADVANCE(632);
      END_STATE();
    case 501:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 502:
      if (lookahead == 'n') ADVANCE(641);
      END_STATE();
    case 503:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 504:
      if (lookahead == 'n') ADVANCE(672);
      END_STATE();
    case 505:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 506:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 508:
      if (lookahead == 'n') ADVANCE(645);
      END_STATE();
    case 509:
      if (lookahead == 'n') ADVANCE(684);
      END_STATE();
    case 510:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 511:
      if (lookahead == 'n') ADVANCE(650);
      END_STATE();
    case 512:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 513:
      if (lookahead == 'n') ADVANCE(658);
      END_STATE();
    case 514:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 515:
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 516:
      if (lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(656);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(671);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(661);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 523:
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 524:
      if (lookahead == 'o') ADVANCE(705);
      END_STATE();
    case 525:
      if (lookahead == 'o') ADVANCE(702);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(682);
      END_STATE();
    case 527:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 528:
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 529:
      if (lookahead == 'o') ADVANCE(610);
      END_STATE();
    case 530:
      if (lookahead == 'o') ADVANCE(513);
      END_STATE();
    case 531:
      if (lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 532:
      if (lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 533:
      if (lookahead == 'o') ADVANCE(615);
      END_STATE();
    case 534:
      if (lookahead == 'o') ADVANCE(632);
      END_STATE();
    case 535:
      if (lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 536:
      if (lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 538:
      if (lookahead == 'o') ADVANCE(654);
      END_STATE();
    case 539:
      if (lookahead == 'o') ADVANCE(496);
      END_STATE();
    case 540:
      if (lookahead == 'o') ADVANCE(505);
      END_STATE();
    case 541:
      if (lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 542:
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 543:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 546:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 547:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 548:
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 550:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 551:
      if (lookahead == 'o') ADVANCE(597);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(686);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(604);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(660);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(669);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(663);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(607);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 566:
      if (lookahead == 'p') ADVANCE(334);
      END_STATE();
    case 567:
      if (lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 568:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 569:
      if (lookahead == 'p') ADVANCE(534);
      END_STATE();
    case 570:
      if (lookahead == 'p') ADVANCE(645);
      END_STATE();
    case 571:
      if (lookahead == 'p') ADVANCE(475);
      END_STATE();
    case 572:
      if (lookahead == 'p') ADVANCE(529);
      END_STATE();
    case 573:
      if (lookahead == 'p') ADVANCE(533);
      END_STATE();
    case 574:
      if (lookahead == 'p') ADVANCE(648);
      END_STATE();
    case 575:
      if (lookahead == 'p') ADVANCE(573);
      END_STATE();
    case 576:
      if (lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 577:
      if (lookahead == 'p') ADVANCE(565);
      END_STATE();
    case 578:
      if (lookahead == 'p') ADVANCE(577);
      END_STATE();
    case 579:
      if (lookahead == 'q') ADVANCE(687);
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 580:
      if (lookahead == 'q') ADVANCE(693);
      END_STATE();
    case 581:
      if (lookahead == 'q') ADVANCE(690);
      END_STATE();
    case 582:
      if (lookahead == 'q') ADVANCE(692);
      END_STATE();
    case 583:
      if (lookahead == 'r') ADVANCE(822);
      END_STATE();
    case 584:
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == 'u') ADVANCE(492);
      END_STATE();
    case 585:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 586:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 587:
      if (lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 588:
      if (lookahead == 'r') ADVANCE(372);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(666);
      if (lookahead == 'y') ADVANCE(462);
      END_STATE();
    case 590:
      if (lookahead == 'r') ADVANCE(629);
      END_STATE();
    case 591:
      if (lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(524);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(612);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(645);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(697);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 609:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 610:
      if (lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 611:
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 612:
      if (lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 613:
      if (lookahead == 'r') ADVANCE(712);
      END_STATE();
    case 614:
      if (lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 615:
      if (lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(822);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(681);
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(624);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(631);
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
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(632);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(643);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(653);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(547);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(545);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 632:
      if (lookahead == 't') ADVANCE(822);
      END_STATE();
    case 633:
      if (lookahead == 't') ADVANCE(413);
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
      if (lookahead == 't') ADVANCE(700);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(707);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(685);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(616);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 651:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 652:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 653:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 654:
      if (lookahead == 't') ADVANCE(549);
      END_STATE();
    case 655:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 656:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 658:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 659:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 660:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 661:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 662:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 663:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 664:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 667:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 668:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 669:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 670:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(387);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 681:
      if (lookahead == 'u') ADVANCE(398);
      END_STATE();
    case 682:
      if (lookahead == 'u') ADVANCE(492);
      END_STATE();
    case 683:
      if (lookahead == 'u') ADVANCE(575);
      END_STATE();
    case 684:
      if (lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 685:
      if (lookahead == 'u') ADVANCE(616);
      END_STATE();
    case 686:
      if (lookahead == 'u') ADVANCE(632);
      END_STATE();
    case 687:
      if (lookahead == 'u') ADVANCE(341);
      END_STATE();
    case 688:
      if (lookahead == 'u') ADVANCE(665);
      if (lookahead == 'v') ADVANCE(261);
      END_STATE();
    case 689:
      if (lookahead == 'u') ADVANCE(667);
      END_STATE();
    case 690:
      if (lookahead == 'u') ADVANCE(380);
      END_STATE();
    case 691:
      if (lookahead == 'u') ADVANCE(670);
      END_STATE();
    case 692:
      if (lookahead == 'u') ADVANCE(383);
      END_STATE();
    case 693:
      if (lookahead == 'u') ADVANCE(444);
      END_STATE();
    case 694:
      if (lookahead == 'u') ADVANCE(578);
      END_STATE();
    case 695:
      if (lookahead == 'v') ADVANCE(437);
      END_STATE();
    case 696:
      if (lookahead == 'v') ADVANCE(373);
      END_STATE();
    case 697:
      if (lookahead == 'v') ADVANCE(381);
      END_STATE();
    case 698:
      if (lookahead == 'v') ADVANCE(371);
      END_STATE();
    case 699:
      if (lookahead == 'v') ADVANCE(267);
      END_STATE();
    case 700:
      if (lookahead == 'w') ADVANCE(528);
      END_STATE();
    case 701:
      if (lookahead == 'w') ADVANCE(268);
      END_STATE();
    case 702:
      if (lookahead == 'w') ADVANCE(335);
      END_STATE();
    case 703:
      if (lookahead == 'w') ADVANCE(244);
      END_STATE();
    case 704:
      if (lookahead == 'x') ADVANCE(566);
      END_STATE();
    case 705:
      if (lookahead == 'x') ADVANCE(707);
      END_STATE();
    case 706:
      if (lookahead == 'x') ADVANCE(659);
      END_STATE();
    case 707:
      if (lookahead == 'y') ADVANCE(822);
      END_STATE();
    case 708:
      if (lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 709:
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 710:
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 711:
      if (lookahead == 'y') ADVANCE(567);
      END_STATE();
    case 712:
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 713:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 714:
      if (lookahead == 'z') ADVANCE(335);
      END_STATE();
    case 715:
      if (lookahead == '}') ADVANCE(826);
      END_STATE();
    case 716:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(821);
      END_STATE();
    case 717:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(716);
      END_STATE();
    case 718:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 719:
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(887);
      END_STATE();
    case 720:
      if (eof) ADVANCE(731);
      ADVANCE_MAP(
        0, 775,
        '\n', 800,
        '\r', 801,
        '#', 807,
        '/', 790,
        '<', 827,
        '>', 830,
        '@', 833,
        'C', 769,
        'D', 760,
        'G', 761,
        'H', 765,
        'L', 767,
        'O', 770,
        'P', 755,
        'T', 773,
        'W', 762,
        '{', 791,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(799);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(775);
      END_STATE();
    case 721:
      if (eof) ADVANCE(731);
      ADVANCE_MAP(
        0, 775,
        '\n', 889,
        '\r', 890,
        '#', 807,
        '/', 790,
        '<', 827,
        '>', 830,
        '@', 833,
        'C', 768,
        'D', 757,
        'G', 758,
        'H', 763,
        'L', 766,
        'O', 771,
        'P', 756,
        'T', 772,
        'W', 759,
        '{', 791,
        '-', 794,
        '_', 794,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(775);
      END_STATE();
    case 722:
      if (eof) ADVANCE(731);
      ADVANCE_MAP(
        0, 775,
        '\n', 889,
        '\r', 890,
        '#', 807,
        '/', 790,
        '<', 827,
        '>', 830,
        '@', 833,
        'C', 768,
        'D', 757,
        'G', 758,
        'H', 764,
        'L', 766,
        'O', 771,
        'P', 756,
        'T', 772,
        'W', 759,
        '{', 791,
        '-', 794,
        '_', 794,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(774);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(775);
      END_STATE();
    case 723:
      if (eof) ADVANCE(731);
      ADVANCE_MAP(
        0, 775,
        '\n', 889,
        '\r', 890,
        '#', 807,
        '/', 790,
        '<', 827,
        '>', 830,
        '@', 833,
        'C', 769,
        'D', 760,
        'G', 761,
        'H', 765,
        'L', 767,
        'O', 770,
        'P', 755,
        'T', 773,
        'W', 762,
        '[', 793,
        '{', 792,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(799);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(775);
      END_STATE();
    case 724:
      if (eof) ADVANCE(731);
      ADVANCE_MAP(
        0, 775,
        '\n', 889,
        '\r', 890,
        '#', 807,
        '/', 790,
        '<', 827,
        '>', 830,
        '@', 833,
        'C', 769,
        'D', 760,
        'G', 761,
        'H', 765,
        'L', 767,
        'O', 770,
        'P', 755,
        'T', 773,
        'W', 762,
        '{', 791,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(799);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(775);
      END_STATE();
    case 725:
      if (eof) ADVANCE(731);
      ADVANCE_MAP(
        0, 775,
        '\n', 889,
        '\r', 890,
        '#', 807,
        '/', 790,
        '<', 827,
        '@', 833,
        'C', 769,
        'D', 760,
        'G', 761,
        'H', 765,
        'L', 767,
        'O', 770,
        'P', 755,
        'T', 773,
        'W', 762,
        '{', 791,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(799);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(775);
      END_STATE();
    case 726:
      if (eof) ADVANCE(731);
      ADVANCE_MAP(
        0, 847,
        '\n', 846,
        '\r', 847,
        '#', 804,
        '-', 778,
        '/', 779,
        '<', 843,
        '>', 830,
        '@', 834,
        'C', 739,
        'D', 734,
        'G', 735,
        'H', 737,
        'L', 738,
        'O', 740,
        'P', 733,
        'T', 741,
        'W', 736,
        '[', 777,
        'm', 742,
        'q', 743,
        '{', 776,
        0x2028, 48,
        0x2029, 48,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(796);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(744);
      if (lookahead != 0) ADVANCE(781);
      END_STATE();
    case 727:
      if (eof) ADVANCE(731);
      ADVANCE_MAP(
        0, 847,
        '\n', 846,
        '\r', 847,
        '#', 804,
        '/', 779,
        '<', 842,
        '>', 830,
        '@', 834,
        'C', 739,
        'D', 734,
        'G', 735,
        'H', 737,
        'L', 738,
        'O', 740,
        'P', 733,
        'T', 741,
        'W', 736,
        '{', 780,
        0x2028, 48,
        0x2029, 48,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(796);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(744);
      if (lookahead != 0) ADVANCE(781);
      END_STATE();
    case 728:
      if (eof) ADVANCE(731);
      ADVANCE_MAP(
        0, 847,
        '\n', 846,
        '\r', 847,
        '#', 804,
        '/', 779,
        '<', 828,
        '>', 830,
        '@', 834,
        'C', 739,
        'D', 734,
        'G', 735,
        'H', 737,
        'L', 738,
        'O', 740,
        'P', 733,
        'T', 741,
        'W', 736,
        '{', 780,
        0x2028, 48,
        0x2029, 48,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(796);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(744);
      if (lookahead != 0) ADVANCE(781);
      END_STATE();
    case 729:
      if (eof) ADVANCE(731);
      ADVANCE_MAP(
        0, 786,
        '\n', 802,
        '\r', 803,
        '#', 805,
        '/', 784,
        '<', 829,
        '>', 830,
        '@', 835,
        'C', 751,
        'D', 747,
        'G', 748,
        'H', 749,
        'L', 750,
        'O', 752,
        'P', 745,
        'T', 753,
        'W', 746,
        '[', 783,
        '{', 782,
        0x2028, 89,
        0x2029, 89,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(797);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(754);
      if (lookahead != 0) ADVANCE(786);
      END_STATE();
    case 730:
      if (eof) ADVANCE(731);
      ADVANCE_MAP(
        0, 786,
        '\n', 802,
        '\r', 803,
        '#', 805,
        '/', 784,
        '<', 829,
        '>', 830,
        '@', 835,
        'C', 751,
        'D', 747,
        'G', 748,
        'H', 749,
        'L', 750,
        'O', 752,
        'P', 745,
        'T', 753,
        'W', 746,
        '{', 785,
        0x2028, 89,
        0x2029, 89,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(797);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(754);
      if (lookahead != 0) ADVANCE(786);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'U') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == 'R') ADVANCE(5);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'E') ADVANCE(6);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'O') ADVANCE(24);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'P') ADVANCE(35);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'R') ADVANCE(7);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'A') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(83);
      if (lookahead == 'U') ADVANCE(84);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(55);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'O') ADVANCE(74);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == 'R') ADVANCE(57);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'A') ADVANCE(226);
      if (lookahead == 'O') ADVANCE(216);
      if (lookahead == 'U') ADVANCE(224);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'A') ADVANCE(883);
      if (lookahead == 'O') ADVANCE(878);
      if (lookahead == 'U') ADVANCE(881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(881);
      if (lookahead == 'R') ADVANCE(851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(187);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(224);
      if (lookahead == 'R') ADVANCE(149);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(157);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(852);
      if (lookahead == 'T') ADVANCE(884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(150);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'I') ADVANCE(878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'I') ADVANCE(216);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'O') ADVANCE(870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'O') ADVANCE(193);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'P') ADVANCE(225);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'P') ADVANCE(882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'R') ADVANCE(853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'R') ADVANCE(151);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(838);
      if (lookahead == '\r') ADVANCE(837);
      if (lookahead == '{') ADVANCE(825);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(837);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(838);
      if (lookahead == '\r') ADVANCE(837);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(837);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == '-') ADVANCE(845);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == '{') ADVANCE(825);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(838);
      if (lookahead == '\r') ADVANCE(837);
      if (lookahead == '{') ADVANCE(824);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(837);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(838);
      if (lookahead == '\r') ADVANCE(837);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(837);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == '{') ADVANCE(824);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '{') ADVANCE(824);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead == '{') ADVANCE(824);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(838);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '-') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '/') ADVANCE(810);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '{') ADVANCE(824);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '{') ADVANCE(824);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(838);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(838);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(888);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(796);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(797);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(799);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(798);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(887);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(799);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_NL_token1);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_NL_token1);
      if (lookahead == '\n') ADVANCE(800);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_LINE_TAIL_token1);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_LINE_TAIL_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '\n') ADVANCE(808);
      if (lookahead == '\r') ADVANCE(806);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(806);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '\n') ADVANCE(808);
      if (lookahead == '\r') ADVANCE(806);
      if (lookahead == '#') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(806);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '\n') ADVANCE(808);
      if (lookahead == '\r') ADVANCE(806);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(806);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '#') ADVANCE(145);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(808);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(808);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token2);
      if (lookahead == '\n') ADVANCE(810);
      if (lookahead == '\r') ADVANCE(809);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(810);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(813);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == '#') ADVANCE(814);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(815);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(815);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_http_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_status_text);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_LT);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_LT);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(802);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (lookahead == '\n') ADVANCE(838);
      if (lookahead == '\r') ADVANCE(837);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(837);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(838);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(839);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_LT2);
      if ((!eof && lookahead == 00)) ADVANCE(836);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(836);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_LT2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(836);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(847);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(847);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(846);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__not_comment);
      if (lookahead == '\r') ADVANCE(849);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(93);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '/') ADVANCE(718);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(875);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'B') ADVANCE(880);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'D') ADVANCE(819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(855);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'I') ADVANCE(873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'K') ADVANCE(860);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(863);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(872);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(856);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(865);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'Q') ADVANCE(869);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(874);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(866);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(857);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(887);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(889);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 725},
  [2] = {.lex_state = 726},
  [3] = {.lex_state = 726},
  [4] = {.lex_state = 726},
  [5] = {.lex_state = 726},
  [6] = {.lex_state = 726},
  [7] = {.lex_state = 726},
  [8] = {.lex_state = 726},
  [9] = {.lex_state = 726},
  [10] = {.lex_state = 726},
  [11] = {.lex_state = 726},
  [12] = {.lex_state = 726},
  [13] = {.lex_state = 726},
  [14] = {.lex_state = 726},
  [15] = {.lex_state = 726},
  [16] = {.lex_state = 726},
  [17] = {.lex_state = 726},
  [18] = {.lex_state = 726},
  [19] = {.lex_state = 726},
  [20] = {.lex_state = 726},
  [21] = {.lex_state = 726},
  [22] = {.lex_state = 726},
  [23] = {.lex_state = 726},
  [24] = {.lex_state = 726},
  [25] = {.lex_state = 726},
  [26] = {.lex_state = 726},
  [27] = {.lex_state = 726},
  [28] = {.lex_state = 726},
  [29] = {.lex_state = 726},
  [30] = {.lex_state = 726},
  [31] = {.lex_state = 726},
  [32] = {.lex_state = 726},
  [33] = {.lex_state = 726},
  [34] = {.lex_state = 726},
  [35] = {.lex_state = 726},
  [36] = {.lex_state = 726},
  [37] = {.lex_state = 726},
  [38] = {.lex_state = 726},
  [39] = {.lex_state = 726},
  [40] = {.lex_state = 726},
  [41] = {.lex_state = 726},
  [42] = {.lex_state = 726},
  [43] = {.lex_state = 726},
  [44] = {.lex_state = 726},
  [45] = {.lex_state = 726},
  [46] = {.lex_state = 726},
  [47] = {.lex_state = 726},
  [48] = {.lex_state = 726},
  [49] = {.lex_state = 726},
  [50] = {.lex_state = 726},
  [51] = {.lex_state = 726},
  [52] = {.lex_state = 726},
  [53] = {.lex_state = 726},
  [54] = {.lex_state = 726},
  [55] = {.lex_state = 726},
  [56] = {.lex_state = 726},
  [57] = {.lex_state = 726},
  [58] = {.lex_state = 725},
  [59] = {.lex_state = 725},
  [60] = {.lex_state = 721},
  [61] = {.lex_state = 721},
  [62] = {.lex_state = 721},
  [63] = {.lex_state = 721},
  [64] = {.lex_state = 721},
  [65] = {.lex_state = 721},
  [66] = {.lex_state = 721},
  [67] = {.lex_state = 721},
  [68] = {.lex_state = 725},
  [69] = {.lex_state = 726},
  [70] = {.lex_state = 725},
  [71] = {.lex_state = 726},
  [72] = {.lex_state = 727},
  [73] = {.lex_state = 727},
  [74] = {.lex_state = 727},
  [75] = {.lex_state = 726},
  [76] = {.lex_state = 726},
  [77] = {.lex_state = 726},
  [78] = {.lex_state = 726},
  [79] = {.lex_state = 722},
  [80] = {.lex_state = 722},
  [81] = {.lex_state = 722},
  [82] = {.lex_state = 722},
  [83] = {.lex_state = 722},
  [84] = {.lex_state = 722},
  [85] = {.lex_state = 722},
  [86] = {.lex_state = 722},
  [87] = {.lex_state = 722},
  [88] = {.lex_state = 722},
  [89] = {.lex_state = 722},
  [90] = {.lex_state = 722},
  [91] = {.lex_state = 721},
  [92] = {.lex_state = 722},
  [93] = {.lex_state = 722},
  [94] = {.lex_state = 722},
  [95] = {.lex_state = 722},
  [96] = {.lex_state = 722},
  [97] = {.lex_state = 722},
  [98] = {.lex_state = 722},
  [99] = {.lex_state = 722},
  [100] = {.lex_state = 722},
  [101] = {.lex_state = 722},
  [102] = {.lex_state = 722},
  [103] = {.lex_state = 722},
  [104] = {.lex_state = 724},
  [105] = {.lex_state = 724},
  [106] = {.lex_state = 724},
  [107] = {.lex_state = 728},
  [108] = {.lex_state = 728},
  [109] = {.lex_state = 729},
  [110] = {.lex_state = 729},
  [111] = {.lex_state = 722},
  [112] = {.lex_state = 727},
  [113] = {.lex_state = 727},
  [114] = {.lex_state = 730},
  [115] = {.lex_state = 720},
  [116] = {.lex_state = 730},
  [117] = {.lex_state = 721},
  [118] = {.lex_state = 721},
  [119] = {.lex_state = 721},
  [120] = {.lex_state = 730},
  [121] = {.lex_state = 727},
  [122] = {.lex_state = 720},
  [123] = {.lex_state = 721},
  [124] = {.lex_state = 723},
  [125] = {.lex_state = 727},
  [126] = {.lex_state = 727},
  [127] = {.lex_state = 727},
  [128] = {.lex_state = 720},
  [129] = {.lex_state = 720},
  [130] = {.lex_state = 722},
  [131] = {.lex_state = 720},
  [132] = {.lex_state = 722},
  [133] = {.lex_state = 722},
  [134] = {.lex_state = 722},
  [135] = {.lex_state = 720},
  [136] = {.lex_state = 722},
  [137] = {.lex_state = 720},
  [138] = {.lex_state = 722},
  [139] = {.lex_state = 722},
  [140] = {.lex_state = 722},
  [141] = {.lex_state = 724},
  [142] = {.lex_state = 724},
  [143] = {.lex_state = 724},
  [144] = {.lex_state = 724},
  [145] = {.lex_state = 724},
  [146] = {.lex_state = 724},
  [147] = {.lex_state = 724},
  [148] = {.lex_state = 724},
  [149] = {.lex_state = 724},
  [150] = {.lex_state = 724},
  [151] = {.lex_state = 724},
  [152] = {.lex_state = 724},
  [153] = {.lex_state = 724},
  [154] = {.lex_state = 724},
  [155] = {.lex_state = 724},
  [156] = {.lex_state = 724},
  [157] = {.lex_state = 724},
  [158] = {.lex_state = 724},
  [159] = {.lex_state = 724},
  [160] = {.lex_state = 724},
  [161] = {.lex_state = 724},
  [162] = {.lex_state = 724},
  [163] = {.lex_state = 724},
  [164] = {.lex_state = 724},
  [165] = {.lex_state = 724},
  [166] = {.lex_state = 724},
  [167] = {.lex_state = 724},
  [168] = {.lex_state = 724},
  [169] = {.lex_state = 724},
  [170] = {.lex_state = 724},
  [171] = {.lex_state = 724},
  [172] = {.lex_state = 724},
  [173] = {.lex_state = 724},
  [174] = {.lex_state = 724},
  [175] = {.lex_state = 724},
  [176] = {.lex_state = 724},
  [177] = {.lex_state = 724},
  [178] = {.lex_state = 724},
  [179] = {.lex_state = 724},
  [180] = {.lex_state = 724},
  [181] = {.lex_state = 724},
  [182] = {.lex_state = 724},
  [183] = {.lex_state = 724},
  [184] = {.lex_state = 724},
  [185] = {.lex_state = 724},
  [186] = {.lex_state = 724},
  [187] = {.lex_state = 724},
  [188] = {.lex_state = 724},
  [189] = {.lex_state = 724},
  [190] = {.lex_state = 724},
  [191] = {.lex_state = 724},
  [192] = {.lex_state = 724},
  [193] = {.lex_state = 724},
  [194] = {.lex_state = 724},
  [195] = {.lex_state = 724},
  [196] = {.lex_state = 724},
  [197] = {.lex_state = 724},
  [198] = {.lex_state = 724},
  [199] = {.lex_state = 724},
  [200] = {.lex_state = 724},
  [201] = {.lex_state = 724},
  [202] = {.lex_state = 724},
  [203] = {.lex_state = 724},
  [204] = {.lex_state = 724},
  [205] = {.lex_state = 724},
  [206] = {.lex_state = 724},
  [207] = {.lex_state = 724},
  [208] = {.lex_state = 724},
  [209] = {.lex_state = 724},
  [210] = {.lex_state = 724},
  [211] = {.lex_state = 724},
  [212] = {.lex_state = 724},
  [213] = {.lex_state = 724},
  [214] = {.lex_state = 724},
  [215] = {.lex_state = 724},
  [216] = {.lex_state = 724},
  [217] = {.lex_state = 724},
  [218] = {.lex_state = 724},
  [219] = {.lex_state = 724},
  [220] = {.lex_state = 724},
  [221] = {.lex_state = 724},
  [222] = {.lex_state = 724},
  [223] = {.lex_state = 724},
  [224] = {.lex_state = 724},
  [225] = {.lex_state = 724},
  [226] = {.lex_state = 724},
  [227] = {.lex_state = 724},
  [228] = {.lex_state = 724},
  [229] = {.lex_state = 724},
  [230] = {.lex_state = 724},
  [231] = {.lex_state = 724},
  [232] = {.lex_state = 724},
  [233] = {.lex_state = 724},
  [234] = {.lex_state = 724},
  [235] = {.lex_state = 724},
  [236] = {.lex_state = 724},
  [237] = {.lex_state = 724},
  [238] = {.lex_state = 724},
  [239] = {.lex_state = 724},
  [240] = {.lex_state = 724},
  [241] = {.lex_state = 724},
  [242] = {.lex_state = 724},
  [243] = {.lex_state = 724},
  [244] = {.lex_state = 724},
  [245] = {.lex_state = 724},
  [246] = {.lex_state = 724},
  [247] = {.lex_state = 724},
  [248] = {.lex_state = 724},
  [249] = {.lex_state = 724},
  [250] = {.lex_state = 724},
  [251] = {.lex_state = 724},
  [252] = {.lex_state = 724},
  [253] = {.lex_state = 724},
  [254] = {.lex_state = 724},
  [255] = {.lex_state = 724},
  [256] = {.lex_state = 724},
  [257] = {.lex_state = 724},
  [258] = {.lex_state = 724},
  [259] = {.lex_state = 724},
  [260] = {.lex_state = 724},
  [261] = {.lex_state = 724},
  [262] = {.lex_state = 724},
  [263] = {.lex_state = 724},
  [264] = {.lex_state = 724},
  [265] = {.lex_state = 724},
  [266] = {.lex_state = 724},
  [267] = {.lex_state = 724},
  [268] = {.lex_state = 724},
  [269] = {.lex_state = 724},
  [270] = {.lex_state = 724},
  [271] = {.lex_state = 724},
  [272] = {.lex_state = 724},
  [273] = {.lex_state = 724},
  [274] = {.lex_state = 724},
  [275] = {.lex_state = 724},
  [276] = {.lex_state = 724},
  [277] = {.lex_state = 724},
  [278] = {.lex_state = 724},
  [279] = {.lex_state = 724},
  [280] = {.lex_state = 724},
  [281] = {.lex_state = 724},
  [282] = {.lex_state = 724},
  [283] = {.lex_state = 724},
  [284] = {.lex_state = 724},
  [285] = {.lex_state = 724},
  [286] = {.lex_state = 724},
  [287] = {.lex_state = 724},
  [288] = {.lex_state = 724},
  [289] = {.lex_state = 724},
  [290] = {.lex_state = 724},
  [291] = {.lex_state = 724},
  [292] = {.lex_state = 724},
  [293] = {.lex_state = 724},
  [294] = {.lex_state = 724},
  [295] = {.lex_state = 724},
  [296] = {.lex_state = 724},
  [297] = {.lex_state = 724},
  [298] = {.lex_state = 724},
  [299] = {.lex_state = 724},
  [300] = {.lex_state = 724},
  [301] = {.lex_state = 724},
  [302] = {.lex_state = 724},
  [303] = {.lex_state = 724},
  [304] = {.lex_state = 724},
  [305] = {.lex_state = 724},
  [306] = {.lex_state = 724},
  [307] = {.lex_state = 724},
  [308] = {.lex_state = 724},
  [309] = {.lex_state = 724},
  [310] = {.lex_state = 724},
  [311] = {.lex_state = 724},
  [312] = {.lex_state = 724},
  [313] = {.lex_state = 724},
  [314] = {.lex_state = 724},
  [315] = {.lex_state = 724},
  [316] = {.lex_state = 724},
  [317] = {.lex_state = 724},
  [318] = {.lex_state = 724},
  [319] = {.lex_state = 724},
  [320] = {.lex_state = 724},
  [321] = {.lex_state = 724},
  [322] = {.lex_state = 724},
  [323] = {.lex_state = 724},
  [324] = {.lex_state = 724},
  [325] = {.lex_state = 724},
  [326] = {.lex_state = 724},
  [327] = {.lex_state = 724},
  [328] = {.lex_state = 724},
  [329] = {.lex_state = 724},
  [330] = {.lex_state = 724},
  [331] = {.lex_state = 724},
  [332] = {.lex_state = 724},
  [333] = {.lex_state = 724},
  [334] = {.lex_state = 724},
  [335] = {.lex_state = 724},
  [336] = {.lex_state = 724},
  [337] = {.lex_state = 724},
  [338] = {.lex_state = 724},
  [339] = {.lex_state = 724},
  [340] = {.lex_state = 724},
  [341] = {.lex_state = 724},
  [342] = {.lex_state = 724},
  [343] = {.lex_state = 724},
  [344] = {.lex_state = 724},
  [345] = {.lex_state = 724},
  [346] = {.lex_state = 724},
  [347] = {.lex_state = 724},
  [348] = {.lex_state = 724},
  [349] = {.lex_state = 724},
  [350] = {.lex_state = 724},
  [351] = {.lex_state = 724},
  [352] = {.lex_state = 724},
  [353] = {.lex_state = 724},
  [354] = {.lex_state = 725},
  [355] = {.lex_state = 725},
  [356] = {.lex_state = 725},
  [357] = {.lex_state = 725},
  [358] = {.lex_state = 725},
  [359] = {.lex_state = 725},
  [360] = {.lex_state = 725},
  [361] = {.lex_state = 725},
  [362] = {.lex_state = 725},
  [363] = {.lex_state = 725},
  [364] = {.lex_state = 725},
  [365] = {.lex_state = 725},
  [366] = {.lex_state = 725},
  [367] = {.lex_state = 725},
  [368] = {.lex_state = 725},
  [369] = {.lex_state = 725},
  [370] = {.lex_state = 2},
  [371] = {.lex_state = 237},
  [372] = {.lex_state = 2},
  [373] = {.lex_state = 2},
  [374] = {.lex_state = 237},
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
  [411] = {.lex_state = 90},
  [412] = {.lex_state = 53},
  [413] = {.lex_state = 90},
  [414] = {.lex_state = 90},
  [415] = {.lex_state = 90},
  [416] = {.lex_state = 53},
  [417] = {.lex_state = 90},
  [418] = {.lex_state = 53},
  [419] = {.lex_state = 90},
  [420] = {.lex_state = 90},
  [421] = {.lex_state = 89},
  [422] = {.lex_state = 725},
  [423] = {.lex_state = 92},
  [424] = {.lex_state = 54},
  [425] = {.lex_state = 91},
  [426] = {.lex_state = 54},
  [427] = {.lex_state = 90},
  [428] = {.lex_state = 90},
  [429] = {.lex_state = 90},
  [430] = {.lex_state = 90},
  [431] = {.lex_state = 89},
  [432] = {.lex_state = 90},
  [433] = {.lex_state = 90},
  [434] = {.lex_state = 90},
  [435] = {.lex_state = 89},
  [436] = {.lex_state = 54},
  [437] = {.lex_state = 90},
  [438] = {.lex_state = 91},
  [439] = {.lex_state = 90},
  [440] = {.lex_state = 90},
  [441] = {.lex_state = 90},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 90},
  [444] = {.lex_state = 90},
  [445] = {.lex_state = 90},
  [446] = {.lex_state = 725},
  [447] = {.lex_state = 90},
  [448] = {.lex_state = 90},
  [449] = {.lex_state = 90},
  [450] = {.lex_state = 92},
  [451] = {.lex_state = 719},
  [452] = {.lex_state = 90},
  [453] = {.lex_state = 90},
  [454] = {.lex_state = 90},
  [455] = {.lex_state = 90},
  [456] = {.lex_state = 90},
  [457] = {.lex_state = 91},
  [458] = {.lex_state = 90},
  [459] = {.lex_state = 90},
  [460] = {.lex_state = 90},
  [461] = {.lex_state = 89},
  [462] = {.lex_state = 725},
  [463] = {.lex_state = 90},
  [464] = {.lex_state = 725},
  [465] = {.lex_state = 719},
  [466] = {.lex_state = 90},
  [467] = {.lex_state = 90},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 719},
  [470] = {.lex_state = 725},
  [471] = {.lex_state = 90},
  [472] = {.lex_state = 725},
  [473] = {.lex_state = 90},
  [474] = {.lex_state = 91},
  [475] = {.lex_state = 90},
  [476] = {.lex_state = 719},
  [477] = {.lex_state = 725},
  [478] = {.lex_state = 90},
  [479] = {.lex_state = 90},
  [480] = {.lex_state = 90},
  [481] = {.lex_state = 90},
  [482] = {.lex_state = 90},
  [483] = {.lex_state = 90},
  [484] = {.lex_state = 90},
  [485] = {.lex_state = 90},
  [486] = {.lex_state = 91},
  [487] = {.lex_state = 719},
  [488] = {.lex_state = 90},
  [489] = {.lex_state = 90},
  [490] = {.lex_state = 90},
  [491] = {.lex_state = 90},
  [492] = {.lex_state = 719},
  [493] = {.lex_state = 719},
  [494] = {.lex_state = 719},
  [495] = {.lex_state = 90},
  [496] = {.lex_state = 90},
  [497] = {.lex_state = 90},
  [498] = {.lex_state = 90},
  [499] = {.lex_state = 719},
  [500] = {.lex_state = 725},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 90},
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
    [sym_comment] = STATE(70),
    [sym_request_separator] = STATE(68),
    [sym_section] = STATE(58),
    [sym__section_content] = STATE(358),
    [aux_sym__target_url_line] = STATE(380),
    [sym_target_url] = STATE(428),
    [sym_request] = STATE(104),
    [sym_variable] = STATE(380),
    [sym_pre_request_script] = STATE(70),
    [sym_variable_declaration] = STATE(70),
    [sym__blank_line] = STATE(70),
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(71), 2,
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
    STATE(358), 1,
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
    STATE(70), 4,
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
    STATE(358), 1,
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
    STATE(70), 4,
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
    STATE(80), 1,
      aux_sym_request_repeat2,
    STATE(90), 1,
      sym_response,
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
    STATE(92), 1,
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
    STATE(86), 1,
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
    STATE(66), 2,
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
    ACTIONS(273), 1,
      aux_sym__blank_line_token1,
    STATE(94), 1,
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
    STATE(84), 1,
      sym_response,
    STATE(98), 1,
      aux_sym_request_repeat2,
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
    ACTIONS(277), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(275), 6,
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
    STATE(365), 1,
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
    STATE(70), 4,
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
  [4762] = 16,
    ACTIONS(298), 1,
      aux_sym_WS_token1,
    ACTIONS(301), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(304), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(307), 1,
      sym_method,
    ACTIONS(310), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(313), 1,
      anon_sym_LT,
    ACTIONS(316), 1,
      anon_sym_AT2,
    ACTIONS(319), 1,
      aux_sym__blank_line_token1,
    STATE(104), 1,
      sym_request,
    STATE(364), 1,
      sym__section_content,
    STATE(424), 1,
      sym__comment_prefix,
    STATE(428), 1,
      sym_target_url,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(295), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    STATE(380), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(70), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4817] = 5,
    ACTIONS(326), 1,
      aux_sym_WS_token1,
    ACTIONS(329), 1,
      aux_sym__blank_line_token1,
    STATE(71), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(322), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(324), 9,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
  [4849] = 10,
    ACTIONS(336), 1,
      aux_sym_WS_token1,
    ACTIONS(339), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(342), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(345), 1,
      anon_sym_LT2,
    STATE(434), 1,
      sym_external_body,
    STATE(436), 1,
      sym__comment_prefix,
    ACTIONS(348), 2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
    ACTIONS(332), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(72), 3,
      sym_comment,
      sym__blank_line,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(334), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4890] = 10,
    ACTIONS(355), 1,
      aux_sym_WS_token1,
    ACTIONS(357), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(359), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(361), 1,
      anon_sym_LT2,
    STATE(434), 1,
      sym_external_body,
    STATE(436), 1,
      sym__comment_prefix,
    ACTIONS(363), 2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
    ACTIONS(351), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(72), 3,
      sym_comment,
      sym__blank_line,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(353), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4931] = 10,
    ACTIONS(355), 1,
      aux_sym_WS_token1,
    ACTIONS(357), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(359), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(361), 1,
      anon_sym_LT2,
    STATE(434), 1,
      sym_external_body,
    STATE(436), 1,
      sym__comment_prefix,
    ACTIONS(369), 2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
    ACTIONS(365), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(73), 3,
      sym_comment,
      sym__blank_line,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(367), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4972] = 2,
    ACTIONS(371), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(373), 11,
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
  [4996] = 2,
    ACTIONS(375), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(377), 11,
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
  [5020] = 2,
    ACTIONS(379), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(381), 11,
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
  [5044] = 2,
    ACTIONS(383), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(385), 11,
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
  [5068] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(391), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(22), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(389), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(387), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5103] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(397), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(14), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(395), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(393), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5138] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(403), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(15), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(401), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(399), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5173] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(409), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(17), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(407), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(405), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5208] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(415), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(13), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(413), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(411), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5243] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(263), 1,
      aux_sym__blank_line_token1,
    STATE(79), 1,
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
  [5278] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(421), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(6), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(419), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(417), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5313] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(427), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(2), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(425), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(423), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5348] = 8,
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
  [5383] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(429), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(16), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(395), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(393), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5418] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(431), 1,
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
  [5453] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(433), 1,
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
  [5488] = 6,
    ACTIONS(439), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(442), 1,
      aux_sym__comment_prefix_token2,
    STATE(426), 1,
      sym__comment_prefix,
    STATE(91), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(437), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(435), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5519] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(445), 1,
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
  [5554] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(447), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(20), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(389), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(387), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5589] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(449), 1,
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
  [5624] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(455), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(24), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(453), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(451), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5659] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(461), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(19), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(459), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(457), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5694] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(463), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(26), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(401), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(399), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5729] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(469), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(9), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(467), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(465), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5764] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(475), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(18), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(473), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(471), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5799] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(261), 1,
      aux_sym__blank_line_token1,
    STATE(88), 1,
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
  [5834] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(273), 1,
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
  [5869] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(481), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(28), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(479), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(477), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5904] = 8,
    ACTIONS(243), 1,
      aux_sym_WS_token1,
    ACTIONS(251), 1,
      sym_header_entity,
    ACTIONS(483), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    STATE(27), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(413), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(411), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5939] = 8,
    ACTIONS(489), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(492), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(495), 1,
      anon_sym_GT,
    STATE(106), 1,
      aux_sym__section_content_repeat2,
    STATE(498), 1,
      sym__comment_prefix,
    STATE(122), 2,
      sym_var_comment,
      sym_res_handler_script,
    ACTIONS(487), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__blank_line_token1,
    ACTIONS(485), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5973] = 8,
    ACTIONS(501), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(504), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(507), 1,
      anon_sym_GT,
    STATE(105), 1,
      aux_sym__section_content_repeat2,
    STATE(498), 1,
      sym__comment_prefix,
    STATE(122), 2,
      sym_var_comment,
      sym_res_handler_script,
    ACTIONS(499), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__blank_line_token1,
    ACTIONS(497), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6007] = 8,
    ACTIONS(495), 1,
      anon_sym_GT,
    ACTIONS(514), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(517), 1,
      aux_sym__comment_prefix_token2,
    STATE(105), 1,
      aux_sym__section_content_repeat2,
    STATE(498), 1,
      sym__comment_prefix,
    STATE(122), 2,
      sym_var_comment,
      sym_res_handler_script,
    ACTIONS(512), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__blank_line_token1,
    ACTIONS(510), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6041] = 7,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(524), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(527), 1,
      aux_sym__comment_prefix_token2,
    STATE(153), 1,
      sym__raw_body,
    STATE(450), 1,
      sym__comment_prefix,
    ACTIONS(520), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(522), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6072] = 7,
    ACTIONS(45), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(534), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(537), 1,
      aux_sym__comment_prefix_token2,
    STATE(214), 1,
      sym__raw_body,
    STATE(450), 1,
      sym__comment_prefix,
    ACTIONS(530), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(532), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6103] = 4,
    ACTIONS(544), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(110), 1,
      aux_sym_script_repeat1,
    ACTIONS(540), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      aux_sym_json_body_token1,
    ACTIONS(542), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6128] = 4,
    ACTIONS(550), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(110), 1,
      aux_sym_script_repeat1,
    ACTIONS(546), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      aux_sym_json_body_token1,
    ACTIONS(548), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6153] = 5,
    ACTIONS(557), 1,
      sym_header_entity,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(139), 1,
      sym_header,
    ACTIONS(555), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      aux_sym__blank_line_token1,
    ACTIONS(553), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6180] = 2,
    ACTIONS(560), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(562), 10,
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
  [6200] = 2,
    ACTIONS(564), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(566), 10,
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
  [6220] = 4,
    ACTIONS(568), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(114), 1,
      aux_sym_script_repeat1,
    ACTIONS(546), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
    ACTIONS(548), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6244] = 4,
    ACTIONS(575), 1,
      aux_sym_NL_token1,
    STATE(115), 1,
      aux_sym__section_content_repeat1,
    ACTIONS(573), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(571), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6268] = 4,
    ACTIONS(582), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(114), 1,
      aux_sym_script_repeat1,
    ACTIONS(578), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
    ACTIONS(580), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6292] = 2,
    ACTIONS(586), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(584), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6312] = 2,
    ACTIONS(566), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(564), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6332] = 2,
    ACTIONS(562), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(560), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6352] = 4,
    ACTIONS(582), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(114), 1,
      aux_sym_script_repeat1,
    ACTIONS(588), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
    ACTIONS(590), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6376] = 2,
    ACTIONS(592), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(594), 10,
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
  [6396] = 4,
    ACTIONS(600), 1,
      aux_sym_NL_token1,
    STATE(128), 1,
      aux_sym__section_content_repeat1,
    ACTIONS(598), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(596), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6420] = 2,
    ACTIONS(594), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(592), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6440] = 4,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    STATE(155), 1,
      sym_json_body,
    ACTIONS(604), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(602), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6464] = 2,
    ACTIONS(383), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(385), 10,
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
  [6484] = 2,
    ACTIONS(332), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(334), 10,
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
  [6504] = 2,
    ACTIONS(584), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(586), 10,
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
  [6524] = 4,
    ACTIONS(606), 1,
      aux_sym_NL_token1,
    STATE(115), 1,
      aux_sym__section_content_repeat1,
    ACTIONS(499), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(497), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6548] = 2,
    ACTIONS(610), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(608), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6567] = 2,
    ACTIONS(614), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(612), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6586] = 2,
    ACTIONS(373), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(371), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6605] = 2,
    ACTIONS(618), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(616), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6624] = 2,
    ACTIONS(622), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(620), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6643] = 2,
    ACTIONS(626), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(624), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6662] = 2,
    ACTIONS(377), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(375), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6681] = 2,
    ACTIONS(630), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(628), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6700] = 2,
    ACTIONS(381), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(379), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6719] = 2,
    ACTIONS(634), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(632), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6738] = 2,
    ACTIONS(638), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(636), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6757] = 2,
    ACTIONS(642), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(640), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6776] = 2,
    ACTIONS(646), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(644), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6794] = 2,
    ACTIONS(650), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(648), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6812] = 2,
    ACTIONS(654), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(652), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6830] = 2,
    ACTIONS(654), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(652), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6848] = 2,
    ACTIONS(658), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(656), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6866] = 2,
    ACTIONS(662), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(660), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6884] = 2,
    ACTIONS(658), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(656), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6902] = 2,
    ACTIONS(654), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(652), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6920] = 2,
    ACTIONS(658), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(656), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6938] = 2,
    ACTIONS(658), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(656), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6956] = 2,
    ACTIONS(654), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(652), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6974] = 2,
    ACTIONS(658), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(656), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6992] = 2,
    ACTIONS(532), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(530), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7010] = 2,
    ACTIONS(654), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(652), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7028] = 2,
    ACTIONS(666), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(664), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7046] = 2,
    ACTIONS(670), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(668), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7064] = 2,
    ACTIONS(658), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(656), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7082] = 2,
    ACTIONS(674), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(672), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7100] = 2,
    ACTIONS(674), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(672), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7118] = 2,
    ACTIONS(674), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(672), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7136] = 2,
    ACTIONS(674), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(672), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7154] = 2,
    ACTIONS(674), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(672), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7172] = 2,
    ACTIONS(674), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(672), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7190] = 2,
    ACTIONS(678), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(676), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7208] = 2,
    ACTIONS(682), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(680), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7226] = 2,
    ACTIONS(682), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(680), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7244] = 2,
    ACTIONS(686), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(684), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7262] = 2,
    ACTIONS(682), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(680), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7280] = 2,
    ACTIONS(682), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(680), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7298] = 2,
    ACTIONS(682), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(680), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7316] = 2,
    ACTIONS(682), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(680), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7334] = 2,
    ACTIONS(674), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(672), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7352] = 2,
    ACTIONS(674), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(672), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7370] = 2,
    ACTIONS(674), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(672), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7388] = 2,
    ACTIONS(674), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(672), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7406] = 2,
    ACTIONS(674), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(672), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7424] = 2,
    ACTIONS(674), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(672), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7442] = 2,
    ACTIONS(690), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(688), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7460] = 2,
    ACTIONS(694), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(692), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7478] = 2,
    ACTIONS(698), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(696), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7496] = 2,
    ACTIONS(690), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(688), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7514] = 2,
    ACTIONS(690), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(688), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7532] = 2,
    ACTIONS(702), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(700), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7550] = 2,
    ACTIONS(690), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(688), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7568] = 2,
    ACTIONS(690), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(688), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7586] = 2,
    ACTIONS(690), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(688), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7604] = 2,
    ACTIONS(706), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(704), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7622] = 2,
    ACTIONS(706), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(704), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7640] = 2,
    ACTIONS(706), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(704), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7658] = 2,
    ACTIONS(706), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(704), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7676] = 2,
    ACTIONS(706), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(704), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7694] = 2,
    ACTIONS(706), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(704), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7712] = 2,
    ACTIONS(710), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(708), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7730] = 2,
    ACTIONS(714), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(712), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7748] = 2,
    ACTIONS(710), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(708), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7766] = 2,
    ACTIONS(710), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(708), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7784] = 2,
    ACTIONS(706), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(704), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7802] = 2,
    ACTIONS(706), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(704), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7820] = 2,
    ACTIONS(706), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(704), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7838] = 2,
    ACTIONS(706), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(704), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7856] = 2,
    ACTIONS(706), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(704), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7874] = 2,
    ACTIONS(706), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(704), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7892] = 2,
    ACTIONS(710), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(708), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7910] = 2,
    ACTIONS(718), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(716), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7928] = 2,
    ACTIONS(718), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(716), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7946] = 2,
    ACTIONS(718), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(716), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7964] = 2,
    ACTIONS(718), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(716), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7982] = 2,
    ACTIONS(718), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(716), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8000] = 2,
    ACTIONS(718), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(716), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8018] = 2,
    ACTIONS(710), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(708), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8036] = 2,
    ACTIONS(710), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(708), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8054] = 2,
    ACTIONS(722), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(720), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8072] = 2,
    ACTIONS(722), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(720), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8090] = 2,
    ACTIONS(726), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(724), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8108] = 2,
    ACTIONS(722), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(720), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8126] = 2,
    ACTIONS(722), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(720), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8144] = 2,
    ACTIONS(722), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(720), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8162] = 2,
    ACTIONS(722), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(720), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8180] = 2,
    ACTIONS(730), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(728), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8198] = 2,
    ACTIONS(730), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(728), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8216] = 2,
    ACTIONS(730), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(728), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8234] = 2,
    ACTIONS(734), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(732), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8252] = 2,
    ACTIONS(730), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(728), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8270] = 2,
    ACTIONS(730), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(728), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8288] = 2,
    ACTIONS(730), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(728), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8306] = 2,
    ACTIONS(738), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(736), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8324] = 2,
    ACTIONS(742), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(740), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8342] = 2,
    ACTIONS(742), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(740), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8360] = 2,
    ACTIONS(742), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(740), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8378] = 2,
    ACTIONS(742), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(740), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8396] = 2,
    ACTIONS(742), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(740), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8414] = 2,
    ACTIONS(742), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(740), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8432] = 2,
    ACTIONS(730), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(728), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8450] = 2,
    ACTIONS(730), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(728), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8468] = 2,
    ACTIONS(730), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(728), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8486] = 2,
    ACTIONS(730), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(728), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8504] = 2,
    ACTIONS(746), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(744), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8522] = 2,
    ACTIONS(730), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(728), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8540] = 2,
    ACTIONS(730), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(728), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8558] = 2,
    ACTIONS(646), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(644), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8576] = 2,
    ACTIONS(646), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(644), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8594] = 2,
    ACTIONS(750), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(748), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8612] = 2,
    ACTIONS(750), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(748), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8630] = 2,
    ACTIONS(750), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(748), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8648] = 2,
    ACTIONS(750), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(748), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8666] = 2,
    ACTIONS(750), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(748), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8684] = 2,
    ACTIONS(750), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(748), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8702] = 2,
    ACTIONS(646), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(644), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8720] = 2,
    ACTIONS(646), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(644), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8738] = 2,
    ACTIONS(646), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(644), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8756] = 2,
    ACTIONS(646), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(644), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8774] = 2,
    ACTIONS(754), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(752), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8792] = 2,
    ACTIONS(758), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(756), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8810] = 2,
    ACTIONS(758), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(756), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8828] = 2,
    ACTIONS(758), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(756), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8846] = 2,
    ACTIONS(758), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(756), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8864] = 2,
    ACTIONS(758), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(756), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8882] = 2,
    ACTIONS(758), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(756), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8900] = 2,
    ACTIONS(762), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(760), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8918] = 2,
    ACTIONS(762), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(760), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8936] = 2,
    ACTIONS(762), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(760), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8954] = 2,
    ACTIONS(762), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(760), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8972] = 2,
    ACTIONS(762), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(760), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8990] = 2,
    ACTIONS(762), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(760), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9008] = 2,
    ACTIONS(766), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(764), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9026] = 2,
    ACTIONS(770), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(768), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9044] = 2,
    ACTIONS(758), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(756), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9062] = 2,
    ACTIONS(758), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(756), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9080] = 2,
    ACTIONS(758), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(756), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9098] = 2,
    ACTIONS(758), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(756), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9116] = 2,
    ACTIONS(758), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(756), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9134] = 2,
    ACTIONS(758), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(756), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9152] = 2,
    ACTIONS(766), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(764), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9170] = 2,
    ACTIONS(766), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(764), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9188] = 2,
    ACTIONS(766), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(764), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9206] = 2,
    ACTIONS(766), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(764), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9224] = 2,
    ACTIONS(766), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(764), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9242] = 2,
    ACTIONS(646), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(644), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9260] = 2,
    ACTIONS(646), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(644), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9278] = 2,
    ACTIONS(646), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(644), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9296] = 2,
    ACTIONS(646), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(644), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9314] = 2,
    ACTIONS(646), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(644), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9332] = 2,
    ACTIONS(774), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(772), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9350] = 2,
    ACTIONS(778), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(776), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9368] = 2,
    ACTIONS(782), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(780), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9386] = 2,
    ACTIONS(782), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(780), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9404] = 2,
    ACTIONS(782), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(780), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9422] = 2,
    ACTIONS(782), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(780), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9440] = 2,
    ACTIONS(782), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(780), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9458] = 2,
    ACTIONS(782), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(780), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9476] = 2,
    ACTIONS(778), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(776), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9494] = 2,
    ACTIONS(786), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(784), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9512] = 2,
    ACTIONS(778), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(776), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9530] = 2,
    ACTIONS(778), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(776), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9548] = 2,
    ACTIONS(782), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(780), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9566] = 2,
    ACTIONS(782), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(780), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9584] = 2,
    ACTIONS(782), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(780), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9602] = 2,
    ACTIONS(782), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(780), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9620] = 2,
    ACTIONS(782), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(780), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9638] = 2,
    ACTIONS(782), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(780), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9656] = 2,
    ACTIONS(778), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(776), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9674] = 2,
    ACTIONS(790), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(788), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9692] = 2,
    ACTIONS(790), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(788), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9710] = 2,
    ACTIONS(790), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(788), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9728] = 2,
    ACTIONS(790), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(788), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9746] = 2,
    ACTIONS(790), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(788), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9764] = 2,
    ACTIONS(790), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(788), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9782] = 2,
    ACTIONS(650), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(648), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9800] = 2,
    ACTIONS(650), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(648), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9818] = 2,
    ACTIONS(650), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(648), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9836] = 2,
    ACTIONS(650), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(648), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9854] = 2,
    ACTIONS(650), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(648), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9872] = 2,
    ACTIONS(650), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(648), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9890] = 2,
    ACTIONS(778), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(776), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9908] = 2,
    ACTIONS(794), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(792), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9926] = 2,
    ACTIONS(798), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(796), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9944] = 2,
    ACTIONS(802), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(800), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9962] = 2,
    ACTIONS(650), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(648), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9980] = 2,
    ACTIONS(650), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(648), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9998] = 2,
    ACTIONS(650), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(648), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10016] = 2,
    ACTIONS(650), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(648), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10034] = 2,
    ACTIONS(654), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(652), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10052] = 2,
    ACTIONS(650), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(648), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10070] = 2,
    ACTIONS(802), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(800), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10088] = 2,
    ACTIONS(806), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(804), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10106] = 2,
    ACTIONS(806), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(804), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10124] = 2,
    ACTIONS(806), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(804), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10142] = 2,
    ACTIONS(806), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(804), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10160] = 2,
    ACTIONS(806), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(804), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10178] = 2,
    ACTIONS(806), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(804), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10196] = 2,
    ACTIONS(802), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(800), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10214] = 2,
    ACTIONS(802), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(800), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10232] = 2,
    ACTIONS(810), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(808), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10250] = 2,
    ACTIONS(810), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(808), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10268] = 2,
    ACTIONS(810), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(808), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10286] = 2,
    ACTIONS(810), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(808), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10304] = 2,
    ACTIONS(810), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(808), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10322] = 2,
    ACTIONS(810), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(808), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10340] = 2,
    ACTIONS(802), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(800), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10358] = 2,
    ACTIONS(802), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(800), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10376] = 2,
    ACTIONS(778), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(776), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10394] = 2,
    ACTIONS(814), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(812), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10412] = 2,
    ACTIONS(778), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(776), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10430] = 2,
    ACTIONS(778), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(776), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10448] = 2,
    ACTIONS(778), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(776), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10466] = 2,
    ACTIONS(778), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(776), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10484] = 2,
    ACTIONS(818), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(816), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10502] = 2,
    ACTIONS(818), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(816), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10520] = 2,
    ACTIONS(818), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(816), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10538] = 2,
    ACTIONS(818), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(816), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10556] = 2,
    ACTIONS(818), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(816), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10574] = 2,
    ACTIONS(818), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(816), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10592] = 2,
    ACTIONS(778), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(776), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10610] = 2,
    ACTIONS(822), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(820), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10627] = 2,
    ACTIONS(826), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(824), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10644] = 2,
    ACTIONS(385), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(383), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10661] = 2,
    ACTIONS(566), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(564), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10678] = 2,
    ACTIONS(830), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(828), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10695] = 2,
    ACTIONS(834), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(832), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10712] = 2,
    ACTIONS(838), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(836), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10729] = 2,
    ACTIONS(586), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(584), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10746] = 2,
    ACTIONS(842), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(840), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10763] = 2,
    ACTIONS(846), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(844), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10780] = 2,
    ACTIONS(850), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(848), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10797] = 2,
    ACTIONS(854), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(852), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10814] = 2,
    ACTIONS(858), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(856), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10831] = 2,
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
  [10848] = 2,
    ACTIONS(862), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(860), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10865] = 2,
    ACTIONS(594), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(592), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [10882] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(864), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(868), 1,
      aux_sym_NL_token1,
    ACTIONS(870), 1,
      aux_sym_comment_token1,
    STATE(453), 1,
      sym_value,
    ACTIONS(866), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [10906] = 6,
    ACTIONS(874), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(876), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(878), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(872), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(386), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(491), 2,
      sym_script,
      sym_path,
  [10928] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(864), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(880), 1,
      aux_sym_NL_token1,
    ACTIONS(882), 1,
      aux_sym_comment_token1,
    STATE(460), 1,
      sym_value,
    ACTIONS(866), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [10952] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(864), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(884), 1,
      aux_sym_NL_token1,
    ACTIONS(886), 1,
      aux_sym_comment_token1,
    STATE(456), 1,
      sym_value,
    ACTIONS(866), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [10976] = 6,
    ACTIONS(874), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(876), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(878), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(872), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(386), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(452), 2,
      sym_script,
      sym_path,
  [10998] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(864), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(888), 1,
      aux_sym_comment_token1,
    STATE(463), 1,
      sym_value,
    ACTIONS(866), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11019] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(864), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(890), 1,
      aux_sym_comment_token1,
    STATE(455), 1,
      sym_value,
    ACTIONS(866), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11040] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(866), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(880), 1,
      aux_sym_NL_token1,
    STATE(460), 1,
      sym_value,
    ACTIONS(864), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11061] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(864), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(892), 1,
      aux_sym_comment_token1,
    STATE(467), 1,
      sym_value,
    ACTIONS(866), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11082] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(864), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(894), 1,
      aux_sym_comment_token1,
    STATE(489), 1,
      sym_value,
    ACTIONS(866), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11103] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(896), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(898), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(900), 1,
      aux_sym_WS_token1,
    ACTIONS(902), 1,
      aux_sym_NL_token1,
    STATE(417), 1,
      aux_sym_target_url_repeat1,
    STATE(389), 2,
      aux_sym__target_url_line,
      sym_variable,
  [11126] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(864), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(905), 1,
      aux_sym_comment_token1,
    STATE(445), 1,
      sym_value,
    ACTIONS(866), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11147] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(864), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(907), 1,
      aux_sym_comment_token1,
    STATE(484), 1,
      sym_value,
    ACTIONS(866), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11168] = 6,
    ACTIONS(912), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(915), 1,
      aux_sym_WS_token1,
    ACTIONS(917), 1,
      aux_sym_NL_token1,
    ACTIONS(919), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(909), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(383), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [11189] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(866), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(922), 1,
      aux_sym_NL_token1,
    STATE(497), 1,
      sym_value,
    ACTIONS(864), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11210] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(864), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(924), 1,
      aux_sym_comment_token1,
    STATE(482), 1,
      sym_value,
    ACTIONS(866), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11231] = 6,
    ACTIONS(876), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(928), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(930), 1,
      aux_sym_WS_token1,
    ACTIONS(932), 1,
      aux_sym_NL_token1,
    ACTIONS(926), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(383), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [11252] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(866), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(934), 1,
      aux_sym_NL_token1,
    STATE(475), 1,
      sym_value,
    ACTIONS(864), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11273] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(866), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(455), 1,
      sym_value,
    ACTIONS(864), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11291] = 6,
    ACTIONS(936), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(939), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(942), 1,
      aux_sym_WS_token1,
    ACTIONS(944), 1,
      aux_sym_NL_token1,
    ACTIONS(946), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(389), 2,
      aux_sym__target_url_line,
      sym_variable,
  [11311] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(951), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(953), 1,
      aux_sym_NL_token1,
    ACTIONS(949), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(397), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11329] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(866), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(490), 1,
      sym_value,
    ACTIONS(864), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11347] = 5,
    ACTIONS(874), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(876), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(441), 1,
      sym_path,
    ACTIONS(872), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(386), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [11365] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(866), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(454), 1,
      sym_value,
    ACTIONS(864), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11383] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(896), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(898), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(955), 1,
      aux_sym_WS_token1,
    ACTIONS(957), 1,
      aux_sym_NL_token1,
    STATE(389), 2,
      aux_sym__target_url_line,
      sym_variable,
  [11403] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(866), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(485), 1,
      sym_value,
    ACTIONS(864), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11421] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(866), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(479), 1,
      sym_value,
    ACTIONS(864), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11439] = 5,
    ACTIONS(962), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(965), 1,
      aux_sym_NL_token1,
    ACTIONS(967), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(959), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(397), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11457] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(866), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(483), 1,
      sym_value,
    ACTIONS(864), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11475] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(866), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(448), 1,
      sym_value,
    ACTIONS(864), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11493] = 5,
    ACTIONS(874), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(876), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      sym_path,
    ACTIONS(872), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(386), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [11511] = 2,
    ACTIONS(972), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(970), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [11522] = 5,
    ACTIONS(5), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(974), 1,
      aux_sym_WORD_CHAR_token1,
    STATE(440), 1,
      sym_target_url,
    STATE(380), 2,
      aux_sym__target_url_line,
      sym_variable,
  [11539] = 2,
    ACTIONS(978), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(976), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [11550] = 2,
    ACTIONS(982), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(980), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [11561] = 2,
    ACTIONS(986), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(984), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [11572] = 2,
    ACTIONS(972), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(970), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [11582] = 2,
    ACTIONS(982), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(980), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [11592] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(988), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(990), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(394), 2,
      aux_sym__target_url_line,
      sym_variable,
  [11606] = 2,
    ACTIONS(986), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(984), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [11616] = 2,
    ACTIONS(978), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(976), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [11626] = 2,
    ACTIONS(994), 1,
      aux_sym_NL_token1,
    ACTIONS(992), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [11634] = 3,
    ACTIONS(996), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(998), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(416), 1,
      aux_sym_script_repeat1,
  [11644] = 2,
    ACTIONS(1002), 1,
      aux_sym_NL_token1,
    ACTIONS(1000), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [11652] = 2,
    ACTIONS(1006), 1,
      aux_sym_NL_token1,
    ACTIONS(1004), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [11660] = 3,
    ACTIONS(1008), 1,
      aux_sym_WS_token1,
    ACTIONS(1010), 1,
      aux_sym_NL_token1,
    STATE(415), 1,
      aux_sym_target_url_repeat1,
  [11670] = 3,
    ACTIONS(1013), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(1015), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(418), 1,
      aux_sym_script_repeat1,
  [11680] = 3,
    ACTIONS(1017), 1,
      aux_sym_WS_token1,
    ACTIONS(1019), 1,
      aux_sym_NL_token1,
    STATE(415), 1,
      aux_sym_target_url_repeat1,
  [11690] = 3,
    ACTIONS(546), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(1022), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(418), 1,
      aux_sym_script_repeat1,
  [11700] = 2,
    ACTIONS(1027), 1,
      aux_sym_NL_token1,
    ACTIONS(1025), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [11708] = 2,
    ACTIONS(1031), 1,
      aux_sym_NL_token1,
    ACTIONS(1029), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [11716] = 2,
    ACTIONS(1033), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(116), 1,
      aux_sym_script_repeat1,
  [11723] = 2,
    ACTIONS(1035), 1,
      aux_sym_WS_token1,
    ACTIONS(1037), 1,
      anon_sym_AT2,
  [11730] = 2,
    ACTIONS(1039), 1,
      anon_sym_AT,
    ACTIONS(1041), 1,
      sym__not_comment,
  [11737] = 2,
    ACTIONS(1043), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(1045), 1,
      anon_sym_AT,
  [11744] = 2,
    ACTIONS(1047), 1,
      aux_sym_WS_token1,
    ACTIONS(1049), 1,
      sym_identifier,
  [11751] = 2,
    ACTIONS(1051), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(1053), 1,
      anon_sym_AT,
  [11758] = 2,
    ACTIONS(1055), 1,
      aux_sym_WS_token1,
    ACTIONS(1057), 1,
      anon_sym_COLON,
  [11765] = 2,
    ACTIONS(1059), 1,
      aux_sym_WS_token1,
    ACTIONS(1061), 1,
      aux_sym_NL_token1,
  [11772] = 2,
    ACTIONS(1063), 1,
      aux_sym_WS_token1,
    ACTIONS(1065), 1,
      anon_sym_RBRACE_RBRACE,
  [11779] = 2,
    ACTIONS(1067), 1,
      aux_sym_WS_token1,
    ACTIONS(1069), 1,
      anon_sym_RBRACE_RBRACE,
  [11786] = 2,
    ACTIONS(1071), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(109), 1,
      aux_sym_script_repeat1,
  [11793] = 2,
    ACTIONS(1073), 1,
      aux_sym_WS_token1,
    ACTIONS(1075), 1,
      anon_sym_RBRACE_RBRACE,
  [11800] = 1,
    ACTIONS(1077), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [11805] = 1,
    ACTIONS(1079), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [11810] = 2,
    ACTIONS(1081), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(120), 1,
      aux_sym_script_repeat1,
  [11817] = 2,
    ACTIONS(1083), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(1085), 1,
      anon_sym_AT,
  [11824] = 2,
    ACTIONS(1087), 1,
      aux_sym_WS_token1,
    ACTIONS(1089), 1,
      anon_sym_EQ,
  [11831] = 2,
    ACTIONS(1091), 1,
      aux_sym_WS_token1,
    ACTIONS(1093), 1,
      sym_identifier,
  [11838] = 2,
    ACTIONS(1095), 1,
      aux_sym_WS_token1,
    ACTIONS(1097), 1,
      anon_sym_RBRACE_RBRACE,
  [11845] = 2,
    ACTIONS(1099), 1,
      aux_sym_WS_token1,
    ACTIONS(1101), 1,
      aux_sym_NL_token1,
  [11852] = 1,
    ACTIONS(1103), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [11857] = 1,
    ACTIONS(1105), 1,
      sym_http_version,
  [11861] = 1,
    ACTIONS(1107), 1,
      aux_sym_NL_token1,
  [11865] = 1,
    ACTIONS(1109), 1,
      aux_sym_NL_token1,
  [11869] = 1,
    ACTIONS(1111), 1,
      aux_sym_NL_token1,
  [11873] = 1,
    ACTIONS(1113), 1,
      aux_sym_WS_token1,
  [11877] = 1,
    ACTIONS(1115), 1,
      aux_sym_NL_token1,
  [11881] = 1,
    ACTIONS(1117), 1,
      aux_sym_NL_token1,
  [11885] = 1,
    ACTIONS(1119), 1,
      anon_sym_COLON,
  [11889] = 1,
    ACTIONS(1041), 1,
      sym__not_comment,
  [11893] = 1,
    ACTIONS(1121), 1,
      sym_identifier,
  [11897] = 1,
    ACTIONS(1123), 1,
      aux_sym_NL_token1,
  [11901] = 1,
    ACTIONS(1125), 1,
      aux_sym_NL_token1,
  [11905] = 1,
    ACTIONS(1127), 1,
      aux_sym_NL_token1,
  [11909] = 1,
    ACTIONS(1129), 1,
      aux_sym_NL_token1,
  [11913] = 1,
    ACTIONS(1131), 1,
      aux_sym_NL_token1,
  [11917] = 1,
    ACTIONS(1133), 1,
      aux_sym__blank_line_token1,
  [11921] = 1,
    ACTIONS(1135), 1,
      aux_sym_NL_token1,
  [11925] = 1,
    ACTIONS(1137), 1,
      sym_status_text,
  [11929] = 1,
    ACTIONS(1139), 1,
      aux_sym_NL_token1,
  [11933] = 1,
    ACTIONS(1141), 1,
      aux_sym_LINE_TAIL_token1,
  [11937] = 1,
    ACTIONS(1143), 1,
      aux_sym_WS_token1,
  [11941] = 1,
    ACTIONS(1145), 1,
      aux_sym_NL_token1,
  [11945] = 1,
    ACTIONS(1147), 1,
      aux_sym_WS_token1,
  [11949] = 1,
    ACTIONS(1149), 1,
      sym_identifier,
  [11953] = 1,
    ACTIONS(1151), 1,
      sym_status_code,
  [11957] = 1,
    ACTIONS(1153), 1,
      aux_sym_NL_token1,
  [11961] = 1,
    ACTIONS(1155), 1,
      ts_builtin_sym_end,
  [11965] = 1,
    ACTIONS(1157), 1,
      sym_identifier,
  [11969] = 1,
    ACTIONS(1159), 1,
      aux_sym_WS_token1,
  [11973] = 1,
    ACTIONS(1161), 1,
      anon_sym_RBRACE_RBRACE,
  [11977] = 1,
    ACTIONS(1163), 1,
      aux_sym_WS_token1,
  [11981] = 1,
    ACTIONS(1165), 1,
      aux_sym_NL_token1,
  [11985] = 1,
    ACTIONS(1167), 1,
      aux_sym__blank_line_token1,
  [11989] = 1,
    ACTIONS(1169), 1,
      aux_sym_NL_token1,
  [11993] = 1,
    ACTIONS(1171), 1,
      sym_identifier,
  [11997] = 1,
    ACTIONS(1173), 1,
      aux_sym_WS_token1,
  [12001] = 1,
    ACTIONS(1175), 1,
      anon_sym_RBRACE_RBRACE,
  [12005] = 1,
    ACTIONS(1177), 1,
      aux_sym_NL_token1,
  [12009] = 1,
    ACTIONS(1179), 1,
      anon_sym_RBRACE_RBRACE,
  [12013] = 1,
    ACTIONS(1181), 1,
      aux_sym_NL_token1,
  [12017] = 1,
    ACTIONS(1183), 1,
      aux_sym_NL_token1,
  [12021] = 1,
    ACTIONS(1185), 1,
      aux_sym_NL_token1,
  [12025] = 1,
    ACTIONS(1187), 1,
      aux_sym_NL_token1,
  [12029] = 1,
    ACTIONS(1189), 1,
      aux_sym_NL_token1,
  [12033] = 1,
    ACTIONS(1191), 1,
      aux_sym__blank_line_token1,
  [12037] = 1,
    ACTIONS(1193), 1,
      sym_identifier,
  [12041] = 1,
    ACTIONS(1195), 1,
      anon_sym_EQ,
  [12045] = 1,
    ACTIONS(1197), 1,
      aux_sym_NL_token1,
  [12049] = 1,
    ACTIONS(1199), 1,
      aux_sym_NL_token1,
  [12053] = 1,
    ACTIONS(1201), 1,
      aux_sym_NL_token1,
  [12057] = 1,
    ACTIONS(1203), 1,
      sym_identifier,
  [12061] = 1,
    ACTIONS(1205), 1,
      sym_identifier,
  [12065] = 1,
    ACTIONS(1207), 1,
      sym_identifier,
  [12069] = 1,
    ACTIONS(1209), 1,
      aux_sym_NL_token1,
  [12073] = 1,
    ACTIONS(1211), 1,
      anon_sym_RBRACE_RBRACE,
  [12077] = 1,
    ACTIONS(1213), 1,
      aux_sym_NL_token1,
  [12081] = 1,
    ACTIONS(1215), 1,
      anon_sym_AT,
  [12085] = 1,
    ACTIONS(1217), 1,
      sym_identifier,
  [12089] = 1,
    ACTIONS(1219), 1,
      aux_sym_WS_token1,
  [12093] = 1,
    ACTIONS(1221), 1,
      sym_http_version,
  [12097] = 1,
    ACTIONS(1039), 1,
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
  [SMALL_STATE(71)] = 4817,
  [SMALL_STATE(72)] = 4849,
  [SMALL_STATE(73)] = 4890,
  [SMALL_STATE(74)] = 4931,
  [SMALL_STATE(75)] = 4972,
  [SMALL_STATE(76)] = 4996,
  [SMALL_STATE(77)] = 5020,
  [SMALL_STATE(78)] = 5044,
  [SMALL_STATE(79)] = 5068,
  [SMALL_STATE(80)] = 5103,
  [SMALL_STATE(81)] = 5138,
  [SMALL_STATE(82)] = 5173,
  [SMALL_STATE(83)] = 5208,
  [SMALL_STATE(84)] = 5243,
  [SMALL_STATE(85)] = 5278,
  [SMALL_STATE(86)] = 5313,
  [SMALL_STATE(87)] = 5348,
  [SMALL_STATE(88)] = 5383,
  [SMALL_STATE(89)] = 5418,
  [SMALL_STATE(90)] = 5453,
  [SMALL_STATE(91)] = 5488,
  [SMALL_STATE(92)] = 5519,
  [SMALL_STATE(93)] = 5554,
  [SMALL_STATE(94)] = 5589,
  [SMALL_STATE(95)] = 5624,
  [SMALL_STATE(96)] = 5659,
  [SMALL_STATE(97)] = 5694,
  [SMALL_STATE(98)] = 5729,
  [SMALL_STATE(99)] = 5764,
  [SMALL_STATE(100)] = 5799,
  [SMALL_STATE(101)] = 5834,
  [SMALL_STATE(102)] = 5869,
  [SMALL_STATE(103)] = 5904,
  [SMALL_STATE(104)] = 5939,
  [SMALL_STATE(105)] = 5973,
  [SMALL_STATE(106)] = 6007,
  [SMALL_STATE(107)] = 6041,
  [SMALL_STATE(108)] = 6072,
  [SMALL_STATE(109)] = 6103,
  [SMALL_STATE(110)] = 6128,
  [SMALL_STATE(111)] = 6153,
  [SMALL_STATE(112)] = 6180,
  [SMALL_STATE(113)] = 6200,
  [SMALL_STATE(114)] = 6220,
  [SMALL_STATE(115)] = 6244,
  [SMALL_STATE(116)] = 6268,
  [SMALL_STATE(117)] = 6292,
  [SMALL_STATE(118)] = 6312,
  [SMALL_STATE(119)] = 6332,
  [SMALL_STATE(120)] = 6352,
  [SMALL_STATE(121)] = 6376,
  [SMALL_STATE(122)] = 6396,
  [SMALL_STATE(123)] = 6420,
  [SMALL_STATE(124)] = 6440,
  [SMALL_STATE(125)] = 6464,
  [SMALL_STATE(126)] = 6484,
  [SMALL_STATE(127)] = 6504,
  [SMALL_STATE(128)] = 6524,
  [SMALL_STATE(129)] = 6548,
  [SMALL_STATE(130)] = 6567,
  [SMALL_STATE(131)] = 6586,
  [SMALL_STATE(132)] = 6605,
  [SMALL_STATE(133)] = 6624,
  [SMALL_STATE(134)] = 6643,
  [SMALL_STATE(135)] = 6662,
  [SMALL_STATE(136)] = 6681,
  [SMALL_STATE(137)] = 6700,
  [SMALL_STATE(138)] = 6719,
  [SMALL_STATE(139)] = 6738,
  [SMALL_STATE(140)] = 6757,
  [SMALL_STATE(141)] = 6776,
  [SMALL_STATE(142)] = 6794,
  [SMALL_STATE(143)] = 6812,
  [SMALL_STATE(144)] = 6830,
  [SMALL_STATE(145)] = 6848,
  [SMALL_STATE(146)] = 6866,
  [SMALL_STATE(147)] = 6884,
  [SMALL_STATE(148)] = 6902,
  [SMALL_STATE(149)] = 6920,
  [SMALL_STATE(150)] = 6938,
  [SMALL_STATE(151)] = 6956,
  [SMALL_STATE(152)] = 6974,
  [SMALL_STATE(153)] = 6992,
  [SMALL_STATE(154)] = 7010,
  [SMALL_STATE(155)] = 7028,
  [SMALL_STATE(156)] = 7046,
  [SMALL_STATE(157)] = 7064,
  [SMALL_STATE(158)] = 7082,
  [SMALL_STATE(159)] = 7100,
  [SMALL_STATE(160)] = 7118,
  [SMALL_STATE(161)] = 7136,
  [SMALL_STATE(162)] = 7154,
  [SMALL_STATE(163)] = 7172,
  [SMALL_STATE(164)] = 7190,
  [SMALL_STATE(165)] = 7208,
  [SMALL_STATE(166)] = 7226,
  [SMALL_STATE(167)] = 7244,
  [SMALL_STATE(168)] = 7262,
  [SMALL_STATE(169)] = 7280,
  [SMALL_STATE(170)] = 7298,
  [SMALL_STATE(171)] = 7316,
  [SMALL_STATE(172)] = 7334,
  [SMALL_STATE(173)] = 7352,
  [SMALL_STATE(174)] = 7370,
  [SMALL_STATE(175)] = 7388,
  [SMALL_STATE(176)] = 7406,
  [SMALL_STATE(177)] = 7424,
  [SMALL_STATE(178)] = 7442,
  [SMALL_STATE(179)] = 7460,
  [SMALL_STATE(180)] = 7478,
  [SMALL_STATE(181)] = 7496,
  [SMALL_STATE(182)] = 7514,
  [SMALL_STATE(183)] = 7532,
  [SMALL_STATE(184)] = 7550,
  [SMALL_STATE(185)] = 7568,
  [SMALL_STATE(186)] = 7586,
  [SMALL_STATE(187)] = 7604,
  [SMALL_STATE(188)] = 7622,
  [SMALL_STATE(189)] = 7640,
  [SMALL_STATE(190)] = 7658,
  [SMALL_STATE(191)] = 7676,
  [SMALL_STATE(192)] = 7694,
  [SMALL_STATE(193)] = 7712,
  [SMALL_STATE(194)] = 7730,
  [SMALL_STATE(195)] = 7748,
  [SMALL_STATE(196)] = 7766,
  [SMALL_STATE(197)] = 7784,
  [SMALL_STATE(198)] = 7802,
  [SMALL_STATE(199)] = 7820,
  [SMALL_STATE(200)] = 7838,
  [SMALL_STATE(201)] = 7856,
  [SMALL_STATE(202)] = 7874,
  [SMALL_STATE(203)] = 7892,
  [SMALL_STATE(204)] = 7910,
  [SMALL_STATE(205)] = 7928,
  [SMALL_STATE(206)] = 7946,
  [SMALL_STATE(207)] = 7964,
  [SMALL_STATE(208)] = 7982,
  [SMALL_STATE(209)] = 8000,
  [SMALL_STATE(210)] = 8018,
  [SMALL_STATE(211)] = 8036,
  [SMALL_STATE(212)] = 8054,
  [SMALL_STATE(213)] = 8072,
  [SMALL_STATE(214)] = 8090,
  [SMALL_STATE(215)] = 8108,
  [SMALL_STATE(216)] = 8126,
  [SMALL_STATE(217)] = 8144,
  [SMALL_STATE(218)] = 8162,
  [SMALL_STATE(219)] = 8180,
  [SMALL_STATE(220)] = 8198,
  [SMALL_STATE(221)] = 8216,
  [SMALL_STATE(222)] = 8234,
  [SMALL_STATE(223)] = 8252,
  [SMALL_STATE(224)] = 8270,
  [SMALL_STATE(225)] = 8288,
  [SMALL_STATE(226)] = 8306,
  [SMALL_STATE(227)] = 8324,
  [SMALL_STATE(228)] = 8342,
  [SMALL_STATE(229)] = 8360,
  [SMALL_STATE(230)] = 8378,
  [SMALL_STATE(231)] = 8396,
  [SMALL_STATE(232)] = 8414,
  [SMALL_STATE(233)] = 8432,
  [SMALL_STATE(234)] = 8450,
  [SMALL_STATE(235)] = 8468,
  [SMALL_STATE(236)] = 8486,
  [SMALL_STATE(237)] = 8504,
  [SMALL_STATE(238)] = 8522,
  [SMALL_STATE(239)] = 8540,
  [SMALL_STATE(240)] = 8558,
  [SMALL_STATE(241)] = 8576,
  [SMALL_STATE(242)] = 8594,
  [SMALL_STATE(243)] = 8612,
  [SMALL_STATE(244)] = 8630,
  [SMALL_STATE(245)] = 8648,
  [SMALL_STATE(246)] = 8666,
  [SMALL_STATE(247)] = 8684,
  [SMALL_STATE(248)] = 8702,
  [SMALL_STATE(249)] = 8720,
  [SMALL_STATE(250)] = 8738,
  [SMALL_STATE(251)] = 8756,
  [SMALL_STATE(252)] = 8774,
  [SMALL_STATE(253)] = 8792,
  [SMALL_STATE(254)] = 8810,
  [SMALL_STATE(255)] = 8828,
  [SMALL_STATE(256)] = 8846,
  [SMALL_STATE(257)] = 8864,
  [SMALL_STATE(258)] = 8882,
  [SMALL_STATE(259)] = 8900,
  [SMALL_STATE(260)] = 8918,
  [SMALL_STATE(261)] = 8936,
  [SMALL_STATE(262)] = 8954,
  [SMALL_STATE(263)] = 8972,
  [SMALL_STATE(264)] = 8990,
  [SMALL_STATE(265)] = 9008,
  [SMALL_STATE(266)] = 9026,
  [SMALL_STATE(267)] = 9044,
  [SMALL_STATE(268)] = 9062,
  [SMALL_STATE(269)] = 9080,
  [SMALL_STATE(270)] = 9098,
  [SMALL_STATE(271)] = 9116,
  [SMALL_STATE(272)] = 9134,
  [SMALL_STATE(273)] = 9152,
  [SMALL_STATE(274)] = 9170,
  [SMALL_STATE(275)] = 9188,
  [SMALL_STATE(276)] = 9206,
  [SMALL_STATE(277)] = 9224,
  [SMALL_STATE(278)] = 9242,
  [SMALL_STATE(279)] = 9260,
  [SMALL_STATE(280)] = 9278,
  [SMALL_STATE(281)] = 9296,
  [SMALL_STATE(282)] = 9314,
  [SMALL_STATE(283)] = 9332,
  [SMALL_STATE(284)] = 9350,
  [SMALL_STATE(285)] = 9368,
  [SMALL_STATE(286)] = 9386,
  [SMALL_STATE(287)] = 9404,
  [SMALL_STATE(288)] = 9422,
  [SMALL_STATE(289)] = 9440,
  [SMALL_STATE(290)] = 9458,
  [SMALL_STATE(291)] = 9476,
  [SMALL_STATE(292)] = 9494,
  [SMALL_STATE(293)] = 9512,
  [SMALL_STATE(294)] = 9530,
  [SMALL_STATE(295)] = 9548,
  [SMALL_STATE(296)] = 9566,
  [SMALL_STATE(297)] = 9584,
  [SMALL_STATE(298)] = 9602,
  [SMALL_STATE(299)] = 9620,
  [SMALL_STATE(300)] = 9638,
  [SMALL_STATE(301)] = 9656,
  [SMALL_STATE(302)] = 9674,
  [SMALL_STATE(303)] = 9692,
  [SMALL_STATE(304)] = 9710,
  [SMALL_STATE(305)] = 9728,
  [SMALL_STATE(306)] = 9746,
  [SMALL_STATE(307)] = 9764,
  [SMALL_STATE(308)] = 9782,
  [SMALL_STATE(309)] = 9800,
  [SMALL_STATE(310)] = 9818,
  [SMALL_STATE(311)] = 9836,
  [SMALL_STATE(312)] = 9854,
  [SMALL_STATE(313)] = 9872,
  [SMALL_STATE(314)] = 9890,
  [SMALL_STATE(315)] = 9908,
  [SMALL_STATE(316)] = 9926,
  [SMALL_STATE(317)] = 9944,
  [SMALL_STATE(318)] = 9962,
  [SMALL_STATE(319)] = 9980,
  [SMALL_STATE(320)] = 9998,
  [SMALL_STATE(321)] = 10016,
  [SMALL_STATE(322)] = 10034,
  [SMALL_STATE(323)] = 10052,
  [SMALL_STATE(324)] = 10070,
  [SMALL_STATE(325)] = 10088,
  [SMALL_STATE(326)] = 10106,
  [SMALL_STATE(327)] = 10124,
  [SMALL_STATE(328)] = 10142,
  [SMALL_STATE(329)] = 10160,
  [SMALL_STATE(330)] = 10178,
  [SMALL_STATE(331)] = 10196,
  [SMALL_STATE(332)] = 10214,
  [SMALL_STATE(333)] = 10232,
  [SMALL_STATE(334)] = 10250,
  [SMALL_STATE(335)] = 10268,
  [SMALL_STATE(336)] = 10286,
  [SMALL_STATE(337)] = 10304,
  [SMALL_STATE(338)] = 10322,
  [SMALL_STATE(339)] = 10340,
  [SMALL_STATE(340)] = 10358,
  [SMALL_STATE(341)] = 10376,
  [SMALL_STATE(342)] = 10394,
  [SMALL_STATE(343)] = 10412,
  [SMALL_STATE(344)] = 10430,
  [SMALL_STATE(345)] = 10448,
  [SMALL_STATE(346)] = 10466,
  [SMALL_STATE(347)] = 10484,
  [SMALL_STATE(348)] = 10502,
  [SMALL_STATE(349)] = 10520,
  [SMALL_STATE(350)] = 10538,
  [SMALL_STATE(351)] = 10556,
  [SMALL_STATE(352)] = 10574,
  [SMALL_STATE(353)] = 10592,
  [SMALL_STATE(354)] = 10610,
  [SMALL_STATE(355)] = 10627,
  [SMALL_STATE(356)] = 10644,
  [SMALL_STATE(357)] = 10661,
  [SMALL_STATE(358)] = 10678,
  [SMALL_STATE(359)] = 10695,
  [SMALL_STATE(360)] = 10712,
  [SMALL_STATE(361)] = 10729,
  [SMALL_STATE(362)] = 10746,
  [SMALL_STATE(363)] = 10763,
  [SMALL_STATE(364)] = 10780,
  [SMALL_STATE(365)] = 10797,
  [SMALL_STATE(366)] = 10814,
  [SMALL_STATE(367)] = 10831,
  [SMALL_STATE(368)] = 10848,
  [SMALL_STATE(369)] = 10865,
  [SMALL_STATE(370)] = 10882,
  [SMALL_STATE(371)] = 10906,
  [SMALL_STATE(372)] = 10928,
  [SMALL_STATE(373)] = 10952,
  [SMALL_STATE(374)] = 10976,
  [SMALL_STATE(375)] = 10998,
  [SMALL_STATE(376)] = 11019,
  [SMALL_STATE(377)] = 11040,
  [SMALL_STATE(378)] = 11061,
  [SMALL_STATE(379)] = 11082,
  [SMALL_STATE(380)] = 11103,
  [SMALL_STATE(381)] = 11126,
  [SMALL_STATE(382)] = 11147,
  [SMALL_STATE(383)] = 11168,
  [SMALL_STATE(384)] = 11189,
  [SMALL_STATE(385)] = 11210,
  [SMALL_STATE(386)] = 11231,
  [SMALL_STATE(387)] = 11252,
  [SMALL_STATE(388)] = 11273,
  [SMALL_STATE(389)] = 11291,
  [SMALL_STATE(390)] = 11311,
  [SMALL_STATE(391)] = 11329,
  [SMALL_STATE(392)] = 11347,
  [SMALL_STATE(393)] = 11365,
  [SMALL_STATE(394)] = 11383,
  [SMALL_STATE(395)] = 11403,
  [SMALL_STATE(396)] = 11421,
  [SMALL_STATE(397)] = 11439,
  [SMALL_STATE(398)] = 11457,
  [SMALL_STATE(399)] = 11475,
  [SMALL_STATE(400)] = 11493,
  [SMALL_STATE(401)] = 11511,
  [SMALL_STATE(402)] = 11522,
  [SMALL_STATE(403)] = 11539,
  [SMALL_STATE(404)] = 11550,
  [SMALL_STATE(405)] = 11561,
  [SMALL_STATE(406)] = 11572,
  [SMALL_STATE(407)] = 11582,
  [SMALL_STATE(408)] = 11592,
  [SMALL_STATE(409)] = 11606,
  [SMALL_STATE(410)] = 11616,
  [SMALL_STATE(411)] = 11626,
  [SMALL_STATE(412)] = 11634,
  [SMALL_STATE(413)] = 11644,
  [SMALL_STATE(414)] = 11652,
  [SMALL_STATE(415)] = 11660,
  [SMALL_STATE(416)] = 11670,
  [SMALL_STATE(417)] = 11680,
  [SMALL_STATE(418)] = 11690,
  [SMALL_STATE(419)] = 11700,
  [SMALL_STATE(420)] = 11708,
  [SMALL_STATE(421)] = 11716,
  [SMALL_STATE(422)] = 11723,
  [SMALL_STATE(423)] = 11730,
  [SMALL_STATE(424)] = 11737,
  [SMALL_STATE(425)] = 11744,
  [SMALL_STATE(426)] = 11751,
  [SMALL_STATE(427)] = 11758,
  [SMALL_STATE(428)] = 11765,
  [SMALL_STATE(429)] = 11772,
  [SMALL_STATE(430)] = 11779,
  [SMALL_STATE(431)] = 11786,
  [SMALL_STATE(432)] = 11793,
  [SMALL_STATE(433)] = 11800,
  [SMALL_STATE(434)] = 11805,
  [SMALL_STATE(435)] = 11810,
  [SMALL_STATE(436)] = 11817,
  [SMALL_STATE(437)] = 11824,
  [SMALL_STATE(438)] = 11831,
  [SMALL_STATE(439)] = 11838,
  [SMALL_STATE(440)] = 11845,
  [SMALL_STATE(441)] = 11852,
  [SMALL_STATE(442)] = 11857,
  [SMALL_STATE(443)] = 11861,
  [SMALL_STATE(444)] = 11865,
  [SMALL_STATE(445)] = 11869,
  [SMALL_STATE(446)] = 11873,
  [SMALL_STATE(447)] = 11877,
  [SMALL_STATE(448)] = 11881,
  [SMALL_STATE(449)] = 11885,
  [SMALL_STATE(450)] = 11889,
  [SMALL_STATE(451)] = 11893,
  [SMALL_STATE(452)] = 11897,
  [SMALL_STATE(453)] = 11901,
  [SMALL_STATE(454)] = 11905,
  [SMALL_STATE(455)] = 11909,
  [SMALL_STATE(456)] = 11913,
  [SMALL_STATE(457)] = 11917,
  [SMALL_STATE(458)] = 11921,
  [SMALL_STATE(459)] = 11925,
  [SMALL_STATE(460)] = 11929,
  [SMALL_STATE(461)] = 11933,
  [SMALL_STATE(462)] = 11937,
  [SMALL_STATE(463)] = 11941,
  [SMALL_STATE(464)] = 11945,
  [SMALL_STATE(465)] = 11949,
  [SMALL_STATE(466)] = 11953,
  [SMALL_STATE(467)] = 11957,
  [SMALL_STATE(468)] = 11961,
  [SMALL_STATE(469)] = 11965,
  [SMALL_STATE(470)] = 11969,
  [SMALL_STATE(471)] = 11973,
  [SMALL_STATE(472)] = 11977,
  [SMALL_STATE(473)] = 11981,
  [SMALL_STATE(474)] = 11985,
  [SMALL_STATE(475)] = 11989,
  [SMALL_STATE(476)] = 11993,
  [SMALL_STATE(477)] = 11997,
  [SMALL_STATE(478)] = 12001,
  [SMALL_STATE(479)] = 12005,
  [SMALL_STATE(480)] = 12009,
  [SMALL_STATE(481)] = 12013,
  [SMALL_STATE(482)] = 12017,
  [SMALL_STATE(483)] = 12021,
  [SMALL_STATE(484)] = 12025,
  [SMALL_STATE(485)] = 12029,
  [SMALL_STATE(486)] = 12033,
  [SMALL_STATE(487)] = 12037,
  [SMALL_STATE(488)] = 12041,
  [SMALL_STATE(489)] = 12045,
  [SMALL_STATE(490)] = 12049,
  [SMALL_STATE(491)] = 12053,
  [SMALL_STATE(492)] = 12057,
  [SMALL_STATE(493)] = 12061,
  [SMALL_STATE(494)] = 12065,
  [SMALL_STATE(495)] = 12069,
  [SMALL_STATE(496)] = 12073,
  [SMALL_STATE(497)] = 12077,
  [SMALL_STATE(498)] = 12081,
  [SMALL_STATE(499)] = 12085,
  [SMALL_STATE(500)] = 12089,
  [SMALL_STATE(501)] = 12093,
  [SMALL_STATE(502)] = 12097,
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
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
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
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
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
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 23),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 23),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 12),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 12),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 10),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 10),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 0),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 0), SHIFT_REPEAT(502),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 0), SHIFT_REPEAT(502),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(380),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(457),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(424),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(424),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(472),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(425),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(470),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(469),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(70),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0), SHIFT_REPEAT(474),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0), SHIFT_REPEAT(71),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(486),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(422),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 6, 0, 27),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 6, 0, 27),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 4, 0, 11),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 4, 0, 11),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 7, 0, 40),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 7, 0, 40),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 24),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 24),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 13),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 13),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 48),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 48),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 37),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 37),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 28),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 28),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 35),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 35),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 18),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 18),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(426),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(426),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 60),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 60),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 42),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 42),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 16),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 16),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 21),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 21),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 8),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 8),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 2),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 2), SHIFT(498),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 2), SHIFT(498),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__section_content_repeat2, 2, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__section_content_repeat2, 2, 0, 0),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__section_content_repeat2, 2, 0, 0), SHIFT_REPEAT(498),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_content_repeat2, 2, 0, 0), SHIFT_REPEAT(498),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_content_repeat2, 2, 0, 0), SHIFT_REPEAT(500),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 2, 0, 2),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 2, 0, 2),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 2, 0, 2), SHIFT(498),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 2, 0, 2), SHIFT(498),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(450),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(450),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 2, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(450),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(450),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14), SHIFT_REPEAT(427),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4, 0, 11),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4, 0, 11),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__section_content_repeat1, 2, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__section_content_repeat1, 2, 0, 0),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__section_content_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 7, 0, 40),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 7, 0, 40),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 2, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 2, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6, 0, 27),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6, 0, 27),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__section_content_repeat2, 1, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__section_content_repeat2, 1, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 19),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 19),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 19),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 19),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 19),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 19),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 56),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, 0, 56),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 30),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 30),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 1, 0, 7),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 1, 0, 7),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 44),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 44),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 65),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 65),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 53),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 53),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 22),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 22),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 12, 0, 76),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 12, 0, 76),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 20),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 20),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__external_body, 2, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__external_body, 2, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 73),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 73),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 75),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 75),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 74),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 74),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 25),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 25),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 72),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 72),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 1, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 29),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 29),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 15),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 15),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 31),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 31),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 71),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 71),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 32),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 32),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 33),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 33),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 70),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 70),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 3, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 3, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 68),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 68),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 36),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 36),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 69),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 69),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 38),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 38),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 41),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 41),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 43),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 43),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 67),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 67),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 45),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 45),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 46),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 46),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 66),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 66),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 47),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 47),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 49),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 49),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 62),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 62),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 50),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 50),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 51),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 51),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 52),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 52),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 54),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 54),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 64),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 64),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 63),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 63),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 55),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 55),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 57),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 57),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 59),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 59),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 61),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 61),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 5),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 5),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 2, 0, 0),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 2, 0, 0),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 1),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 1),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, 0, 39),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, 0, 39),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 26),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 26),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 2, 0, 3),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 2, 0, 3),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 3),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, 0, 3),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 4, 0, 9),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 4, 0, 9),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 17),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 17),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1, 0, 0),
  [902] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_target_url, 1, 0, 0), SHIFT(464),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [909] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [912] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(389),
  [939] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(389),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_url_line, 2, 0, 0),
  [946] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(425),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [959] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [962] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [967] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 6),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 6),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 11),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 11),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 11),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 11),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 6),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 6),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0),
  [1010] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0), SHIFT_REPEAT(464),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0),
  [1019] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0), SHIFT(464),
  [1022] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(418),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, 0, 34),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, 0, 58),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 4, 0, 0),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 3, 0, 0),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
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
