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
#define STATE_COUNT 193
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 1
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 21

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
  anon_sym_COLON_SLASH_SLASH = 47,
  sym_status_code = 48,
  sym_status_text = 49,
  aux_sym_request_token1 = 50,
  anon_sym_AMP = 51,
  anon_sym_QMARK = 52,
  anon_sym_EQ = 53,
  aux_sym_header_token1 = 54,
  aux_sym_header_token2 = 55,
  anon_sym_LBRACE_LBRACE = 56,
  anon_sym_RBRACE_RBRACE = 57,
  aux_sym_script_variable_token1 = 58,
  aux_sym_script_variable_token2 = 59,
  aux_sym_xml_body_token1 = 60,
  aux_sym_xml_body_token2 = 61,
  aux_sym_xml_body_token3 = 62,
  aux_sym_json_body_token1 = 63,
  aux_sym_json_body_token2 = 64,
  aux_sym_json_body_token3 = 65,
  aux_sym_json_body_token4 = 66,
  anon_sym_query = 67,
  anon_sym_LPAREN = 68,
  anon_sym_LT = 69,
  sym_query_key = 70,
  sym_param = 71,
  sym_number = 72,
  sym_string = 73,
  anon_sym_true = 74,
  anon_sym_false = 75,
  aux_sym__whitespace_token1 = 76,
  aux_sym__newline_token1 = 77,
  sym__line = 78,
  sym_document = 79,
  sym_host = 80,
  sym_port = 81,
  sym_path = 82,
  sym_scheme = 83,
  sym_authority = 84,
  sym_http_version = 85,
  sym_target_url = 86,
  sym_response = 87,
  sym_request = 88,
  sym_pair = 89,
  sym_query_param = 90,
  sym_host_url = 91,
  sym_header = 92,
  sym_variable = 93,
  sym_script_variable = 94,
  sym_variable_declaration = 95,
  sym_xml_body = 96,
  sym_json_body = 97,
  sym_graphql_body = 98,
  sym_external_body = 99,
  sym_form_data = 100,
  sym_boolean = 101,
  aux_sym__whitespace = 102,
  aux_sym_document_repeat1 = 103,
  aux_sym_path_repeat1 = 104,
  aux_sym_target_url_repeat1 = 105,
  aux_sym_request_repeat1 = 106,
  aux_sym_request_repeat2 = 107,
  aux_sym_script_variable_repeat1 = 108,
  aux_sym_form_data_repeat1 = 109,
  aux_sym_form_data_repeat2 = 110,
  alias_sym_name = 111,
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
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 4, .length = 2},
  [12] = {.index = 4, .length = 2},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 16, .length = 2},
  [15] = {.index = 18, .length = 4},
  [16] = {.index = 22, .length = 1},
  [17] = {.index = 23, .length = 4},
  [18] = {.index = 27, .length = 4},
  [19] = {.index = 31, .length = 4},
  [20] = {.index = 1, .length = 2},
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
    {field_key, 1},
  [7] =
    {field_name, 1},
    {field_value, 4},
  [9] =
    {field_key, 1},
    {field_value, 2},
  [11] =
    {field_name, 1},
    {field_value, 5},
  [13] =
    {field_key, 1},
    {field_value, 3},
  [15] =
    {field_file_path, 2},
  [16] =
    {field_name, 0},
    {field_value, 3},
  [18] =
    {field_name, 0},
    {field_name, 3, .inherited = true},
    {field_value, 2},
    {field_value, 3, .inherited = true},
  [22] =
    {field_file_path, 4},
  [23] =
    {field_name, 0},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [27] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [31] =
    {field_name, 0},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [10] = {
    [2] = sym_path,
  },
  [11] = {
    [0] = alias_sym_name,
  },
  [12] = {
    [2] = aux_sym_header_token1,
  },
  [13] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
  },
  [14] = {
    [0] = alias_sym_name,
  },
  [15] = {
    [2] = aux_sym_header_token1,
  },
  [16] = {
    [4] = sym_path,
  },
  [17] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
    [4] = aux_sym_header_token1,
  },
  [19] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
    [4] = aux_sym_header_token1,
    [5] = aux_sym_header_token1,
  },
  [20] = {
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
  [60] = 5,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 6,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 26,
  [74] = 38,
  [75] = 30,
  [76] = 57,
  [77] = 56,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 46,
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
  [100] = 45,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 43,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 111,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 5,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 103,
  [125] = 5,
  [126] = 103,
  [127] = 122,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 115,
  [133] = 133,
  [134] = 118,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 114,
  [141] = 139,
  [142] = 103,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 6,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 6,
  [156] = 156,
  [157] = 145,
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
  [172] = 106,
  [173] = 173,
  [174] = 164,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 104,
  [181] = 165,
  [182] = 182,
  [183] = 173,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 169,
  [192] = 192,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(644);
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(664);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '#') ADVANCE(645);
      if (lookahead == '&') ADVANCE(665);
      if (lookahead == '(') ADVANCE(688);
      if (lookahead == '-') ADVANCE(694);
      if (lookahead == '/') ADVANCE(649);
      if (lookahead == ':') ADVANCE(646);
      if (lookahead == '<') ADVANCE(689);
      if (lookahead == '=') ADVANCE(668);
      if (lookahead == '?') ADVANCE(666);
      if (lookahead == '@') ADVANCE(654);
      if (lookahead == 'H') ADVANCE(699);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == ']') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(705);
      if (lookahead == 'f') ADVANCE(700);
      if (lookahead == 't') ADVANCE(707);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(721);
      if (lookahead == '0' ||
          ('6' <= lookahead && lookahead <= '9')) ADVANCE(647);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(647);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(664);
      if (lookahead == '&') ADVANCE(665);
      if (lookahead == '(') ADVANCE(688);
      if (lookahead == '/') ADVANCE(649);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '=') ADVANCE(668);
      if (lookahead == '?') ADVANCE(666);
      if (lookahead == '@') ADVANCE(654);
      if (lookahead == 'c') ADVANCE(705);
      if (lookahead == '{') ADVANCE(633);
      if (lookahead == '}') ADVANCE(634);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(721);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(660);
      if (lookahead == '&') ADVANCE(665);
      if (lookahead == '=') ADVANCE(669);
      if (lookahead == '?') ADVANCE(667);
      if (lookahead == '{') ADVANCE(633);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '}') ADVANCE(714);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(660);
      if (lookahead == '&') ADVANCE(665);
      if (lookahead == '?') ADVANCE(667);
      if (lookahead == '{') ADVANCE(633);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '}') ADVANCE(714);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(661);
      if (lookahead == '-') ADVANCE(729);
      if (lookahead != 0) ADVANCE(733);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(661);
      if (lookahead == '<') ADVANCE(730);
      if (lookahead != 0) ADVANCE(733);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(661);
      if (lookahead == ']') ADVANCE(724);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead != 0) ADVANCE(733);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(661);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead != 0) ADVANCE(733);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(661);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(723);
      if (lookahead != 0) ADVANCE(733);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(661);
      if (lookahead != 0) ADVANCE(733);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(713);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(685);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(687);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(684);
      if (lookahead == '{') ADVANCE(678);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(686);
      if (lookahead == '}') ADVANCE(679);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(683);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(681);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(680);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(670);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\f') ADVANCE(18);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == '@') ADVANCE(654);
      if (lookahead == 'c') ADVANCE(674);
      if (lookahead == '{') ADVANCE(633);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(663);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(722);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '/') ADVANCE(655);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(119);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(127);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 53:
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(578);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 62:
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 63:
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 65:
      if (lookahead == ' ') ADVANCE(120);
      END_STATE();
    case 66:
      if (lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 67:
      if (lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 68:
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 69:
      if (lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 70:
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == 'A') ADVANCE(189);
      if (lookahead == 'B') ADVANCE(138);
      if (lookahead == 'C') ADVANCE(431);
      if (lookahead == 'E') ADVANCE(623);
      if (lookahead == 'F') ADVANCE(139);
      if (lookahead == 'G') ADVANCE(140);
      if (lookahead == 'H') ADVANCE(130);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead == 'L') ADVANCE(240);
      if (lookahead == 'M') ADVANCE(234);
      if (lookahead == 'N') ADVANCE(241);
      if (lookahead == 'O') ADVANCE(103);
      if (lookahead == 'P') ADVANCE(141);
      if (lookahead == 'R') ADVANCE(149);
      if (lookahead == 'S') ADVANCE(230);
      if (lookahead == 'T') ADVANCE(237);
      if (lookahead == 'U') ADVANCE(117);
      if (lookahead == 'V') ADVANCE(147);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 't') ADVANCE(494);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(664);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(700);
      if (lookahead == 't') ADVANCE(707);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(716);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == '%') ADVANCE(17);
      END_STATE();
    case 75:
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == 'M') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(531);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(384);
      END_STATE();
    case 78:
      if (lookahead == '/') ADVANCE(657);
      END_STATE();
    case 79:
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == '>') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '>') ADVANCE(682);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == '?') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(610);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(206);
      if (lookahead == 'E') ADVANCE(624);
      if (lookahead == 'F') ADVANCE(434);
      if (lookahead == 'I') ADVANCE(392);
      if (lookahead == 'M') ADVANCE(457);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(606);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(374);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(373);
      END_STATE();
    case 88:
      if (lookahead == 'C') ADVANCE(437);
      END_STATE();
    case 89:
      if (lookahead == 'C') ADVANCE(319);
      END_STATE();
    case 90:
      if (lookahead == 'D') ADVANCE(291);
      END_STATE();
    case 91:
      if (lookahead == 'D') ADVANCE(282);
      END_STATE();
    case 92:
      if (lookahead == 'E') ADVANCE(512);
      END_STATE();
    case 93:
      if (lookahead == 'E') ADVANCE(412);
      END_STATE();
    case 94:
      if (lookahead == 'E') ADVANCE(154);
      if (lookahead == 'M') ADVANCE(156);
      END_STATE();
    case 95:
      if (lookahead == 'F') ADVANCE(340);
      END_STATE();
    case 96:
      if (lookahead == 'F') ADVANCE(176);
      END_STATE();
    case 97:
      if (lookahead == 'F') ADVANCE(176);
      if (lookahead == 'R') ADVANCE(236);
      END_STATE();
    case 98:
      if (lookahead == 'F') ADVANCE(464);
      END_STATE();
    case 99:
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'R') ADVANCE(233);
      END_STATE();
    case 100:
      if (lookahead == 'H') ADVANCE(289);
      if (lookahead == 'T') ADVANCE(345);
      END_STATE();
    case 101:
      if (lookahead == 'I') ADVANCE(49);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(402);
      END_STATE();
    case 103:
      if (lookahead == 'K') ADVANCE(659);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(254);
      END_STATE();
    case 105:
      if (lookahead == 'L') ADVANCE(160);
      END_STATE();
    case 106:
      if (lookahead == 'L') ADVANCE(447);
      END_STATE();
    case 107:
      if (lookahead == 'M') ADVANCE(290);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(466);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(250);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(467);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(468);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(552);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(27);
      END_STATE();
    case 114:
      if (lookahead == 'P') ADVANCE(302);
      END_STATE();
    case 115:
      if (lookahead == 'P') ADVANCE(506);
      END_STATE();
    case 116:
      if (lookahead == 'P') ADVANCE(509);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(233);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(236);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(301);
      END_STATE();
    case 121:
      if (lookahead == 'R') ADVANCE(269);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(298);
      END_STATE();
    case 123:
      if (lookahead == 'R') ADVANCE(294);
      END_STATE();
    case 124:
      if (lookahead == 'S') ADVANCE(588);
      END_STATE();
    case 125:
      if (lookahead == 'S') ADVANCE(268);
      END_STATE();
    case 126:
      if (lookahead == 'S') ADVANCE(562);
      END_STATE();
    case 127:
      if (lookahead == 'S') ADVANCE(172);
      END_STATE();
    case 128:
      if (lookahead == 'S') ADVANCE(611);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(113);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(129);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(629);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(456);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(345);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(461);
      END_STATE();
    case 135:
      if (lookahead == 'U') ADVANCE(534);
      END_STATE();
    case 136:
      if (lookahead == 'U') ADVANCE(410);
      END_STATE();
    case 137:
      if (lookahead == 'V') ADVANCE(258);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'e') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(605);
      if (lookahead == 'p') ADVANCE(501);
      if (lookahead == 's') ADVANCE(599);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(625);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(616);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(505);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(524);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(556);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(542);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(502);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(560);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(627);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(568);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(569);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(582);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(425);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(596);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(328);
      END_STATE();
    case 184:
      if (lookahead == 'b') ADVANCE(370);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(385);
      END_STATE();
    case 186:
      if (lookahead == 'b') ADVANCE(386);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(474);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(478);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(475);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(625);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(317);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(559);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(547);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(362);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(245);
      if (lookahead == 'x') ADVANCE(626);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(463);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(560);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(439);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(591);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(659);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(342);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(343);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(544);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(261);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(628);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == 'w') ADVANCE(330);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'o') ADVANCE(613);
      if (lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(612);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 303:
      if (lookahead == 'f') ADVANCE(305);
      END_STATE();
    case 304:
      if (lookahead == 'f') ADVANCE(372);
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 305:
      if (lookahead == 'f') ADVANCE(331);
      END_STATE();
    case 306:
      if (lookahead == 'f') ADVANCE(337);
      END_STATE();
    case 307:
      if (lookahead == 'f') ADVANCE(470);
      END_STATE();
    case 308:
      if (lookahead == 'f') ADVANCE(347);
      END_STATE();
    case 309:
      if (lookahead == 'g') ADVANCE(659);
      END_STATE();
    case 310:
      if (lookahead == 'g') ADVANCE(520);
      END_STATE();
    case 311:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 312:
      if (lookahead == 'g') ADVANCE(550);
      END_STATE();
    case 313:
      if (lookahead == 'g') ADVANCE(471);
      END_STATE();
    case 314:
      if (lookahead == 'g') ADVANCE(262);
      END_STATE();
    case 315:
      if (lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 316:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 317:
      if (lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 318:
      if (lookahead == 'h') ADVANCE(465);
      END_STATE();
    case 319:
      if (lookahead == 'h') ADVANCE(472);
      END_STATE();
    case 320:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 321:
      if (lookahead == 'h') ADVANCE(265);
      END_STATE();
    case 322:
      if (lookahead == 'h') ADVANCE(271);
      END_STATE();
    case 323:
      if (lookahead == 'h') ADVANCE(441);
      END_STATE();
    case 324:
      if (lookahead == 'h') ADVANCE(446);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(632);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(553);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(539);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(404);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 344:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(615);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(448);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(460);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(452);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(442);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(593);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 363:
      if (lookahead == 'k') ADVANCE(239);
      END_STATE();
    case 364:
      if (lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 365:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 366:
      if (lookahead == 'l') ADVANCE(625);
      END_STATE();
    case 367:
      if (lookahead == 'l') ADVANCE(536);
      END_STATE();
    case 368:
      if (lookahead == 'l') ADVANCE(555);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead == 'm') ADVANCE(256);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(541);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(379);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(529);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 379:
      if (lookahead == 'l') ADVANCE(432);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 387:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 388:
      if (lookahead == 'm') ADVANCE(365);
      END_STATE();
    case 389:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 390:
      if (lookahead == 'm') ADVANCE(481);
      END_STATE();
    case 391:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 392:
      if (lookahead == 'm') ADVANCE(482);
      END_STATE();
    case 393:
      if (lookahead == 'm') ADVANCE(296);
      END_STATE();
    case 394:
      if (lookahead == 'm') ADVANCE(264);
      END_STATE();
    case 395:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 396:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 397:
      if (lookahead == 'n') ADVANCE(659);
      END_STATE();
    case 398:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 399:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 400:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 401:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 402:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 403:
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 404:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 405:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 406:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 407:
      if (lookahead == 'n') ADVANCE(529);
      END_STATE();
    case 408:
      if (lookahead == 'n') ADVANCE(547);
      END_STATE();
    case 409:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 410:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 411:
      if (lookahead == 'n') ADVANCE(557);
      END_STATE();
    case 412:
      if (lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 413:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 414:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 415:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 416:
      if (lookahead == 'n') ADVANCE(560);
      END_STATE();
    case 417:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 418:
      if (lookahead == 'n') ADVANCE(564);
      END_STATE();
    case 419:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 420:
      if (lookahead == 'n') ADVANCE(572);
      END_STATE();
    case 421:
      if (lookahead == 'n') ADVANCE(600);
      END_STATE();
    case 422:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 423:
      if (lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 424:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 425:
      if (lookahead == 'n') ADVANCE(570);
      END_STATE();
    case 426:
      if (lookahead == 'n') ADVANCE(586);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(574);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(630);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 431:
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 432:
      if (lookahead == 'o') ADVANCE(619);
      END_STATE();
    case 433:
      if (lookahead == 'o') ADVANCE(622);
      END_STATE();
    case 434:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 435:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 436:
      if (lookahead == 'o') ADVANCE(496);
      END_STATE();
    case 437:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 438:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 439:
      if (lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 440:
      if (lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 441:
      if (lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 442:
      if (lookahead == 'o') ADVANCE(397);
      END_STATE();
    case 443:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 444:
      if (lookahead == 'o') ADVANCE(567);
      END_STATE();
    case 445:
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 446:
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 447:
      if (lookahead == 'o') ADVANCE(404);
      END_STATE();
    case 448:
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 449:
      if (lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 450:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 451:
      if (lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 452:
      if (lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 453:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 454:
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 455:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 456:
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 457:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 458:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 459:
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 460:
      if (lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 462:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(571);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(587);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 473:
      if (lookahead == 'o') ADVANCE(516);
      END_STATE();
    case 474:
      if (lookahead == 'p') ADVANCE(650);
      END_STATE();
    case 475:
      if (lookahead == 'p') ADVANCE(652);
      END_STATE();
    case 476:
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 477:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 478:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 479:
      if (lookahead == 'p') ADVANCE(440);
      END_STATE();
    case 480:
      if (lookahead == 'p') ADVANCE(560);
      END_STATE();
    case 481:
      if (lookahead == 'p') ADVANCE(438);
      END_STATE();
    case 482:
      if (lookahead == 'p') ADVANCE(381);
      END_STATE();
    case 483:
      if (lookahead == 'p') ADVANCE(583);
      END_STATE();
    case 484:
      if (lookahead == 'p') ADVANCE(443);
      END_STATE();
    case 485:
      if (lookahead == 'p') ADVANCE(484);
      END_STATE();
    case 486:
      if (lookahead == 'p') ADVANCE(297);
      END_STATE();
    case 487:
      if (lookahead == 'p') ADVANCE(473);
      END_STATE();
    case 488:
      if (lookahead == 'p') ADVANCE(487);
      END_STATE();
    case 489:
      if (lookahead == 'q') ADVANCE(609);
      END_STATE();
    case 490:
      if (lookahead == 'q') ADVANCE(604);
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 491:
      if (lookahead == 'q') ADVANCE(607);
      END_STATE();
    case 492:
      if (lookahead == 'q') ADVANCE(608);
      END_STATE();
    case 493:
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 494:
      if (lookahead == 'r') ADVANCE(602);
      END_STATE();
    case 495:
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 496:
      if (lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 497:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 498:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 499:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 500:
      if (lookahead == 'r') ADVANCE(580);
      if (lookahead == 'y') ADVANCE(369);
      END_STATE();
    case 501:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 502:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 503:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 504:
      if (lookahead == 'r') ADVANCE(543);
      END_STATE();
    case 505:
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 506:
      if (lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 507:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 508:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 509:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 510:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 511:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 512:
      if (lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 513:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 514:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 515:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 516:
      if (lookahead == 'r') ADVANCE(560);
      END_STATE();
    case 517:
      if (lookahead == 'r') ADVANCE(614);
      END_STATE();
    case 518:
      if (lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 519:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 520:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 521:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 522:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 523:
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 524:
      if (lookahead == 'r') ADVANCE(631);
      END_STATE();
    case 525:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 526:
      if (lookahead == 'r') ADVANCE(594);
      END_STATE();
    case 527:
      if (lookahead == 's') ADVANCE(651);
      END_STATE();
    case 528:
      if (lookahead == 's') ADVANCE(653);
      END_STATE();
    case 529:
      if (lookahead == 's') ADVANCE(659);
      END_STATE();
    case 530:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 531:
      if (lookahead == 's') ADVANCE(597);
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 532:
      if (lookahead == 's') ADVANCE(538);
      END_STATE();
    case 533:
      if (lookahead == 's') ADVANCE(545);
      END_STATE();
    case 534:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 535:
      if (lookahead == 's') ADVANCE(547);
      END_STATE();
    case 536:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 537:
      if (lookahead == 's') ADVANCE(558);
      END_STATE();
    case 538:
      if (lookahead == 's') ADVANCE(338);
      END_STATE();
    case 539:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 540:
      if (lookahead == 's') ADVANCE(566);
      END_STATE();
    case 541:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 542:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 543:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 544:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 545:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 546:
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'w') ADVANCE(527);
      END_STATE();
    case 547:
      if (lookahead == 't') ADVANCE(659);
      END_STATE();
    case 548:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 549:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 550:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 551:
      if (lookahead == 't') ADVANCE(625);
      END_STATE();
    case 552:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 553:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 554:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 555:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 556:
      if (lookahead == 't') ADVANCE(601);
      END_STATE();
    case 557:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 558:
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 559:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 560:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 561:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 562:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 563:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 564:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 565:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 566:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 567:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 568:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 570:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 571:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 572:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 573:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 574:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 575:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 576:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 577:
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == 'w') ADVANCE(528);
      END_STATE();
    case 578:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 579:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 582:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 594:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 595:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 597:
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 598:
      if (lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 599:
      if (lookahead == 'u') ADVANCE(485);
      END_STATE();
    case 600:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 601:
      if (lookahead == 'u') ADVANCE(529);
      END_STATE();
    case 602:
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 603:
      if (lookahead == 'u') ADVANCE(547);
      END_STATE();
    case 604:
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 605:
      if (lookahead == 'u') ADVANCE(579);
      if (lookahead == 'v') ADVANCE(162);
      END_STATE();
    case 606:
      if (lookahead == 'u') ADVANCE(581);
      END_STATE();
    case 607:
      if (lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 608:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 609:
      if (lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 610:
      if (lookahead == 'u') ADVANCE(590);
      END_STATE();
    case 611:
      if (lookahead == 'u') ADVANCE(488);
      END_STATE();
    case 612:
      if (lookahead == 'v') ADVANCE(341);
      END_STATE();
    case 613:
      if (lookahead == 'v') ADVANCE(279);
      END_STATE();
    case 614:
      if (lookahead == 'v') ADVANCE(286);
      END_STATE();
    case 615:
      if (lookahead == 'v') ADVANCE(277);
      END_STATE();
    case 616:
      if (lookahead == 'v') ADVANCE(179);
      END_STATE();
    case 617:
      if (lookahead == 'w') ADVANCE(436);
      END_STATE();
    case 618:
      if (lookahead == 'w') ADVANCE(168);
      END_STATE();
    case 619:
      if (lookahead == 'w') ADVANCE(239);
      END_STATE();
    case 620:
      if (lookahead == 'w') ADVANCE(144);
      END_STATE();
    case 621:
      if (lookahead == 'x') ADVANCE(388);
      END_STATE();
    case 622:
      if (lookahead == 'x') ADVANCE(625);
      END_STATE();
    case 623:
      if (lookahead == 'x') ADVANCE(476);
      END_STATE();
    case 624:
      if (lookahead == 'x') ADVANCE(573);
      END_STATE();
    case 625:
      if (lookahead == 'y') ADVANCE(659);
      END_STATE();
    case 626:
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 627:
      if (lookahead == 'y') ADVANCE(54);
      END_STATE();
    case 628:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 629:
      if (lookahead == 'y') ADVANCE(477);
      END_STATE();
    case 630:
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 631:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 632:
      if (lookahead == 'z') ADVANCE(239);
      END_STATE();
    case 633:
      if (lookahead == '{') ADVANCE(678);
      END_STATE();
    case 634:
      if (lookahead == '}') ADVANCE(679);
      END_STATE();
    case 635:
      if (lookahead == '}') ADVANCE(16);
      END_STATE();
    case 636:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(664);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(721);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(641);
      END_STATE();
    case 637:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(647);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 638:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(648);
      END_STATE();
    case 639:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(664);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      END_STATE();
    case 640:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(658);
      END_STATE();
    case 641:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      END_STATE();
    case 642:
      if (eof) ADVANCE(644);
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(664);
      if (lookahead == '#') ADVANCE(645);
      if (lookahead == '&') ADVANCE(665);
      if (lookahead == '(') ADVANCE(688);
      if (lookahead == '-') ADVANCE(695);
      if (lookahead == '/') ADVANCE(649);
      if (lookahead == ':') ADVANCE(646);
      if (lookahead == '<') ADVANCE(690);
      if (lookahead == '=') ADVANCE(668);
      if (lookahead == '?') ADVANCE(666);
      if (lookahead == '@') ADVANCE(654);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(634);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(721);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 643:
      if (eof) ADVANCE(644);
      if (lookahead == '#') ADVANCE(645);
      if (lookahead == '-') ADVANCE(695);
      if (lookahead == '<') ADVANCE(690);
      if (lookahead == '@') ADVANCE(654);
      if (lookahead == 'H') ADVANCE(699);
      if (lookahead == '[') ADVANCE(11);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(664);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(721);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(647);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(648);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_coap_PLUStcp);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_coap_PLUSws);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_coaps_PLUStcp);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_coaps_PLUSws);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_status_text);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(714);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(661);
      if (lookahead != 0) ADVANCE(733);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(664);
      if (lookahead == '\r') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(713);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(663);
      if (lookahead == '\r') ADVANCE(663);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(664);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(714);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(714);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\n') ADVANCE(670);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(670);
      if (lookahead == '+') ADVANCE(546);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == 's') ADVANCE(672);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(670);
      if (lookahead == '+') ADVANCE(577);
      if (lookahead == '/') ADVANCE(677);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(670);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == 'a') ADVANCE(675);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(670);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == 'o') ADVANCE(673);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(670);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == 'p') ADVANCE(671);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(670);
      if (lookahead == '/') ADVANCE(677);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(670);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_json_body_token3);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_json_body_token4);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '?') ADVANCE(621);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(621);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '%') ADVANCE(635);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(546);
      if (lookahead == 's') ADVANCE(693);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(691);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(710);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(655);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(696);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(697);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(698);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(704);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(706);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(718);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(720);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(708);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(692);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(709);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(703);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(702);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(713);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_param);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(714);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(712);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(670);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(687);
      if (lookahead != 0) ADVANCE(733);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(686);
      if (lookahead != 0) ADVANCE(733);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(683);
      if (lookahead == '>') ADVANCE(726);
      if (lookahead != 0) ADVANCE(731);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(681);
      if (lookahead != 0) ADVANCE(733);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '%') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(731);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(733);
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
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'k') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'S') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(74);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(86);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_im);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_ni);
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 55:
      if (lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_ws);
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(105);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 69:
      if (lookahead == 'D') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == 'C') ADVANCE(108);
      END_STATE();
    case 73:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 74:
      if (lookahead == 'C') ADVANCE(109);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(112);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_cap);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_cid);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_dns);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_geo);
      END_STATE();
    case 86:
      if (lookahead == '3') ADVANCE(116);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ipp);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_mid);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_nih);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_sms);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_urn);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_wss);
      END_STATE();
    case 105:
      if (lookahead == 'E') ADVANCE(128);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(129);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == 'H') ADVANCE(68);
      END_STATE();
    case 109:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_acct);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_arcp);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_h323);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 121:
      if (lookahead == '1') ADVANCE(136);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_pres);
      END_STATE();
    case 123:
      if (lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 128:
      if (lookahead == 'C') ADVANCE(142);
      END_STATE();
    case 129:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(143);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_about);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_https);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_payto);
      END_STATE();
    case 136:
      if (lookahead == '1') ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 142:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 143:
      if (lookahead == 'S') ADVANCE(68);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_mailto);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_pkcs11);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_reload);
      END_STATE();
    case 148:
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_telnet);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'k') ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_secret_DASHtoken);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 642},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 643},
  [10] = {.lex_state = 643},
  [11] = {.lex_state = 642},
  [12] = {.lex_state = 642},
  [13] = {.lex_state = 642},
  [14] = {.lex_state = 642},
  [15] = {.lex_state = 642},
  [16] = {.lex_state = 642},
  [17] = {.lex_state = 642},
  [18] = {.lex_state = 642},
  [19] = {.lex_state = 642},
  [20] = {.lex_state = 642},
  [21] = {.lex_state = 642},
  [22] = {.lex_state = 642},
  [23] = {.lex_state = 642},
  [24] = {.lex_state = 642},
  [25] = {.lex_state = 642},
  [26] = {.lex_state = 642},
  [27] = {.lex_state = 642},
  [28] = {.lex_state = 642},
  [29] = {.lex_state = 642},
  [30] = {.lex_state = 642},
  [31] = {.lex_state = 642},
  [32] = {.lex_state = 642},
  [33] = {.lex_state = 642},
  [34] = {.lex_state = 642},
  [35] = {.lex_state = 642},
  [36] = {.lex_state = 642},
  [37] = {.lex_state = 642},
  [38] = {.lex_state = 642},
  [39] = {.lex_state = 642},
  [40] = {.lex_state = 642},
  [41] = {.lex_state = 642},
  [42] = {.lex_state = 642},
  [43] = {.lex_state = 642},
  [44] = {.lex_state = 642},
  [45] = {.lex_state = 642},
  [46] = {.lex_state = 642},
  [47] = {.lex_state = 642},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 642},
  [50] = {.lex_state = 642},
  [51] = {.lex_state = 642},
  [52] = {.lex_state = 642},
  [53] = {.lex_state = 642},
  [54] = {.lex_state = 642},
  [55] = {.lex_state = 642},
  [56] = {.lex_state = 642},
  [57] = {.lex_state = 642},
  [58] = {.lex_state = 642},
  [59] = {.lex_state = 642},
  [60] = {.lex_state = 71},
  [61] = {.lex_state = 642},
  [62] = {.lex_state = 642},
  [63] = {.lex_state = 642},
  [64] = {.lex_state = 642},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 71},
  [67] = {.lex_state = 71},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 71},
  [70] = {.lex_state = 71},
  [71] = {.lex_state = 71},
  [72] = {.lex_state = 642},
  [73] = {.lex_state = 642},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 642},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 72},
  [79] = {.lex_state = 642},
  [80] = {.lex_state = 642},
  [81] = {.lex_state = 642},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 72},
  [85] = {.lex_state = 642},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 642},
  [88] = {.lex_state = 642},
  [89] = {.lex_state = 642},
  [90] = {.lex_state = 642},
  [91] = {.lex_state = 642},
  [92] = {.lex_state = 642},
  [93] = {.lex_state = 642},
  [94] = {.lex_state = 642},
  [95] = {.lex_state = 642},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 642},
  [98] = {.lex_state = 642},
  [99] = {.lex_state = 642},
  [100] = {.lex_state = 642},
  [101] = {.lex_state = 642},
  [102] = {.lex_state = 642},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 642},
  [105] = {.lex_state = 643},
  [106] = {.lex_state = 642},
  [107] = {.lex_state = 642},
  [108] = {.lex_state = 642},
  [109] = {.lex_state = 642},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 642},
  [112] = {.lex_state = 642},
  [113] = {.lex_state = 642},
  [114] = {.lex_state = 642},
  [115] = {.lex_state = 642},
  [116] = {.lex_state = 642},
  [117] = {.lex_state = 636},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 642},
  [123] = {.lex_state = 642},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 642},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 642},
  [130] = {.lex_state = 71},
  [131] = {.lex_state = 642},
  [132] = {.lex_state = 642},
  [133] = {.lex_state = 636},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 642},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 642},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 637},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 636},
  [149] = {.lex_state = 642},
  [150] = {.lex_state = 642},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 642},
  [154] = {.lex_state = 642},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 642},
  [157] = {.lex_state = 637},
  [158] = {.lex_state = 642},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 642},
  [161] = {.lex_state = 642},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 642},
  [164] = {.lex_state = 642},
  [165] = {.lex_state = 639},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 642},
  [169] = {.lex_state = 642},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 638},
  [174] = {.lex_state = 642},
  [175] = {.lex_state = 642},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 642},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 639},
  [182] = {.lex_state = 642},
  [183] = {.lex_state = 638},
  [184] = {.lex_state = 642},
  [185] = {.lex_state = 642},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 642},
  [188] = {.lex_state = 642},
  [189] = {.lex_state = 642},
  [190] = {.lex_state = 642},
  [191] = {.lex_state = 642},
  [192] = {.lex_state = 642},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
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
    [sym_status_code] = ACTIONS(1),
    [aux_sym_request_token1] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
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
    [aux_sym_json_body_token3] = ACTIONS(1),
    [aux_sym_json_body_token4] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
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
    [sym_document] = STATE(178),
    [sym_request] = STATE(59),
    [sym_variable] = STATE(59),
    [sym_script_variable] = STATE(59),
    [sym_variable_declaration] = STATE(59),
    [aux_sym_document_repeat1] = STATE(59),
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
    STATE(48), 1,
      sym_variable,
    STATE(61), 1,
      sym_host,
    STATE(91), 1,
      aux_sym_path_repeat1,
    STATE(95), 1,
      sym_path,
    STATE(149), 1,
      sym_target_url,
    STATE(152), 1,
      sym_authority,
    STATE(174), 1,
      sym_pair,
    STATE(177), 1,
      sym_scheme,
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
    STATE(42), 1,
      sym_variable,
    STATE(53), 1,
      sym_host_url,
    STATE(54), 1,
      sym_host,
    STATE(143), 1,
      sym_authority,
    STATE(167), 1,
      sym_scheme,
    STATE(174), 1,
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
    STATE(7), 1,
      aux_sym__whitespace,
    STATE(49), 1,
      sym_variable,
    STATE(50), 1,
      sym_host_url,
    STATE(54), 1,
      sym_host,
    STATE(143), 1,
      sym_authority,
    STATE(167), 1,
      sym_scheme,
    STATE(174), 1,
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
    ACTIONS(47), 10,
      anon_sym_SLASH,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LPAREN,
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
  [313] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(54), 11,
      anon_sym_SLASH,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LPAREN,
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
  [366] = 5,
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
  [422] = 3,
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
  [473] = 13,
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
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    STATE(158), 1,
      sym_http_version,
    STATE(188), 1,
      sym_response,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(15), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(59), 5,
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
  [524] = 13,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      sym_method,
    STATE(158), 1,
      sym_http_version,
    STATE(187), 1,
      sym_response,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(12), 2,
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
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(81), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(13), 2,
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
  [617] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(29), 2,
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
  [659] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(29), 2,
      sym_header,
      aux_sym_request_repeat1,
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
  [701] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_method,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(15), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(59), 5,
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
  [743] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(93), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(29), 2,
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
  [785] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(100), 1,
      sym_method,
    ACTIONS(102), 1,
      aux_sym_xml_body_token1,
    ACTIONS(108), 1,
      anon_sym_query,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(105), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
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
  [823] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(81), 1,
      sym_method,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
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
  [861] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(93), 1,
      sym_method,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
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
  [899] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(118), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
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
  [937] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(63), 1,
      sym_method,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(59), 5,
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
  [975] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym_method,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
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
  [1013] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      sym_method,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
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
  [1051] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(126), 1,
      aux_sym_xml_body_token3,
    STATE(25), 1,
      aux_sym_form_data_repeat2,
    STATE(128), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(122), 4,
      sym_method,
      anon_sym_query,
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
  [1083] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(126), 1,
      aux_sym_xml_body_token3,
    STATE(23), 1,
      aux_sym_form_data_repeat2,
    STATE(128), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(130), 4,
      sym_method,
      anon_sym_query,
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
  [1115] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(139), 1,
      aux_sym_xml_body_token3,
    STATE(25), 1,
      aux_sym_form_data_repeat2,
    STATE(128), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(134), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(132), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1147] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(146), 1,
      anon_sym_COLON,
    STATE(45), 1,
      sym_port,
    ACTIONS(144), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1173] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(150), 5,
      sym_method,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(148), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1195] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(154), 5,
      sym_method,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1217] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(29), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(161), 3,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
    ACTIONS(156), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1243] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(163), 1,
      anon_sym_COLON,
    STATE(45), 1,
      sym_port,
    ACTIONS(144), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1269] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(169), 1,
      aux_sym_xml_body_token3,
    ACTIONS(167), 4,
      sym_method,
      anon_sym_query,
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
  [1292] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(175), 1,
      aux_sym_xml_body_token3,
    ACTIONS(173), 4,
      sym_method,
      anon_sym_query,
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
  [1315] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(181), 1,
      aux_sym_xml_body_token3,
    ACTIONS(179), 4,
      sym_method,
      anon_sym_query,
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
  [1338] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(187), 1,
      aux_sym_xml_body_token3,
    ACTIONS(185), 4,
      sym_method,
      anon_sym_query,
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
  [1361] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(193), 1,
      aux_sym_xml_body_token3,
    ACTIONS(191), 4,
      sym_method,
      anon_sym_query,
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
  [1384] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(197), 4,
      sym_method,
      anon_sym_query,
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
  [1404] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(201), 4,
      sym_method,
      anon_sym_query,
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
  [1424] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(205), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(203), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1444] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(209), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(207), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1464] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(213), 4,
      sym_method,
      anon_sym_query,
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
  [1484] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(217), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(215), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1504] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(221), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(219), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1524] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(225), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(223), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1544] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(229), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(227), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1564] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(233), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(231), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1584] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(237), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(235), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1604] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(241), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(239), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1624] = 10,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_AT,
    STATE(64), 1,
      sym_authority,
    STATE(91), 1,
      aux_sym_path_repeat1,
    STATE(93), 1,
      sym_path,
    STATE(164), 1,
      sym_pair,
    ACTIONS(247), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(249), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    STATE(94), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1658] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(253), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(251), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1678] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(257), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(255), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1698] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(261), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(259), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1718] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(265), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(263), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1738] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(221), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(219), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1758] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(269), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(267), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1778] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(273), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(271), 8,
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
    ACTIONS(277), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(275), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1818] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(281), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(279), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1838] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_method,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(294), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(297), 1,
      aux_sym_script_variable_token1,
    STATE(58), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1867] = 8,
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
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 1,
      sym_comment,
    STATE(58), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1896] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(304), 1,
      aux_sym__whitespace_token1,
    STATE(60), 1,
      aux_sym__whitespace,
    ACTIONS(47), 6,
      anon_sym_HTTP_SLASH,
      sym_status_text,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
  [1914] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(91), 1,
      aux_sym_path_repeat1,
    STATE(93), 1,
      sym_path,
    ACTIONS(247), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(249), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    STATE(94), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1936] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(91), 1,
      aux_sym_path_repeat1,
    STATE(97), 1,
      sym_path,
    ACTIONS(249), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(307), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(98), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1958] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      sym_path,
    STATE(91), 1,
      aux_sym_path_repeat1,
    ACTIONS(249), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(309), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(87), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1980] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(89), 1,
      sym_path,
    STATE(91), 1,
      aux_sym_path_repeat1,
    ACTIONS(249), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(311), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(85), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2002] = 6,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(315), 1,
      anon_sym_AMP,
    ACTIONS(317), 1,
      anon_sym_EQ,
    ACTIONS(319), 1,
      sym_param,
    STATE(135), 1,
      sym_variable,
    ACTIONS(313), 3,
      aux_sym_request_token1,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2023] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(325), 1,
      aux_sym__whitespace_token1,
    STATE(70), 1,
      aux_sym__whitespace,
    STATE(79), 1,
      sym_boolean,
    ACTIONS(321), 2,
      sym_number,
      sym_string,
    ACTIONS(323), 2,
      anon_sym_true,
      anon_sym_false,
  [2044] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(325), 1,
      aux_sym__whitespace_token1,
    STATE(60), 1,
      aux_sym__whitespace,
    STATE(79), 1,
      sym_boolean,
    ACTIONS(321), 2,
      sym_number,
      sym_string,
    ACTIONS(323), 2,
      anon_sym_true,
      anon_sym_false,
  [2065] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(327), 1,
      sym_identifier,
    STATE(109), 1,
      sym_variable,
    ACTIONS(329), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2082] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(54), 7,
      anon_sym_HTTP_SLASH,
      sym_status_text,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      aux_sym__whitespace_token1,
  [2095] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(325), 1,
      aux_sym__whitespace_token1,
    STATE(60), 1,
      aux_sym__whitespace,
    STATE(81), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(331), 2,
      sym_number,
      sym_string,
  [2116] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(325), 1,
      aux_sym__whitespace_token1,
    STATE(67), 1,
      aux_sym__whitespace,
    STATE(72), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(333), 2,
      sym_number,
      sym_string,
  [2137] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(335), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2149] = 3,
    ACTIONS(337), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_port,
    ACTIONS(142), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2163] = 1,
    ACTIONS(203), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2173] = 3,
    ACTIONS(339), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_port,
    ACTIONS(142), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2187] = 1,
    ACTIONS(279), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2197] = 1,
    ACTIONS(275), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2207] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(343), 1,
      sym_string,
    STATE(24), 1,
      sym_boolean,
    ACTIONS(341), 2,
      sym_identifier,
      sym_number,
    ACTIONS(345), 2,
      anon_sym_true,
      anon_sym_false,
  [2225] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(347), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2237] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(349), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2249] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(351), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2261] = 5,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(355), 1,
      anon_sym_AMP,
    ACTIONS(357), 1,
      sym_param,
    STATE(123), 1,
      sym_variable,
    ACTIONS(353), 3,
      aux_sym_request_token1,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2279] = 1,
    ACTIONS(235), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2289] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(361), 1,
      sym_string,
    STATE(27), 1,
      sym_boolean,
    ACTIONS(345), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(359), 2,
      sym_identifier,
      sym_number,
  [2307] = 3,
    ACTIONS(249), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(309), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(92), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2320] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(363), 1,
      sym_identifier,
    STATE(41), 1,
      sym_host,
    STATE(146), 1,
      sym_authority,
    STATE(174), 1,
      sym_pair,
  [2339] = 3,
    ACTIONS(249), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(307), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(92), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2352] = 3,
    ACTIONS(249), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(307), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(98), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2365] = 3,
    ACTIONS(249), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(309), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(87), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2378] = 3,
    ACTIONS(249), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(365), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(92), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2391] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      aux_sym_path_repeat1,
    ACTIONS(367), 4,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2404] = 3,
    ACTIONS(369), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(371), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    STATE(92), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2417] = 3,
    ACTIONS(249), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(311), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(85), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2430] = 3,
    ACTIONS(249), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(311), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(92), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2443] = 3,
    ACTIONS(247), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(249), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    STATE(94), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2456] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(63), 1,
      sym_host,
    STATE(147), 1,
      sym_authority,
    STATE(174), 1,
      sym_pair,
  [2475] = 3,
    ACTIONS(249), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(376), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(90), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2488] = 3,
    ACTIONS(249), 2,
      anon_sym_AMP,
      anon_sym_QMARK,
    ACTIONS(376), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(92), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2501] = 3,
    ACTIONS(378), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      aux_sym_path_repeat1,
    ACTIONS(381), 4,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2514] = 1,
    ACTIONS(231), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2522] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(36), 1,
      sym_variable,
  [2538] = 1,
    ACTIONS(383), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2546] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(387), 1,
      sym__line,
    STATE(103), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(385), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2560] = 1,
    ACTIONS(390), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2568] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(325), 1,
      aux_sym__whitespace_token1,
    ACTIONS(392), 1,
      anon_sym_HTTP_SLASH,
    STATE(60), 1,
      aux_sym__whitespace,
    STATE(190), 1,
      sym_http_version,
  [2584] = 1,
    ACTIONS(394), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2592] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(37), 1,
      sym_variable,
  [2608] = 1,
    ACTIONS(223), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2616] = 2,
    ACTIONS(396), 1,
      anon_sym_SLASH,
    ACTIONS(381), 4,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2626] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(401), 1,
      sym__line,
    STATE(103), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(399), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2640] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(403), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(122), 1,
      aux_sym__whitespace,
  [2653] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(405), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(127), 1,
      aux_sym__whitespace,
  [2666] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(407), 1,
      anon_sym_EQ,
    STATE(129), 1,
      aux_sym__whitespace,
  [2679] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(409), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(115), 1,
      aux_sym__whitespace,
  [2692] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(411), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2705] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      aux_sym__whitespace,
  [2718] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(47), 1,
      sym_status_code,
    ACTIONS(415), 1,
      aux_sym__whitespace_token1,
    STATE(117), 1,
      aux_sym__whitespace,
  [2731] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(139), 1,
      aux_sym__whitespace,
  [2744] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(420), 1,
      aux_sym_xml_body_token2,
    ACTIONS(422), 1,
      sym__line,
    STATE(124), 1,
      aux_sym_script_variable_repeat1,
  [2757] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(424), 1,
      aux_sym_json_body_token3,
    ACTIONS(426), 1,
      sym__line,
    STATE(126), 1,
      aux_sym_script_variable_repeat1,
  [2770] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(428), 1,
      aux_sym__whitespace_token1,
    ACTIONS(430), 1,
      sym__line,
    STATE(125), 1,
      aux_sym__whitespace,
  [2783] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(432), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2796] = 1,
    ACTIONS(434), 4,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2803] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(385), 1,
      aux_sym_xml_body_token2,
    ACTIONS(436), 1,
      sym__line,
    STATE(124), 1,
      aux_sym_script_variable_repeat1,
  [2816] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(45), 1,
      sym__line,
    ACTIONS(439), 1,
      aux_sym__whitespace_token1,
    STATE(125), 1,
      aux_sym__whitespace,
  [2829] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(385), 1,
      aux_sym_json_body_token3,
    ACTIONS(442), 1,
      sym__line,
    STATE(126), 1,
      aux_sym_script_variable_repeat1,
  [2842] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(445), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2855] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(447), 1,
      sym_identifier,
    ACTIONS(449), 1,
      aux_sym_xml_body_token3,
    STATE(137), 1,
      aux_sym_form_data_repeat1,
  [2868] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(451), 1,
      anon_sym_EQ,
    STATE(5), 1,
      aux_sym__whitespace,
  [2881] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(325), 1,
      aux_sym__whitespace_token1,
    ACTIONS(453), 1,
      sym_status_text,
    STATE(60), 1,
      aux_sym__whitespace,
  [2894] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(455), 1,
      anon_sym_AT,
    ACTIONS(457), 1,
      aux_sym__whitespace_token1,
    STATE(136), 1,
      aux_sym__whitespace,
  [2907] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(459), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2920] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(461), 1,
      sym_status_code,
    ACTIONS(463), 1,
      aux_sym__whitespace_token1,
    STATE(117), 1,
      aux_sym__whitespace,
  [2933] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(465), 1,
      sym_identifier,
    STATE(141), 1,
      aux_sym__whitespace,
  [2946] = 1,
    ACTIONS(467), 4,
      aux_sym_request_token1,
      anon_sym_AMP,
      anon_sym_QMARK,
      aux_sym__whitespace_token1,
  [2953] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(428), 1,
      aux_sym__whitespace_token1,
    ACTIONS(469), 1,
      sym__line,
    STATE(125), 1,
      aux_sym__whitespace,
  [2966] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(471), 1,
      sym_identifier,
    ACTIONS(473), 1,
      aux_sym_xml_body_token3,
    STATE(137), 1,
      aux_sym_form_data_repeat1,
  [2979] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(476), 1,
      aux_sym_script_variable_token2,
    ACTIONS(478), 1,
      sym__line,
    STATE(142), 1,
      aux_sym_script_variable_repeat1,
  [2992] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(480), 1,
      sym_identifier,
    STATE(5), 1,
      aux_sym__whitespace,
  [3005] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(482), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(132), 1,
      aux_sym__whitespace,
  [3018] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(484), 1,
      sym_identifier,
    STATE(5), 1,
      aux_sym__whitespace,
  [3031] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(385), 1,
      aux_sym_script_variable_token2,
    ACTIONS(486), 1,
      sym__line,
    STATE(142), 1,
      aux_sym_script_variable_repeat1,
  [3044] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(489), 1,
      sym_identifier,
    STATE(51), 1,
      sym_host,
  [3054] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(491), 1,
      sym__line,
    STATE(138), 1,
      aux_sym_script_variable_repeat1,
  [3064] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(493), 1,
      sym_identifier,
    ACTIONS(495), 1,
      aux_sym_port_token1,
  [3074] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(489), 1,
      sym_identifier,
    STATE(55), 1,
      sym_host,
  [3084] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(497), 1,
      sym_identifier,
    STATE(62), 1,
      sym_host,
  [3094] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(54), 2,
      sym_status_code,
      aux_sym__whitespace_token1,
  [3102] = 3,
    ACTIONS(325), 1,
      aux_sym__whitespace_token1,
    ACTIONS(499), 1,
      aux_sym_request_token1,
    STATE(105), 1,
      aux_sym__whitespace,
  [3112] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(325), 1,
      aux_sym__whitespace_token1,
    STATE(130), 1,
      aux_sym__whitespace,
  [3122] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(501), 1,
      sym__line,
    STATE(110), 1,
      aux_sym_script_variable_repeat1,
  [3132] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(497), 1,
      sym_identifier,
    STATE(64), 1,
      sym_host,
  [3142] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(116), 1,
      aux_sym__whitespace,
  [3152] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_EQ,
  [3162] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(52), 2,
      aux_sym__whitespace_token1,
      sym__line,
  [3170] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(107), 1,
      aux_sym__whitespace,
  [3180] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(493), 1,
      sym_identifier,
    ACTIONS(507), 1,
      aux_sym_port_token1,
  [3190] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(463), 1,
      aux_sym__whitespace_token1,
    STATE(133), 1,
      aux_sym__whitespace,
  [3200] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(509), 1,
      sym__line,
    STATE(119), 1,
      aux_sym_script_variable_repeat1,
  [3210] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(101), 1,
      aux_sym__whitespace,
  [3220] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(457), 1,
      aux_sym__whitespace_token1,
    STATE(121), 1,
      aux_sym__whitespace,
  [3230] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(511), 1,
      sym__line,
    STATE(120), 1,
      aux_sym_script_variable_repeat1,
  [3240] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
  [3250] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(513), 1,
      anon_sym_AT,
  [3257] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(515), 1,
      aux_sym_http_version_token1,
  [3264] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(517), 1,
      sym_identifier,
  [3271] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(519), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3278] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(503), 1,
      anon_sym_COLON,
  [3285] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(521), 1,
      aux_sym__whitespace_token1,
  [3292] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(523), 1,
      sym_identifier,
  [3299] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(525), 1,
      sym_query_key,
  [3306] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(394), 1,
      sym_identifier,
  [3313] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(527), 1,
      aux_sym_port_token1,
  [3320] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(529), 1,
      anon_sym_AT,
  [3327] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(531), 1,
      anon_sym_COLON,
  [3334] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(533), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3341] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(535), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3348] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(537), 1,
      ts_builtin_sym_end,
  [3355] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(539), 1,
      sym_identifier,
  [3362] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(390), 1,
      sym_identifier,
  [3369] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(541), 1,
      aux_sym_http_version_token1,
  [3376] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(543), 1,
      anon_sym_EQ,
  [3383] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(545), 1,
      aux_sym_port_token1,
  [3390] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(505), 1,
      anon_sym_EQ,
  [3397] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(547), 1,
      anon_sym_AT,
  [3404] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(447), 1,
      sym_identifier,
  [3411] = 1,
    ACTIONS(549), 1,
      aux_sym_request_token1,
  [3415] = 1,
    ACTIONS(551), 1,
      aux_sym_request_token1,
  [3419] = 1,
    ACTIONS(553), 1,
      aux_sym_request_token1,
  [3423] = 1,
    ACTIONS(555), 1,
      aux_sym_request_token1,
  [3427] = 1,
    ACTIONS(521), 1,
      aux_sym_request_token1,
  [3431] = 1,
    ACTIONS(557), 1,
      aux_sym_request_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 171,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 313,
  [SMALL_STATE(7)] = 366,
  [SMALL_STATE(8)] = 422,
  [SMALL_STATE(9)] = 473,
  [SMALL_STATE(10)] = 524,
  [SMALL_STATE(11)] = 575,
  [SMALL_STATE(12)] = 617,
  [SMALL_STATE(13)] = 659,
  [SMALL_STATE(14)] = 701,
  [SMALL_STATE(15)] = 743,
  [SMALL_STATE(16)] = 785,
  [SMALL_STATE(17)] = 823,
  [SMALL_STATE(18)] = 861,
  [SMALL_STATE(19)] = 899,
  [SMALL_STATE(20)] = 937,
  [SMALL_STATE(21)] = 975,
  [SMALL_STATE(22)] = 1013,
  [SMALL_STATE(23)] = 1051,
  [SMALL_STATE(24)] = 1083,
  [SMALL_STATE(25)] = 1115,
  [SMALL_STATE(26)] = 1147,
  [SMALL_STATE(27)] = 1173,
  [SMALL_STATE(28)] = 1195,
  [SMALL_STATE(29)] = 1217,
  [SMALL_STATE(30)] = 1243,
  [SMALL_STATE(31)] = 1269,
  [SMALL_STATE(32)] = 1292,
  [SMALL_STATE(33)] = 1315,
  [SMALL_STATE(34)] = 1338,
  [SMALL_STATE(35)] = 1361,
  [SMALL_STATE(36)] = 1384,
  [SMALL_STATE(37)] = 1404,
  [SMALL_STATE(38)] = 1424,
  [SMALL_STATE(39)] = 1444,
  [SMALL_STATE(40)] = 1464,
  [SMALL_STATE(41)] = 1484,
  [SMALL_STATE(42)] = 1504,
  [SMALL_STATE(43)] = 1524,
  [SMALL_STATE(44)] = 1544,
  [SMALL_STATE(45)] = 1564,
  [SMALL_STATE(46)] = 1584,
  [SMALL_STATE(47)] = 1604,
  [SMALL_STATE(48)] = 1624,
  [SMALL_STATE(49)] = 1658,
  [SMALL_STATE(50)] = 1678,
  [SMALL_STATE(51)] = 1698,
  [SMALL_STATE(52)] = 1718,
  [SMALL_STATE(53)] = 1738,
  [SMALL_STATE(54)] = 1758,
  [SMALL_STATE(55)] = 1778,
  [SMALL_STATE(56)] = 1798,
  [SMALL_STATE(57)] = 1818,
  [SMALL_STATE(58)] = 1838,
  [SMALL_STATE(59)] = 1867,
  [SMALL_STATE(60)] = 1896,
  [SMALL_STATE(61)] = 1914,
  [SMALL_STATE(62)] = 1936,
  [SMALL_STATE(63)] = 1958,
  [SMALL_STATE(64)] = 1980,
  [SMALL_STATE(65)] = 2002,
  [SMALL_STATE(66)] = 2023,
  [SMALL_STATE(67)] = 2044,
  [SMALL_STATE(68)] = 2065,
  [SMALL_STATE(69)] = 2082,
  [SMALL_STATE(70)] = 2095,
  [SMALL_STATE(71)] = 2116,
  [SMALL_STATE(72)] = 2137,
  [SMALL_STATE(73)] = 2149,
  [SMALL_STATE(74)] = 2163,
  [SMALL_STATE(75)] = 2173,
  [SMALL_STATE(76)] = 2187,
  [SMALL_STATE(77)] = 2197,
  [SMALL_STATE(78)] = 2207,
  [SMALL_STATE(79)] = 2225,
  [SMALL_STATE(80)] = 2237,
  [SMALL_STATE(81)] = 2249,
  [SMALL_STATE(82)] = 2261,
  [SMALL_STATE(83)] = 2279,
  [SMALL_STATE(84)] = 2289,
  [SMALL_STATE(85)] = 2307,
  [SMALL_STATE(86)] = 2320,
  [SMALL_STATE(87)] = 2339,
  [SMALL_STATE(88)] = 2352,
  [SMALL_STATE(89)] = 2365,
  [SMALL_STATE(90)] = 2378,
  [SMALL_STATE(91)] = 2391,
  [SMALL_STATE(92)] = 2404,
  [SMALL_STATE(93)] = 2417,
  [SMALL_STATE(94)] = 2430,
  [SMALL_STATE(95)] = 2443,
  [SMALL_STATE(96)] = 2456,
  [SMALL_STATE(97)] = 2475,
  [SMALL_STATE(98)] = 2488,
  [SMALL_STATE(99)] = 2501,
  [SMALL_STATE(100)] = 2514,
  [SMALL_STATE(101)] = 2522,
  [SMALL_STATE(102)] = 2538,
  [SMALL_STATE(103)] = 2546,
  [SMALL_STATE(104)] = 2560,
  [SMALL_STATE(105)] = 2568,
  [SMALL_STATE(106)] = 2584,
  [SMALL_STATE(107)] = 2592,
  [SMALL_STATE(108)] = 2608,
  [SMALL_STATE(109)] = 2616,
  [SMALL_STATE(110)] = 2626,
  [SMALL_STATE(111)] = 2640,
  [SMALL_STATE(112)] = 2653,
  [SMALL_STATE(113)] = 2666,
  [SMALL_STATE(114)] = 2679,
  [SMALL_STATE(115)] = 2692,
  [SMALL_STATE(116)] = 2705,
  [SMALL_STATE(117)] = 2718,
  [SMALL_STATE(118)] = 2731,
  [SMALL_STATE(119)] = 2744,
  [SMALL_STATE(120)] = 2757,
  [SMALL_STATE(121)] = 2770,
  [SMALL_STATE(122)] = 2783,
  [SMALL_STATE(123)] = 2796,
  [SMALL_STATE(124)] = 2803,
  [SMALL_STATE(125)] = 2816,
  [SMALL_STATE(126)] = 2829,
  [SMALL_STATE(127)] = 2842,
  [SMALL_STATE(128)] = 2855,
  [SMALL_STATE(129)] = 2868,
  [SMALL_STATE(130)] = 2881,
  [SMALL_STATE(131)] = 2894,
  [SMALL_STATE(132)] = 2907,
  [SMALL_STATE(133)] = 2920,
  [SMALL_STATE(134)] = 2933,
  [SMALL_STATE(135)] = 2946,
  [SMALL_STATE(136)] = 2953,
  [SMALL_STATE(137)] = 2966,
  [SMALL_STATE(138)] = 2979,
  [SMALL_STATE(139)] = 2992,
  [SMALL_STATE(140)] = 3005,
  [SMALL_STATE(141)] = 3018,
  [SMALL_STATE(142)] = 3031,
  [SMALL_STATE(143)] = 3044,
  [SMALL_STATE(144)] = 3054,
  [SMALL_STATE(145)] = 3064,
  [SMALL_STATE(146)] = 3074,
  [SMALL_STATE(147)] = 3084,
  [SMALL_STATE(148)] = 3094,
  [SMALL_STATE(149)] = 3102,
  [SMALL_STATE(150)] = 3112,
  [SMALL_STATE(151)] = 3122,
  [SMALL_STATE(152)] = 3132,
  [SMALL_STATE(153)] = 3142,
  [SMALL_STATE(154)] = 3152,
  [SMALL_STATE(155)] = 3162,
  [SMALL_STATE(156)] = 3170,
  [SMALL_STATE(157)] = 3180,
  [SMALL_STATE(158)] = 3190,
  [SMALL_STATE(159)] = 3200,
  [SMALL_STATE(160)] = 3210,
  [SMALL_STATE(161)] = 3220,
  [SMALL_STATE(162)] = 3230,
  [SMALL_STATE(163)] = 3240,
  [SMALL_STATE(164)] = 3250,
  [SMALL_STATE(165)] = 3257,
  [SMALL_STATE(166)] = 3264,
  [SMALL_STATE(167)] = 3271,
  [SMALL_STATE(168)] = 3278,
  [SMALL_STATE(169)] = 3285,
  [SMALL_STATE(170)] = 3292,
  [SMALL_STATE(171)] = 3299,
  [SMALL_STATE(172)] = 3306,
  [SMALL_STATE(173)] = 3313,
  [SMALL_STATE(174)] = 3320,
  [SMALL_STATE(175)] = 3327,
  [SMALL_STATE(176)] = 3334,
  [SMALL_STATE(177)] = 3341,
  [SMALL_STATE(178)] = 3348,
  [SMALL_STATE(179)] = 3355,
  [SMALL_STATE(180)] = 3362,
  [SMALL_STATE(181)] = 3369,
  [SMALL_STATE(182)] = 3376,
  [SMALL_STATE(183)] = 3383,
  [SMALL_STATE(184)] = 3390,
  [SMALL_STATE(185)] = 3397,
  [SMALL_STATE(186)] = 3404,
  [SMALL_STATE(187)] = 3411,
  [SMALL_STATE(188)] = 3415,
  [SMALL_STATE(189)] = 3419,
  [SMALL_STATE(190)] = 3423,
  [SMALL_STATE(191)] = 3427,
  [SMALL_STATE(192)] = 3431,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 1),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(184),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(192),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(151),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(153),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(131),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 4, .production_id = 15),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 4, .production_id = 15),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 3, .production_id = 12),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 3, .production_id = 12),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 18),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 18),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 18), SHIFT_REPEAT(186),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 18), SHIFT_REPEAT(128),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 20),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 20),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(168),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 10),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 10),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 16),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 16),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, .production_id = 17),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, .production_id = 17),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, .production_id = 19),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, .production_id = 19),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 6, .production_id = 16),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 6, .production_id = 16),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 11),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 11),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 14),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 14),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 13),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 13),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, .production_id = 10),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 4, .production_id = 10),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(163),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(179),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(118),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(144),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(69),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, .production_id = 5),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, .production_id = 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 6),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 8),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, .production_id = 5),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 5),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(171),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(68),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(103),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(102),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(148),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 9),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(124),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(155),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(126),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 7),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat1, 2), SHIFT_REPEAT(137),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(142),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [537] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
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
