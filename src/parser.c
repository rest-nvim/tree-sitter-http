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
#define STATE_COUNT 240
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 1
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 25

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_comment = 2,
  sym_method = 3,
  anon_sym_COLON = 4,
  aux_sym_port_token1 = 5,
  anon_sym_SLASH = 6,
  anon_sym_about = 7,
  anon_sym_acct = 8,
  anon_sym_arcp = 9,
  anon_sym_cap = 10,
  anon_sym_cid = 11,
  anon_sym_coap_PLUStcp = 12,
  anon_sym_coap_PLUSws = 13,
  anon_sym_coaps_PLUStcp = 14,
  anon_sym_coaps_PLUSws = 15,
  anon_sym_data = 16,
  anon_sym_dns = 17,
  anon_sym_example = 18,
  anon_sym_file = 19,
  anon_sym_ftp = 20,
  anon_sym_geo = 21,
  anon_sym_h323 = 22,
  anon_sym_http = 23,
  anon_sym_https = 24,
  anon_sym_im = 25,
  anon_sym_info = 26,
  anon_sym_ipp = 27,
  anon_sym_mailto = 28,
  anon_sym_mid = 29,
  anon_sym_ni = 30,
  anon_sym_nih = 31,
  anon_sym_payto = 32,
  anon_sym_pkcs11 = 33,
  anon_sym_pres = 34,
  anon_sym_reload = 35,
  anon_sym_secret_DASHtoken = 36,
  anon_sym_session = 37,
  anon_sym_sms = 38,
  anon_sym_tag = 39,
  anon_sym_telnet = 40,
  anon_sym_urn = 41,
  anon_sym_ws = 42,
  anon_sym_wss = 43,
  anon_sym_AT = 44,
  anon_sym_HTTP_SLASH = 45,
  aux_sym_http_version_token1 = 46,
  anon_sym_POUND = 47,
  anon_sym_COLON_SLASH_SLASH = 48,
  anon_sym_QMARK = 49,
  sym_status_code = 50,
  sym_status_text = 51,
  aux_sym_request_token1 = 52,
  anon_sym_AMP = 53,
  anon_sym_EQ = 54,
  aux_sym_header_token1 = 55,
  aux_sym_header_token2 = 56,
  anon_sym_LBRACE_LBRACE = 57,
  anon_sym_RBRACE_RBRACE = 58,
  aux_sym_script_variable_token1 = 59,
  aux_sym_script_variable_token2 = 60,
  aux_sym_xml_body_token1 = 61,
  aux_sym_xml_body_token2 = 62,
  aux_sym_xml_body_token3 = 63,
  aux_sym_json_body_token1 = 64,
  aux_sym_json_body_token2 = 65,
  aux_sym_json_body_token3 = 66,
  aux_sym_json_body_token4 = 67,
  anon_sym_query = 68,
  anon_sym_mutation = 69,
  anon_sym_LPAREN = 70,
  anon_sym_LT = 71,
  sym_query_key = 72,
  sym_param = 73,
  sym_number = 74,
  sym_string = 75,
  anon_sym_true = 76,
  anon_sym_false = 77,
  aux_sym__whitespace_token1 = 78,
  aux_sym__newline_token1 = 79,
  sym__line = 80,
  sym_document = 81,
  sym_host = 82,
  sym_port = 83,
  sym_path = 84,
  sym_scheme = 85,
  sym_authority = 86,
  sym_http_version = 87,
  sym_target_url = 88,
  sym_response = 89,
  sym_request = 90,
  sym_pair = 91,
  sym_query_param = 92,
  sym_fragment = 93,
  sym_host_url = 94,
  sym_header = 95,
  sym_variable = 96,
  sym_script_variable = 97,
  sym_variable_declaration = 98,
  sym_xml_body = 99,
  sym_json_body = 100,
  sym_graphql_body = 101,
  sym_external_body = 102,
  sym_form_data = 103,
  sym_boolean = 104,
  aux_sym__whitespace = 105,
  aux_sym_document_repeat1 = 106,
  aux_sym_path_repeat1 = 107,
  aux_sym_target_url_repeat1 = 108,
  aux_sym_request_repeat1 = 109,
  aux_sym_request_repeat2 = 110,
  aux_sym_script_variable_repeat1 = 111,
  aux_sym_form_data_repeat1 = 112,
  aux_sym_form_data_repeat2 = 113,
  alias_sym_name = 114,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_method] = "method",
  [anon_sym_COLON] = ":",
  [aux_sym_port_token1] = "port_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_about] = "about",
  [anon_sym_acct] = "acct",
  [anon_sym_arcp] = "arcp",
  [anon_sym_cap] = "cap",
  [anon_sym_cid] = "cid",
  [anon_sym_coap_PLUStcp] = "coap+tcp",
  [anon_sym_coap_PLUSws] = "coap+ws",
  [anon_sym_coaps_PLUStcp] = "coaps+tcp",
  [anon_sym_coaps_PLUSws] = "coaps+ws",
  [anon_sym_data] = "data",
  [anon_sym_dns] = "dns",
  [anon_sym_example] = "example",
  [anon_sym_file] = "file",
  [anon_sym_ftp] = "ftp",
  [anon_sym_geo] = "geo",
  [anon_sym_h323] = "h323",
  [anon_sym_http] = "http",
  [anon_sym_https] = "https",
  [anon_sym_im] = "im",
  [anon_sym_info] = "info",
  [anon_sym_ipp] = "ipp",
  [anon_sym_mailto] = "mailto",
  [anon_sym_mid] = "mid",
  [anon_sym_ni] = "ni",
  [anon_sym_nih] = "nih",
  [anon_sym_payto] = "payto",
  [anon_sym_pkcs11] = "pkcs11",
  [anon_sym_pres] = "pres",
  [anon_sym_reload] = "reload",
  [anon_sym_secret_DASHtoken] = "secret-token",
  [anon_sym_session] = "session",
  [anon_sym_sms] = "sms",
  [anon_sym_tag] = "tag",
  [anon_sym_telnet] = "telnet",
  [anon_sym_urn] = "urn",
  [anon_sym_ws] = "ws",
  [anon_sym_wss] = "wss",
  [anon_sym_AT] = "@",
  [anon_sym_HTTP_SLASH] = "HTTP/",
  [aux_sym_http_version_token1] = "http_version_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_COLON_SLASH_SLASH] = "://",
  [anon_sym_QMARK] = "\?",
  [sym_status_code] = "status_code",
  [sym_status_text] = "status_text",
  [aux_sym_request_token1] = "request_token1",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
  [aux_sym_header_token1] = "value",
  [aux_sym_header_token2] = "value",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym_script_variable_token1] = "script_variable_token1",
  [aux_sym_script_variable_token2] = "script_variable_token2",
  [aux_sym_xml_body_token1] = "xml_body_token1",
  [aux_sym_xml_body_token2] = "xml_body_token2",
  [aux_sym_xml_body_token3] = "xml_body_token3",
  [aux_sym_json_body_token1] = "json_body_token1",
  [aux_sym_json_body_token2] = "json_body_token2",
  [aux_sym_json_body_token3] = "json_body_token3",
  [aux_sym_json_body_token4] = "json_body_token4",
  [anon_sym_query] = "query",
  [anon_sym_mutation] = "mutation",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LT] = "<",
  [sym_query_key] = "key",
  [sym_param] = "value",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [aux_sym__newline_token1] = "_newline_token1",
  [sym__line] = "_line",
  [sym_document] = "document",
  [sym_host] = "host",
  [sym_port] = "port",
  [sym_path] = "path",
  [sym_scheme] = "scheme",
  [sym_authority] = "authority",
  [sym_http_version] = "http_version",
  [sym_target_url] = "target_url",
  [sym_response] = "response",
  [sym_request] = "request",
  [sym_pair] = "pair",
  [sym_query_param] = "query_param",
  [sym_fragment] = "fragment",
  [sym_host_url] = "value",
  [sym_header] = "header",
  [sym_variable] = "variable",
  [sym_script_variable] = "script_variable",
  [sym_variable_declaration] = "variable_declaration",
  [sym_xml_body] = "xml_body",
  [sym_json_body] = "json_body",
  [sym_graphql_body] = "graphql_body",
  [sym_external_body] = "external_body",
  [sym_form_data] = "form_data",
  [sym_boolean] = "boolean",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_target_url_repeat1] = "target_url_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_script_variable_repeat1] = "script_variable_repeat1",
  [aux_sym_form_data_repeat1] = "form_data_repeat1",
  [aux_sym_form_data_repeat2] = "form_data_repeat2",
  [alias_sym_name] = "name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_method] = sym_method,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_port_token1] = aux_sym_port_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_about] = anon_sym_about,
  [anon_sym_acct] = anon_sym_acct,
  [anon_sym_arcp] = anon_sym_arcp,
  [anon_sym_cap] = anon_sym_cap,
  [anon_sym_cid] = anon_sym_cid,
  [anon_sym_coap_PLUStcp] = anon_sym_coap_PLUStcp,
  [anon_sym_coap_PLUSws] = anon_sym_coap_PLUSws,
  [anon_sym_coaps_PLUStcp] = anon_sym_coaps_PLUStcp,
  [anon_sym_coaps_PLUSws] = anon_sym_coaps_PLUSws,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_dns] = anon_sym_dns,
  [anon_sym_example] = anon_sym_example,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_ftp] = anon_sym_ftp,
  [anon_sym_geo] = anon_sym_geo,
  [anon_sym_h323] = anon_sym_h323,
  [anon_sym_http] = anon_sym_http,
  [anon_sym_https] = anon_sym_https,
  [anon_sym_im] = anon_sym_im,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_ipp] = anon_sym_ipp,
  [anon_sym_mailto] = anon_sym_mailto,
  [anon_sym_mid] = anon_sym_mid,
  [anon_sym_ni] = anon_sym_ni,
  [anon_sym_nih] = anon_sym_nih,
  [anon_sym_payto] = anon_sym_payto,
  [anon_sym_pkcs11] = anon_sym_pkcs11,
  [anon_sym_pres] = anon_sym_pres,
  [anon_sym_reload] = anon_sym_reload,
  [anon_sym_secret_DASHtoken] = anon_sym_secret_DASHtoken,
  [anon_sym_session] = anon_sym_session,
  [anon_sym_sms] = anon_sym_sms,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_telnet] = anon_sym_telnet,
  [anon_sym_urn] = anon_sym_urn,
  [anon_sym_ws] = anon_sym_ws,
  [anon_sym_wss] = anon_sym_wss,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_HTTP_SLASH] = anon_sym_HTTP_SLASH,
  [aux_sym_http_version_token1] = aux_sym_http_version_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_COLON_SLASH_SLASH] = anon_sym_COLON_SLASH_SLASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_status_code] = sym_status_code,
  [sym_status_text] = sym_status_text,
  [aux_sym_request_token1] = aux_sym_request_token1,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_header_token1] = aux_sym_header_token1,
  [aux_sym_header_token2] = aux_sym_header_token1,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym_script_variable_token1] = aux_sym_script_variable_token1,
  [aux_sym_script_variable_token2] = aux_sym_script_variable_token2,
  [aux_sym_xml_body_token1] = aux_sym_xml_body_token1,
  [aux_sym_xml_body_token2] = aux_sym_xml_body_token2,
  [aux_sym_xml_body_token3] = aux_sym_xml_body_token3,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [aux_sym_json_body_token2] = aux_sym_json_body_token2,
  [aux_sym_json_body_token3] = aux_sym_json_body_token3,
  [aux_sym_json_body_token4] = aux_sym_json_body_token4,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_mutation] = anon_sym_mutation,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LT] = anon_sym_LT,
  [sym_query_key] = sym_query_key,
  [sym_param] = aux_sym_header_token1,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [sym__line] = sym__line,
  [sym_document] = sym_document,
  [sym_host] = sym_host,
  [sym_port] = sym_port,
  [sym_path] = sym_path,
  [sym_scheme] = sym_scheme,
  [sym_authority] = sym_authority,
  [sym_http_version] = sym_http_version,
  [sym_target_url] = sym_target_url,
  [sym_response] = sym_response,
  [sym_request] = sym_request,
  [sym_pair] = sym_pair,
  [sym_query_param] = sym_query_param,
  [sym_fragment] = sym_fragment,
  [sym_host_url] = aux_sym_header_token1,
  [sym_header] = sym_header,
  [sym_variable] = sym_variable,
  [sym_script_variable] = sym_script_variable,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_xml_body] = sym_xml_body,
  [sym_json_body] = sym_json_body,
  [sym_graphql_body] = sym_graphql_body,
  [sym_external_body] = sym_external_body,
  [sym_form_data] = sym_form_data,
  [sym_boolean] = sym_boolean,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_target_url_repeat1] = aux_sym_target_url_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_script_variable_repeat1] = aux_sym_script_variable_repeat1,
  [aux_sym_form_data_repeat1] = aux_sym_form_data_repeat1,
  [aux_sym_form_data_repeat2] = aux_sym_form_data_repeat2,
  [alias_sym_name] = alias_sym_name,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
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
  [anon_sym_about] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coap_PLUStcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coap_PLUSws] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coaps_PLUStcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coaps_PLUSws] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_example] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ftp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_geo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h323] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_https] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_im] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mailto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ni] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nih] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_payto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pkcs11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pres] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_secret_DASHtoken] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_session] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_telnet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ws] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_http_version_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
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
  [sym_status_code] = {
    .visible = true,
    .named = true,
  },
  [sym_status_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_request_token1] = {
    .visible = false,
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
  [aux_sym_header_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_header_token2] = {
    .visible = true,
    .named = true,
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
  [aux_sym_json_body_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_token4] = {
    .visible = false,
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_query_key] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
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
  [sym_scheme] = {
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
  [sym_response] = {
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
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_host_url] = {
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
  [sym_form_data] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
  [aux_sym_form_data_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_form_data_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
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
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 2},
  [14] = {.index = 21, .length = 1},
  [15] = {.index = 5, .length = 2},
  [16] = {.index = 5, .length = 2},
  [17] = {.index = 22, .length = 2},
  [18] = {.index = 22, .length = 2},
  [19] = {.index = 24, .length = 4},
  [20] = {.index = 28, .length = 1},
  [21] = {.index = 29, .length = 4},
  [22] = {.index = 33, .length = 4},
  [23] = {.index = 37, .length = 4},
  [24] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_key, 0},
  [2] =
    {field_name, 1},
    {field_value, 3},
  [4] =
    {field_name, 2},
  [5] =
    {field_name, 0},
    {field_value, 2},
  [7] =
    {field_identifier, 0},
  [8] =
    {field_key, 1},
  [9] =
    {field_key, 0},
    {field_value, 1},
  [11] =
    {field_name, 1},
    {field_value, 4},
  [13] =
    {field_key, 1},
    {field_value, 2},
  [15] =
    {field_key, 0},
    {field_value, 2},
  [17] =
    {field_name, 1},
    {field_value, 5},
  [19] =
    {field_key, 1},
    {field_value, 3},
  [21] =
    {field_file_path, 2},
  [22] =
    {field_name, 0},
    {field_value, 3},
  [24] =
    {field_name, 0},
    {field_name, 3, .inherited = true},
    {field_value, 2},
    {field_value, 3, .inherited = true},
  [28] =
    {field_file_path, 4},
  [29] =
    {field_name, 0},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [33] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [37] =
    {field_name, 0},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [0] = sym_identifier,
  },
  [14] = {
    [2] = sym_path,
  },
  [15] = {
    [0] = alias_sym_name,
  },
  [16] = {
    [2] = aux_sym_header_token1,
  },
  [17] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
  },
  [18] = {
    [0] = alias_sym_name,
  },
  [19] = {
    [2] = aux_sym_header_token1,
  },
  [20] = {
    [4] = sym_path,
  },
  [21] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
    [4] = aux_sym_header_token1,
  },
  [23] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
    [4] = aux_sym_header_token1,
    [5] = aux_sym_header_token1,
  },
  [24] = {
    [3] = aux_sym_header_token1,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_variable, 2,
    sym_variable,
    aux_sym_header_token1,
  sym_boolean, 2,
    sym_boolean,
    aux_sym_header_token1,
  aux_sym__whitespace, 2,
    aux_sym__whitespace,
    aux_sym_header_token1,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 7,
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
  [63] = 5,
  [64] = 64,
  [65] = 7,
  [66] = 66,
  [67] = 67,
  [68] = 62,
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
  [81] = 46,
  [82] = 82,
  [83] = 56,
  [84] = 43,
  [85] = 29,
  [86] = 86,
  [87] = 87,
  [88] = 28,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 57,
  [96] = 96,
  [97] = 97,
  [98] = 46,
  [99] = 99,
  [100] = 71,
  [101] = 101,
  [102] = 73,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 56,
  [108] = 43,
  [109] = 57,
  [110] = 110,
  [111] = 111,
  [112] = 106,
  [113] = 42,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 5,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 104,
  [126] = 126,
  [127] = 127,
  [128] = 37,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 134,
  [137] = 137,
  [138] = 135,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 139,
  [144] = 140,
  [145] = 141,
  [146] = 146,
  [147] = 142,
  [148] = 148,
  [149] = 5,
  [150] = 135,
  [151] = 114,
  [152] = 152,
  [153] = 153,
  [154] = 5,
  [155] = 155,
  [156] = 114,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 142,
  [161] = 161,
  [162] = 134,
  [163] = 163,
  [164] = 164,
  [165] = 141,
  [166] = 140,
  [167] = 167,
  [168] = 114,
  [169] = 169,
  [170] = 139,
  [171] = 7,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 7,
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
  [194] = 7,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 183,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 127,
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
  [218] = 118,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 223,
  [229] = 229,
  [230] = 226,
  [231] = 229,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 214,
  [238] = 238,
  [239] = 239,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(647);
      ADVANCE_MAP(
        '\n', 671,
        '\r', 671,
        '"', 76,
        '#', 661,
        '&', 672,
        '(', 694,
        '-', 700,
        '/', 652,
        ':', 649,
        '<', 696,
        '=', 673,
        '?', 663,
        '@', 658,
        'H', 704,
        '[', 15,
        ']', 16,
        'c', 710,
        'f', 705,
        't', 712,
        '{', 17,
        '}', 18,
        '\t', 729,
        0x0b, 729,
        ' ', 729,
      );
      if (lookahead == '0' ||
          ('6' <= lookahead && lookahead <= '9')) ADVANCE(650);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(650);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 671,
        '\r', 671,
        '#', 661,
        '(', 694,
        '/', 652,
        '?', 663,
        '@', 658,
        '{', 637,
        '\t', 729,
        0x0b, 729,
        ' ', 729,
      );
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 671,
        '\r', 666,
        '#', 661,
        '&', 672,
        '/', 653,
        '{', 720,
        '\t', 721,
        0x0b, 721,
        ' ', 721,
      );
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(721);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 671,
        '\r', 666,
        '#', 661,
        '&', 672,
        '/', 653,
        '\t', 721,
        0x0b, 721,
        ' ', 721,
      );
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(721);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(671);
      if (lookahead == '\r') ADVANCE(666);
      if (lookahead == '#') ADVANCE(661);
      if (lookahead == '&') ADVANCE(672);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(721);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 671,
        '\r', 667,
        '#', 661,
        '&', 672,
        '=', 674,
        '\t', 719,
        0x0b, 719,
        ' ', 719,
      );
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 671,
        '\r', 667,
        '#', 661,
        '&', 672,
        '=', 722,
        '\t', 719,
        0x0b, 719,
        ' ', 719,
      );
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(671);
      if (lookahead == '\r') ADVANCE(668);
      if (lookahead == '(') ADVANCE(695);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(671);
      if (lookahead == '\r') ADVANCE(668);
      if (lookahead == '-') ADVANCE(737);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(671);
      if (lookahead == '\r') ADVANCE(668);
      if (lookahead == '<') ADVANCE(738);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(671);
      if (lookahead == '\r') ADVANCE(668);
      if (lookahead == ']') ADVANCE(732);
      if (lookahead == '}') ADVANCE(733);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(671);
      if (lookahead == '\r') ADVANCE(668);
      if (lookahead == '}') ADVANCE(733);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(671);
      if (lookahead == '\r') ADVANCE(668);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(731);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(671);
      if (lookahead == '\r') ADVANCE(668);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(671);
      if (lookahead == '\r') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(722);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(691);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(693);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(690);
      if (lookahead == '{') ADVANCE(683);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(692);
      if (lookahead == '}') ADVANCE(685);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(689);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(686);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(675);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '\f', 21,
        '/', 682,
        '@', 658,
        'c', 679,
        '{', 637,
        '\n', 670,
        '\r', 670,
        '\t', 730,
        0x0b, 730,
        ' ', 730,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(681);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '/') ADVANCE(659);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(119);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 53:
      if (lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(159);
      END_STATE();
    case 60:
      if (lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 61:
      if (lookahead == ' ') ADVANCE(582);
      END_STATE();
    case 62:
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 64:
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 65:
      if (lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 66:
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 67:
      if (lookahead == ' ') ADVANCE(127);
      END_STATE();
    case 68:
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 69:
      if (lookahead == ' ') ADVANCE(120);
      END_STATE();
    case 70:
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 71:
      if (lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 72:
      if (lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 73:
      if (lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 74:
      ADVANCE_MAP(
        '"', 76,
        'A', 193,
        'B', 142,
        'C', 435,
        'E', 627,
        'F', 143,
        'G', 144,
        'H', 134,
        'I', 79,
        'L', 244,
        'M', 238,
        'N', 245,
        'O', 107,
        'P', 145,
        'R', 153,
        'S', 234,
        'T', 241,
        'U', 121,
        'V', 151,
        'f', 149,
        't', 498,
        '\n', 671,
        '\r', 671,
        '\t', 729,
        0x0b, 729,
        ' ', 729,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(723);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(705);
      if (lookahead == 't') ADVANCE(712);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(716);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(724);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 77:
      ADVANCE_MAP(
        '#', 661,
        '/', 652,
        ':', 649,
        '=', 673,
        '?', 663,
        '@', 658,
        'c', 710,
        '{', 637,
        '}', 638,
        '\n', 671,
        '\r', 671,
        '\t', 729,
        0x0b, 729,
        ' ', 729,
      );
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 78:
      if (lookahead == '%') ADVANCE(20);
      END_STATE();
    case 79:
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == 'M') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(388);
      END_STATE();
    case 82:
      if (lookahead == '/') ADVANCE(662);
      END_STATE();
    case 83:
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 84:
      if (lookahead == '>') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 85:
      if (lookahead == '>') ADVANCE(688);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == '?') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(614);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(210);
      if (lookahead == 'E') ADVANCE(628);
      if (lookahead == 'F') ADVANCE(438);
      if (lookahead == 'I') ADVANCE(396);
      if (lookahead == 'M') ADVANCE(461);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(610);
      END_STATE();
    case 90:
      if (lookahead == 'A') ADVANCE(378);
      END_STATE();
    case 91:
      if (lookahead == 'A') ADVANCE(377);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(441);
      END_STATE();
    case 93:
      if (lookahead == 'C') ADVANCE(323);
      END_STATE();
    case 94:
      if (lookahead == 'D') ADVANCE(295);
      END_STATE();
    case 95:
      if (lookahead == 'D') ADVANCE(286);
      END_STATE();
    case 96:
      if (lookahead == 'E') ADVANCE(516);
      END_STATE();
    case 97:
      if (lookahead == 'E') ADVANCE(416);
      END_STATE();
    case 98:
      if (lookahead == 'E') ADVANCE(158);
      if (lookahead == 'M') ADVANCE(160);
      END_STATE();
    case 99:
      if (lookahead == 'F') ADVANCE(344);
      END_STATE();
    case 100:
      if (lookahead == 'F') ADVANCE(180);
      END_STATE();
    case 101:
      if (lookahead == 'F') ADVANCE(180);
      if (lookahead == 'R') ADVANCE(240);
      END_STATE();
    case 102:
      if (lookahead == 'F') ADVANCE(468);
      END_STATE();
    case 103:
      if (lookahead == 'G') ADVANCE(181);
      if (lookahead == 'R') ADVANCE(237);
      END_STATE();
    case 104:
      if (lookahead == 'H') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(349);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(52);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(406);
      END_STATE();
    case 107:
      if (lookahead == 'K') ADVANCE(665);
      END_STATE();
    case 108:
      if (lookahead == 'L') ADVANCE(258);
      END_STATE();
    case 109:
      if (lookahead == 'L') ADVANCE(164);
      END_STATE();
    case 110:
      if (lookahead == 'L') ADVANCE(451);
      END_STATE();
    case 111:
      if (lookahead == 'M') ADVANCE(294);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(470);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(254);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(471);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(472);
      END_STATE();
    case 116:
      if (lookahead == 'O') ADVANCE(556);
      END_STATE();
    case 117:
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 118:
      if (lookahead == 'P') ADVANCE(306);
      END_STATE();
    case 119:
      if (lookahead == 'P') ADVANCE(510);
      END_STATE();
    case 120:
      if (lookahead == 'P') ADVANCE(513);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(237);
      END_STATE();
    case 123:
      if (lookahead == 'R') ADVANCE(240);
      END_STATE();
    case 124:
      if (lookahead == 'R') ADVANCE(305);
      END_STATE();
    case 125:
      if (lookahead == 'R') ADVANCE(273);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(302);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(298);
      END_STATE();
    case 128:
      if (lookahead == 'S') ADVANCE(592);
      END_STATE();
    case 129:
      if (lookahead == 'S') ADVANCE(272);
      END_STATE();
    case 130:
      if (lookahead == 'S') ADVANCE(566);
      END_STATE();
    case 131:
      if (lookahead == 'S') ADVANCE(176);
      END_STATE();
    case 132:
      if (lookahead == 'S') ADVANCE(615);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(117);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(633);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(460);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(349);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(465);
      END_STATE();
    case 139:
      if (lookahead == 'U') ADVANCE(538);
      END_STATE();
    case 140:
      if (lookahead == 'U') ADVANCE(414);
      END_STATE();
    case 141:
      if (lookahead == 'V') ADVANCE(262);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(609);
      if (lookahead == 'p') ADVANCE(505);
      if (lookahead == 's') ADVANCE(603);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(629);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(501);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(528);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(560);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(546);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(564);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(432);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(565);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(631);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(580);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(586);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 187:
      if (lookahead == 'b') ADVANCE(332);
      END_STATE();
    case 188:
      if (lookahead == 'b') ADVANCE(374);
      END_STATE();
    case 189:
      if (lookahead == 'b') ADVANCE(389);
      END_STATE();
    case 190:
      if (lookahead == 'b') ADVANCE(390);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(503);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(479);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(629);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(563);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(551);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(366);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(249);
      if (lookahead == 'x') ADVANCE(630);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(467);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(564);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(288);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(595);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(665);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(347);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(548);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(632);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'w') ADVANCE(334);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(534);
      if (lookahead == 'o') ADVANCE(617);
      if (lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(403);
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(616);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 307:
      if (lookahead == 'f') ADVANCE(309);
      END_STATE();
    case 308:
      if (lookahead == 'f') ADVANCE(376);
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 309:
      if (lookahead == 'f') ADVANCE(335);
      END_STATE();
    case 310:
      if (lookahead == 'f') ADVANCE(341);
      END_STATE();
    case 311:
      if (lookahead == 'f') ADVANCE(474);
      END_STATE();
    case 312:
      if (lookahead == 'f') ADVANCE(351);
      END_STATE();
    case 313:
      if (lookahead == 'g') ADVANCE(665);
      END_STATE();
    case 314:
      if (lookahead == 'g') ADVANCE(524);
      END_STATE();
    case 315:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 316:
      if (lookahead == 'g') ADVANCE(554);
      END_STATE();
    case 317:
      if (lookahead == 'g') ADVANCE(475);
      END_STATE();
    case 318:
      if (lookahead == 'g') ADVANCE(266);
      END_STATE();
    case 319:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 320:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 321:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 322:
      if (lookahead == 'h') ADVANCE(469);
      END_STATE();
    case 323:
      if (lookahead == 'h') ADVANCE(476);
      END_STATE();
    case 324:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 325:
      if (lookahead == 'h') ADVANCE(269);
      END_STATE();
    case 326:
      if (lookahead == 'h') ADVANCE(275);
      END_STATE();
    case 327:
      if (lookahead == 'h') ADVANCE(445);
      END_STATE();
    case 328:
      if (lookahead == 'h') ADVANCE(450);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(636);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(391);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(543);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 344:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(619);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(452);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(381);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(464);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(456);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 364:
      if (lookahead == 'i') ADVANCE(597);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 366:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 367:
      if (lookahead == 'k') ADVANCE(243);
      END_STATE();
    case 368:
      if (lookahead == 'k') ADVANCE(62);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(629);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(540);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(559);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(348);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(545);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 379:
      if (lookahead == 'l') ADVANCE(533);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 387:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 388:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 389:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 390:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 392:
      if (lookahead == 'm') ADVANCE(369);
      END_STATE();
    case 393:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 394:
      if (lookahead == 'm') ADVANCE(485);
      END_STATE();
    case 395:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 396:
      if (lookahead == 'm') ADVANCE(486);
      END_STATE();
    case 397:
      if (lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 398:
      if (lookahead == 'm') ADVANCE(268);
      END_STATE();
    case 399:
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 400:
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 401:
      if (lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 402:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 404:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 405:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 406:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 407:
      if (lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 408:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 409:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 410:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 411:
      if (lookahead == 'n') ADVANCE(533);
      END_STATE();
    case 412:
      if (lookahead == 'n') ADVANCE(551);
      END_STATE();
    case 413:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 414:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 415:
      if (lookahead == 'n') ADVANCE(561);
      END_STATE();
    case 416:
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 417:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 418:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 419:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 420:
      if (lookahead == 'n') ADVANCE(564);
      END_STATE();
    case 421:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 422:
      if (lookahead == 'n') ADVANCE(568);
      END_STATE();
    case 423:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 424:
      if (lookahead == 'n') ADVANCE(576);
      END_STATE();
    case 425:
      if (lookahead == 'n') ADVANCE(604);
      END_STATE();
    case 426:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(569);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(574);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 431:
      if (lookahead == 'n') ADVANCE(578);
      END_STATE();
    case 432:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 433:
      if (lookahead == 'n') ADVANCE(634);
      END_STATE();
    case 434:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 435:
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 436:
      if (lookahead == 'o') ADVANCE(623);
      END_STATE();
    case 437:
      if (lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 438:
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 439:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 440:
      if (lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 441:
      if (lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 442:
      if (lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 443:
      if (lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 444:
      if (lookahead == 'o') ADVANCE(551);
      END_STATE();
    case 445:
      if (lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 446:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 447:
      if (lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 448:
      if (lookahead == 'o') ADVANCE(571);
      END_STATE();
    case 449:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 450:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 451:
      if (lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 452:
      if (lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 453:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 454:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 455:
      if (lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 456:
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 457:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 458:
      if (lookahead == 'o') ADVANCE(411);
      END_STATE();
    case 459:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 460:
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 462:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(607);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(457);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(519);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(579);
      END_STATE();
    case 473:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 474:
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 475:
      if (lookahead == 'o') ADVANCE(591);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 477:
      if (lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 478:
      if (lookahead == 'p') ADVANCE(654);
      END_STATE();
    case 479:
      if (lookahead == 'p') ADVANCE(656);
      END_STATE();
    case 480:
      if (lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 481:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 482:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 483:
      if (lookahead == 'p') ADVANCE(444);
      END_STATE();
    case 484:
      if (lookahead == 'p') ADVANCE(564);
      END_STATE();
    case 485:
      if (lookahead == 'p') ADVANCE(442);
      END_STATE();
    case 486:
      if (lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 487:
      if (lookahead == 'p') ADVANCE(587);
      END_STATE();
    case 488:
      if (lookahead == 'p') ADVANCE(447);
      END_STATE();
    case 489:
      if (lookahead == 'p') ADVANCE(488);
      END_STATE();
    case 490:
      if (lookahead == 'p') ADVANCE(301);
      END_STATE();
    case 491:
      if (lookahead == 'p') ADVANCE(477);
      END_STATE();
    case 492:
      if (lookahead == 'p') ADVANCE(491);
      END_STATE();
    case 493:
      if (lookahead == 'q') ADVANCE(613);
      END_STATE();
    case 494:
      if (lookahead == 'q') ADVANCE(608);
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 495:
      if (lookahead == 'q') ADVANCE(611);
      END_STATE();
    case 496:
      if (lookahead == 'q') ADVANCE(612);
      END_STATE();
    case 497:
      if (lookahead == 'r') ADVANCE(665);
      END_STATE();
    case 498:
      if (lookahead == 'r') ADVANCE(606);
      END_STATE();
    case 499:
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(404);
      END_STATE();
    case 500:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 501:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 502:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 503:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 504:
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead == 'y') ADVANCE(373);
      END_STATE();
    case 505:
      if (lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 506:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 507:
      if (lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 508:
      if (lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 509:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 510:
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 511:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 512:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 513:
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 514:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 515:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 516:
      if (lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 517:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 518:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 519:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 520:
      if (lookahead == 'r') ADVANCE(564);
      END_STATE();
    case 521:
      if (lookahead == 'r') ADVANCE(618);
      END_STATE();
    case 522:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 523:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 524:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 525:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 526:
      if (lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 527:
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 528:
      if (lookahead == 'r') ADVANCE(635);
      END_STATE();
    case 529:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 530:
      if (lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 531:
      if (lookahead == 's') ADVANCE(655);
      END_STATE();
    case 532:
      if (lookahead == 's') ADVANCE(657);
      END_STATE();
    case 533:
      if (lookahead == 's') ADVANCE(665);
      END_STATE();
    case 534:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 535:
      if (lookahead == 's') ADVANCE(601);
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 536:
      if (lookahead == 's') ADVANCE(542);
      END_STATE();
    case 537:
      if (lookahead == 's') ADVANCE(549);
      END_STATE();
    case 538:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 539:
      if (lookahead == 's') ADVANCE(551);
      END_STATE();
    case 540:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 541:
      if (lookahead == 's') ADVANCE(562);
      END_STATE();
    case 542:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 543:
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 544:
      if (lookahead == 's') ADVANCE(570);
      END_STATE();
    case 545:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 546:
      if (lookahead == 's') ADVANCE(458);
      END_STATE();
    case 547:
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 548:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 549:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 550:
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == 'w') ADVANCE(531);
      END_STATE();
    case 551:
      if (lookahead == 't') ADVANCE(665);
      END_STATE();
    case 552:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 553:
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 554:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 555:
      if (lookahead == 't') ADVANCE(629);
      END_STATE();
    case 556:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 557:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 558:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 559:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 560:
      if (lookahead == 't') ADVANCE(605);
      END_STATE();
    case 561:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(533);
      END_STATE();
    case 563:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 564:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 565:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 566:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 567:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 568:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 570:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 571:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 572:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 573:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 574:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 575:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 576:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 579:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == 'w') ADVANCE(532);
      END_STATE();
    case 582:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 594:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 595:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 597:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 598:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 599:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 600:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 601:
      if (lookahead == 'u') ADVANCE(307);
      END_STATE();
    case 602:
      if (lookahead == 'u') ADVANCE(404);
      END_STATE();
    case 603:
      if (lookahead == 'u') ADVANCE(489);
      END_STATE();
    case 604:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 605:
      if (lookahead == 'u') ADVANCE(533);
      END_STATE();
    case 606:
      if (lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 607:
      if (lookahead == 'u') ADVANCE(551);
      END_STATE();
    case 608:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 609:
      if (lookahead == 'u') ADVANCE(583);
      if (lookahead == 'v') ADVANCE(166);
      END_STATE();
    case 610:
      if (lookahead == 'u') ADVANCE(585);
      END_STATE();
    case 611:
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 612:
      if (lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 613:
      if (lookahead == 'u') ADVANCE(353);
      END_STATE();
    case 614:
      if (lookahead == 'u') ADVANCE(594);
      END_STATE();
    case 615:
      if (lookahead == 'u') ADVANCE(492);
      END_STATE();
    case 616:
      if (lookahead == 'v') ADVANCE(345);
      END_STATE();
    case 617:
      if (lookahead == 'v') ADVANCE(283);
      END_STATE();
    case 618:
      if (lookahead == 'v') ADVANCE(290);
      END_STATE();
    case 619:
      if (lookahead == 'v') ADVANCE(281);
      END_STATE();
    case 620:
      if (lookahead == 'v') ADVANCE(183);
      END_STATE();
    case 621:
      if (lookahead == 'w') ADVANCE(440);
      END_STATE();
    case 622:
      if (lookahead == 'w') ADVANCE(172);
      END_STATE();
    case 623:
      if (lookahead == 'w') ADVANCE(243);
      END_STATE();
    case 624:
      if (lookahead == 'w') ADVANCE(148);
      END_STATE();
    case 625:
      if (lookahead == 'x') ADVANCE(392);
      END_STATE();
    case 626:
      if (lookahead == 'x') ADVANCE(629);
      END_STATE();
    case 627:
      if (lookahead == 'x') ADVANCE(480);
      END_STATE();
    case 628:
      if (lookahead == 'x') ADVANCE(577);
      END_STATE();
    case 629:
      if (lookahead == 'y') ADVANCE(665);
      END_STATE();
    case 630:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 631:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 632:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 633:
      if (lookahead == 'y') ADVANCE(481);
      END_STATE();
    case 634:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 635:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 636:
      if (lookahead == 'z') ADVANCE(243);
      END_STATE();
    case 637:
      if (lookahead == '{') ADVANCE(683);
      END_STATE();
    case 638:
      if (lookahead == '}') ADVANCE(685);
      END_STATE();
    case 639:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(671);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(729);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(644);
      END_STATE();
    case 640:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(650);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 641:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(651);
      END_STATE();
    case 642:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(671);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      END_STATE();
    case 643:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(664);
      END_STATE();
    case 644:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      END_STATE();
    case 645:
      if (eof) ADVANCE(647);
      ADVANCE_MAP(
        '\n', 671,
        '\r', 671,
        '#', 648,
        '&', 672,
        '-', 700,
        ':', 649,
        '<', 697,
        '=', 673,
        '@', 658,
        '[', 15,
        '{', 17,
        '}', 638,
        '\t', 729,
        0x0b, 729,
        ' ', 729,
      );
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 646:
      if (eof) ADVANCE(647);
      ADVANCE_MAP(
        '#', 648,
        '-', 700,
        ':', 83,
        '<', 697,
        '@', 658,
        'H', 704,
        '[', 15,
        '{', 17,
        '\n', 671,
        '\r', 671,
        '\t', 729,
        0x0b, 729,
        ' ', 729,
      );
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(650);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(651);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(721);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_coap_PLUStcp);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_coap_PLUSws);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_coaps_PLUStcp);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_coaps_PLUSws);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_status_text);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(671);
      if (lookahead == '\r') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(721);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(671);
      if (lookahead == '\r') ADVANCE(667);
      if (lookahead == '=') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(719);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(671);
      if (lookahead == '\r') ADVANCE(668);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(671);
      if (lookahead == '\r') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(722);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(670);
      if (lookahead == '\r') ADVANCE(670);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(671);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(722);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\n') ADVANCE(675);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(675);
      if (lookahead == '+') ADVANCE(550);
      if (lookahead == '/') ADVANCE(682);
      if (lookahead == 's') ADVANCE(677);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(681);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(675);
      if (lookahead == '+') ADVANCE(581);
      if (lookahead == '/') ADVANCE(682);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(681);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(675);
      if (lookahead == '/') ADVANCE(682);
      if (lookahead == 'a') ADVANCE(680);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(681);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(675);
      if (lookahead == '/') ADVANCE(682);
      if (lookahead == 'o') ADVANCE(678);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(681);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(675);
      if (lookahead == '/') ADVANCE(682);
      if (lookahead == 'p') ADVANCE(676);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(681);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(675);
      if (lookahead == '/') ADVANCE(682);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(681);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(675);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(721);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_json_body_token3);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_json_body_token4);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(741);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '?') ADVANCE(625);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(625);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(550);
      if (lookahead == 's') ADVANCE(699);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(659);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(701);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(702);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(703);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(709);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(728);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(713);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(706);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(698);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(714);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(707);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(716);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(721);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead == '=') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(719);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead == '{') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(721);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(721);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_param);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(722);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(723);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(717);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(675);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(741);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(693);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(692);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(689);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead != 0) ADVANCE(739);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(687);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '%') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(741);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(741);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(741);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(739);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(741);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(741);
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
      ADVANCE_MAP(
        'C', 1,
        'D', 2,
        'G', 3,
        'H', 4,
        'L', 5,
        'O', 6,
        'P', 7,
        'T', 8,
        'a', 9,
        'c', 10,
        'd', 11,
        'e', 12,
        'f', 13,
        'g', 14,
        'h', 15,
        'i', 16,
        'm', 17,
        'n', 18,
        'p', 19,
        'q', 20,
        'r', 21,
        's', 22,
        't', 23,
        'u', 24,
        'w', 25,
      );
      END_STATE();
    case 1:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == 'P') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == 'U') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == '3') ADVANCE(47);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'k') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(70);
      END_STATE();
    case 30:
      if (lookahead == 'S') ADVANCE(71);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(74);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_im);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_ni);
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 56:
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_ws);
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(108);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 70:
      if (lookahead == 'D') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 73:
      if (lookahead == 'C') ADVANCE(110);
      END_STATE();
    case 74:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 75:
      if (lookahead == 'C') ADVANCE(111);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_cap);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_cid);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_dns);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_geo);
      END_STATE();
    case 87:
      if (lookahead == '3') ADVANCE(118);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ipp);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_mid);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_nih);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_sms);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_urn);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_wss);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(133);
      END_STATE();
    case 110:
      if (lookahead == 'H') ADVANCE(69);
      END_STATE();
    case 111:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_acct);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_arcp);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_h323);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 124:
      if (lookahead == '1') ADVANCE(140);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_pres);
      END_STATE();
    case 126:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 131:
      if (lookahead == 'C') ADVANCE(146);
      END_STATE();
    case 132:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 133:
      if (lookahead == 'N') ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_about);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_https);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_payto);
      END_STATE();
    case 140:
      if (lookahead == '1') ADVANCE(151);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 147:
      if (lookahead == 'S') ADVANCE(69);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_mailto);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_pkcs11);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_reload);
      END_STATE();
    case 153:
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_telnet);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_mutation);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'k') ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_secret_DASHtoken);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 645},
  [2] = {.lex_state = 77},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 77},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 77},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 646},
  [10] = {.lex_state = 646},
  [11] = {.lex_state = 645},
  [12] = {.lex_state = 645},
  [13] = {.lex_state = 645},
  [14] = {.lex_state = 645},
  [15] = {.lex_state = 645},
  [16] = {.lex_state = 645},
  [17] = {.lex_state = 645},
  [18] = {.lex_state = 645},
  [19] = {.lex_state = 645},
  [20] = {.lex_state = 645},
  [21] = {.lex_state = 645},
  [22] = {.lex_state = 645},
  [23] = {.lex_state = 645},
  [24] = {.lex_state = 645},
  [25] = {.lex_state = 645},
  [26] = {.lex_state = 645},
  [27] = {.lex_state = 645},
  [28] = {.lex_state = 645},
  [29] = {.lex_state = 645},
  [30] = {.lex_state = 645},
  [31] = {.lex_state = 645},
  [32] = {.lex_state = 645},
  [33] = {.lex_state = 645},
  [34] = {.lex_state = 645},
  [35] = {.lex_state = 645},
  [36] = {.lex_state = 645},
  [37] = {.lex_state = 645},
  [38] = {.lex_state = 645},
  [39] = {.lex_state = 645},
  [40] = {.lex_state = 645},
  [41] = {.lex_state = 645},
  [42] = {.lex_state = 645},
  [43] = {.lex_state = 645},
  [44] = {.lex_state = 645},
  [45] = {.lex_state = 645},
  [46] = {.lex_state = 645},
  [47] = {.lex_state = 645},
  [48] = {.lex_state = 645},
  [49] = {.lex_state = 645},
  [50] = {.lex_state = 645},
  [51] = {.lex_state = 645},
  [52] = {.lex_state = 645},
  [53] = {.lex_state = 645},
  [54] = {.lex_state = 645},
  [55] = {.lex_state = 645},
  [56] = {.lex_state = 645},
  [57] = {.lex_state = 645},
  [58] = {.lex_state = 645},
  [59] = {.lex_state = 645},
  [60] = {.lex_state = 645},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 74},
  [64] = {.lex_state = 74},
  [65] = {.lex_state = 74},
  [66] = {.lex_state = 74},
  [67] = {.lex_state = 74},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 74},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 645},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 645},
  [76] = {.lex_state = 75},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 75},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 645},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 77},
  [86] = {.lex_state = 77},
  [87] = {.lex_state = 645},
  [88] = {.lex_state = 77},
  [89] = {.lex_state = 77},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 77},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 77},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 77},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 77},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 645},
  [112] = {.lex_state = 77},
  [113] = {.lex_state = 77},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 77},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 77},
  [126] = {.lex_state = 646},
  [127] = {.lex_state = 77},
  [128] = {.lex_state = 77},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 645},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 77},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 645},
  [140] = {.lex_state = 645},
  [141] = {.lex_state = 645},
  [142] = {.lex_state = 645},
  [143] = {.lex_state = 645},
  [144] = {.lex_state = 645},
  [145] = {.lex_state = 645},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 645},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 639},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 639},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 645},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 74},
  [160] = {.lex_state = 645},
  [161] = {.lex_state = 77},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 645},
  [165] = {.lex_state = 645},
  [166] = {.lex_state = 645},
  [167] = {.lex_state = 11},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 77},
  [170] = {.lex_state = 645},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 645},
  [173] = {.lex_state = 77},
  [174] = {.lex_state = 13},
  [175] = {.lex_state = 639},
  [176] = {.lex_state = 645},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 645},
  [179] = {.lex_state = 13},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 645},
  [183] = {.lex_state = 640},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 13},
  [188] = {.lex_state = 13},
  [189] = {.lex_state = 645},
  [190] = {.lex_state = 645},
  [191] = {.lex_state = 645},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 645},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 13},
  [196] = {.lex_state = 645},
  [197] = {.lex_state = 14},
  [198] = {.lex_state = 640},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 645},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 646},
  [204] = {.lex_state = 645},
  [205] = {.lex_state = 645},
  [206] = {.lex_state = 646},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 645},
  [209] = {.lex_state = 646},
  [210] = {.lex_state = 645},
  [211] = {.lex_state = 645},
  [212] = {.lex_state = 645},
  [213] = {.lex_state = 645},
  [214] = {.lex_state = 645},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 645},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 645},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 645},
  [223] = {.lex_state = 641},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 645},
  [226] = {.lex_state = 645},
  [227] = {.lex_state = 645},
  [228] = {.lex_state = 641},
  [229] = {.lex_state = 642},
  [230] = {.lex_state = 645},
  [231] = {.lex_state = 642},
  [232] = {.lex_state = 645},
  [233] = {.lex_state = 645},
  [234] = {.lex_state = 645},
  [235] = {.lex_state = 645},
  [236] = {.lex_state = 645},
  [237] = {.lex_state = 645},
  [238] = {.lex_state = 645},
  [239] = {.lex_state = 645},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_port_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_about] = ACTIONS(1),
    [anon_sym_acct] = ACTIONS(1),
    [anon_sym_arcp] = ACTIONS(1),
    [anon_sym_cap] = ACTIONS(1),
    [anon_sym_cid] = ACTIONS(1),
    [anon_sym_coap_PLUStcp] = ACTIONS(1),
    [anon_sym_coap_PLUSws] = ACTIONS(1),
    [anon_sym_coaps_PLUStcp] = ACTIONS(1),
    [anon_sym_coaps_PLUSws] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_dns] = ACTIONS(1),
    [anon_sym_example] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_ftp] = ACTIONS(1),
    [anon_sym_geo] = ACTIONS(1),
    [anon_sym_h323] = ACTIONS(1),
    [anon_sym_http] = ACTIONS(1),
    [anon_sym_https] = ACTIONS(1),
    [anon_sym_im] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_ipp] = ACTIONS(1),
    [anon_sym_mailto] = ACTIONS(1),
    [anon_sym_mid] = ACTIONS(1),
    [anon_sym_ni] = ACTIONS(1),
    [anon_sym_nih] = ACTIONS(1),
    [anon_sym_payto] = ACTIONS(1),
    [anon_sym_pkcs11] = ACTIONS(1),
    [anon_sym_pres] = ACTIONS(1),
    [anon_sym_reload] = ACTIONS(1),
    [anon_sym_secret_DASHtoken] = ACTIONS(1),
    [anon_sym_session] = ACTIONS(1),
    [anon_sym_sms] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_telnet] = ACTIONS(1),
    [anon_sym_urn] = ACTIONS(1),
    [anon_sym_ws] = ACTIONS(1),
    [anon_sym_wss] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_HTTP_SLASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_status_code] = ACTIONS(1),
    [aux_sym_request_token1] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [aux_sym_script_variable_token1] = ACTIONS(1),
    [aux_sym_xml_body_token1] = ACTIONS(1),
    [aux_sym_xml_body_token2] = ACTIONS(1),
    [aux_sym_xml_body_token3] = ACTIONS(1),
    [aux_sym_json_body_token1] = ACTIONS(1),
    [aux_sym_json_body_token2] = ACTIONS(1),
    [aux_sym_json_body_token3] = ACTIONS(1),
    [aux_sym_json_body_token4] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_mutation] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym__whitespace_token1] = ACTIONS(1),
    [aux_sym__newline_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(216),
    [sym_request] = STATE(60),
    [sym_variable] = STATE(60),
    [sym_script_variable] = STATE(60),
    [sym_variable_declaration] = STATE(60),
    [aux_sym_document_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_method] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [aux_sym_request_token1] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [aux_sym_script_variable_token1] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(61), 1,
      sym_variable,
    STATE(73), 1,
      aux_sym_path_repeat1,
    STATE(93), 1,
      sym_host,
    STATE(94), 1,
      sym_path,
    STATE(200), 1,
      sym_authority,
    STATE(201), 1,
      sym_target_url,
    STATE(206), 1,
      sym_scheme,
    STATE(230), 1,
      sym_pair,
    ACTIONS(23), 4,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
    ACTIONS(21), 33,
      anon_sym_about,
      anon_sym_acct,
      anon_sym_arcp,
      anon_sym_cap,
      anon_sym_cid,
      anon_sym_data,
      anon_sym_dns,
      anon_sym_example,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_geo,
      anon_sym_h323,
      anon_sym_http,
      anon_sym_https,
      anon_sym_im,
      anon_sym_info,
      anon_sym_ipp,
      anon_sym_mailto,
      anon_sym_mid,
      anon_sym_ni,
      anon_sym_nih,
      anon_sym_payto,
      anon_sym_pkcs11,
      anon_sym_pres,
      anon_sym_reload,
      anon_sym_secret_DASHtoken,
      anon_sym_session,
      anon_sym_sms,
      anon_sym_tag,
      anon_sym_telnet,
      anon_sym_urn,
      anon_sym_ws,
      anon_sym_wss,
  [87] = 16,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(35), 1,
      aux_sym_header_token1,
    ACTIONS(37), 1,
      aux_sym_header_token2,
    ACTIONS(39), 1,
      aux_sym__whitespace_token1,
    STATE(4), 1,
      aux_sym__whitespace,
    STATE(49), 1,
      sym_host_url,
    STATE(51), 1,
      sym_host,
    STATE(53), 1,
      sym_variable,
    STATE(184), 1,
      sym_authority,
    STATE(203), 1,
      sym_scheme,
    STATE(230), 1,
      sym_pair,
    ACTIONS(23), 4,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
    ACTIONS(21), 33,
      anon_sym_about,
      anon_sym_acct,
      anon_sym_arcp,
      anon_sym_cap,
      anon_sym_cid,
      anon_sym_data,
      anon_sym_dns,
      anon_sym_example,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_geo,
      anon_sym_h323,
      anon_sym_http,
      anon_sym_https,
      anon_sym_im,
      anon_sym_info,
      anon_sym_ipp,
      anon_sym_mailto,
      anon_sym_mid,
      anon_sym_ni,
      anon_sym_nih,
      anon_sym_payto,
      anon_sym_pkcs11,
      anon_sym_pres,
      anon_sym_reload,
      anon_sym_secret_DASHtoken,
      anon_sym_session,
      anon_sym_sms,
      anon_sym_tag,
      anon_sym_telnet,
      anon_sym_urn,
      anon_sym_ws,
      anon_sym_wss,
  [171] = 16,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(39), 1,
      aux_sym__whitespace_token1,
    ACTIONS(41), 1,
      aux_sym_header_token1,
    ACTIONS(43), 1,
      aux_sym_header_token2,
    STATE(6), 1,
      aux_sym__whitespace,
    STATE(40), 1,
      sym_host_url,
    STATE(51), 1,
      sym_host,
    STATE(54), 1,
      sym_variable,
    STATE(184), 1,
      sym_authority,
    STATE(203), 1,
      sym_scheme,
    STATE(230), 1,
      sym_pair,
    ACTIONS(23), 4,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
    ACTIONS(21), 33,
      anon_sym_about,
      anon_sym_acct,
      anon_sym_arcp,
      anon_sym_cap,
      anon_sym_cid,
      anon_sym_data,
      anon_sym_dns,
      anon_sym_example,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_geo,
      anon_sym_h323,
      anon_sym_http,
      anon_sym_https,
      anon_sym_im,
      anon_sym_info,
      anon_sym_ipp,
      anon_sym_mailto,
      anon_sym_mid,
      anon_sym_ni,
      anon_sym_nih,
      anon_sym_payto,
      anon_sym_pkcs11,
      anon_sym_pres,
      anon_sym_reload,
      anon_sym_secret_DASHtoken,
      anon_sym_session,
      anon_sym_sms,
      anon_sym_tag,
      anon_sym_telnet,
      anon_sym_urn,
      anon_sym_ws,
      anon_sym_wss,
  [255] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(49), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    ACTIONS(47), 9,
      anon_sym_SLASH,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(45), 34,
      anon_sym_about,
      anon_sym_acct,
      anon_sym_arcp,
      anon_sym_cap,
      anon_sym_cid,
      anon_sym_data,
      anon_sym_dns,
      anon_sym_example,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_geo,
      anon_sym_h323,
      anon_sym_http,
      anon_sym_https,
      anon_sym_im,
      anon_sym_info,
      anon_sym_ipp,
      anon_sym_mailto,
      anon_sym_mid,
      anon_sym_ni,
      anon_sym_nih,
      anon_sym_payto,
      anon_sym_pkcs11,
      anon_sym_pres,
      anon_sym_reload,
      anon_sym_secret_DASHtoken,
      anon_sym_session,
      anon_sym_sms,
      anon_sym_tag,
      anon_sym_telnet,
      anon_sym_urn,
      anon_sym_ws,
      anon_sym_wss,
      sym_identifier,
  [312] = 5,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(52), 1,
      aux_sym__whitespace_token1,
    STATE(6), 1,
      aux_sym__whitespace,
    ACTIONS(47), 6,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(45), 36,
      anon_sym_about,
      anon_sym_acct,
      anon_sym_arcp,
      anon_sym_cap,
      anon_sym_cid,
      anon_sym_data,
      anon_sym_dns,
      anon_sym_example,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_geo,
      anon_sym_h323,
      anon_sym_http,
      anon_sym_https,
      anon_sym_im,
      anon_sym_info,
      anon_sym_ipp,
      anon_sym_mailto,
      anon_sym_mid,
      anon_sym_ni,
      anon_sym_nih,
      anon_sym_payto,
      anon_sym_pkcs11,
      anon_sym_pres,
      anon_sym_reload,
      anon_sym_secret_DASHtoken,
      anon_sym_session,
      anon_sym_sms,
      anon_sym_tag,
      anon_sym_telnet,
      anon_sym_urn,
      anon_sym_ws,
      anon_sym_wss,
      aux_sym_header_token1,
      aux_sym_header_token2,
      sym_identifier,
  [368] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(57), 10,
      anon_sym_SLASH,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      aux_sym__whitespace_token1,
    ACTIONS(55), 34,
      anon_sym_about,
      anon_sym_acct,
      anon_sym_arcp,
      anon_sym_cap,
      anon_sym_cid,
      anon_sym_data,
      anon_sym_dns,
      anon_sym_example,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_geo,
      anon_sym_h323,
      anon_sym_http,
      anon_sym_https,
      anon_sym_im,
      anon_sym_info,
      anon_sym_ipp,
      anon_sym_mailto,
      anon_sym_mid,
      anon_sym_ni,
      anon_sym_nih,
      anon_sym_payto,
      anon_sym_pkcs11,
      anon_sym_pres,
      anon_sym_reload,
      anon_sym_secret_DASHtoken,
      anon_sym_session,
      anon_sym_sms,
      anon_sym_tag,
      anon_sym_telnet,
      anon_sym_urn,
      anon_sym_ws,
      anon_sym_wss,
      sym_identifier,
  [420] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(57), 6,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(55), 37,
      anon_sym_about,
      anon_sym_acct,
      anon_sym_arcp,
      anon_sym_cap,
      anon_sym_cid,
      anon_sym_data,
      anon_sym_dns,
      anon_sym_example,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_geo,
      anon_sym_h323,
      anon_sym_http,
      anon_sym_https,
      anon_sym_im,
      anon_sym_info,
      anon_sym_ipp,
      anon_sym_mailto,
      anon_sym_mid,
      anon_sym_ni,
      anon_sym_nih,
      anon_sym_payto,
      anon_sym_pkcs11,
      anon_sym_pres,
      anon_sym_reload,
      anon_sym_secret_DASHtoken,
      anon_sym_session,
      anon_sym_sms,
      anon_sym_tag,
      anon_sym_telnet,
      anon_sym_urn,
      anon_sym_ws,
      anon_sym_wss,
      aux_sym_header_token1,
      aux_sym_header_token2,
      sym_identifier,
      aux_sym__whitespace_token1,
  [471] = 13,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_method,
    ACTIONS(65), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    STATE(196), 1,
      sym_http_version,
    STATE(235), 1,
      sym_response,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(11), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(17), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [523] = 13,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      sym_method,
    STATE(196), 1,
      sym_http_version,
    STATE(236), 1,
      sym_response,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(15), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(22), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [575] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(81), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(30), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(21), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [618] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(15), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(22), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [661] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(14), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(18), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [704] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(30), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(20), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [747] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(93), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(30), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(19), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [790] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(100), 1,
      sym_method,
    ACTIONS(102), 1,
      aux_sym_xml_body_token1,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(105), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(108), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(16), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [829] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(81), 1,
      sym_method,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(16), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [868] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym_method,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(16), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [907] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      sym_method,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(16), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [946] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(118), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(16), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [985] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      sym_method,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(16), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [1024] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(93), 1,
      sym_method,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(16), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [1063] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(126), 1,
      aux_sym_xml_body_token3,
    STATE(25), 1,
      aux_sym_form_data_repeat2,
    STATE(157), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(122), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1096] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(132), 1,
      anon_sym_AMP,
    ACTIONS(135), 1,
      aux_sym_xml_body_token3,
    STATE(24), 1,
      aux_sym_form_data_repeat2,
    STATE(157), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(130), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(128), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1129] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(126), 1,
      aux_sym_xml_body_token3,
    STATE(24), 1,
      aux_sym_form_data_repeat2,
    STATE(157), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(140), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1162] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(144), 6,
      sym_method,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(142), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1185] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(148), 6,
      sym_method,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(146), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1208] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(154), 1,
      anon_sym_COLON,
    STATE(42), 1,
      sym_port,
    ACTIONS(152), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(150), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1235] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(156), 1,
      anon_sym_COLON,
    STATE(42), 1,
      sym_port,
    ACTIONS(152), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(150), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1262] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(30), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(163), 4,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1289] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(169), 1,
      aux_sym_xml_body_token3,
    ACTIONS(167), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1313] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(175), 1,
      aux_sym_xml_body_token3,
    ACTIONS(173), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(171), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1337] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(181), 1,
      aux_sym_xml_body_token3,
    ACTIONS(179), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1361] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(187), 1,
      aux_sym_xml_body_token3,
    ACTIONS(185), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(183), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1385] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(193), 1,
      aux_sym_xml_body_token3,
    ACTIONS(191), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(189), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1409] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(199), 1,
      aux_sym_xml_body_token3,
    ACTIONS(197), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1433] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(203), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(201), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1454] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(207), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1475] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(211), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(209), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1496] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(215), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(213), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1517] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(219), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(217), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1538] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(223), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(221), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1559] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(227), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1580] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(231), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(229), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1601] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(235), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(233), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1622] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(239), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(237), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1643] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(243), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(241), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1664] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(247), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(245), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1685] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(251), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(249), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1706] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(255), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(253), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1727] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(259), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(257), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1748] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(263), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(261), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1769] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(251), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(249), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1790] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(267), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(265), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1811] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(167), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1832] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(271), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(269), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1853] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(275), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(273), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1874] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(279), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(277), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1895] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_method,
    ACTIONS(289), 1,
      anon_sym_AT,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(295), 1,
      aux_sym_script_variable_token1,
    STATE(59), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1924] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(9), 1,
      sym_method,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_script_variable_token1,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      sym_comment,
    STATE(59), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1953] = 10,
    ACTIONS(302), 1,
      sym_identifier,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      anon_sym_AT,
    ACTIONS(308), 1,
      anon_sym_POUND,
    ACTIONS(310), 1,
      anon_sym_QMARK,
    STATE(86), 1,
      sym_authority,
    STATE(102), 1,
      aux_sym_path_repeat1,
    STATE(169), 1,
      sym_path,
    STATE(226), 1,
      sym_pair,
    ACTIONS(312), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [1985] = 5,
    ACTIONS(314), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(106), 1,
      sym_variable,
    ACTIONS(318), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(316), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2005] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(322), 1,
      aux_sym__whitespace_token1,
    STATE(63), 1,
      aux_sym__whitespace,
    ACTIONS(47), 6,
      anon_sym_HTTP_SLASH,
      sym_status_text,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
  [2023] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(329), 1,
      aux_sym__whitespace_token1,
    STATE(63), 1,
      aux_sym__whitespace,
    STATE(87), 1,
      sym_boolean,
    ACTIONS(325), 2,
      sym_number,
      sym_string,
    ACTIONS(327), 2,
      anon_sym_true,
      anon_sym_false,
  [2044] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(57), 7,
      anon_sym_HTTP_SLASH,
      sym_status_text,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      aux_sym__whitespace_token1,
  [2057] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(329), 1,
      aux_sym__whitespace_token1,
    STATE(63), 1,
      aux_sym__whitespace,
    STATE(72), 1,
      sym_boolean,
    ACTIONS(327), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(331), 2,
      sym_number,
      sym_string,
  [2078] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(329), 1,
      aux_sym__whitespace_token1,
    STATE(66), 1,
      aux_sym__whitespace,
    STATE(87), 1,
      sym_boolean,
    ACTIONS(325), 2,
      sym_number,
      sym_string,
    ACTIONS(327), 2,
      anon_sym_true,
      anon_sym_false,
  [2099] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(333), 1,
      sym_identifier,
    STATE(112), 1,
      sym_variable,
    ACTIONS(318), 5,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2116] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(329), 1,
      aux_sym__whitespace_token1,
    STATE(64), 1,
      aux_sym__whitespace,
    STATE(82), 1,
      sym_boolean,
    ACTIONS(327), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(335), 2,
      sym_number,
      sym_string,
  [2137] = 4,
    ACTIONS(341), 1,
      anon_sym_EQ,
    ACTIONS(343), 1,
      sym_param,
    ACTIONS(337), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(339), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2153] = 4,
    ACTIONS(345), 1,
      anon_sym_SLASH,
    STATE(71), 1,
      aux_sym_path_repeat1,
    ACTIONS(348), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(350), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2169] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(352), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2181] = 4,
    ACTIONS(354), 1,
      anon_sym_SLASH,
    STATE(71), 1,
      aux_sym_path_repeat1,
    ACTIONS(356), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(358), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2197] = 5,
    ACTIONS(360), 1,
      anon_sym_POUND,
    ACTIONS(364), 1,
      anon_sym_AMP,
    ACTIONS(367), 1,
      sym_query_key,
    ACTIONS(362), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2215] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(370), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2227] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(374), 1,
      sym_string,
    STATE(23), 1,
      sym_boolean,
    ACTIONS(372), 2,
      sym_identifier,
      sym_number,
    ACTIONS(376), 2,
      anon_sym_true,
      anon_sym_false,
  [2245] = 5,
    ACTIONS(378), 1,
      anon_sym_POUND,
    ACTIONS(382), 1,
      anon_sym_AMP,
    ACTIONS(384), 1,
      sym_query_key,
    ACTIONS(380), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2263] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(388), 1,
      sym_string,
    STATE(27), 1,
      sym_boolean,
    ACTIONS(376), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(386), 2,
      sym_identifier,
      sym_number,
  [2281] = 5,
    ACTIONS(382), 1,
      anon_sym_AMP,
    ACTIONS(384), 1,
      sym_query_key,
    ACTIONS(390), 1,
      anon_sym_POUND,
    ACTIONS(392), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2299] = 5,
    ACTIONS(382), 1,
      anon_sym_AMP,
    ACTIONS(384), 1,
      sym_query_key,
    ACTIONS(394), 1,
      anon_sym_POUND,
    ACTIONS(396), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2317] = 1,
    ACTIONS(237), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2327] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(398), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2339] = 1,
    ACTIONS(269), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2349] = 1,
    ACTIONS(225), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2359] = 3,
    ACTIONS(400), 1,
      anon_sym_COLON,
    STATE(113), 1,
      sym_port,
    ACTIONS(150), 5,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2373] = 6,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(402), 1,
      anon_sym_POUND,
    ACTIONS(404), 1,
      anon_sym_QMARK,
    STATE(102), 1,
      aux_sym_path_repeat1,
    STATE(173), 1,
      sym_path,
    ACTIONS(406), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2393] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(408), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2405] = 3,
    ACTIONS(410), 1,
      anon_sym_COLON,
    STATE(113), 1,
      sym_port,
    ACTIONS(150), 5,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2419] = 6,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(378), 1,
      anon_sym_POUND,
    ACTIONS(412), 1,
      anon_sym_QMARK,
    STATE(102), 1,
      aux_sym_path_repeat1,
    STATE(161), 1,
      sym_path,
    ACTIONS(414), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2439] = 5,
    ACTIONS(382), 1,
      anon_sym_AMP,
    ACTIONS(384), 1,
      sym_query_key,
    ACTIONS(416), 1,
      anon_sym_POUND,
    ACTIONS(418), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2457] = 5,
    ACTIONS(382), 1,
      anon_sym_AMP,
    ACTIONS(384), 1,
      sym_query_key,
    ACTIONS(402), 1,
      anon_sym_POUND,
    ACTIONS(420), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2475] = 5,
    ACTIONS(382), 1,
      anon_sym_AMP,
    ACTIONS(384), 1,
      sym_query_key,
    ACTIONS(422), 1,
      anon_sym_POUND,
    ACTIONS(424), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2493] = 6,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(308), 1,
      anon_sym_POUND,
    ACTIONS(310), 1,
      anon_sym_QMARK,
    STATE(102), 1,
      aux_sym_path_repeat1,
    STATE(169), 1,
      sym_path,
    ACTIONS(312), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2513] = 5,
    ACTIONS(308), 1,
      anon_sym_POUND,
    ACTIONS(382), 1,
      anon_sym_AMP,
    ACTIONS(384), 1,
      sym_query_key,
    ACTIONS(426), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(91), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2531] = 1,
    ACTIONS(273), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2541] = 4,
    ACTIONS(432), 1,
      anon_sym_EQ,
    ACTIONS(434), 1,
      sym_param,
    ACTIONS(428), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(430), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2557] = 6,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(422), 1,
      anon_sym_POUND,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    STATE(102), 1,
      aux_sym_path_repeat1,
    STATE(132), 1,
      sym_path,
    ACTIONS(438), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2577] = 2,
    ACTIONS(237), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(239), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2588] = 3,
    ACTIONS(444), 1,
      sym_param,
    ACTIONS(440), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(442), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2601] = 3,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    STATE(100), 1,
      aux_sym_path_repeat1,
    ACTIONS(348), 4,
      anon_sym_POUND,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2614] = 3,
    ACTIONS(453), 1,
      sym_param,
    ACTIONS(449), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(451), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2627] = 3,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    STATE(100), 1,
      aux_sym_path_repeat1,
    ACTIONS(356), 4,
      anon_sym_POUND,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2640] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(455), 1,
      sym_identifier,
    STATE(89), 1,
      sym_host,
    STATE(185), 1,
      sym_authority,
    STATE(230), 1,
      sym_pair,
  [2659] = 2,
    ACTIONS(459), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(457), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2670] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(461), 1,
      sym_identifier,
    STATE(58), 1,
      sym_host,
    STATE(192), 1,
      sym_authority,
    STATE(230), 1,
      sym_pair,
  [2689] = 3,
    ACTIONS(463), 1,
      anon_sym_SLASH,
    ACTIONS(348), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(350), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2702] = 2,
    ACTIONS(269), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(271), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2713] = 2,
    ACTIONS(225), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(227), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2724] = 2,
    ACTIONS(273), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(275), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2735] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(468), 1,
      sym__line,
    STATE(114), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(466), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2749] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(52), 1,
      sym_variable,
  [2765] = 2,
    ACTIONS(470), 1,
      anon_sym_SLASH,
    ACTIONS(348), 4,
      anon_sym_POUND,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2775] = 1,
    ACTIONS(221), 5,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2783] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(475), 1,
      sym__line,
    STATE(114), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(473), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2797] = 2,
    ACTIONS(478), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(480), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2807] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(482), 1,
      sym_identifier,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      aux_sym__whitespace_token1,
    STATE(121), 1,
      aux_sym__whitespace,
  [2823] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(382), 1,
      anon_sym_AMP,
    ACTIONS(384), 1,
      sym_query_key,
    STATE(79), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2837] = 1,
    ACTIONS(488), 5,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2845] = 2,
    ACTIONS(490), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(492), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2855] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(382), 1,
      anon_sym_AMP,
    ACTIONS(384), 1,
      sym_query_key,
    STATE(77), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2869] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(494), 1,
      aux_sym__whitespace_token1,
    STATE(121), 1,
      aux_sym__whitespace,
    ACTIONS(47), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [2883] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(382), 1,
      anon_sym_AMP,
    ACTIONS(384), 1,
      sym_query_key,
    STATE(80), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2897] = 2,
    ACTIONS(497), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(499), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2907] = 2,
    ACTIONS(501), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(503), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2917] = 1,
    ACTIONS(459), 5,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2925] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(329), 1,
      aux_sym__whitespace_token1,
    ACTIONS(505), 1,
      anon_sym_HTTP_SLASH,
    STATE(63), 1,
      aux_sym__whitespace,
    STATE(239), 1,
      sym_http_version,
  [2941] = 1,
    ACTIONS(507), 5,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2949] = 1,
    ACTIONS(201), 5,
      anon_sym_SLASH,
      anon_sym_POUND,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2957] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(382), 1,
      anon_sym_AMP,
    ACTIONS(384), 1,
      sym_query_key,
    STATE(90), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2971] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(50), 1,
      sym_variable,
  [2987] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(382), 1,
      anon_sym_AMP,
    ACTIONS(384), 1,
      sym_query_key,
    STATE(92), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [3001] = 3,
    ACTIONS(394), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_QMARK,
    ACTIONS(511), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3012] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(513), 1,
      sym_identifier,
    ACTIONS(515), 1,
      aux_sym_xml_body_token3,
    STATE(133), 1,
      aux_sym_form_data_repeat1,
  [3025] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(486), 1,
      aux_sym__whitespace_token1,
    ACTIONS(518), 1,
      sym_identifier,
    STATE(121), 1,
      aux_sym__whitespace,
  [3038] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(486), 1,
      aux_sym__whitespace_token1,
    ACTIONS(520), 1,
      sym_identifier,
    STATE(134), 1,
      aux_sym__whitespace,
  [3051] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(486), 1,
      aux_sym__whitespace_token1,
    ACTIONS(522), 1,
      sym_identifier,
    STATE(121), 1,
      aux_sym__whitespace,
  [3064] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(524), 1,
      aux_sym_xml_body_token2,
    ACTIONS(526), 1,
      sym__line,
    STATE(156), 1,
      aux_sym_script_variable_repeat1,
  [3077] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(486), 1,
      aux_sym__whitespace_token1,
    ACTIONS(528), 1,
      sym_identifier,
    STATE(136), 1,
      aux_sym__whitespace,
  [3090] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(530), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [3103] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(532), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(139), 1,
      aux_sym__whitespace,
  [3116] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(534), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [3129] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(536), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(141), 1,
      aux_sym__whitespace,
  [3142] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(538), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [3155] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(540), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(143), 1,
      aux_sym__whitespace,
  [3168] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(542), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [3181] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(544), 1,
      aux_sym_json_body_token3,
    ACTIONS(546), 1,
      sym__line,
    STATE(151), 1,
      aux_sym_script_variable_repeat1,
  [3194] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(548), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(145), 1,
      aux_sym__whitespace,
  [3207] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(550), 1,
      aux_sym__whitespace_token1,
    ACTIONS(552), 1,
      sym__line,
    STATE(154), 1,
      aux_sym__whitespace,
  [3220] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(47), 1,
      sym_status_code,
    ACTIONS(554), 1,
      aux_sym__whitespace_token1,
    STATE(149), 1,
      aux_sym__whitespace,
  [3233] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(486), 1,
      aux_sym__whitespace_token1,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(162), 1,
      aux_sym__whitespace,
  [3246] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(473), 1,
      aux_sym_json_body_token3,
    ACTIONS(559), 1,
      sym__line,
    STATE(151), 1,
      aux_sym_script_variable_repeat1,
  [3259] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(562), 1,
      sym_status_code,
    ACTIONS(564), 1,
      aux_sym__whitespace_token1,
    STATE(149), 1,
      aux_sym__whitespace,
  [3272] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(550), 1,
      aux_sym__whitespace_token1,
    ACTIONS(566), 1,
      sym__line,
    STATE(154), 1,
      aux_sym__whitespace,
  [3285] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(45), 1,
      sym__line,
    ACTIONS(568), 1,
      aux_sym__whitespace_token1,
    STATE(154), 1,
      aux_sym__whitespace,
  [3298] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(571), 1,
      anon_sym_EQ,
    STATE(164), 1,
      aux_sym__whitespace,
  [3311] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(473), 1,
      aux_sym_xml_body_token2,
    ACTIONS(573), 1,
      sym__line,
    STATE(156), 1,
      aux_sym_script_variable_repeat1,
  [3324] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(576), 1,
      sym_identifier,
    ACTIONS(578), 1,
      aux_sym_xml_body_token3,
    STATE(133), 1,
      aux_sym_form_data_repeat1,
  [3337] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(580), 1,
      anon_sym_LPAREN,
    ACTIONS(582), 1,
      sym__line,
    STATE(146), 1,
      aux_sym_script_variable_repeat1,
  [3350] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(329), 1,
      aux_sym__whitespace_token1,
    ACTIONS(584), 1,
      sym_status_text,
    STATE(63), 1,
      aux_sym__whitespace,
  [3363] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(586), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(165), 1,
      aux_sym__whitespace,
  [3376] = 3,
    ACTIONS(422), 1,
      anon_sym_POUND,
    ACTIONS(436), 1,
      anon_sym_QMARK,
    ACTIONS(438), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3387] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(486), 1,
      aux_sym__whitespace_token1,
    ACTIONS(588), 1,
      sym_identifier,
    STATE(121), 1,
      aux_sym__whitespace,
  [3400] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(590), 1,
      aux_sym_script_variable_token2,
    ACTIONS(592), 1,
      sym__line,
    STATE(168), 1,
      aux_sym_script_variable_repeat1,
  [3413] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(594), 1,
      anon_sym_EQ,
    STATE(5), 1,
      aux_sym__whitespace,
  [3426] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(596), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [3439] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(598), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(170), 1,
      aux_sym__whitespace,
  [3452] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(546), 1,
      sym__line,
    ACTIONS(600), 1,
      aux_sym_json_body_token3,
    STATE(151), 1,
      aux_sym_script_variable_repeat1,
  [3465] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(473), 1,
      aux_sym_script_variable_token2,
    ACTIONS(602), 1,
      sym__line,
    STATE(168), 1,
      aux_sym_script_variable_repeat1,
  [3478] = 3,
    ACTIONS(402), 1,
      anon_sym_POUND,
    ACTIONS(404), 1,
      anon_sym_QMARK,
    ACTIONS(406), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3489] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(605), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [3502] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(57), 3,
      anon_sym_LPAREN,
      sym_identifier,
      aux_sym__whitespace_token1,
  [3511] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(607), 1,
      anon_sym_AT,
    ACTIONS(609), 1,
      aux_sym__whitespace_token1,
    STATE(153), 1,
      aux_sym__whitespace,
  [3524] = 3,
    ACTIONS(378), 1,
      anon_sym_POUND,
    ACTIONS(412), 1,
      anon_sym_QMARK,
    ACTIONS(414), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3535] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(611), 1,
      sym__line,
    STATE(137), 1,
      aux_sym_script_variable_repeat1,
  [3545] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(57), 2,
      sym_status_code,
      aux_sym__whitespace_token1,
  [3553] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(329), 1,
      aux_sym__whitespace_token1,
    STATE(159), 1,
      aux_sym__whitespace,
  [3563] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(613), 1,
      sym_param,
    STATE(212), 1,
      sym_fragment,
  [3573] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(486), 1,
      aux_sym__whitespace_token1,
    STATE(116), 1,
      aux_sym__whitespace,
  [3583] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(615), 1,
      sym__line,
    STATE(110), 1,
      aux_sym_script_variable_repeat1,
  [3593] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(613), 1,
      sym_param,
    STATE(213), 1,
      sym_fragment,
  [3603] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(613), 1,
      sym_param,
    STATE(225), 1,
      sym_fragment,
  [3613] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(111), 1,
      aux_sym__whitespace,
  [3623] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(619), 1,
      aux_sym_port_token1,
  [3633] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(621), 1,
      sym_identifier,
    STATE(39), 1,
      sym_host,
  [3643] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(623), 1,
      sym_identifier,
    STATE(97), 1,
      sym_host,
  [3653] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(613), 1,
      sym_param,
    STATE(211), 1,
      sym_fragment,
  [3663] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(625), 1,
      sym__line,
    STATE(167), 1,
      aux_sym_script_variable_repeat1,
  [3673] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(582), 1,
      sym__line,
    STATE(146), 1,
      aux_sym_script_variable_repeat1,
  [3683] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(627), 1,
      anon_sym_COLON,
    ACTIONS(629), 1,
      anon_sym_EQ,
  [3693] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
  [3703] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(609), 1,
      aux_sym__whitespace_token1,
    STATE(148), 1,
      aux_sym__whitespace,
  [3713] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(621), 1,
      sym_identifier,
    STATE(47), 1,
      sym_host,
  [3723] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(130), 1,
      aux_sym__whitespace,
  [3733] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(55), 2,
      aux_sym__whitespace_token1,
      sym__line,
  [3741] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(631), 1,
      sym__line,
    STATE(163), 1,
      aux_sym_script_variable_repeat1,
  [3751] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(564), 1,
      aux_sym__whitespace_token1,
    STATE(152), 1,
      aux_sym__whitespace,
  [3761] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(613), 1,
      sym_param,
    STATE(227), 1,
      sym_fragment,
  [3771] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(617), 1,
      sym_identifier,
    ACTIONS(633), 1,
      aux_sym_port_token1,
  [3781] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(613), 1,
      sym_param,
    STATE(233), 1,
      sym_fragment,
  [3791] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(623), 1,
      sym_identifier,
    STATE(86), 1,
      sym_host,
  [3801] = 3,
    ACTIONS(329), 1,
      aux_sym__whitespace_token1,
    ACTIONS(635), 1,
      aux_sym_request_token1,
    STATE(126), 1,
      aux_sym__whitespace,
  [3811] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(613), 1,
      sym_param,
    STATE(232), 1,
      sym_fragment,
  [3821] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(637), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3828] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(639), 1,
      anon_sym_AT,
  [3835] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(641), 1,
      anon_sym_EQ,
  [3842] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(643), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3849] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(507), 1,
      sym_identifier,
  [3856] = 1,
    ACTIONS(645), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3861] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(647), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3868] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(627), 1,
      anon_sym_COLON,
  [3875] = 1,
    ACTIONS(438), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3880] = 1,
    ACTIONS(649), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3885] = 1,
    ACTIONS(651), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3890] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(653), 1,
      aux_sym__whitespace_token1,
  [3897] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(576), 1,
      sym_identifier,
  [3904] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(655), 1,
      ts_builtin_sym_end,
  [3911] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(657), 1,
      sym_query_key,
  [3918] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(488), 1,
      sym_identifier,
  [3925] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(659), 1,
      sym_identifier,
  [3932] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(661), 1,
      anon_sym_COLON,
  [3939] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(663), 1,
      sym_identifier,
  [3946] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(629), 1,
      anon_sym_EQ,
  [3953] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(665), 1,
      aux_sym_port_token1,
  [3960] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(667), 1,
      sym_identifier,
  [3967] = 1,
    ACTIONS(669), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3972] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(671), 1,
      anon_sym_AT,
  [3979] = 1,
    ACTIONS(414), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3984] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(673), 1,
      aux_sym_port_token1,
  [3991] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(675), 1,
      aux_sym_http_version_token1,
  [3998] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(677), 1,
      anon_sym_AT,
  [4005] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(679), 1,
      aux_sym_http_version_token1,
  [4012] = 1,
    ACTIONS(511), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [4017] = 1,
    ACTIONS(681), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [4022] = 1,
    ACTIONS(683), 1,
      aux_sym_request_token1,
  [4026] = 1,
    ACTIONS(685), 1,
      aux_sym_request_token1,
  [4030] = 1,
    ACTIONS(687), 1,
      aux_sym_request_token1,
  [4034] = 1,
    ACTIONS(653), 1,
      aux_sym_request_token1,
  [4038] = 1,
    ACTIONS(689), 1,
      aux_sym_request_token1,
  [4042] = 1,
    ACTIONS(691), 1,
      aux_sym_request_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 171,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 312,
  [SMALL_STATE(7)] = 368,
  [SMALL_STATE(8)] = 420,
  [SMALL_STATE(9)] = 471,
  [SMALL_STATE(10)] = 523,
  [SMALL_STATE(11)] = 575,
  [SMALL_STATE(12)] = 618,
  [SMALL_STATE(13)] = 661,
  [SMALL_STATE(14)] = 704,
  [SMALL_STATE(15)] = 747,
  [SMALL_STATE(16)] = 790,
  [SMALL_STATE(17)] = 829,
  [SMALL_STATE(18)] = 868,
  [SMALL_STATE(19)] = 907,
  [SMALL_STATE(20)] = 946,
  [SMALL_STATE(21)] = 985,
  [SMALL_STATE(22)] = 1024,
  [SMALL_STATE(23)] = 1063,
  [SMALL_STATE(24)] = 1096,
  [SMALL_STATE(25)] = 1129,
  [SMALL_STATE(26)] = 1162,
  [SMALL_STATE(27)] = 1185,
  [SMALL_STATE(28)] = 1208,
  [SMALL_STATE(29)] = 1235,
  [SMALL_STATE(30)] = 1262,
  [SMALL_STATE(31)] = 1289,
  [SMALL_STATE(32)] = 1313,
  [SMALL_STATE(33)] = 1337,
  [SMALL_STATE(34)] = 1361,
  [SMALL_STATE(35)] = 1385,
  [SMALL_STATE(36)] = 1409,
  [SMALL_STATE(37)] = 1433,
  [SMALL_STATE(38)] = 1454,
  [SMALL_STATE(39)] = 1475,
  [SMALL_STATE(40)] = 1496,
  [SMALL_STATE(41)] = 1517,
  [SMALL_STATE(42)] = 1538,
  [SMALL_STATE(43)] = 1559,
  [SMALL_STATE(44)] = 1580,
  [SMALL_STATE(45)] = 1601,
  [SMALL_STATE(46)] = 1622,
  [SMALL_STATE(47)] = 1643,
  [SMALL_STATE(48)] = 1664,
  [SMALL_STATE(49)] = 1685,
  [SMALL_STATE(50)] = 1706,
  [SMALL_STATE(51)] = 1727,
  [SMALL_STATE(52)] = 1748,
  [SMALL_STATE(53)] = 1769,
  [SMALL_STATE(54)] = 1790,
  [SMALL_STATE(55)] = 1811,
  [SMALL_STATE(56)] = 1832,
  [SMALL_STATE(57)] = 1853,
  [SMALL_STATE(58)] = 1874,
  [SMALL_STATE(59)] = 1895,
  [SMALL_STATE(60)] = 1924,
  [SMALL_STATE(61)] = 1953,
  [SMALL_STATE(62)] = 1985,
  [SMALL_STATE(63)] = 2005,
  [SMALL_STATE(64)] = 2023,
  [SMALL_STATE(65)] = 2044,
  [SMALL_STATE(66)] = 2057,
  [SMALL_STATE(67)] = 2078,
  [SMALL_STATE(68)] = 2099,
  [SMALL_STATE(69)] = 2116,
  [SMALL_STATE(70)] = 2137,
  [SMALL_STATE(71)] = 2153,
  [SMALL_STATE(72)] = 2169,
  [SMALL_STATE(73)] = 2181,
  [SMALL_STATE(74)] = 2197,
  [SMALL_STATE(75)] = 2215,
  [SMALL_STATE(76)] = 2227,
  [SMALL_STATE(77)] = 2245,
  [SMALL_STATE(78)] = 2263,
  [SMALL_STATE(79)] = 2281,
  [SMALL_STATE(80)] = 2299,
  [SMALL_STATE(81)] = 2317,
  [SMALL_STATE(82)] = 2327,
  [SMALL_STATE(83)] = 2339,
  [SMALL_STATE(84)] = 2349,
  [SMALL_STATE(85)] = 2359,
  [SMALL_STATE(86)] = 2373,
  [SMALL_STATE(87)] = 2393,
  [SMALL_STATE(88)] = 2405,
  [SMALL_STATE(89)] = 2419,
  [SMALL_STATE(90)] = 2439,
  [SMALL_STATE(91)] = 2457,
  [SMALL_STATE(92)] = 2475,
  [SMALL_STATE(93)] = 2493,
  [SMALL_STATE(94)] = 2513,
  [SMALL_STATE(95)] = 2531,
  [SMALL_STATE(96)] = 2541,
  [SMALL_STATE(97)] = 2557,
  [SMALL_STATE(98)] = 2577,
  [SMALL_STATE(99)] = 2588,
  [SMALL_STATE(100)] = 2601,
  [SMALL_STATE(101)] = 2614,
  [SMALL_STATE(102)] = 2627,
  [SMALL_STATE(103)] = 2640,
  [SMALL_STATE(104)] = 2659,
  [SMALL_STATE(105)] = 2670,
  [SMALL_STATE(106)] = 2689,
  [SMALL_STATE(107)] = 2702,
  [SMALL_STATE(108)] = 2713,
  [SMALL_STATE(109)] = 2724,
  [SMALL_STATE(110)] = 2735,
  [SMALL_STATE(111)] = 2749,
  [SMALL_STATE(112)] = 2765,
  [SMALL_STATE(113)] = 2775,
  [SMALL_STATE(114)] = 2783,
  [SMALL_STATE(115)] = 2797,
  [SMALL_STATE(116)] = 2807,
  [SMALL_STATE(117)] = 2823,
  [SMALL_STATE(118)] = 2837,
  [SMALL_STATE(119)] = 2845,
  [SMALL_STATE(120)] = 2855,
  [SMALL_STATE(121)] = 2869,
  [SMALL_STATE(122)] = 2883,
  [SMALL_STATE(123)] = 2897,
  [SMALL_STATE(124)] = 2907,
  [SMALL_STATE(125)] = 2917,
  [SMALL_STATE(126)] = 2925,
  [SMALL_STATE(127)] = 2941,
  [SMALL_STATE(128)] = 2949,
  [SMALL_STATE(129)] = 2957,
  [SMALL_STATE(130)] = 2971,
  [SMALL_STATE(131)] = 2987,
  [SMALL_STATE(132)] = 3001,
  [SMALL_STATE(133)] = 3012,
  [SMALL_STATE(134)] = 3025,
  [SMALL_STATE(135)] = 3038,
  [SMALL_STATE(136)] = 3051,
  [SMALL_STATE(137)] = 3064,
  [SMALL_STATE(138)] = 3077,
  [SMALL_STATE(139)] = 3090,
  [SMALL_STATE(140)] = 3103,
  [SMALL_STATE(141)] = 3116,
  [SMALL_STATE(142)] = 3129,
  [SMALL_STATE(143)] = 3142,
  [SMALL_STATE(144)] = 3155,
  [SMALL_STATE(145)] = 3168,
  [SMALL_STATE(146)] = 3181,
  [SMALL_STATE(147)] = 3194,
  [SMALL_STATE(148)] = 3207,
  [SMALL_STATE(149)] = 3220,
  [SMALL_STATE(150)] = 3233,
  [SMALL_STATE(151)] = 3246,
  [SMALL_STATE(152)] = 3259,
  [SMALL_STATE(153)] = 3272,
  [SMALL_STATE(154)] = 3285,
  [SMALL_STATE(155)] = 3298,
  [SMALL_STATE(156)] = 3311,
  [SMALL_STATE(157)] = 3324,
  [SMALL_STATE(158)] = 3337,
  [SMALL_STATE(159)] = 3350,
  [SMALL_STATE(160)] = 3363,
  [SMALL_STATE(161)] = 3376,
  [SMALL_STATE(162)] = 3387,
  [SMALL_STATE(163)] = 3400,
  [SMALL_STATE(164)] = 3413,
  [SMALL_STATE(165)] = 3426,
  [SMALL_STATE(166)] = 3439,
  [SMALL_STATE(167)] = 3452,
  [SMALL_STATE(168)] = 3465,
  [SMALL_STATE(169)] = 3478,
  [SMALL_STATE(170)] = 3489,
  [SMALL_STATE(171)] = 3502,
  [SMALL_STATE(172)] = 3511,
  [SMALL_STATE(173)] = 3524,
  [SMALL_STATE(174)] = 3535,
  [SMALL_STATE(175)] = 3545,
  [SMALL_STATE(176)] = 3553,
  [SMALL_STATE(177)] = 3563,
  [SMALL_STATE(178)] = 3573,
  [SMALL_STATE(179)] = 3583,
  [SMALL_STATE(180)] = 3593,
  [SMALL_STATE(181)] = 3603,
  [SMALL_STATE(182)] = 3613,
  [SMALL_STATE(183)] = 3623,
  [SMALL_STATE(184)] = 3633,
  [SMALL_STATE(185)] = 3643,
  [SMALL_STATE(186)] = 3653,
  [SMALL_STATE(187)] = 3663,
  [SMALL_STATE(188)] = 3673,
  [SMALL_STATE(189)] = 3683,
  [SMALL_STATE(190)] = 3693,
  [SMALL_STATE(191)] = 3703,
  [SMALL_STATE(192)] = 3713,
  [SMALL_STATE(193)] = 3723,
  [SMALL_STATE(194)] = 3733,
  [SMALL_STATE(195)] = 3741,
  [SMALL_STATE(196)] = 3751,
  [SMALL_STATE(197)] = 3761,
  [SMALL_STATE(198)] = 3771,
  [SMALL_STATE(199)] = 3781,
  [SMALL_STATE(200)] = 3791,
  [SMALL_STATE(201)] = 3801,
  [SMALL_STATE(202)] = 3811,
  [SMALL_STATE(203)] = 3821,
  [SMALL_STATE(204)] = 3828,
  [SMALL_STATE(205)] = 3835,
  [SMALL_STATE(206)] = 3842,
  [SMALL_STATE(207)] = 3849,
  [SMALL_STATE(208)] = 3856,
  [SMALL_STATE(209)] = 3861,
  [SMALL_STATE(210)] = 3868,
  [SMALL_STATE(211)] = 3875,
  [SMALL_STATE(212)] = 3880,
  [SMALL_STATE(213)] = 3885,
  [SMALL_STATE(214)] = 3890,
  [SMALL_STATE(215)] = 3897,
  [SMALL_STATE(216)] = 3904,
  [SMALL_STATE(217)] = 3911,
  [SMALL_STATE(218)] = 3918,
  [SMALL_STATE(219)] = 3925,
  [SMALL_STATE(220)] = 3932,
  [SMALL_STATE(221)] = 3939,
  [SMALL_STATE(222)] = 3946,
  [SMALL_STATE(223)] = 3953,
  [SMALL_STATE(224)] = 3960,
  [SMALL_STATE(225)] = 3967,
  [SMALL_STATE(226)] = 3972,
  [SMALL_STATE(227)] = 3979,
  [SMALL_STATE(228)] = 3984,
  [SMALL_STATE(229)] = 3991,
  [SMALL_STATE(230)] = 3998,
  [SMALL_STATE(231)] = 4005,
  [SMALL_STATE(232)] = 4012,
  [SMALL_STATE(233)] = 4017,
  [SMALL_STATE(234)] = 4022,
  [SMALL_STATE(235)] = 4026,
  [SMALL_STATE(236)] = 4030,
  [SMALL_STATE(237)] = 4034,
  [SMALL_STATE(238)] = 4038,
  [SMALL_STATE(239)] = 4042,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(8),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(222),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(234),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(179),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(178),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(172),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 3, 0, 16),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 3, 0, 16),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, 0, 22),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, 0, 22),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, 0, 22), SHIFT_REPEAT(215),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, 0, 22), SHIFT_REPEAT(157),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 4, 0, 19),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 4, 0, 19),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 4, 0, 24),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 4, 0, 24),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, 0, 20),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, 0, 20),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, 0, 14),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, 0, 14),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, 0, 14),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 4, 0, 14),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 17),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 17),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 6, 0, 20),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 6, 0, 20),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 7, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 7, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 15),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 15),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 23),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, 0, 23),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 21),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 21),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 18),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 18),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(65),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, 0, 7),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, 0, 7),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 12),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 3, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 6, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 5, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 9),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 7, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 2, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 4, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 1, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 1, 0, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 1, 0, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, 0, 7),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, 0, 7),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, 0, 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, 0, 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2, 0, 0),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, 0, 13),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 4, 0, 13),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2, 0, 0),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, 0, 8),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, 0, 8),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(171),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, 0, 11),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, 0, 11),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, 0, 10),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, 0, 10),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 2, 0, 0),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(175),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(194),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 5),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1, 0, 6),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme, 1, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 7, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 9, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 8, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
