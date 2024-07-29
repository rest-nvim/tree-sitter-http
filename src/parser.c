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
#define STATE_COUNT 213
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 1
#define TOKEN_COUNT 82
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 22

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
  sym_status_code = 49,
  sym_status_text = 50,
  aux_sym_request_token1 = 51,
  anon_sym_AMP = 52,
  anon_sym_QMARK = 53,
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
  sym_text = 78,
  aux_sym__whitespace_token1 = 79,
  aux_sym__newline_token1 = 80,
  sym__line = 81,
  sym_document = 82,
  sym_host = 83,
  sym_port = 84,
  sym_path = 85,
  sym_scheme = 86,
  sym_authority = 87,
  sym_http_version = 88,
  sym_target_url = 89,
  sym_response = 90,
  sym_request = 91,
  sym_pair = 92,
  sym_query_param = 93,
  sym_fragment = 94,
  sym_host_url = 95,
  sym_header = 96,
  sym_variable = 97,
  sym_script_variable = 98,
  sym_variable_declaration = 99,
  sym_xml_body = 100,
  sym_json_body = 101,
  sym_graphql_body = 102,
  sym_external_body = 103,
  sym_form_data = 104,
  sym_boolean = 105,
  aux_sym__whitespace = 106,
  aux_sym_document_repeat1 = 107,
  aux_sym_path_repeat1 = 108,
  aux_sym_target_url_repeat1 = 109,
  aux_sym_request_repeat1 = 110,
  aux_sym_request_repeat2 = 111,
  aux_sym_script_variable_repeat1 = 112,
  aux_sym_form_data_repeat1 = 113,
  aux_sym_form_data_repeat2 = 114,
  alias_sym_name = 115,
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
  [sym_status_code] = "status_code",
  [sym_status_text] = "status_text",
  [aux_sym_request_token1] = "request_token1",
  [anon_sym_AMP] = "&",
  [anon_sym_QMARK] = "\?",
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
  [sym_text] = "text",
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
  [sym_status_code] = sym_status_code,
  [sym_status_text] = sym_status_text,
  [aux_sym_request_token1] = aux_sym_request_token1,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_QMARK] = anon_sym_QMARK,
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
  [sym_text] = sym_text,
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
  [anon_sym_QMARK] = {
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
  [sym_text] = {
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
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 4, .length = 2},
  [13] = {.index = 4, .length = 2},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 17, .length = 2},
  [16] = {.index = 19, .length = 4},
  [17] = {.index = 23, .length = 1},
  [18] = {.index = 24, .length = 4},
  [19] = {.index = 28, .length = 4},
  [20] = {.index = 32, .length = 4},
  [21] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_value, 3},
  [3] =
    {field_name, 2},
  [4] =
    {field_name, 0},
    {field_value, 2},
  [6] =
    {field_identifier, 0},
  [7] =
    {field_key, 1},
  [8] =
    {field_name, 1},
    {field_value, 4},
  [10] =
    {field_key, 1},
    {field_value, 2},
  [12] =
    {field_name, 1},
    {field_value, 5},
  [14] =
    {field_key, 1},
    {field_value, 3},
  [16] =
    {field_file_path, 2},
  [17] =
    {field_name, 0},
    {field_value, 3},
  [19] =
    {field_name, 0},
    {field_name, 3, .inherited = true},
    {field_value, 2},
    {field_value, 3, .inherited = true},
  [23] =
    {field_file_path, 4},
  [24] =
    {field_name, 0},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [28] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [32] =
    {field_name, 0},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = sym_identifier,
  },
  [11] = {
    [2] = sym_path,
  },
  [12] = {
    [0] = alias_sym_name,
  },
  [13] = {
    [2] = aux_sym_header_token1,
  },
  [14] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
  },
  [15] = {
    [0] = alias_sym_name,
  },
  [16] = {
    [2] = aux_sym_header_token1,
  },
  [17] = {
    [4] = sym_path,
  },
  [18] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
    [4] = aux_sym_header_token1,
  },
  [20] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
    [4] = aux_sym_header_token1,
    [5] = aux_sym_header_token1,
  },
  [21] = {
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
  [6] = 6,
  [7] = 5,
  [8] = 6,
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
  [74] = 31,
  [75] = 5,
  [76] = 34,
  [77] = 30,
  [78] = 29,
  [79] = 27,
  [80] = 28,
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
  [106] = 44,
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
  [121] = 109,
  [122] = 119,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 125,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 5,
  [134] = 134,
  [135] = 135,
  [136] = 124,
  [137] = 109,
  [138] = 120,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 129,
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
  [166] = 166,
  [167] = 153,
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
  [193] = 103,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 192,
  [198] = 191,
  [199] = 199,
  [200] = 200,
  [201] = 101,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 186,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 183,
  [210] = 210,
  [211] = 211,
  [212] = 212,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(638);
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(660);
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '#') ADVANCE(651);
      if (lookahead == '&') ADVANCE(661);
      if (lookahead == '(') ADVANCE(684);
      if (lookahead == '-') ADVANCE(690);
      if (lookahead == '/') ADVANCE(643);
      if (lookahead == ':') ADVANCE(640);
      if (lookahead == '<') ADVANCE(686);
      if (lookahead == '=') ADVANCE(664);
      if (lookahead == '?') ADVANCE(662);
      if (lookahead == '@') ADVANCE(648);
      if (lookahead == 'H') ADVANCE(694);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(700);
      if (lookahead == 'f') ADVANCE(695);
      if (lookahead == 't') ADVANCE(702);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead == '0' ||
          ('6' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(641);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(660);
      if (lookahead == '#') ADVANCE(651);
      if (lookahead == '&') ADVANCE(661);
      if (lookahead == '(') ADVANCE(684);
      if (lookahead == '/') ADVANCE(643);
      if (lookahead == '?') ADVANCE(662);
      if (lookahead == '@') ADVANCE(648);
      if (lookahead == '{') ADVANCE(629);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(655);
      if (lookahead == '"') ADVANCE(718);
      if (lookahead == 'f') ADVANCE(720);
      if (lookahead == 't') ADVANCE(724);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      if (lookahead != 0) ADVANCE(727);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(656);
      if (lookahead == '#') ADVANCE(651);
      if (lookahead == '&') ADVANCE(661);
      if (lookahead == '=') ADVANCE(665);
      if (lookahead == '?') ADVANCE(663);
      if (lookahead == '{') ADVANCE(629);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(709);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(656);
      if (lookahead == '#') ADVANCE(651);
      if (lookahead == '&') ADVANCE(661);
      if (lookahead == '?') ADVANCE(663);
      if (lookahead == '{') ADVANCE(629);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(709);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(709);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(657);
      if (lookahead == '(') ADVANCE(685);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(657);
      if (lookahead == '-') ADVANCE(737);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(657);
      if (lookahead == '<') ADVANCE(738);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(657);
      if (lookahead == ']') ADVANCE(732);
      if (lookahead == '}') ADVANCE(733);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(657);
      if (lookahead == '}') ADVANCE(733);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(657);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(731);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(657);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(708);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(681);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(683);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(680);
      if (lookahead == '{') ADVANCE(674);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(682);
      if (lookahead == '}') ADVANCE(675);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(676);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(666);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\f') ADVANCE(20);
      if (lookahead == '/') ADVANCE(673);
      if (lookahead == '@') ADVANCE(648);
      if (lookahead == 'c') ADVANCE(670);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(659);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(730);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '/') ADVANCE(649);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 53:
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 60:
      if (lookahead == ' ') ADVANCE(576);
      END_STATE();
    case 61:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 62:
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 63:
      if (lookahead == ' ') ADVANCE(127);
      END_STATE();
    case 64:
      if (lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 65:
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 67:
      if (lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 68:
      if (lookahead == ' ') ADVANCE(119);
      END_STATE();
    case 69:
      if (lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 70:
      if (lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 71:
      if (lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 72:
      if (lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(695);
      if (lookahead == 't') ADVANCE(702);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(711);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == '#') ADVANCE(651);
      if (lookahead == '&') ADVANCE(661);
      if (lookahead == '/') ADVANCE(643);
      if (lookahead == ':') ADVANCE(640);
      if (lookahead == '=') ADVANCE(664);
      if (lookahead == '?') ADVANCE(662);
      if (lookahead == '@') ADVANCE(648);
      if (lookahead == 'c') ADVANCE(700);
      if (lookahead == '{') ADVANCE(629);
      if (lookahead == '}') ADVANCE(630);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(660);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 76:
      if (lookahead == '%') ADVANCE(19);
      END_STATE();
    case 77:
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == 'M') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(528);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(383);
      END_STATE();
    case 80:
      if (lookahead == '/') ADVANCE(652);
      END_STATE();
    case 81:
      if (lookahead == '/') ADVANCE(80);
      END_STATE();
    case 82:
      if (lookahead == '>') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      if (lookahead == '>') ADVANCE(678);
      if (lookahead == '?') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == '?') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(191);
      if (lookahead == 'B') ADVANCE(141);
      if (lookahead == 'C') ADVANCE(430);
      if (lookahead == 'E') ADVANCE(619);
      if (lookahead == 'F') ADVANCE(142);
      if (lookahead == 'G') ADVANCE(143);
      if (lookahead == 'H') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'L') ADVANCE(240);
      if (lookahead == 'M') ADVANCE(234);
      if (lookahead == 'N') ADVANCE(241);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead == 'P') ADVANCE(144);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'S') ADVANCE(232);
      if (lookahead == 'T') ADVANCE(236);
      if (lookahead == 'U') ADVANCE(120);
      if (lookahead == 'V') ADVANCE(148);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(660);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(729);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(635);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(604);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(208);
      if (lookahead == 'E') ADVANCE(620);
      if (lookahead == 'F') ADVANCE(433);
      if (lookahead == 'I') ADVANCE(391);
      if (lookahead == 'M') ADVANCE(455);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(602);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(372);
      END_STATE();
    case 90:
      if (lookahead == 'A') ADVANCE(373);
      END_STATE();
    case 91:
      if (lookahead == 'C') ADVANCE(437);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(320);
      END_STATE();
    case 93:
      if (lookahead == 'D') ADVANCE(291);
      END_STATE();
    case 94:
      if (lookahead == 'D') ADVANCE(282);
      END_STATE();
    case 95:
      if (lookahead == 'E') ADVANCE(510);
      END_STATE();
    case 96:
      if (lookahead == 'E') ADVANCE(411);
      END_STATE();
    case 97:
      if (lookahead == 'E') ADVANCE(155);
      if (lookahead == 'M') ADVANCE(159);
      END_STATE();
    case 98:
      if (lookahead == 'F') ADVANCE(340);
      END_STATE();
    case 99:
      if (lookahead == 'F') ADVANCE(178);
      END_STATE();
    case 100:
      if (lookahead == 'F') ADVANCE(178);
      if (lookahead == 'R') ADVANCE(280);
      END_STATE();
    case 101:
      if (lookahead == 'F') ADVANCE(463);
      END_STATE();
    case 102:
      if (lookahead == 'G') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(233);
      END_STATE();
    case 103:
      if (lookahead == 'H') ADVANCE(289);
      if (lookahead == 'T') ADVANCE(346);
      END_STATE();
    case 104:
      if (lookahead == 'I') ADVANCE(51);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(401);
      END_STATE();
    case 106:
      if (lookahead == 'K') ADVANCE(654);
      END_STATE();
    case 107:
      if (lookahead == 'L') ADVANCE(253);
      END_STATE();
    case 108:
      if (lookahead == 'L') ADVANCE(162);
      END_STATE();
    case 109:
      if (lookahead == 'L') ADVANCE(445);
      END_STATE();
    case 110:
      if (lookahead == 'M') ADVANCE(290);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(466);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(249);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(467);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(468);
      END_STATE();
    case 115:
      if (lookahead == 'O') ADVANCE(549);
      END_STATE();
    case 116:
      if (lookahead == 'P') ADVANCE(29);
      END_STATE();
    case 117:
      if (lookahead == 'P') ADVANCE(302);
      END_STATE();
    case 118:
      if (lookahead == 'P') ADVANCE(505);
      END_STATE();
    case 119:
      if (lookahead == 'P') ADVANCE(508);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(233);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(301);
      END_STATE();
    case 123:
      if (lookahead == 'R') ADVANCE(280);
      END_STATE();
    case 124:
      if (lookahead == 'R') ADVANCE(269);
      END_STATE();
    case 125:
      if (lookahead == 'R') ADVANCE(297);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(300);
      END_STATE();
    case 127:
      if (lookahead == 'S') ADVANCE(586);
      END_STATE();
    case 128:
      if (lookahead == 'S') ADVANCE(264);
      END_STATE();
    case 129:
      if (lookahead == 'S') ADVANCE(559);
      END_STATE();
    case 130:
      if (lookahead == 'S') ADVANCE(174);
      END_STATE();
    case 131:
      if (lookahead == 'S') ADVANCE(607);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(116);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(625);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(454);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(346);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(461);
      END_STATE();
    case 138:
      if (lookahead == 'U') ADVANCE(532);
      END_STATE();
    case 139:
      if (lookahead == 'U') ADVANCE(408);
      END_STATE();
    case 140:
      if (lookahead == 'V') ADVANCE(256);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead == 'o') ADVANCE(404);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(496);
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(601);
      if (lookahead == 'p') ADVANCE(499);
      if (lookahead == 's') ADVANCE(596);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(621);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(612);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(502);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(478);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(554);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(500);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(557);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(558);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(623);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(414);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(564);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(566);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(580);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(592);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(593);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(328);
      END_STATE();
    case 186:
      if (lookahead == 'b') ADVANCE(369);
      END_STATE();
    case 187:
      if (lookahead == 'b') ADVANCE(384);
      END_STATE();
    case 188:
      if (lookahead == 'b') ADVANCE(385);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(473);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == 'l') ADVANCE(497);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(474);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(621);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(317);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(555);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(544);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(244);
      if (lookahead == 'x') ADVANCE(622);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(279);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(459);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(557);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(588);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(654);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(341);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(343);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(541);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(261);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(624);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(345);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(351);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'w') ADVANCE(330);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead == 'i') ADVANCE(529);
      if (lookahead == 'o') ADVANCE(609);
      if (lookahead == 'u') ADVANCE(367);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(608);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 303:
      if (lookahead == 'f') ADVANCE(305);
      END_STATE();
    case 304:
      if (lookahead == 'f') ADVANCE(371);
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 305:
      if (lookahead == 'f') ADVANCE(332);
      END_STATE();
    case 306:
      if (lookahead == 'f') ADVANCE(336);
      END_STATE();
    case 307:
      if (lookahead == 'f') ADVANCE(470);
      END_STATE();
    case 308:
      if (lookahead == 'f') ADVANCE(347);
      END_STATE();
    case 309:
      if (lookahead == 'g') ADVANCE(654);
      END_STATE();
    case 310:
      if (lookahead == 'g') ADVANCE(518);
      END_STATE();
    case 311:
      if (lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 312:
      if (lookahead == 'g') ADVANCE(547);
      END_STATE();
    case 313:
      if (lookahead == 'g') ADVANCE(465);
      END_STATE();
    case 314:
      if (lookahead == 'g') ADVANCE(262);
      END_STATE();
    case 315:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 316:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 317:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 318:
      if (lookahead == 'h') ADVANCE(464);
      END_STATE();
    case 319:
      if (lookahead == 'h') ADVANCE(457);
      END_STATE();
    case 320:
      if (lookahead == 'h') ADVANCE(471);
      END_STATE();
    case 321:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 322:
      if (lookahead == 'h') ADVANCE(260);
      END_STATE();
    case 323:
      if (lookahead == 'h') ADVANCE(270);
      END_STATE();
    case 324:
      if (lookahead == 'h') ADVANCE(443);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(628);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(548);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 344:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(504);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(446);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(448);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(460);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(450);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(442);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(590);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(589);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 363:
      if (lookahead == 'k') ADVANCE(239);
      END_STATE();
    case 364:
      if (lookahead == 'k') ADVANCE(61);
      END_STATE();
    case 365:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 366:
      if (lookahead == 'l') ADVANCE(621);
      END_STATE();
    case 367:
      if (lookahead == 'l') ADVANCE(552);
      END_STATE();
    case 368:
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(255);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(538);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(378);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(527);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 379:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 387:
      if (lookahead == 'm') ADVANCE(365);
      END_STATE();
    case 388:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 389:
      if (lookahead == 'm') ADVANCE(481);
      END_STATE();
    case 390:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 391:
      if (lookahead == 'm') ADVANCE(480);
      END_STATE();
    case 392:
      if (lookahead == 'm') ADVANCE(295);
      END_STATE();
    case 393:
      if (lookahead == 'm') ADVANCE(267);
      END_STATE();
    case 394:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 395:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 396:
      if (lookahead == 'n') ADVANCE(654);
      END_STATE();
    case 397:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 398:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 399:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 400:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 401:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 402:
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 404:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 405:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 406:
      if (lookahead == 'n') ADVANCE(527);
      END_STATE();
    case 407:
      if (lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 408:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 409:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 410:
      if (lookahead == 'n') ADVANCE(553);
      END_STATE();
    case 411:
      if (lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 412:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 413:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 414:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 415:
      if (lookahead == 'n') ADVANCE(557);
      END_STATE();
    case 416:
      if (lookahead == 'n') ADVANCE(597);
      END_STATE();
    case 417:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 418:
      if (lookahead == 'n') ADVANCE(561);
      END_STATE();
    case 419:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 420:
      if (lookahead == 'n') ADVANCE(569);
      END_STATE();
    case 421:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 422:
      if (lookahead == 'n') ADVANCE(562);
      END_STATE();
    case 423:
      if (lookahead == 'n') ADVANCE(627);
      END_STATE();
    case 424:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 425:
      if (lookahead == 'n') ADVANCE(567);
      END_STATE();
    case 426:
      if (lookahead == 'n') ADVANCE(584);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(572);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 430:
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 431:
      if (lookahead == 'o') ADVANCE(615);
      END_STATE();
    case 432:
      if (lookahead == 'o') ADVANCE(618);
      END_STATE();
    case 433:
      if (lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 434:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 435:
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 436:
      if (lookahead == 'o') ADVANCE(519);
      END_STATE();
    case 437:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 438:
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 439:
      if (lookahead == 'o') ADVANCE(524);
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
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 450:
      if (lookahead == 'o') ADVANCE(409);
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
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 458:
      if (lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 459:
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 460:
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 462:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(513);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(570);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(582);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(573);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(516);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 473:
      if (lookahead == 'p') ADVANCE(644);
      END_STATE();
    case 474:
      if (lookahead == 'p') ADVANCE(646);
      END_STATE();
    case 475:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 476:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 477:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 478:
      if (lookahead == 'p') ADVANCE(440);
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
      if (lookahead == 'p') ADVANCE(482);
      END_STATE();
    case 485:
      if (lookahead == 'p') ADVANCE(296);
      END_STATE();
    case 486:
      if (lookahead == 'p') ADVANCE(472);
      END_STATE();
    case 487:
      if (lookahead == 'p') ADVANCE(486);
      END_STATE();
    case 488:
      if (lookahead == 'q') ADVANCE(600);
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 489:
      if (lookahead == 'q') ADVANCE(606);
      END_STATE();
    case 490:
      if (lookahead == 'q') ADVANCE(603);
      END_STATE();
    case 491:
      if (lookahead == 'q') ADVANCE(605);
      END_STATE();
    case 492:
      if (lookahead == 'r') ADVANCE(654);
      END_STATE();
    case 493:
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 494:
      if (lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 495:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 496:
      if (lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 497:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 498:
      if (lookahead == 'r') ADVANCE(578);
      if (lookahead == 'y') ADVANCE(368);
      END_STATE();
    case 499:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 500:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 501:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 502:
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 503:
      if (lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 504:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 505:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 506:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 507:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 508:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 509:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 510:
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 511:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 512:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 513:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 514:
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 515:
      if (lookahead == 'r') ADVANCE(610);
      END_STATE();
    case 516:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 517:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 518:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 519:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 520:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 521:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 522:
      if (lookahead == 'r') ADVANCE(626);
      END_STATE();
    case 523:
      if (lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 524:
      if (lookahead == 'r') ADVANCE(591);
      END_STATE();
    case 525:
      if (lookahead == 's') ADVANCE(645);
      END_STATE();
    case 526:
      if (lookahead == 's') ADVANCE(647);
      END_STATE();
    case 527:
      if (lookahead == 's') ADVANCE(654);
      END_STATE();
    case 528:
      if (lookahead == 's') ADVANCE(594);
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 529:
      if (lookahead == 's') ADVANCE(212);
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
      if (lookahead == 's') ADVANCE(544);
      END_STATE();
    case 534:
      if (lookahead == 's') ADVANCE(556);
      END_STATE();
    case 535:
      if (lookahead == 's') ADVANCE(338);
      END_STATE();
    case 536:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 537:
      if (lookahead == 's') ADVANCE(563);
      END_STATE();
    case 538:
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 539:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 540:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 541:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 542:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 543:
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == 'w') ADVANCE(525);
      END_STATE();
    case 544:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 545:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 546:
      if (lookahead == 't') ADVANCE(613);
      END_STATE();
    case 547:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 548:
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 549:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 550:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 551:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 552:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 553:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 554:
      if (lookahead == 't') ADVANCE(598);
      END_STATE();
    case 555:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 556:
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 557:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 558:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 559:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 560:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 561:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 563:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 564:
      if (lookahead == 't') ADVANCE(337);
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
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 594:
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 595:
      if (lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 596:
      if (lookahead == 'u') ADVANCE(484);
      END_STATE();
    case 597:
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 598:
      if (lookahead == 'u') ADVANCE(527);
      END_STATE();
    case 599:
      if (lookahead == 'u') ADVANCE(544);
      END_STATE();
    case 600:
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 601:
      if (lookahead == 'u') ADVANCE(577);
      if (lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 602:
      if (lookahead == 'u') ADVANCE(579);
      END_STATE();
    case 603:
      if (lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 604:
      if (lookahead == 'u') ADVANCE(583);
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
      if (lookahead == 'v') ADVANCE(278);
      END_STATE();
    case 610:
      if (lookahead == 'v') ADVANCE(286);
      END_STATE();
    case 611:
      if (lookahead == 'v') ADVANCE(276);
      END_STATE();
    case 612:
      if (lookahead == 'v') ADVANCE(181);
      END_STATE();
    case 613:
      if (lookahead == 'w') ADVANCE(435);
      END_STATE();
    case 614:
      if (lookahead == 'w') ADVANCE(170);
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
      if (lookahead == 'y') ADVANCE(654);
      END_STATE();
    case 622:
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 623:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 624:
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 625:
      if (lookahead == 'y') ADVANCE(476);
      END_STATE();
    case 626:
      if (lookahead == 'y') ADVANCE(66);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(653);
      END_STATE();
    case 635:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      END_STATE();
    case 636:
      if (eof) ADVANCE(638);
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(660);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '&') ADVANCE(661);
      if (lookahead == '-') ADVANCE(690);
      if (lookahead == ':') ADVANCE(640);
      if (lookahead == '<') ADVANCE(687);
      if (lookahead == '=') ADVANCE(664);
      if (lookahead == '@') ADVANCE(648);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(630);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 637:
      if (eof) ADVANCE(638);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '-') ADVANCE(690);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '<') ADVANCE(687);
      if (lookahead == '@') ADVANCE(648);
      if (lookahead == 'H') ADVANCE(694);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(660);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(639);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_port_token1);
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
    case 642:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_coap_PLUStcp);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_coap_PLUSws);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_coaps_PLUStcp);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_coaps_PLUSws);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(650);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_status_text);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(655);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0) ADVANCE(727);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(709);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(657);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(660);
      if (lookahead == '\r') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(708);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(659);
      if (lookahead == '\r') ADVANCE(659);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(660);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(709);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(709);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\n') ADVANCE(666);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(666);
      if (lookahead == '+') ADVANCE(543);
      if (lookahead == '/') ADVANCE(673);
      if (lookahead == 's') ADVANCE(668);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(666);
      if (lookahead == '+') ADVANCE(575);
      if (lookahead == '/') ADVANCE(673);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(666);
      if (lookahead == '/') ADVANCE(673);
      if (lookahead == 'a') ADVANCE(671);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(666);
      if (lookahead == '/') ADVANCE(673);
      if (lookahead == 'o') ADVANCE(669);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(666);
      if (lookahead == '/') ADVANCE(673);
      if (lookahead == 'p') ADVANCE(667);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(666);
      if (lookahead == '/') ADVANCE(673);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(666);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(673);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_json_body_token3);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_json_body_token4);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(741);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '?') ADVANCE(617);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(617);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(543);
      if (lookahead == 's') ADVANCE(689);
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
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(575);
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
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(705);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(649);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(691);
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
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(692);
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
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(693);
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
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(699);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(701);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(715);
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
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(717);
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
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(703);
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
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(696);
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
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(688);
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
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(704);
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
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(698);
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
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(697);
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
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(76);
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
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(706);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
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
    case 708:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(708);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_param);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(709);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(727);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(727);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 714:
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
    case 719:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(713);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(727);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(714);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(727);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(716);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(727);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(725);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(727);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(726);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(727);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(727);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(721);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(727);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(727);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(728);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(666);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(741);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(683);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(682);
      if (lookahead != 0) ADVANCE(741);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(679);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead != 0) ADVANCE(739);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(677);
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
      if (lookahead == 'C') ADVANCE(1);
      if (lookahead == 'D') ADVANCE(2);
      if (lookahead == 'G') ADVANCE(3);
      if (lookahead == 'H') ADVANCE(4);
      if (lookahead == 'L') ADVANCE(5);
      if (lookahead == 'O') ADVANCE(6);
      if (lookahead == 'P') ADVANCE(7);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 'q') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(25);
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
  [1] = {.lex_state = 636},
  [2] = {.lex_state = 75},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 75},
  [6] = {.lex_state = 75},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 637},
  [10] = {.lex_state = 637},
  [11] = {.lex_state = 636},
  [12] = {.lex_state = 636},
  [13] = {.lex_state = 636},
  [14] = {.lex_state = 636},
  [15] = {.lex_state = 636},
  [16] = {.lex_state = 636},
  [17] = {.lex_state = 636},
  [18] = {.lex_state = 636},
  [19] = {.lex_state = 636},
  [20] = {.lex_state = 636},
  [21] = {.lex_state = 636},
  [22] = {.lex_state = 636},
  [23] = {.lex_state = 636},
  [24] = {.lex_state = 636},
  [25] = {.lex_state = 636},
  [26] = {.lex_state = 636},
  [27] = {.lex_state = 636},
  [28] = {.lex_state = 636},
  [29] = {.lex_state = 636},
  [30] = {.lex_state = 636},
  [31] = {.lex_state = 636},
  [32] = {.lex_state = 636},
  [33] = {.lex_state = 636},
  [34] = {.lex_state = 636},
  [35] = {.lex_state = 636},
  [36] = {.lex_state = 636},
  [37] = {.lex_state = 636},
  [38] = {.lex_state = 636},
  [39] = {.lex_state = 636},
  [40] = {.lex_state = 636},
  [41] = {.lex_state = 636},
  [42] = {.lex_state = 636},
  [43] = {.lex_state = 636},
  [44] = {.lex_state = 636},
  [45] = {.lex_state = 636},
  [46] = {.lex_state = 636},
  [47] = {.lex_state = 636},
  [48] = {.lex_state = 636},
  [49] = {.lex_state = 636},
  [50] = {.lex_state = 636},
  [51] = {.lex_state = 636},
  [52] = {.lex_state = 636},
  [53] = {.lex_state = 636},
  [54] = {.lex_state = 636},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 636},
  [57] = {.lex_state = 636},
  [58] = {.lex_state = 636},
  [59] = {.lex_state = 636},
  [60] = {.lex_state = 636},
  [61] = {.lex_state = 636},
  [62] = {.lex_state = 75},
  [63] = {.lex_state = 75},
  [64] = {.lex_state = 75},
  [65] = {.lex_state = 75},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 73},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 73},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 75},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 75},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 75},
  [83] = {.lex_state = 636},
  [84] = {.lex_state = 75},
  [85] = {.lex_state = 75},
  [86] = {.lex_state = 75},
  [87] = {.lex_state = 636},
  [88] = {.lex_state = 75},
  [89] = {.lex_state = 75},
  [90] = {.lex_state = 636},
  [91] = {.lex_state = 636},
  [92] = {.lex_state = 75},
  [93] = {.lex_state = 75},
  [94] = {.lex_state = 75},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 75},
  [97] = {.lex_state = 75},
  [98] = {.lex_state = 75},
  [99] = {.lex_state = 75},
  [100] = {.lex_state = 75},
  [101] = {.lex_state = 75},
  [102] = {.lex_state = 75},
  [103] = {.lex_state = 75},
  [104] = {.lex_state = 75},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 75},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 85},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 637},
  [111] = {.lex_state = 75},
  [112] = {.lex_state = 636},
  [113] = {.lex_state = 636},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 75},
  [118] = {.lex_state = 85},
  [119] = {.lex_state = 636},
  [120] = {.lex_state = 636},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 636},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 636},
  [125] = {.lex_state = 636},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 636},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 636},
  [135] = {.lex_state = 636},
  [136] = {.lex_state = 636},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 636},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 85},
  [141] = {.lex_state = 85},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 636},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 636},
  [151] = {.lex_state = 636},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 631},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 636},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 636},
  [163] = {.lex_state = 636},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 636},
  [167] = {.lex_state = 631},
  [168] = {.lex_state = 636},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 636},
  [174] = {.lex_state = 636},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 636},
  [179] = {.lex_state = 636},
  [180] = {.lex_state = 637},
  [181] = {.lex_state = 636},
  [182] = {.lex_state = 636},
  [183] = {.lex_state = 636},
  [184] = {.lex_state = 637},
  [185] = {.lex_state = 636},
  [186] = {.lex_state = 636},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 636},
  [189] = {.lex_state = 13},
  [190] = {.lex_state = 636},
  [191] = {.lex_state = 632},
  [192] = {.lex_state = 633},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 636},
  [195] = {.lex_state = 636},
  [196] = {.lex_state = 636},
  [197] = {.lex_state = 633},
  [198] = {.lex_state = 632},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 637},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 636},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 636},
  [205] = {.lex_state = 636},
  [206] = {.lex_state = 636},
  [207] = {.lex_state = 636},
  [208] = {.lex_state = 636},
  [209] = {.lex_state = 636},
  [210] = {.lex_state = 636},
  [211] = {.lex_state = 636},
  [212] = {.lex_state = 636},
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
    [sym_status_code] = ACTIONS(1),
    [aux_sym_request_token1] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
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
    [sym_document] = STATE(181),
    [sym_request] = STATE(61),
    [sym_variable] = STATE(61),
    [sym_script_variable] = STATE(61),
    [sym_variable_declaration] = STATE(61),
    [aux_sym_document_repeat1] = STATE(61),
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
    STATE(55), 1,
      sym_variable,
    STATE(62), 1,
      sym_host,
    STATE(85), 1,
      aux_sym_path_repeat1,
    STATE(99), 1,
      sym_path,
    STATE(165), 1,
      sym_authority,
    STATE(168), 1,
      sym_target_url,
    STATE(180), 1,
      sym_scheme,
    STATE(186), 1,
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
    STATE(7), 1,
      aux_sym__whitespace,
    STATE(48), 1,
      sym_variable,
    STATE(49), 1,
      sym_host_url,
    STATE(58), 1,
      sym_host,
    STATE(171), 1,
      sym_authority,
    STATE(184), 1,
      sym_scheme,
    STATE(186), 1,
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
    STATE(3), 1,
      aux_sym__whitespace,
    STATE(42), 1,
      sym_host_url,
    STATE(56), 1,
      sym_variable,
    STATE(58), 1,
      sym_host,
    STATE(171), 1,
      sym_authority,
    STATE(184), 1,
      sym_scheme,
    STATE(186), 1,
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
  [312] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(54), 10,
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
    ACTIONS(52), 34,
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
  [364] = 5,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(56), 1,
      aux_sym__whitespace_token1,
    STATE(7), 1,
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
  [420] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(54), 6,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(52), 37,
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
    STATE(166), 1,
      sym_http_version,
    STATE(208), 1,
      sym_response,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(14), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(59), 5,
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
    STATE(166), 1,
      sym_http_version,
    STATE(211), 1,
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
    STATE(18), 6,
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
    STATE(26), 2,
      sym_header,
      aux_sym_request_repeat1,
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
  [618] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_method,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    STATE(14), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(59), 5,
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
    STATE(11), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(83), 5,
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
    STATE(26), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(87), 5,
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
    STATE(26), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(91), 5,
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
  [790] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(95), 5,
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
  [829] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(63), 1,
      sym_method,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(71), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(59), 5,
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
  [868] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(93), 1,
      sym_method,
    ACTIONS(97), 1,
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
    STATE(19), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [907] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(106), 1,
      sym_method,
    ACTIONS(108), 1,
      aux_sym_xml_body_token1,
    ACTIONS(117), 1,
      anon_sym_LT,
    ACTIONS(111), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(114), 2,
      anon_sym_query,
      anon_sym_mutation,
    ACTIONS(101), 5,
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
  [946] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(81), 1,
      sym_method,
    ACTIONS(97), 1,
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
    STATE(19), 6,
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
    ACTIONS(85), 1,
      sym_method,
    ACTIONS(97), 1,
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
    STATE(19), 6,
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
    ACTIONS(89), 1,
      sym_method,
    ACTIONS(97), 1,
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
    STATE(19), 6,
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
    STATE(24), 1,
      aux_sym_form_data_repeat2,
    STATE(139), 1,
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
    STATE(139), 1,
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
    STATE(23), 1,
      aux_sym_form_data_repeat2,
    STATE(139), 1,
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
  [1162] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(26), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(147), 4,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1189] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(151), 6,
      sym_method,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(149), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1212] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(155), 6,
      sym_method,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(153), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1235] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(161), 1,
      anon_sym_COLON,
    STATE(46), 1,
      sym_port,
    ACTIONS(159), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1262] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(165), 6,
      sym_method,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(163), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1285] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(167), 1,
      anon_sym_COLON,
    STATE(46), 1,
      sym_port,
    ACTIONS(159), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1312] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(171), 6,
      sym_method,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(169), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1335] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(175), 6,
      sym_method,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(173), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1358] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(179), 6,
      sym_method,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(177), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1381] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(185), 1,
      aux_sym_xml_body_token3,
    ACTIONS(183), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1405] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(191), 1,
      aux_sym_xml_body_token3,
    ACTIONS(189), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(187), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1429] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(197), 1,
      aux_sym_xml_body_token3,
    ACTIONS(195), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(193), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1453] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(203), 1,
      aux_sym_xml_body_token3,
    ACTIONS(201), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(199), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1477] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(209), 1,
      aux_sym_xml_body_token3,
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
  [1501] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(215), 1,
      aux_sym_xml_body_token3,
    ACTIONS(213), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1525] = 3,
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
  [1546] = 3,
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
  [1567] = 3,
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
  [1588] = 3,
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
  [1609] = 3,
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
  [1630] = 3,
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
  [1651] = 3,
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
  [1672] = 3,
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
  [1693] = 3,
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
  [1714] = 3,
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
  [1735] = 3,
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
  [1756] = 3,
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
  [1777] = 3,
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
  [1798] = 3,
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
  [1819] = 11,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(275), 1,
      anon_sym_AT,
    ACTIONS(277), 1,
      anon_sym_POUND,
    STATE(65), 1,
      sym_authority,
    STATE(85), 1,
      aux_sym_path_repeat1,
    STATE(92), 1,
      sym_path,
    STATE(205), 1,
      sym_pair,
    ACTIONS(279), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(281), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    STATE(88), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1856] = 3,
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
  [1877] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(183), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1898] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(285), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(283), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1919] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(289), 5,
      sym_method,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(287), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1940] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_method,
    ACTIONS(299), 1,
      anon_sym_AT,
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(305), 1,
      aux_sym_script_variable_token1,
    STATE(60), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1969] = 8,
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
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 1,
      sym_comment,
    STATE(60), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1998] = 7,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(277), 1,
      anon_sym_POUND,
    STATE(85), 1,
      aux_sym_path_repeat1,
    STATE(92), 1,
      sym_path,
    ACTIONS(279), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(281), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    STATE(88), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2023] = 7,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(312), 1,
      anon_sym_POUND,
    STATE(85), 1,
      aux_sym_path_repeat1,
    STATE(96), 1,
      sym_path,
    ACTIONS(281), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(314), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(86), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2048] = 7,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(316), 1,
      anon_sym_POUND,
    STATE(85), 1,
      aux_sym_path_repeat1,
    STATE(93), 1,
      sym_path,
    ACTIONS(281), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(318), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(94), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2073] = 7,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(320), 1,
      anon_sym_POUND,
    STATE(84), 1,
      sym_path,
    STATE(85), 1,
      aux_sym_path_repeat1,
    ACTIONS(281), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(322), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(82), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2098] = 6,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(328), 1,
      aux_sym__whitespace_token1,
    STATE(70), 1,
      aux_sym__whitespace,
    STATE(91), 1,
      sym_boolean,
    ACTIONS(326), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(324), 3,
      sym_number,
      sym_string,
      sym_text,
  [2120] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(332), 1,
      sym_string,
    ACTIONS(326), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(330), 2,
      sym_identifier,
      sym_number,
    STATE(33), 2,
      sym_variable,
      sym_boolean,
  [2142] = 6,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(338), 1,
      anon_sym_EQ,
    ACTIONS(340), 1,
      sym_param,
    STATE(117), 1,
      sym_variable,
    ACTIONS(334), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(336), 3,
      aux_sym_request_token1,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2164] = 6,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(328), 1,
      aux_sym__whitespace_token1,
    STATE(72), 1,
      aux_sym__whitespace,
    STATE(90), 1,
      sym_boolean,
    ACTIONS(326), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(342), 3,
      sym_number,
      sym_string,
      sym_text,
  [2186] = 6,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(328), 1,
      aux_sym__whitespace_token1,
    STATE(75), 1,
      aux_sym__whitespace,
    STATE(90), 1,
      sym_boolean,
    ACTIONS(326), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(342), 3,
      sym_number,
      sym_string,
      sym_text,
  [2208] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(346), 1,
      sym_string,
    ACTIONS(326), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(344), 2,
      sym_identifier,
      sym_number,
    STATE(25), 2,
      sym_variable,
      sym_boolean,
  [2230] = 6,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(328), 1,
      aux_sym__whitespace_token1,
    STATE(75), 1,
      aux_sym__whitespace,
    STATE(87), 1,
      sym_boolean,
    ACTIONS(326), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(348), 3,
      sym_number,
      sym_string,
      sym_text,
  [2252] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(350), 1,
      sym_identifier,
    STATE(104), 1,
      sym_variable,
    ACTIONS(352), 6,
      anon_sym_SLASH,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2270] = 3,
    ACTIONS(354), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_port,
    ACTIONS(157), 6,
      anon_sym_SLASH,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2285] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(356), 1,
      aux_sym__whitespace_token1,
    STATE(75), 1,
      aux_sym__whitespace,
    ACTIONS(45), 5,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      sym_text,
  [2302] = 1,
    ACTIONS(177), 8,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2313] = 1,
    ACTIONS(163), 8,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2324] = 3,
    ACTIONS(359), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_port,
    ACTIONS(157), 6,
      anon_sym_SLASH,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2339] = 1,
    ACTIONS(149), 8,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2350] = 1,
    ACTIONS(153), 8,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2361] = 5,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(365), 1,
      sym_param,
    STATE(111), 1,
      sym_variable,
    ACTIONS(361), 2,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(363), 3,
      aux_sym_request_token1,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2380] = 4,
    ACTIONS(316), 1,
      anon_sym_POUND,
    ACTIONS(281), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(318), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(89), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2396] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(367), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2408] = 4,
    ACTIONS(316), 1,
      anon_sym_POUND,
    ACTIONS(281), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(318), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(94), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2424] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(97), 1,
      aux_sym_path_repeat1,
    ACTIONS(369), 5,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2438] = 4,
    ACTIONS(371), 1,
      anon_sym_POUND,
    ACTIONS(281), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(373), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(89), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2454] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(375), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2466] = 4,
    ACTIONS(320), 1,
      anon_sym_POUND,
    ACTIONS(281), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(322), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(89), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2482] = 3,
    ACTIONS(379), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    STATE(89), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
    ACTIONS(377), 3,
      anon_sym_POUND,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2496] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(382), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2508] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(384), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2520] = 4,
    ACTIONS(320), 1,
      anon_sym_POUND,
    ACTIONS(281), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(322), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(82), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2536] = 4,
    ACTIONS(312), 1,
      anon_sym_POUND,
    ACTIONS(281), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(314), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(86), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2552] = 4,
    ACTIONS(312), 1,
      anon_sym_POUND,
    ACTIONS(281), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(314), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(89), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2568] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(54), 1,
      aux_sym__whitespace_token1,
    ACTIONS(52), 5,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      sym_text,
  [2582] = 4,
    ACTIONS(371), 1,
      anon_sym_POUND,
    ACTIONS(281), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(373), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(98), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2598] = 3,
    ACTIONS(386), 1,
      anon_sym_SLASH,
    STATE(97), 1,
      aux_sym_path_repeat1,
    ACTIONS(389), 5,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2612] = 4,
    ACTIONS(391), 1,
      anon_sym_POUND,
    ACTIONS(281), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(393), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(89), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2628] = 4,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(279), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(281), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    STATE(88), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2644] = 1,
    ACTIONS(237), 6,
      anon_sym_SLASH,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2653] = 1,
    ACTIONS(395), 6,
      anon_sym_SLASH,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2662] = 1,
    ACTIONS(397), 6,
      anon_sym_SLASH,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2671] = 1,
    ACTIONS(399), 6,
      anon_sym_SLASH,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2680] = 2,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(389), 5,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2691] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym_identifier,
    STATE(43), 1,
      sym_host,
    STATE(161), 1,
      sym_authority,
    STATE(186), 1,
      sym_pair,
  [2710] = 1,
    ACTIONS(229), 6,
      anon_sym_SLASH,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2719] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(406), 1,
      sym_identifier,
    STATE(64), 1,
      sym_host,
    STATE(158), 1,
      sym_authority,
    STATE(186), 1,
      sym_pair,
  [2738] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(408), 1,
      aux_sym__whitespace_token1,
    STATE(108), 1,
      aux_sym__whitespace,
    ACTIONS(47), 3,
      anon_sym_HTTP_SLASH,
      sym_status_code,
      sym_status_text,
  [2753] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(413), 1,
      sym__line,
    STATE(109), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(411), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2767] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(416), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(418), 1,
      aux_sym__whitespace_token1,
    STATE(108), 1,
      aux_sym__whitespace,
    STATE(212), 1,
      sym_http_version,
  [2783] = 1,
    ACTIONS(420), 5,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2791] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(41), 1,
      sym_variable,
  [2807] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(53), 1,
      sym_variable,
  [2823] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(422), 1,
      sym_identifier,
    ACTIONS(424), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      aux_sym__whitespace_token1,
    STATE(116), 1,
      aux_sym__whitespace,
  [2839] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(430), 1,
      sym__line,
    STATE(109), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(428), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2853] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(432), 1,
      aux_sym__whitespace_token1,
    STATE(116), 1,
      aux_sym__whitespace,
    ACTIONS(47), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [2867] = 1,
    ACTIONS(435), 5,
      anon_sym_POUND,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2875] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(54), 4,
      anon_sym_HTTP_SLASH,
      sym_status_code,
      sym_status_text,
      aux_sym__whitespace_token1,
  [2885] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(437), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(124), 1,
      aux_sym__whitespace,
  [2898] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(439), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2911] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym_xml_body_token2,
    ACTIONS(441), 1,
      sym__line,
    STATE(121), 1,
      aux_sym_script_variable_repeat1,
  [2924] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(444), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(136), 1,
      aux_sym__whitespace,
  [2937] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    ACTIONS(448), 1,
      sym__line,
    STATE(131), 1,
      aux_sym_script_variable_repeat1,
  [2950] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(450), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2963] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(452), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(138), 1,
      aux_sym__whitespace,
  [2976] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(426), 1,
      aux_sym__whitespace_token1,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(116), 1,
      aux_sym__whitespace,
  [2989] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(456), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(120), 1,
      aux_sym__whitespace,
  [3002] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(458), 1,
      aux_sym_script_variable_token2,
    ACTIONS(460), 1,
      sym__line,
    STATE(147), 1,
      aux_sym_script_variable_repeat1,
  [3015] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(426), 1,
      aux_sym__whitespace_token1,
    ACTIONS(462), 1,
      sym_identifier,
    STATE(126), 1,
      aux_sym__whitespace,
  [3028] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(464), 1,
      aux_sym_xml_body_token2,
    ACTIONS(466), 1,
      sym__line,
    STATE(121), 1,
      aux_sym_script_variable_repeat1,
  [3041] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(468), 1,
      aux_sym_json_body_token3,
    ACTIONS(470), 1,
      sym__line,
    STATE(137), 1,
      aux_sym_script_variable_repeat1,
  [3054] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(472), 1,
      aux_sym__whitespace_token1,
    ACTIONS(474), 1,
      sym__line,
    STATE(133), 1,
      aux_sym__whitespace,
  [3067] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(45), 1,
      sym__line,
    ACTIONS(476), 1,
      aux_sym__whitespace_token1,
    STATE(133), 1,
      aux_sym__whitespace,
  [3080] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(479), 1,
      anon_sym_EQ,
    STATE(135), 1,
      aux_sym__whitespace,
  [3093] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(481), 1,
      anon_sym_EQ,
    STATE(5), 1,
      aux_sym__whitespace,
  [3106] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(483), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [3119] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym_json_body_token3,
    ACTIONS(485), 1,
      sym__line,
    STATE(137), 1,
      aux_sym_script_variable_repeat1,
  [3132] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(488), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [3145] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(492), 1,
      aux_sym_xml_body_token3,
    STATE(149), 1,
      aux_sym_form_data_repeat1,
  [3158] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(418), 1,
      aux_sym__whitespace_token1,
    ACTIONS(494), 1,
      sym_status_code,
    STATE(108), 1,
      aux_sym__whitespace,
  [3171] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(418), 1,
      aux_sym__whitespace_token1,
    ACTIONS(496), 1,
      sym_status_text,
    STATE(108), 1,
      aux_sym__whitespace,
  [3184] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(426), 1,
      aux_sym__whitespace_token1,
    ACTIONS(498), 1,
      sym_identifier,
    STATE(144), 1,
      aux_sym__whitespace,
  [3197] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(472), 1,
      aux_sym__whitespace_token1,
    ACTIONS(500), 1,
      sym__line,
    STATE(133), 1,
      aux_sym__whitespace,
  [3210] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(426), 1,
      aux_sym__whitespace_token1,
    ACTIONS(502), 1,
      sym_identifier,
    STATE(116), 1,
      aux_sym__whitespace,
  [3223] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(470), 1,
      sym__line,
    ACTIONS(504), 1,
      aux_sym_json_body_token3,
    STATE(137), 1,
      aux_sym_script_variable_repeat1,
  [3236] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(54), 3,
      anon_sym_LPAREN,
      sym_identifier,
      aux_sym__whitespace_token1,
  [3245] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym_script_variable_token2,
    ACTIONS(506), 1,
      sym__line,
    STATE(147), 1,
      aux_sym_script_variable_repeat1,
  [3258] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(509), 1,
      anon_sym_AT,
    ACTIONS(511), 1,
      aux_sym__whitespace_token1,
    STATE(143), 1,
      aux_sym__whitespace,
  [3271] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(513), 1,
      sym_identifier,
    ACTIONS(515), 1,
      aux_sym_xml_body_token3,
    STATE(149), 1,
      aux_sym_form_data_repeat1,
  [3284] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(418), 1,
      aux_sym__whitespace_token1,
    STATE(141), 1,
      aux_sym__whitespace,
  [3294] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
  [3304] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(518), 1,
      sym_param,
    STATE(202), 1,
      sym_fragment,
  [3314] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(522), 1,
      aux_sym_port_token1,
  [3324] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(518), 1,
      sym_param,
    STATE(190), 1,
      sym_fragment,
  [3334] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(518), 1,
      sym_param,
    STATE(185), 1,
      sym_fragment,
  [3344] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(52), 2,
      aux_sym__whitespace_token1,
      sym__line,
  [3352] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(113), 1,
      aux_sym__whitespace,
  [3362] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(524), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host,
  [3372] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(526), 1,
      sym__line,
    STATE(145), 1,
      aux_sym_script_variable_repeat1,
  [3382] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(528), 1,
      sym__line,
    STATE(115), 1,
      aux_sym_script_variable_repeat1,
  [3392] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(54), 1,
      sym_host,
  [3402] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(426), 1,
      aux_sym__whitespace_token1,
    STATE(114), 1,
      aux_sym__whitespace,
  [3412] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(532), 1,
      anon_sym_COLON,
    ACTIONS(534), 1,
      anon_sym_EQ,
  [3422] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(518), 1,
      sym_param,
    STATE(188), 1,
      sym_fragment,
  [3432] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(524), 1,
      sym_identifier,
    STATE(65), 1,
      sym_host,
  [3442] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(418), 1,
      aux_sym__whitespace_token1,
    STATE(140), 1,
      aux_sym__whitespace,
  [3452] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(536), 1,
      aux_sym_port_token1,
  [3462] = 3,
    ACTIONS(418), 1,
      aux_sym__whitespace_token1,
    ACTIONS(538), 1,
      aux_sym_request_token1,
    STATE(110), 1,
      aux_sym__whitespace,
  [3472] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(540), 1,
      sym__line,
    STATE(128), 1,
      aux_sym_script_variable_repeat1,
  [3482] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(518), 1,
      sym_param,
    STATE(194), 1,
      sym_fragment,
  [3492] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(530), 1,
      sym_identifier,
    STATE(50), 1,
      sym_host,
  [3502] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(542), 1,
      sym__line,
    STATE(130), 1,
      aux_sym_script_variable_repeat1,
  [3512] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(112), 1,
      aux_sym__whitespace,
  [3522] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(511), 1,
      aux_sym__whitespace_token1,
    STATE(132), 1,
      aux_sym__whitespace,
  [3532] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(448), 1,
      sym__line,
    STATE(131), 1,
      aux_sym_script_variable_repeat1,
  [3542] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(518), 1,
      sym_param,
    STATE(195), 1,
      sym_fragment,
  [3552] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(544), 1,
      sym_identifier,
  [3559] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(546), 1,
      anon_sym_EQ,
  [3566] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(534), 1,
      anon_sym_EQ,
  [3573] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(548), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3580] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
  [3587] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(532), 1,
      anon_sym_COLON,
  [3594] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(552), 1,
      aux_sym__whitespace_token1,
  [3601] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(554), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3608] = 1,
    ACTIONS(314), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3613] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(556), 1,
      anon_sym_AT,
  [3620] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(558), 1,
      sym_identifier,
  [3627] = 1,
    ACTIONS(560), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3632] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(562), 1,
      sym_query_key,
  [3639] = 1,
    ACTIONS(564), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3644] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(566), 1,
      aux_sym_port_token1,
  [3651] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(568), 1,
      aux_sym_http_version_token1,
  [3658] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(399), 1,
      sym_identifier,
  [3665] = 1,
    ACTIONS(373), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3670] = 1,
    ACTIONS(393), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3675] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(570), 1,
      anon_sym_COLON,
  [3682] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(572), 1,
      aux_sym_http_version_token1,
  [3689] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(574), 1,
      aux_sym_port_token1,
  [3696] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(490), 1,
      sym_identifier,
  [3703] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(576), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3710] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(395), 1,
      sym_identifier,
  [3717] = 1,
    ACTIONS(318), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3722] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(578), 1,
      sym_identifier,
  [3729] = 1,
    ACTIONS(580), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3734] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(582), 1,
      anon_sym_AT,
  [3741] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(584), 1,
      anon_sym_AT,
  [3748] = 1,
    ACTIONS(586), 1,
      aux_sym_request_token1,
  [3752] = 1,
    ACTIONS(588), 1,
      aux_sym_request_token1,
  [3756] = 1,
    ACTIONS(552), 1,
      aux_sym_request_token1,
  [3760] = 1,
    ACTIONS(590), 1,
      aux_sym_request_token1,
  [3764] = 1,
    ACTIONS(592), 1,
      aux_sym_request_token1,
  [3768] = 1,
    ACTIONS(594), 1,
      aux_sym_request_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 171,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 312,
  [SMALL_STATE(7)] = 364,
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
  [SMALL_STATE(27)] = 1189,
  [SMALL_STATE(28)] = 1212,
  [SMALL_STATE(29)] = 1235,
  [SMALL_STATE(30)] = 1262,
  [SMALL_STATE(31)] = 1285,
  [SMALL_STATE(32)] = 1312,
  [SMALL_STATE(33)] = 1335,
  [SMALL_STATE(34)] = 1358,
  [SMALL_STATE(35)] = 1381,
  [SMALL_STATE(36)] = 1405,
  [SMALL_STATE(37)] = 1429,
  [SMALL_STATE(38)] = 1453,
  [SMALL_STATE(39)] = 1477,
  [SMALL_STATE(40)] = 1501,
  [SMALL_STATE(41)] = 1525,
  [SMALL_STATE(42)] = 1546,
  [SMALL_STATE(43)] = 1567,
  [SMALL_STATE(44)] = 1588,
  [SMALL_STATE(45)] = 1609,
  [SMALL_STATE(46)] = 1630,
  [SMALL_STATE(47)] = 1651,
  [SMALL_STATE(48)] = 1672,
  [SMALL_STATE(49)] = 1693,
  [SMALL_STATE(50)] = 1714,
  [SMALL_STATE(51)] = 1735,
  [SMALL_STATE(52)] = 1756,
  [SMALL_STATE(53)] = 1777,
  [SMALL_STATE(54)] = 1798,
  [SMALL_STATE(55)] = 1819,
  [SMALL_STATE(56)] = 1856,
  [SMALL_STATE(57)] = 1877,
  [SMALL_STATE(58)] = 1898,
  [SMALL_STATE(59)] = 1919,
  [SMALL_STATE(60)] = 1940,
  [SMALL_STATE(61)] = 1969,
  [SMALL_STATE(62)] = 1998,
  [SMALL_STATE(63)] = 2023,
  [SMALL_STATE(64)] = 2048,
  [SMALL_STATE(65)] = 2073,
  [SMALL_STATE(66)] = 2098,
  [SMALL_STATE(67)] = 2120,
  [SMALL_STATE(68)] = 2142,
  [SMALL_STATE(69)] = 2164,
  [SMALL_STATE(70)] = 2186,
  [SMALL_STATE(71)] = 2208,
  [SMALL_STATE(72)] = 2230,
  [SMALL_STATE(73)] = 2252,
  [SMALL_STATE(74)] = 2270,
  [SMALL_STATE(75)] = 2285,
  [SMALL_STATE(76)] = 2302,
  [SMALL_STATE(77)] = 2313,
  [SMALL_STATE(78)] = 2324,
  [SMALL_STATE(79)] = 2339,
  [SMALL_STATE(80)] = 2350,
  [SMALL_STATE(81)] = 2361,
  [SMALL_STATE(82)] = 2380,
  [SMALL_STATE(83)] = 2396,
  [SMALL_STATE(84)] = 2408,
  [SMALL_STATE(85)] = 2424,
  [SMALL_STATE(86)] = 2438,
  [SMALL_STATE(87)] = 2454,
  [SMALL_STATE(88)] = 2466,
  [SMALL_STATE(89)] = 2482,
  [SMALL_STATE(90)] = 2496,
  [SMALL_STATE(91)] = 2508,
  [SMALL_STATE(92)] = 2520,
  [SMALL_STATE(93)] = 2536,
  [SMALL_STATE(94)] = 2552,
  [SMALL_STATE(95)] = 2568,
  [SMALL_STATE(96)] = 2582,
  [SMALL_STATE(97)] = 2598,
  [SMALL_STATE(98)] = 2612,
  [SMALL_STATE(99)] = 2628,
  [SMALL_STATE(100)] = 2644,
  [SMALL_STATE(101)] = 2653,
  [SMALL_STATE(102)] = 2662,
  [SMALL_STATE(103)] = 2671,
  [SMALL_STATE(104)] = 2680,
  [SMALL_STATE(105)] = 2691,
  [SMALL_STATE(106)] = 2710,
  [SMALL_STATE(107)] = 2719,
  [SMALL_STATE(108)] = 2738,
  [SMALL_STATE(109)] = 2753,
  [SMALL_STATE(110)] = 2767,
  [SMALL_STATE(111)] = 2783,
  [SMALL_STATE(112)] = 2791,
  [SMALL_STATE(113)] = 2807,
  [SMALL_STATE(114)] = 2823,
  [SMALL_STATE(115)] = 2839,
  [SMALL_STATE(116)] = 2853,
  [SMALL_STATE(117)] = 2867,
  [SMALL_STATE(118)] = 2875,
  [SMALL_STATE(119)] = 2885,
  [SMALL_STATE(120)] = 2898,
  [SMALL_STATE(121)] = 2911,
  [SMALL_STATE(122)] = 2924,
  [SMALL_STATE(123)] = 2937,
  [SMALL_STATE(124)] = 2950,
  [SMALL_STATE(125)] = 2963,
  [SMALL_STATE(126)] = 2976,
  [SMALL_STATE(127)] = 2989,
  [SMALL_STATE(128)] = 3002,
  [SMALL_STATE(129)] = 3015,
  [SMALL_STATE(130)] = 3028,
  [SMALL_STATE(131)] = 3041,
  [SMALL_STATE(132)] = 3054,
  [SMALL_STATE(133)] = 3067,
  [SMALL_STATE(134)] = 3080,
  [SMALL_STATE(135)] = 3093,
  [SMALL_STATE(136)] = 3106,
  [SMALL_STATE(137)] = 3119,
  [SMALL_STATE(138)] = 3132,
  [SMALL_STATE(139)] = 3145,
  [SMALL_STATE(140)] = 3158,
  [SMALL_STATE(141)] = 3171,
  [SMALL_STATE(142)] = 3184,
  [SMALL_STATE(143)] = 3197,
  [SMALL_STATE(144)] = 3210,
  [SMALL_STATE(145)] = 3223,
  [SMALL_STATE(146)] = 3236,
  [SMALL_STATE(147)] = 3245,
  [SMALL_STATE(148)] = 3258,
  [SMALL_STATE(149)] = 3271,
  [SMALL_STATE(150)] = 3284,
  [SMALL_STATE(151)] = 3294,
  [SMALL_STATE(152)] = 3304,
  [SMALL_STATE(153)] = 3314,
  [SMALL_STATE(154)] = 3324,
  [SMALL_STATE(155)] = 3334,
  [SMALL_STATE(156)] = 3344,
  [SMALL_STATE(157)] = 3352,
  [SMALL_STATE(158)] = 3362,
  [SMALL_STATE(159)] = 3372,
  [SMALL_STATE(160)] = 3382,
  [SMALL_STATE(161)] = 3392,
  [SMALL_STATE(162)] = 3402,
  [SMALL_STATE(163)] = 3412,
  [SMALL_STATE(164)] = 3422,
  [SMALL_STATE(165)] = 3432,
  [SMALL_STATE(166)] = 3442,
  [SMALL_STATE(167)] = 3452,
  [SMALL_STATE(168)] = 3462,
  [SMALL_STATE(169)] = 3472,
  [SMALL_STATE(170)] = 3482,
  [SMALL_STATE(171)] = 3492,
  [SMALL_STATE(172)] = 3502,
  [SMALL_STATE(173)] = 3512,
  [SMALL_STATE(174)] = 3522,
  [SMALL_STATE(175)] = 3532,
  [SMALL_STATE(176)] = 3542,
  [SMALL_STATE(177)] = 3552,
  [SMALL_STATE(178)] = 3559,
  [SMALL_STATE(179)] = 3566,
  [SMALL_STATE(180)] = 3573,
  [SMALL_STATE(181)] = 3580,
  [SMALL_STATE(182)] = 3587,
  [SMALL_STATE(183)] = 3594,
  [SMALL_STATE(184)] = 3601,
  [SMALL_STATE(185)] = 3608,
  [SMALL_STATE(186)] = 3613,
  [SMALL_STATE(187)] = 3620,
  [SMALL_STATE(188)] = 3627,
  [SMALL_STATE(189)] = 3632,
  [SMALL_STATE(190)] = 3639,
  [SMALL_STATE(191)] = 3644,
  [SMALL_STATE(192)] = 3651,
  [SMALL_STATE(193)] = 3658,
  [SMALL_STATE(194)] = 3665,
  [SMALL_STATE(195)] = 3670,
  [SMALL_STATE(196)] = 3675,
  [SMALL_STATE(197)] = 3682,
  [SMALL_STATE(198)] = 3689,
  [SMALL_STATE(199)] = 3696,
  [SMALL_STATE(200)] = 3703,
  [SMALL_STATE(201)] = 3710,
  [SMALL_STATE(202)] = 3717,
  [SMALL_STATE(203)] = 3722,
  [SMALL_STATE(204)] = 3729,
  [SMALL_STATE(205)] = 3734,
  [SMALL_STATE(206)] = 3741,
  [SMALL_STATE(207)] = 3748,
  [SMALL_STATE(208)] = 3752,
  [SMALL_STATE(209)] = 3756,
  [SMALL_STATE(210)] = 3760,
  [SMALL_STATE(211)] = 3764,
  [SMALL_STATE(212)] = 3768,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 1),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(179),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(207),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(160),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(162),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(148),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 4, .production_id = 16),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 4, .production_id = 16),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 19),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 19),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 19), SHIFT_REPEAT(199),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 19), SHIFT_REPEAT(139),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 3, .production_id = 13),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 3, .production_id = 13),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(182),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 21),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 21),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 17),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 17),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 11),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 11),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, .production_id = 18),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, .production_id = 18),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 12),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 12),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 7),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 7),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 15),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 15),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 14),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 14),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, .production_id = 11),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 4, .production_id = 11),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, .production_id = 20),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, .production_id = 20),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 6, .production_id = 17),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 6, .production_id = 17),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(151),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(203),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(129),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(169),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, .production_id = 6),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, .production_id = 6),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(95),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 6),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, .production_id = 6),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 9),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(189),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 7),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(73),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(102),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(118),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(109),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 10),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(146),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 8),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(121),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(156),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(137),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(147),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 2),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat1, 2), SHIFT_REPEAT(149),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [550] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 7),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 8),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1, .production_id = 5),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 4),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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

TS_PUBLIC const TSLanguage *tree_sitter_http() {
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
