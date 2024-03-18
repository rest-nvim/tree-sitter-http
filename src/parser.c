#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 189
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 2
#define TOKEN_COUNT 77
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 20

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_comment = 2,
  aux_sym_method_token1 = 3,
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
  anon_sym_QMARK = 48,
  aux_sym_request_token1 = 49,
  anon_sym_AMP = 50,
  anon_sym_EQ = 51,
  aux_sym_header_token1 = 52,
  aux_sym_header_token2 = 53,
  anon_sym_LBRACE_LBRACE = 54,
  anon_sym_RBRACE_RBRACE = 55,
  aux_sym_script_variable_token1 = 56,
  aux_sym_script_variable_token2 = 57,
  aux_sym_xml_body_token1 = 58,
  aux_sym_xml_body_token2 = 59,
  aux_sym_xml_body_token3 = 60,
  aux_sym_json_body_token1 = 61,
  aux_sym_json_body_token2 = 62,
  aux_sym_json_body_token3 = 63,
  aux_sym_json_body_token4 = 64,
  anon_sym_query = 65,
  anon_sym_LPAREN = 66,
  anon_sym_LT = 67,
  sym_const_spec = 68,
  sym_param = 69,
  sym_number = 70,
  sym_string = 71,
  anon_sym_true = 72,
  anon_sym_false = 73,
  aux_sym__whitespace_token1 = 74,
  aux_sym__newline_token1 = 75,
  sym__line = 76,
  sym_document = 77,
  sym_method = 78,
  sym_host = 79,
  sym_port = 80,
  sym_path = 81,
  sym_scheme = 82,
  sym_authority = 83,
  sym_http_version = 84,
  sym_target_url = 85,
  sym_request = 86,
  sym_pair = 87,
  sym_query_param = 88,
  sym_host_url = 89,
  sym_header = 90,
  sym_variable = 91,
  sym_script_variable = 92,
  sym_variable_declaration = 93,
  sym_xml_body = 94,
  sym_json_body = 95,
  sym_graphql_body = 96,
  sym_external_body = 97,
  sym_form_data = 98,
  sym_boolean = 99,
  aux_sym__whitespace = 100,
  aux_sym_document_repeat1 = 101,
  aux_sym_path_repeat1 = 102,
  aux_sym_target_url_repeat1 = 103,
  aux_sym_request_repeat1 = 104,
  aux_sym_request_repeat2 = 105,
  aux_sym_script_variable_repeat1 = 106,
  aux_sym_form_data_repeat1 = 107,
  aux_sym_form_data_repeat2 = 108,
  alias_sym_key = 109,
  alias_sym_name = 110,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [aux_sym_method_token1] = "method_token1",
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
  [anon_sym_QMARK] = "\?",
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_LT] = "<",
  [sym_const_spec] = "const_spec",
  [sym_param] = "value",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [aux_sym__newline_token1] = "_newline_token1",
  [sym__line] = "_line",
  [sym_document] = "document",
  [sym_method] = "method",
  [sym_host] = "host",
  [sym_port] = "port",
  [sym_path] = "path",
  [sym_scheme] = "scheme",
  [sym_authority] = "authority",
  [sym_http_version] = "http_version",
  [sym_target_url] = "target_url",
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
  [alias_sym_key] = "key",
  [alias_sym_name] = "name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [aux_sym_method_token1] = aux_sym_method_token1,
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
  [anon_sym_QMARK] = anon_sym_QMARK,
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LT] = anon_sym_LT,
  [sym_const_spec] = sym_const_spec,
  [sym_param] = aux_sym_header_token1,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [sym__line] = sym__line,
  [sym_document] = sym_document,
  [sym_method] = sym_method,
  [sym_host] = sym_host,
  [sym_port] = sym_port,
  [sym_path] = sym_path,
  [sym_scheme] = sym_scheme,
  [sym_authority] = sym_authority,
  [sym_http_version] = sym_http_version,
  [sym_target_url] = sym_target_url,
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
  [alias_sym_key] = alias_sym_key,
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
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
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
  [alias_sym_key] = {
    .visible = true,
    .named = true,
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
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 6, .length = 2},
  [11] = {.index = 6, .length = 2},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 15, .length = 2},
  [14] = {.index = 17, .length = 4},
  [15] = {.index = 21, .length = 1},
  [16] = {.index = 22, .length = 4},
  [17] = {.index = 26, .length = 4},
  [18] = {.index = 30, .length = 4},
  [19] = {.index = 1, .length = 2},
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
    {field_name, 1},
    {field_value, 4},
  [6] =
    {field_name, 0},
    {field_value, 2},
  [8] =
    {field_name, 1},
    {field_value, 5},
  [10] =
    {field_key, 0},
    {field_value, 2},
  [12] =
    {field_key, 1},
    {field_value, 3},
  [14] =
    {field_file_path, 2},
  [15] =
    {field_name, 0},
    {field_value, 3},
  [17] =
    {field_name, 0},
    {field_name, 3, .inherited = true},
    {field_value, 2},
    {field_value, 3, .inherited = true},
  [21] =
    {field_file_path, 4},
  [22] =
    {field_name, 0},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [26] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [30] =
    {field_name, 0},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [0] = alias_sym_key,
  },
  [8] = {
    [1] = alias_sym_key,
  },
  [9] = {
    [2] = sym_path,
  },
  [10] = {
    [0] = alias_sym_name,
  },
  [11] = {
    [2] = aux_sym_header_token1,
  },
  [12] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
  },
  [13] = {
    [0] = alias_sym_name,
  },
  [14] = {
    [2] = aux_sym_header_token1,
  },
  [15] = {
    [4] = sym_path,
  },
  [16] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
    [4] = aux_sym_header_token1,
  },
  [18] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
    [4] = aux_sym_header_token1,
    [5] = aux_sym_header_token1,
  },
  [19] = {
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
  [57] = 5,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 6,
  [65] = 39,
  [66] = 41,
  [67] = 40,
  [68] = 68,
  [69] = 68,
  [70] = 47,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 24,
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
  [92] = 21,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 86,
  [102] = 102,
  [103] = 103,
  [104] = 88,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 97,
  [114] = 114,
  [115] = 115,
  [116] = 46,
  [117] = 117,
  [118] = 118,
  [119] = 114,
  [120] = 120,
  [121] = 111,
  [122] = 122,
  [123] = 107,
  [124] = 106,
  [125] = 97,
  [126] = 112,
  [127] = 109,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 97,
  [134] = 37,
  [135] = 135,
  [136] = 5,
  [137] = 137,
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
  [149] = 6,
  [150] = 150,
  [151] = 151,
  [152] = 151,
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
  [164] = 110,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 135,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 174,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 162,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
};

static inline bool sym_param_character_set_1(int32_t c) {
  return (c < 'A'
    ? (c < '$'
      ? (c < ' '
        ? (c >= '\t' && c <= 11)
        : c <= ' ')
      : (c <= '$' || (c < '0'
        ? (c >= '-' && c <= '.')
        : c <= '9')))
    : (c <= 'Z' || (c < 161
      ? (c < 'a'
        ? c == '_'
        : c <= 'z')
      : (c <= 55295 || (c >= 57344 && c <= 65535)))));
}

static inline bool sym_param_character_set_2(int32_t c) {
  return (c < '0'
    ? (c < ' '
      ? (c < 11
        ? c == '\t'
        : c <= 11)
      : (c <= ' ' || (c < '-'
        ? c == '$'
        : c <= '.')))
    : (c <= '9' || (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || (c < 57344
        ? (c >= 161 && c <= 55295)
        : c <= 65535)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'C') ADVANCE(132);
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead == 'G') ADVANCE(129);
      if (lookahead == 'H') ADVANCE(130);
      if (lookahead == 'L') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'P') ADVANCE(127);
      if (lookahead == 'T') ADVANCE(134);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '<') ADVANCE(165);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == '}') ADVANCE(160);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '}') ADVANCE(160);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(92);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(94);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '{') ADVANCE(85);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '}') ADVANCE(86);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(88);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(87);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\f') ADVANCE(15);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(151);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '%') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '?') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'P') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'w') ADVANCE(42);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 47:
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 48:
      if (lookahead == '{') ADVANCE(85);
      END_STATE();
    case 49:
      if (lookahead == '}') ADVANCE(86);
      END_STATE();
    case 50:
      if (lookahead == '}') ADVANCE(13);
      END_STATE();
    case 51:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 52:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (sym_param_character_set_1(lookahead)) ADVANCE(149);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'C') ADVANCE(132);
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead == 'G') ADVANCE(129);
      if (lookahead == 'H') ADVANCE(130);
      if (lookahead == 'L') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'P') ADVANCE(127);
      if (lookahead == 'T') ADVANCE(134);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_coap_PLUStcp);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_coap_PLUSws);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_coaps_PLUStcp);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_coaps_PLUSws);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == 's') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == '/') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '/') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_json_body_token3);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_json_body_token4);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '?') ADVANCE(47);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(47);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(121);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(121);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_const_spec);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'U') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(121);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 145:
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_param);
      if (sym_param_character_set_2(lookahead)) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(148);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '%') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(168);
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
      if (lookahead == 'q') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(22);
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
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_im);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_ni);
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_ws);
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_cap);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_cid);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_dns);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_geo);
      END_STATE();
    case 59:
      if (lookahead == '3') ADVANCE(84);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_ipp);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_mid);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_nih);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_sms);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_urn);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_wss);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_acct);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_arcp);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_h323);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == '1') ADVANCE(101);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_pres);
      END_STATE();
    case 91:
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_about);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_https);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_payto);
      END_STATE();
    case 101:
      if (lookahead == '1') ADVANCE(109);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_mailto);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_pkcs11);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_reload);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(115);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_telnet);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'k') ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_secret_DASHtoken);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 55},
  [10] = {.lex_state = 55},
  [11] = {.lex_state = 55},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 55},
  [14] = {.lex_state = 55},
  [15] = {.lex_state = 55},
  [16] = {.lex_state = 55},
  [17] = {.lex_state = 55},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 55},
  [20] = {.lex_state = 55},
  [21] = {.lex_state = 55},
  [22] = {.lex_state = 55},
  [23] = {.lex_state = 55},
  [24] = {.lex_state = 55},
  [25] = {.lex_state = 55},
  [26] = {.lex_state = 55},
  [27] = {.lex_state = 55},
  [28] = {.lex_state = 55},
  [29] = {.lex_state = 55},
  [30] = {.lex_state = 55},
  [31] = {.lex_state = 55},
  [32] = {.lex_state = 55},
  [33] = {.lex_state = 55},
  [34] = {.lex_state = 55},
  [35] = {.lex_state = 55},
  [36] = {.lex_state = 55},
  [37] = {.lex_state = 55},
  [38] = {.lex_state = 55},
  [39] = {.lex_state = 55},
  [40] = {.lex_state = 55},
  [41] = {.lex_state = 55},
  [42] = {.lex_state = 55},
  [43] = {.lex_state = 55},
  [44] = {.lex_state = 55},
  [45] = {.lex_state = 55},
  [46] = {.lex_state = 55},
  [47] = {.lex_state = 55},
  [48] = {.lex_state = 55},
  [49] = {.lex_state = 55},
  [50] = {.lex_state = 55},
  [51] = {.lex_state = 55},
  [52] = {.lex_state = 55},
  [53] = {.lex_state = 55},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 55},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 55},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 55},
  [63] = {.lex_state = 55},
  [64] = {.lex_state = 17},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 55},
  [77] = {.lex_state = 55},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 55},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 55},
  [91] = {.lex_state = 55},
  [92] = {.lex_state = 55},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 55},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 55},
  [102] = {.lex_state = 55},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 55},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 55},
  [107] = {.lex_state = 55},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 55},
  [111] = {.lex_state = 55},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 55},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 55},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 55},
  [119] = {.lex_state = 55},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 55},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 55},
  [124] = {.lex_state = 55},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 55},
  [131] = {.lex_state = 55},
  [132] = {.lex_state = 55},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 55},
  [135] = {.lex_state = 55},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 55},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 55},
  [142] = {.lex_state = 55},
  [143] = {.lex_state = 55},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 55},
  [146] = {.lex_state = 55},
  [147] = {.lex_state = 55},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 51},
  [152] = {.lex_state = 51},
  [153] = {.lex_state = 55},
  [154] = {.lex_state = 55},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 55},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 55},
  [160] = {.lex_state = 53},
  [161] = {.lex_state = 54},
  [162] = {.lex_state = 55},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 55},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 55},
  [171] = {.lex_state = 55},
  [172] = {.lex_state = 55},
  [173] = {.lex_state = 55},
  [174] = {.lex_state = 52},
  [175] = {.lex_state = 55},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 52},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 55},
  [181] = {.lex_state = 55},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 54},
  [184] = {.lex_state = 55},
  [185] = {.lex_state = 55},
  [186] = {.lex_state = 55},
  [187] = {.lex_state = 55},
  [188] = {.lex_state = 55},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
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
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym_request_token1] = ACTIONS(3),
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
    [aux_sym_json_body_token3] = ACTIONS(1),
    [aux_sym_json_body_token4] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_const_spec] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym__whitespace_token1] = ACTIONS(1),
    [aux_sym__newline_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(172),
    [sym_method] = STATE(141),
    [sym_request] = STATE(45),
    [sym_variable] = STATE(45),
    [sym_script_variable] = STATE(45),
    [sym_variable_declaration] = STATE(45),
    [aux_sym_document_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [aux_sym_method_token1] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [aux_sym_request_token1] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [aux_sym_script_variable_token1] = ACTIONS(15),
    [sym_const_spec] = ACTIONS(9),
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
    STATE(54), 1,
      sym_variable,
    STATE(86), 1,
      aux_sym_path_repeat1,
    STATE(89), 1,
      sym_path,
    STATE(91), 1,
      sym_host,
    STATE(154), 1,
      sym_target_url,
    STATE(155), 1,
      sym_authority,
    STATE(162), 1,
      sym_pair,
    STATE(163), 1,
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
    STATE(7), 1,
      aux_sym__whitespace,
    STATE(34), 1,
      sym_variable,
    STATE(35), 1,
      sym_host,
    STATE(48), 1,
      sym_host_url,
    STATE(139), 1,
      sym_authority,
    STATE(162), 1,
      sym_pair,
    STATE(178), 1,
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
    STATE(35), 1,
      sym_host,
    STATE(36), 1,
      sym_host_url,
    STATE(43), 1,
      sym_variable,
    STATE(139), 1,
      sym_authority,
    STATE(162), 1,
      sym_pair,
    STATE(178), 1,
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
  [473] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(63), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(22), 2,
      sym_header,
      aux_sym_request_repeat1,
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
  [516] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(75), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(22), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(14), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [559] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(79), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(9), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(13), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [602] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(83), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(10), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(81), 5,
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
  [645] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(63), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(15), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [684] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(89), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(15), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [723] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(98), 1,
      aux_sym_xml_body_token1,
    ACTIONS(104), 1,
      anon_sym_query,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(96), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(101), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(15), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [762] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(83), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(15), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [801] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(75), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(15), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [840] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(114), 1,
      anon_sym_AMP,
    ACTIONS(117), 1,
      aux_sym_xml_body_token3,
    STATE(18), 1,
      aux_sym_form_data_repeat2,
    STATE(137), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(112), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(110), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [873] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(126), 1,
      aux_sym_xml_body_token3,
    STATE(18), 1,
      aux_sym_form_data_repeat2,
    STATE(137), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(122), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [906] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(126), 1,
      aux_sym_xml_body_token3,
    STATE(19), 1,
      aux_sym_form_data_repeat2,
    STATE(137), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(130), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [939] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(136), 1,
      anon_sym_COLON,
    STATE(46), 1,
      sym_port,
    ACTIONS(134), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [966] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(140), 1,
      sym_identifier,
    STATE(22), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(143), 4,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [993] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(147), 6,
      aux_sym_method_token1,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(145), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1016] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(149), 1,
      anon_sym_COLON,
    STATE(46), 1,
      sym_port,
    ACTIONS(134), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1043] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(153), 6,
      aux_sym_method_token1,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(151), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1066] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(159), 1,
      aux_sym_xml_body_token3,
    ACTIONS(157), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(155), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1090] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(165), 1,
      aux_sym_xml_body_token3,
    ACTIONS(163), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(161), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1114] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(171), 1,
      aux_sym_xml_body_token3,
    ACTIONS(169), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(167), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1138] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(177), 1,
      aux_sym_xml_body_token3,
    ACTIONS(175), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(173), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1162] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(183), 1,
      aux_sym_xml_body_token3,
    ACTIONS(181), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1186] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(187), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(185), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1207] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(191), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1228] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(195), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1249] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(199), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1270] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(203), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1291] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(207), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1312] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(211), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1333] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(215), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1354] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(219), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1375] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(223), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1396] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(227), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1417] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(231), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1438] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(207), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1459] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(235), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1480] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_script_variable_token1,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 1,
      sym_comment,
    STATE(141), 1,
      sym_method,
    ACTIONS(9), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(50), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1513] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(243), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1534] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(247), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1555] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(251), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1576] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(255), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1597] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_AT,
    ACTIONS(268), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(271), 1,
      aux_sym_script_variable_token1,
    STATE(141), 1,
      sym_method,
    ACTIONS(262), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(50), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1630] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(276), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(274), 8,
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
    ACTIONS(280), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(278), 8,
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
    ACTIONS(284), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(282), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1693] = 9,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(290), 1,
      anon_sym_AT,
    ACTIONS(292), 1,
      anon_sym_QMARK,
    STATE(76), 1,
      sym_authority,
    STATE(101), 1,
      aux_sym_path_repeat1,
    STATE(147), 1,
      sym_path,
    STATE(184), 1,
      sym_pair,
    ACTIONS(294), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [1722] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(300), 1,
      aux_sym__whitespace_token1,
    STATE(61), 1,
      aux_sym__whitespace,
    STATE(62), 1,
      sym_boolean,
    ACTIONS(296), 2,
      sym_number,
      sym_string,
    ACTIONS(298), 2,
      anon_sym_true,
      anon_sym_false,
  [1743] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(304), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(302), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1758] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(306), 1,
      aux_sym__whitespace_token1,
    STATE(57), 1,
      aux_sym__whitespace,
    ACTIONS(47), 5,
      anon_sym_HTTP_SLASH,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
  [1775] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(311), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(309), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1790] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(300), 1,
      aux_sym__whitespace_token1,
    STATE(57), 1,
      aux_sym__whitespace,
    STATE(63), 1,
      sym_boolean,
    ACTIONS(298), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(313), 2,
      sym_number,
      sym_string,
  [1811] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(300), 1,
      aux_sym__whitespace_token1,
    STATE(58), 1,
      sym_boolean,
    STATE(59), 1,
      aux_sym__whitespace,
    ACTIONS(298), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(315), 2,
      sym_number,
      sym_string,
  [1832] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(300), 1,
      aux_sym__whitespace_token1,
    STATE(57), 1,
      aux_sym__whitespace,
    STATE(58), 1,
      sym_boolean,
    ACTIONS(298), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(315), 2,
      sym_number,
      sym_string,
  [1853] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(319), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(317), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1868] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(323), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(321), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1883] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(54), 6,
      anon_sym_HTTP_SLASH,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      aux_sym__whitespace_token1,
  [1895] = 1,
    ACTIONS(217), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1905] = 1,
    ACTIONS(225), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1915] = 1,
    ACTIONS(221), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1925] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(325), 1,
      sym_identifier,
    STATE(84), 1,
      sym_variable,
    ACTIONS(327), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [1941] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(329), 1,
      sym_identifier,
    STATE(84), 1,
      sym_variable,
    ACTIONS(327), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1957] = 1,
    ACTIONS(245), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1967] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(334), 1,
      sym_string,
    STATE(20), 1,
      sym_boolean,
    ACTIONS(332), 2,
      sym_identifier,
      sym_number,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
  [1985] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(340), 1,
      sym_string,
    STATE(25), 1,
      sym_boolean,
    ACTIONS(336), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(338), 2,
      sym_identifier,
      sym_number,
  [2003] = 4,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_AMP,
    ACTIONS(344), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(83), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2018] = 4,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_AMP,
    ACTIONS(348), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(83), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2033] = 1,
    ACTIONS(350), 6,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2042] = 5,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    STATE(101), 1,
      aux_sym_path_repeat1,
    STATE(143), 1,
      sym_path,
    ACTIONS(354), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2059] = 3,
    ACTIONS(356), 1,
      anon_sym_COLON,
    STATE(116), 1,
      sym_port,
    ACTIONS(132), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2072] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(87), 1,
      sym_host,
    STATE(148), 1,
      sym_authority,
    STATE(162), 1,
      sym_pair,
  [2091] = 4,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_AMP,
    ACTIONS(354), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(83), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2106] = 4,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_AMP,
    ACTIONS(360), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(83), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2121] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(32), 1,
      sym_host,
    STATE(150), 1,
      sym_authority,
    STATE(162), 1,
      sym_pair,
  [2140] = 4,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_AMP,
    ACTIONS(364), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(83), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2155] = 4,
    ACTIONS(366), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_AMP,
    ACTIONS(369), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(83), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2170] = 2,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    ACTIONS(374), 5,
      anon_sym_QMARK,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2181] = 4,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_AMP,
    ACTIONS(379), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(83), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2196] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      aux_sym_path_repeat1,
    ACTIONS(381), 4,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2209] = 5,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(383), 1,
      anon_sym_QMARK,
    STATE(101), 1,
      aux_sym_path_repeat1,
    STATE(138), 1,
      sym_path,
    ACTIONS(379), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2226] = 3,
    ACTIONS(385), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      aux_sym_path_repeat1,
    ACTIONS(374), 4,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2239] = 4,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_AMP,
    ACTIONS(294), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(79), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2254] = 5,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(388), 1,
      anon_sym_QMARK,
    STATE(101), 1,
      aux_sym_path_repeat1,
    STATE(159), 1,
      sym_path,
    ACTIONS(344), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2271] = 5,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_QMARK,
    STATE(101), 1,
      aux_sym_path_repeat1,
    STATE(147), 1,
      sym_path,
    ACTIONS(294), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2288] = 3,
    ACTIONS(390), 1,
      anon_sym_COLON,
    STATE(116), 1,
      sym_port,
    ACTIONS(132), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2301] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_AMP,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2315] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(394), 1,
      sym__line,
    STATE(97), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(392), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2329] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(49), 1,
      sym_variable,
  [2345] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_AMP,
    STATE(80), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2359] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(398), 1,
      sym__line,
    STATE(97), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(396), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2373] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_AMP,
    STATE(73), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2387] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_AMP,
    STATE(85), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2401] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_AMP,
    STATE(82), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2415] = 3,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    STATE(104), 1,
      aux_sym_path_repeat1,
    ACTIONS(381), 3,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2427] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(31), 1,
      sym_variable,
  [2443] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(300), 1,
      aux_sym__whitespace_token1,
    ACTIONS(401), 1,
      anon_sym_HTTP_SLASH,
    STATE(57), 1,
      aux_sym__whitespace,
    STATE(186), 1,
      sym_http_version,
  [2459] = 3,
    ACTIONS(403), 1,
      anon_sym_SLASH,
    STATE(104), 1,
      aux_sym_path_repeat1,
    ACTIONS(374), 3,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2471] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(406), 1,
      aux_sym__whitespace_token1,
    ACTIONS(408), 1,
      sym__line,
    STATE(136), 1,
      aux_sym__whitespace,
  [2484] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(410), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(107), 1,
      aux_sym__whitespace,
  [2497] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(412), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2510] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(414), 1,
      aux_sym_xml_body_token2,
    ACTIONS(416), 1,
      sym__line,
    STATE(133), 1,
      aux_sym_script_variable_repeat1,
  [2523] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(5), 1,
      aux_sym__whitespace,
  [2536] = 1,
    ACTIONS(420), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2543] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(422), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(114), 1,
      aux_sym__whitespace,
  [2556] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(109), 1,
      aux_sym__whitespace,
  [2569] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(396), 1,
      aux_sym_script_variable_token2,
    ACTIONS(426), 1,
      sym__line,
    STATE(113), 1,
      aux_sym_script_variable_repeat1,
  [2582] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(429), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2595] = 1,
    ACTIONS(431), 4,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2602] = 1,
    ACTIONS(241), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2609] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(433), 1,
      sym_identifier,
    ACTIONS(435), 1,
      aux_sym_xml_body_token3,
    STATE(117), 1,
      aux_sym_form_data_repeat1,
  [2622] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(438), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      aux_sym__whitespace,
  [2635] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(440), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2648] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(442), 1,
      aux_sym_script_variable_token2,
    ACTIONS(444), 1,
      sym__line,
    STATE(113), 1,
      aux_sym_script_variable_repeat1,
  [2661] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(446), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(119), 1,
      aux_sym__whitespace,
  [2674] = 1,
    ACTIONS(448), 4,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2681] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(450), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2694] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(452), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(123), 1,
      aux_sym__whitespace,
  [2707] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(396), 1,
      aux_sym_json_body_token3,
    ACTIONS(454), 1,
      sym__line,
    STATE(125), 1,
      aux_sym_script_variable_repeat1,
  [2720] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(127), 1,
      aux_sym__whitespace,
  [2733] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(459), 1,
      sym_identifier,
    STATE(5), 1,
      aux_sym__whitespace,
  [2746] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(461), 1,
      aux_sym_json_body_token3,
    ACTIONS(463), 1,
      sym__line,
    STATE(125), 1,
      aux_sym_script_variable_repeat1,
  [2759] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(406), 1,
      aux_sym__whitespace_token1,
    ACTIONS(465), 1,
      sym__line,
    STATE(136), 1,
      aux_sym__whitespace,
  [2772] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(467), 1,
      anon_sym_AT,
    ACTIONS(469), 1,
      aux_sym__whitespace_token1,
    STATE(105), 1,
      aux_sym__whitespace,
  [2785] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(471), 1,
      anon_sym_EQ,
    STATE(5), 1,
      aux_sym__whitespace,
  [2798] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(473), 1,
      anon_sym_EQ,
    STATE(131), 1,
      aux_sym__whitespace,
  [2811] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(396), 1,
      aux_sym_xml_body_token2,
    ACTIONS(475), 1,
      sym__line,
    STATE(133), 1,
      aux_sym_script_variable_repeat1,
  [2824] = 1,
    ACTIONS(209), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2831] = 1,
    ACTIONS(478), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2838] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(45), 1,
      sym__line,
    ACTIONS(480), 1,
      aux_sym__whitespace_token1,
    STATE(136), 1,
      aux_sym__whitespace,
  [2851] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(483), 1,
      sym_identifier,
    ACTIONS(485), 1,
      aux_sym_xml_body_token3,
    STATE(117), 1,
      aux_sym_form_data_repeat1,
  [2864] = 2,
    ACTIONS(388), 1,
      anon_sym_QMARK,
    ACTIONS(344), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2872] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(53), 1,
      sym_host,
  [2882] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(489), 1,
      sym__line,
    STATE(120), 1,
      aux_sym_script_variable_repeat1,
  [2892] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
  [2902] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(102), 1,
      aux_sym__whitespace,
  [2912] = 2,
    ACTIONS(383), 1,
      anon_sym_QMARK,
    ACTIONS(379), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2920] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(491), 1,
      sym__line,
    STATE(94), 1,
      aux_sym_script_variable_repeat1,
  [2930] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(118), 1,
      aux_sym__whitespace,
  [2940] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(493), 1,
      anon_sym_COLON,
    ACTIONS(495), 1,
      anon_sym_EQ,
  [2950] = 2,
    ACTIONS(352), 1,
      anon_sym_QMARK,
    ACTIONS(354), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2958] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(497), 1,
      sym_identifier,
    STATE(90), 1,
      sym_host,
  [2968] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(52), 2,
      aux_sym__whitespace_token1,
      sym__line,
  [2976] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(33), 1,
      sym_host,
  [2986] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(501), 1,
      aux_sym_port_token1,
  [2996] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(503), 1,
      aux_sym_port_token1,
  [3006] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(95), 1,
      aux_sym__whitespace,
  [3016] = 3,
    ACTIONS(300), 1,
      aux_sym__whitespace_token1,
    ACTIONS(505), 1,
      aux_sym_request_token1,
    STATE(103), 1,
      aux_sym__whitespace,
  [3026] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(497), 1,
      sym_identifier,
    STATE(76), 1,
      sym_host,
  [3036] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(507), 1,
      sym__line,
    STATE(108), 1,
      aux_sym_script_variable_repeat1,
  [3046] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(469), 1,
      aux_sym__whitespace_token1,
    STATE(129), 1,
      aux_sym__whitespace,
  [3056] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(509), 1,
      sym__line,
    STATE(128), 1,
      aux_sym_script_variable_repeat1,
  [3066] = 2,
    ACTIONS(511), 1,
      anon_sym_QMARK,
    ACTIONS(360), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3074] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(513), 1,
      aux_sym_http_version_token1,
  [3081] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(515), 1,
      sym_param,
  [3088] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(517), 1,
      anon_sym_AT,
  [3095] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(519), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3102] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(420), 1,
      sym_identifier,
  [3109] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(521), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3116] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(523), 1,
      sym_identifier,
  [3123] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(525), 1,
      sym_identifier,
  [3130] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(527), 1,
      anon_sym_EQ,
  [3137] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(478), 1,
      sym_identifier,
  [3144] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(529), 1,
      anon_sym_COLON,
  [3151] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(531), 1,
      anon_sym_AT,
  [3158] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(533), 1,
      ts_builtin_sym_end,
  [3165] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(535), 1,
      anon_sym_EQ,
  [3172] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(537), 1,
      aux_sym_port_token1,
  [3179] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(539), 1,
      anon_sym_EQ,
  [3186] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(483), 1,
      sym_identifier,
  [3193] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(541), 1,
      aux_sym_port_token1,
  [3200] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(543), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3207] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(545), 1,
      sym_identifier,
  [3214] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(495), 1,
      anon_sym_EQ,
  [3221] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(547), 1,
      aux_sym__whitespace_token1,
  [3228] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(549), 1,
      sym_identifier,
  [3235] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(551), 1,
      sym_param,
  [3242] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(553), 1,
      anon_sym_AT,
  [3249] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(493), 1,
      anon_sym_COLON,
  [3256] = 1,
    ACTIONS(555), 1,
      aux_sym_request_token1,
  [3260] = 1,
    ACTIONS(557), 1,
      aux_sym_request_token1,
  [3264] = 1,
    ACTIONS(559), 1,
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
  [SMALL_STATE(10)] = 516,
  [SMALL_STATE(11)] = 559,
  [SMALL_STATE(12)] = 602,
  [SMALL_STATE(13)] = 645,
  [SMALL_STATE(14)] = 684,
  [SMALL_STATE(15)] = 723,
  [SMALL_STATE(16)] = 762,
  [SMALL_STATE(17)] = 801,
  [SMALL_STATE(18)] = 840,
  [SMALL_STATE(19)] = 873,
  [SMALL_STATE(20)] = 906,
  [SMALL_STATE(21)] = 939,
  [SMALL_STATE(22)] = 966,
  [SMALL_STATE(23)] = 993,
  [SMALL_STATE(24)] = 1016,
  [SMALL_STATE(25)] = 1043,
  [SMALL_STATE(26)] = 1066,
  [SMALL_STATE(27)] = 1090,
  [SMALL_STATE(28)] = 1114,
  [SMALL_STATE(29)] = 1138,
  [SMALL_STATE(30)] = 1162,
  [SMALL_STATE(31)] = 1186,
  [SMALL_STATE(32)] = 1207,
  [SMALL_STATE(33)] = 1228,
  [SMALL_STATE(34)] = 1249,
  [SMALL_STATE(35)] = 1270,
  [SMALL_STATE(36)] = 1291,
  [SMALL_STATE(37)] = 1312,
  [SMALL_STATE(38)] = 1333,
  [SMALL_STATE(39)] = 1354,
  [SMALL_STATE(40)] = 1375,
  [SMALL_STATE(41)] = 1396,
  [SMALL_STATE(42)] = 1417,
  [SMALL_STATE(43)] = 1438,
  [SMALL_STATE(44)] = 1459,
  [SMALL_STATE(45)] = 1480,
  [SMALL_STATE(46)] = 1513,
  [SMALL_STATE(47)] = 1534,
  [SMALL_STATE(48)] = 1555,
  [SMALL_STATE(49)] = 1576,
  [SMALL_STATE(50)] = 1597,
  [SMALL_STATE(51)] = 1630,
  [SMALL_STATE(52)] = 1651,
  [SMALL_STATE(53)] = 1672,
  [SMALL_STATE(54)] = 1693,
  [SMALL_STATE(55)] = 1722,
  [SMALL_STATE(56)] = 1743,
  [SMALL_STATE(57)] = 1758,
  [SMALL_STATE(58)] = 1775,
  [SMALL_STATE(59)] = 1790,
  [SMALL_STATE(60)] = 1811,
  [SMALL_STATE(61)] = 1832,
  [SMALL_STATE(62)] = 1853,
  [SMALL_STATE(63)] = 1868,
  [SMALL_STATE(64)] = 1883,
  [SMALL_STATE(65)] = 1895,
  [SMALL_STATE(66)] = 1905,
  [SMALL_STATE(67)] = 1915,
  [SMALL_STATE(68)] = 1925,
  [SMALL_STATE(69)] = 1941,
  [SMALL_STATE(70)] = 1957,
  [SMALL_STATE(71)] = 1967,
  [SMALL_STATE(72)] = 1985,
  [SMALL_STATE(73)] = 2003,
  [SMALL_STATE(74)] = 2018,
  [SMALL_STATE(75)] = 2033,
  [SMALL_STATE(76)] = 2042,
  [SMALL_STATE(77)] = 2059,
  [SMALL_STATE(78)] = 2072,
  [SMALL_STATE(79)] = 2091,
  [SMALL_STATE(80)] = 2106,
  [SMALL_STATE(81)] = 2121,
  [SMALL_STATE(82)] = 2140,
  [SMALL_STATE(83)] = 2155,
  [SMALL_STATE(84)] = 2170,
  [SMALL_STATE(85)] = 2181,
  [SMALL_STATE(86)] = 2196,
  [SMALL_STATE(87)] = 2209,
  [SMALL_STATE(88)] = 2226,
  [SMALL_STATE(89)] = 2239,
  [SMALL_STATE(90)] = 2254,
  [SMALL_STATE(91)] = 2271,
  [SMALL_STATE(92)] = 2288,
  [SMALL_STATE(93)] = 2301,
  [SMALL_STATE(94)] = 2315,
  [SMALL_STATE(95)] = 2329,
  [SMALL_STATE(96)] = 2345,
  [SMALL_STATE(97)] = 2359,
  [SMALL_STATE(98)] = 2373,
  [SMALL_STATE(99)] = 2387,
  [SMALL_STATE(100)] = 2401,
  [SMALL_STATE(101)] = 2415,
  [SMALL_STATE(102)] = 2427,
  [SMALL_STATE(103)] = 2443,
  [SMALL_STATE(104)] = 2459,
  [SMALL_STATE(105)] = 2471,
  [SMALL_STATE(106)] = 2484,
  [SMALL_STATE(107)] = 2497,
  [SMALL_STATE(108)] = 2510,
  [SMALL_STATE(109)] = 2523,
  [SMALL_STATE(110)] = 2536,
  [SMALL_STATE(111)] = 2543,
  [SMALL_STATE(112)] = 2556,
  [SMALL_STATE(113)] = 2569,
  [SMALL_STATE(114)] = 2582,
  [SMALL_STATE(115)] = 2595,
  [SMALL_STATE(116)] = 2602,
  [SMALL_STATE(117)] = 2609,
  [SMALL_STATE(118)] = 2622,
  [SMALL_STATE(119)] = 2635,
  [SMALL_STATE(120)] = 2648,
  [SMALL_STATE(121)] = 2661,
  [SMALL_STATE(122)] = 2674,
  [SMALL_STATE(123)] = 2681,
  [SMALL_STATE(124)] = 2694,
  [SMALL_STATE(125)] = 2707,
  [SMALL_STATE(126)] = 2720,
  [SMALL_STATE(127)] = 2733,
  [SMALL_STATE(128)] = 2746,
  [SMALL_STATE(129)] = 2759,
  [SMALL_STATE(130)] = 2772,
  [SMALL_STATE(131)] = 2785,
  [SMALL_STATE(132)] = 2798,
  [SMALL_STATE(133)] = 2811,
  [SMALL_STATE(134)] = 2824,
  [SMALL_STATE(135)] = 2831,
  [SMALL_STATE(136)] = 2838,
  [SMALL_STATE(137)] = 2851,
  [SMALL_STATE(138)] = 2864,
  [SMALL_STATE(139)] = 2872,
  [SMALL_STATE(140)] = 2882,
  [SMALL_STATE(141)] = 2892,
  [SMALL_STATE(142)] = 2902,
  [SMALL_STATE(143)] = 2912,
  [SMALL_STATE(144)] = 2920,
  [SMALL_STATE(145)] = 2930,
  [SMALL_STATE(146)] = 2940,
  [SMALL_STATE(147)] = 2950,
  [SMALL_STATE(148)] = 2958,
  [SMALL_STATE(149)] = 2968,
  [SMALL_STATE(150)] = 2976,
  [SMALL_STATE(151)] = 2986,
  [SMALL_STATE(152)] = 2996,
  [SMALL_STATE(153)] = 3006,
  [SMALL_STATE(154)] = 3016,
  [SMALL_STATE(155)] = 3026,
  [SMALL_STATE(156)] = 3036,
  [SMALL_STATE(157)] = 3046,
  [SMALL_STATE(158)] = 3056,
  [SMALL_STATE(159)] = 3066,
  [SMALL_STATE(160)] = 3074,
  [SMALL_STATE(161)] = 3081,
  [SMALL_STATE(162)] = 3088,
  [SMALL_STATE(163)] = 3095,
  [SMALL_STATE(164)] = 3102,
  [SMALL_STATE(165)] = 3109,
  [SMALL_STATE(166)] = 3116,
  [SMALL_STATE(167)] = 3123,
  [SMALL_STATE(168)] = 3130,
  [SMALL_STATE(169)] = 3137,
  [SMALL_STATE(170)] = 3144,
  [SMALL_STATE(171)] = 3151,
  [SMALL_STATE(172)] = 3158,
  [SMALL_STATE(173)] = 3165,
  [SMALL_STATE(174)] = 3172,
  [SMALL_STATE(175)] = 3179,
  [SMALL_STATE(176)] = 3186,
  [SMALL_STATE(177)] = 3193,
  [SMALL_STATE(178)] = 3200,
  [SMALL_STATE(179)] = 3207,
  [SMALL_STATE(180)] = 3214,
  [SMALL_STATE(181)] = 3221,
  [SMALL_STATE(182)] = 3228,
  [SMALL_STATE(183)] = 3235,
  [SMALL_STATE(184)] = 3242,
  [SMALL_STATE(185)] = 3249,
  [SMALL_STATE(186)] = 3256,
  [SMALL_STATE(187)] = 3260,
  [SMALL_STATE(188)] = 3264,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 1),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(180),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(187),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(144),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(145),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(130),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 17),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 17),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 17), SHIFT_REPEAT(176),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 17), SHIFT_REPEAT(137),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 4, .production_id = 14),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 4, .production_id = 14),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 3, .production_id = 11),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 3, .production_id = 11),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(185),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 19),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 19),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 9),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 9),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 15),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 15),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, .production_id = 18),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, .production_id = 18),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 13),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 13),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 10),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 10),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 6, .production_id = 15),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 6, .production_id = 15),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 12),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 12),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, .production_id = 16),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, .production_id = 16),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(181),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(179),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(126),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(140),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, .production_id = 9),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 4, .production_id = 9),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(64),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 6),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 6),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1), SHIFT_REPEAT(84),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 7),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(168),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(167),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(75),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(69),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(97),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(68),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(113),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 8),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 2),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat1, 2), SHIFT_REPEAT(117),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 7),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(125),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(133),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(149),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 5),
  [533] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
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
