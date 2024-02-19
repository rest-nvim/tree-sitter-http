#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 151
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 2
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 16

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
  aux_sym_request_token1 = 48,
  anon_sym_QMARK = 49,
  anon_sym_AMP = 50,
  anon_sym_EQ = 51,
  aux_sym_header_token1 = 52,
  anon_sym_LBRACE_LBRACE = 53,
  anon_sym_RBRACE_RBRACE = 54,
  aux_sym_script_variable_token1 = 55,
  aux_sym_script_variable_token2 = 56,
  aux_sym_xml_body_token1 = 57,
  aux_sym_xml_body_token2 = 58,
  aux_sym_xml_body_token3 = 59,
  aux_sym_json_body_token1 = 60,
  aux_sym_json_body_token2 = 61,
  aux_sym_json_body_token3 = 62,
  aux_sym_json_body_token4 = 63,
  anon_sym_query = 64,
  anon_sym_LPAREN = 65,
  anon_sym_LT = 66,
  sym_const_spec = 67,
  sym_number = 68,
  sym_string = 69,
  anon_sym_true = 70,
  anon_sym_false = 71,
  aux_sym__whitespace_token1 = 72,
  aux_sym__newline_token1 = 73,
  sym__line = 74,
  sym_document = 75,
  sym_method = 76,
  sym_host = 77,
  sym_port = 78,
  sym_path = 79,
  sym_scheme = 80,
  sym_authority = 81,
  sym_http_version = 82,
  sym_target_url = 83,
  sym_request = 84,
  sym_pair = 85,
  sym_query_param = 86,
  sym_header = 87,
  sym_variable = 88,
  sym_script_variable = 89,
  sym_variable_declaration = 90,
  sym_xml_body = 91,
  sym_json_body = 92,
  sym_graphql_body = 93,
  sym_external_body = 94,
  sym_form_data = 95,
  sym_boolean = 96,
  aux_sym__whitespace = 97,
  aux_sym_document_repeat1 = 98,
  aux_sym_path_repeat1 = 99,
  aux_sym_target_url_repeat1 = 100,
  aux_sym_request_repeat1 = 101,
  aux_sym_request_repeat2 = 102,
  aux_sym_script_variable_repeat1 = 103,
  aux_sym_form_data_repeat1 = 104,
  aux_sym_form_data_repeat2 = 105,
  alias_sym_key = 106,
  alias_sym_name = 107,
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
  [aux_sym_request_token1] = "request_token1",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
  [aux_sym_header_token1] = "value",
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
  [aux_sym_request_token1] = aux_sym_request_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_header_token1] = aux_sym_header_token1,
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
  [aux_sym_request_token1] = {
    .visible = false,
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
  [aux_sym_header_token1] = {
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
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 6, .length = 2},
  [10] = {.index = 6, .length = 2},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 4},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 4},
  [15] = {.index = 1, .length = 2},
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
    {field_key, 1},
    {field_value, 3},
  [12] =
    {field_file_path, 2},
  [13] =
    {field_name, 0},
    {field_value, 3},
  [15] =
    {field_name, 0},
    {field_name, 3, .inherited = true},
    {field_value, 2},
    {field_value, 3, .inherited = true},
  [19] =
    {field_file_path, 4},
  [20] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [1] = alias_sym_key,
    [3] = aux_sym_header_token1,
  },
  [8] = {
    [2] = sym_path,
  },
  [9] = {
    [0] = alias_sym_name,
  },
  [10] = {
    [2] = aux_sym_header_token1,
  },
  [11] = {
    [0] = alias_sym_name,
  },
  [12] = {
    [2] = aux_sym_header_token1,
  },
  [13] = {
    [4] = sym_path,
  },
  [15] = {
    [3] = aux_sym_header_token1,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_boolean, 2,
    sym_boolean,
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
  [45] = 3,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 36,
  [53] = 28,
  [54] = 35,
  [55] = 55,
  [56] = 56,
  [57] = 31,
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
  [77] = 3,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 82,
  [88] = 88,
  [89] = 89,
  [90] = 82,
  [91] = 91,
  [92] = 82,
  [93] = 3,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 96,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 86,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 88,
  [108] = 101,
  [109] = 109,
  [110] = 105,
  [111] = 111,
  [112] = 103,
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
  [133] = 83,
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
  [144] = 144,
  [145] = 145,
  [146] = 84,
  [147] = 130,
  [148] = 148,
  [149] = 149,
  [150] = 150,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '<') ADVANCE(88);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == 'D') ADVANCE(120);
      if (lookahead == 'G') ADVANCE(121);
      if (lookahead == 'H') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(123);
      if (lookahead == 'O') ADVANCE(125);
      if (lookahead == 'P') ADVANCE(119);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == '<') ADVANCE(156);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == ']') ADVANCE(150);
      if (lookahead == '}') ADVANCE(151);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == '}') ADVANCE(151);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(84);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(86);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '{') ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '}') ADVANCE(78);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(80);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(79);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(142);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '?') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'P') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 46:
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == '{') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead == '\f' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 49:
      if (lookahead == '}') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == '}') ADVANCE(13);
      END_STATE();
    case 51:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 52:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '<') ADVANCE(89);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == 'D') ADVANCE(120);
      if (lookahead == 'G') ADVANCE(121);
      if (lookahead == 'H') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(123);
      if (lookahead == 'O') ADVANCE(125);
      if (lookahead == 'P') ADVANCE(119);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_coap_PLUStcp);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_coap_PLUSws);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_coaps_PLUStcp);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_coaps_PLUSws);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_json_body_token3);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_json_body_token4);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '?') ADVANCE(46);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(46);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(113);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(113);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_const_spec);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead == 'U') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(113);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(140);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '%') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
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
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 53},
  [12] = {.lex_state = 53},
  [13] = {.lex_state = 53},
  [14] = {.lex_state = 53},
  [15] = {.lex_state = 53},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 53},
  [19] = {.lex_state = 53},
  [20] = {.lex_state = 53},
  [21] = {.lex_state = 53},
  [22] = {.lex_state = 53},
  [23] = {.lex_state = 53},
  [24] = {.lex_state = 53},
  [25] = {.lex_state = 53},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 53},
  [29] = {.lex_state = 53},
  [30] = {.lex_state = 53},
  [31] = {.lex_state = 53},
  [32] = {.lex_state = 53},
  [33] = {.lex_state = 53},
  [34] = {.lex_state = 53},
  [35] = {.lex_state = 53},
  [36] = {.lex_state = 53},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 53},
  [39] = {.lex_state = 53},
  [40] = {.lex_state = 53},
  [41] = {.lex_state = 53},
  [42] = {.lex_state = 53},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 53},
  [49] = {.lex_state = 53},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 53},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 53},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 53},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 48},
  [61] = {.lex_state = 53},
  [62] = {.lex_state = 53},
  [63] = {.lex_state = 53},
  [64] = {.lex_state = 53},
  [65] = {.lex_state = 53},
  [66] = {.lex_state = 53},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 53},
  [69] = {.lex_state = 53},
  [70] = {.lex_state = 53},
  [71] = {.lex_state = 53},
  [72] = {.lex_state = 48},
  [73] = {.lex_state = 53},
  [74] = {.lex_state = 53},
  [75] = {.lex_state = 53},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 48},
  [78] = {.lex_state = 53},
  [79] = {.lex_state = 53},
  [80] = {.lex_state = 53},
  [81] = {.lex_state = 53},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 53},
  [84] = {.lex_state = 53},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 53},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 53},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 53},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 53},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 53},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 53},
  [102] = {.lex_state = 53},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 53},
  [106] = {.lex_state = 53},
  [107] = {.lex_state = 53},
  [108] = {.lex_state = 53},
  [109] = {.lex_state = 53},
  [110] = {.lex_state = 53},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 53},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 53},
  [118] = {.lex_state = 53},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 51},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 53},
  [125] = {.lex_state = 53},
  [126] = {.lex_state = 53},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 53},
  [129] = {.lex_state = 53},
  [130] = {.lex_state = 53},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 53},
  [138] = {.lex_state = 51},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 53},
  [141] = {.lex_state = 53},
  [142] = {.lex_state = 53},
  [143] = {.lex_state = 52},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 53},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 53},
  [148] = {.lex_state = 53},
  [149] = {.lex_state = 53},
  [150] = {.lex_state = 53},
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
    [aux_sym_http_version_token1] = ACTIONS(1),
    [aux_sym_request_token1] = ACTIONS(3),
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
    [sym_document] = STATE(142),
    [sym_method] = STATE(114),
    [sym_request] = STATE(29),
    [sym_variable] = STATE(29),
    [sym_script_variable] = STATE(29),
    [sym_variable_declaration] = STATE(29),
    [aux_sym_document_repeat1] = STATE(29),
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
    STATE(3), 1,
      aux_sym__whitespace,
    STATE(37), 1,
      sym_variable,
    STATE(40), 1,
      sym_host,
    STATE(62), 1,
      sym_path,
    STATE(71), 1,
      aux_sym_path_repeat1,
    STATE(115), 1,
      sym_authority,
    STATE(125), 1,
      sym_target_url,
    STATE(130), 1,
      sym_pair,
    STATE(132), 1,
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
  [87] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(35), 1,
      aux_sym__whitespace_token1,
    STATE(3), 1,
      aux_sym__whitespace,
    ACTIONS(33), 10,
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
    ACTIONS(31), 34,
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
  [145] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(42), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(18), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(8), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [188] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(54), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(4), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(9), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [231] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(58), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(18), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(11), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [274] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(62), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(6), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(12), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [317] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(68), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(10), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [356] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(42), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(10), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [395] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(77), 1,
      aux_sym_xml_body_token1,
    ACTIONS(83), 1,
      anon_sym_query,
    ACTIONS(86), 1,
      anon_sym_LT,
    ACTIONS(75), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(80), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(10), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [434] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(54), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(10), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [473] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(58), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(10), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [512] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(93), 1,
      anon_sym_AMP,
    ACTIONS(96), 1,
      aux_sym_xml_body_token3,
    STATE(13), 1,
      aux_sym_form_data_repeat2,
    STATE(111), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(91), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(89), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [545] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(103), 1,
      anon_sym_AMP,
    ACTIONS(105), 1,
      aux_sym_xml_body_token3,
    STATE(13), 1,
      aux_sym_form_data_repeat2,
    STATE(111), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(101), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(99), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [578] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(103), 1,
      anon_sym_AMP,
    ACTIONS(105), 1,
      aux_sym_xml_body_token3,
    STATE(14), 1,
      aux_sym_form_data_repeat2,
    STATE(111), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(109), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [611] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(113), 6,
      aux_sym_method_token1,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(111), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [634] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(117), 6,
      aux_sym_method_token1,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(115), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [657] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(121), 1,
      sym_identifier,
    STATE(18), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(124), 4,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(119), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [684] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(130), 1,
      aux_sym_xml_body_token3,
    ACTIONS(128), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(126), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [708] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(136), 1,
      aux_sym_xml_body_token3,
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
  [732] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(142), 1,
      aux_sym_xml_body_token3,
    ACTIONS(140), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [756] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(148), 1,
      aux_sym_xml_body_token3,
    ACTIONS(146), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(144), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [780] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(154), 1,
      aux_sym_xml_body_token3,
    ACTIONS(152), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [804] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(158), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(156), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [825] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(162), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(160), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [846] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_AT,
    ACTIONS(175), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      aux_sym_script_variable_token1,
    STATE(114), 1,
      sym_method,
    ACTIONS(169), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(26), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [879] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(183), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [900] = 3,
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
  [921] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_script_variable_token1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      sym_comment,
    STATE(114), 1,
      sym_method,
    ACTIONS(9), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(26), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [954] = 3,
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
  [975] = 3,
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
  [996] = 3,
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
  [1017] = 3,
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
  [1038] = 3,
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
  [1059] = 3,
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
  [1080] = 3,
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
  [1101] = 10,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym_authority,
    STATE(65), 1,
      sym_path,
    STATE(71), 1,
      aux_sym_path_repeat1,
    STATE(147), 1,
      sym_pair,
    ACTIONS(225), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(227), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(61), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1135] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      sym_path,
    STATE(71), 1,
      aux_sym_path_repeat1,
    ACTIONS(227), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(229), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(73), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1157] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(71), 1,
      aux_sym_path_repeat1,
    STATE(75), 1,
      sym_path,
    ACTIONS(227), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(231), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1179] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(65), 1,
      sym_path,
    STATE(71), 1,
      aux_sym_path_repeat1,
    ACTIONS(225), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(227), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(61), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1201] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(68), 1,
      sym_path,
    STATE(71), 1,
      aux_sym_path_repeat1,
    ACTIONS(227), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(233), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(63), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1223] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(237), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(235), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1238] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    STATE(45), 1,
      aux_sym__whitespace,
    STATE(49), 1,
      sym_boolean,
    ACTIONS(239), 2,
      sym_number,
      sym_string,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
  [1259] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(245), 1,
      aux_sym__whitespace_token1,
    STATE(49), 1,
      sym_boolean,
    STATE(50), 1,
      aux_sym__whitespace,
    ACTIONS(239), 2,
      sym_number,
      sym_string,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
  [1280] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(247), 1,
      aux_sym__whitespace_token1,
    STATE(45), 1,
      aux_sym__whitespace,
    ACTIONS(33), 5,
      anon_sym_HTTP_SLASH,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
  [1297] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(252), 1,
      aux_sym__whitespace_token1,
    STATE(43), 1,
      aux_sym__whitespace,
    STATE(51), 1,
      sym_boolean,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(250), 2,
      sym_number,
      sym_string,
  [1318] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(254), 1,
      sym_identifier,
    STATE(80), 1,
      sym_variable,
    ACTIONS(256), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1335] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(260), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(258), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1350] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(264), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(262), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1365] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    STATE(45), 1,
      aux_sym__whitespace,
    STATE(48), 1,
      sym_boolean,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(266), 2,
      sym_number,
      sym_string,
  [1386] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(270), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(268), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1401] = 1,
    ACTIONS(217), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1411] = 1,
    ACTIONS(185), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1421] = 1,
    ACTIONS(213), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1431] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(274), 1,
      sym_string,
    STATE(15), 1,
      sym_boolean,
    ACTIONS(272), 2,
      sym_identifier,
      sym_number,
    ACTIONS(276), 2,
      anon_sym_true,
      anon_sym_false,
  [1449] = 3,
    ACTIONS(278), 1,
      anon_sym_COLON,
    STATE(78), 1,
      sym_port,
    ACTIONS(280), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1463] = 1,
    ACTIONS(197), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1473] = 3,
    ACTIONS(282), 1,
      anon_sym_COLON,
    STATE(78), 1,
      sym_port,
    ACTIONS(280), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1487] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(286), 1,
      sym_string,
    STATE(17), 1,
      sym_boolean,
    ACTIONS(276), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      sym_identifier,
      sym_number,
  [1505] = 6,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(290), 1,
      aux_sym_header_token1,
    ACTIONS(292), 1,
      aux_sym__whitespace_token1,
    STATE(33), 1,
      sym_variable,
    STATE(77), 1,
      aux_sym__whitespace,
  [1524] = 3,
    ACTIONS(227), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(233), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1537] = 3,
    ACTIONS(225), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(227), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(61), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1550] = 3,
    ACTIONS(227), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(231), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1563] = 3,
    ACTIONS(294), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(296), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1576] = 3,
    ACTIONS(227), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(233), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(63), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1589] = 3,
    ACTIONS(227), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(299), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(70), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1602] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(39), 1,
      sym_host,
    STATE(120), 1,
      sym_authority,
    STATE(130), 1,
      sym_pair,
  [1621] = 3,
    ACTIONS(227), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(231), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1634] = 3,
    ACTIONS(303), 1,
      anon_sym_SLASH,
    STATE(69), 1,
      aux_sym_path_repeat1,
    ACTIONS(306), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1647] = 3,
    ACTIONS(227), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(308), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1660] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(69), 1,
      aux_sym_path_repeat1,
    ACTIONS(310), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1673] = 6,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(312), 1,
      aux_sym_header_token1,
    ACTIONS(314), 1,
      aux_sym__whitespace_token1,
    STATE(27), 1,
      sym_variable,
    STATE(60), 1,
      aux_sym__whitespace,
  [1692] = 3,
    ACTIONS(227), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(299), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1705] = 3,
    ACTIONS(227), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(229), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1718] = 3,
    ACTIONS(227), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(229), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(73), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1731] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(316), 1,
      anon_sym_HTTP_SLASH,
    STATE(45), 1,
      aux_sym__whitespace,
    STATE(150), 1,
      sym_http_version,
  [1747] = 5,
    ACTIONS(31), 1,
      aux_sym_header_token1,
    ACTIONS(33), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(318), 1,
      aux_sym__whitespace_token1,
    STATE(77), 1,
      aux_sym__whitespace,
  [1763] = 1,
    ACTIONS(321), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1771] = 1,
    ACTIONS(323), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1779] = 2,
    ACTIONS(325), 1,
      anon_sym_SLASH,
    ACTIONS(306), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1789] = 1,
    ACTIONS(328), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1797] = 4,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(332), 1,
      sym__line,
    STATE(82), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(330), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [1811] = 1,
    ACTIONS(335), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1819] = 1,
    ACTIONS(337), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1827] = 4,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(341), 1,
      sym__line,
    STATE(82), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(339), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [1841] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(343), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(345), 1,
      aux_sym__whitespace_token1,
    STATE(105), 1,
      aux_sym__whitespace,
  [1854] = 4,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(330), 1,
      aux_sym_script_variable_token2,
    ACTIONS(347), 1,
      sym__line,
    STATE(87), 1,
      aux_sym_script_variable_repeat1,
  [1867] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(350), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(352), 1,
      aux_sym__whitespace_token1,
    STATE(101), 1,
      aux_sym__whitespace,
  [1880] = 4,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(354), 1,
      aux_sym__whitespace_token1,
    ACTIONS(356), 1,
      sym__line,
    STATE(93), 1,
      aux_sym__whitespace,
  [1893] = 4,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(330), 1,
      aux_sym_json_body_token3,
    ACTIONS(358), 1,
      sym__line,
    STATE(90), 1,
      aux_sym_script_variable_repeat1,
  [1906] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(361), 1,
      anon_sym_AT,
    ACTIONS(363), 1,
      aux_sym__whitespace_token1,
    STATE(89), 1,
      aux_sym__whitespace,
  [1919] = 4,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(330), 1,
      aux_sym_xml_body_token2,
    ACTIONS(365), 1,
      sym__line,
    STATE(92), 1,
      aux_sym_script_variable_repeat1,
  [1932] = 4,
    ACTIONS(31), 1,
      sym__line,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(368), 1,
      aux_sym__whitespace_token1,
    STATE(93), 1,
      aux_sym__whitespace,
  [1945] = 4,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(371), 1,
      aux_sym_script_variable_token2,
    ACTIONS(373), 1,
      sym__line,
    STATE(87), 1,
      aux_sym_script_variable_repeat1,
  [1958] = 4,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(375), 1,
      aux_sym_json_body_token3,
    ACTIONS(377), 1,
      sym__line,
    STATE(90), 1,
      aux_sym_script_variable_repeat1,
  [1971] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(3), 1,
      aux_sym__whitespace,
  [1984] = 1,
    ACTIONS(381), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1991] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(383), 1,
      sym_identifier,
    STATE(3), 1,
      aux_sym__whitespace,
  [2004] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      aux_sym__whitespace,
  [2017] = 4,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(387), 1,
      aux_sym_xml_body_token2,
    ACTIONS(389), 1,
      sym__line,
    STATE(92), 1,
      aux_sym_script_variable_repeat1,
  [2030] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(391), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      aux_sym__whitespace,
  [2043] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(393), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(395), 1,
      aux_sym__whitespace_token1,
    STATE(110), 1,
      aux_sym__whitespace,
  [2056] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(397), 1,
      sym_identifier,
    ACTIONS(399), 1,
      aux_sym__whitespace_token1,
    STATE(96), 1,
      aux_sym__whitespace,
  [2069] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(403), 1,
      aux_sym_xml_body_token3,
    STATE(104), 1,
      aux_sym_form_data_repeat1,
  [2082] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(406), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      aux_sym__whitespace,
  [2095] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(408), 1,
      anon_sym_EQ,
    STATE(3), 1,
      aux_sym__whitespace,
  [2108] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(410), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(412), 1,
      aux_sym__whitespace_token1,
    STATE(108), 1,
      aux_sym__whitespace,
  [2121] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(414), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      aux_sym__whitespace,
  [2134] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(416), 1,
      anon_sym_EQ,
    ACTIONS(418), 1,
      aux_sym__whitespace_token1,
    STATE(106), 1,
      aux_sym__whitespace,
  [2147] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(420), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      aux_sym__whitespace,
  [2160] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(422), 1,
      sym_identifier,
    ACTIONS(424), 1,
      aux_sym_xml_body_token3,
    STATE(104), 1,
      aux_sym_form_data_repeat1,
  [2173] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      aux_sym__whitespace_token1,
    STATE(98), 1,
      aux_sym__whitespace,
  [2186] = 4,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(354), 1,
      aux_sym__whitespace_token1,
    ACTIONS(430), 1,
      sym__line,
    STATE(93), 1,
      aux_sym__whitespace,
  [2199] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(432), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
  [2209] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(41), 1,
      sym_host,
  [2219] = 3,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(436), 1,
      sym__line,
    STATE(100), 1,
      aux_sym_script_variable_repeat1,
  [2229] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(438), 1,
      anon_sym_COLON,
    ACTIONS(440), 1,
      anon_sym_EQ,
  [2239] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(442), 1,
      aux_sym__whitespace_token1,
    STATE(99), 1,
      aux_sym__whitespace,
  [2249] = 3,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      sym__line,
    STATE(85), 1,
      aux_sym_script_variable_repeat1,
  [2259] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(38), 1,
      sym_host,
  [2269] = 3,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(446), 1,
      sym__line,
    STATE(94), 1,
      aux_sym_script_variable_repeat1,
  [2279] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(450), 1,
      aux_sym_port_token1,
  [2289] = 3,
    ACTIONS(288), 1,
      aux_sym_request_token1,
    ACTIONS(452), 1,
      sym__line,
    STATE(95), 1,
      aux_sym_script_variable_repeat1,
  [2299] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(454), 1,
      aux_sym__whitespace_token1,
    STATE(113), 1,
      aux_sym__whitespace,
  [2309] = 3,
    ACTIONS(456), 1,
      aux_sym_request_token1,
    ACTIONS(458), 1,
      aux_sym__whitespace_token1,
    STATE(76), 1,
      aux_sym__whitespace,
  [2319] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(438), 1,
      anon_sym_COLON,
  [2326] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(460), 1,
      sym_identifier,
  [2333] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(462), 1,
      anon_sym_AT,
  [2340] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(464), 1,
      anon_sym_EQ,
  [2347] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(466), 1,
      anon_sym_AT,
  [2354] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(468), 1,
      sym_identifier,
  [2361] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(470), 1,
      anon_sym_COLON_SLASH_SLASH,
  [2368] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(335), 1,
      sym_identifier,
  [2375] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(472), 1,
      sym_identifier,
  [2382] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(474), 1,
      sym_identifier,
  [2389] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(476), 1,
      anon_sym_COLON_SLASH_SLASH,
  [2396] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(478), 1,
      anon_sym_COLON,
  [2403] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(480), 1,
      aux_sym_port_token1,
  [2410] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(482), 1,
      sym_identifier,
  [2417] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(484), 1,
      aux_sym__whitespace_token1,
  [2424] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(440), 1,
      anon_sym_EQ,
  [2431] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
  [2438] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(488), 1,
      aux_sym_http_version_token1,
  [2445] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(422), 1,
      sym_identifier,
  [2452] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(490), 1,
      anon_sym_EQ,
  [2459] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(337), 1,
      sym_identifier,
  [2466] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(492), 1,
      anon_sym_AT,
  [2473] = 1,
    ACTIONS(494), 1,
      aux_sym_request_token1,
  [2477] = 1,
    ACTIONS(496), 1,
      aux_sym_request_token1,
  [2481] = 1,
    ACTIONS(498), 1,
      aux_sym_request_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 145,
  [SMALL_STATE(5)] = 188,
  [SMALL_STATE(6)] = 231,
  [SMALL_STATE(7)] = 274,
  [SMALL_STATE(8)] = 317,
  [SMALL_STATE(9)] = 356,
  [SMALL_STATE(10)] = 395,
  [SMALL_STATE(11)] = 434,
  [SMALL_STATE(12)] = 473,
  [SMALL_STATE(13)] = 512,
  [SMALL_STATE(14)] = 545,
  [SMALL_STATE(15)] = 578,
  [SMALL_STATE(16)] = 611,
  [SMALL_STATE(17)] = 634,
  [SMALL_STATE(18)] = 657,
  [SMALL_STATE(19)] = 684,
  [SMALL_STATE(20)] = 708,
  [SMALL_STATE(21)] = 732,
  [SMALL_STATE(22)] = 756,
  [SMALL_STATE(23)] = 780,
  [SMALL_STATE(24)] = 804,
  [SMALL_STATE(25)] = 825,
  [SMALL_STATE(26)] = 846,
  [SMALL_STATE(27)] = 879,
  [SMALL_STATE(28)] = 900,
  [SMALL_STATE(29)] = 921,
  [SMALL_STATE(30)] = 954,
  [SMALL_STATE(31)] = 975,
  [SMALL_STATE(32)] = 996,
  [SMALL_STATE(33)] = 1017,
  [SMALL_STATE(34)] = 1038,
  [SMALL_STATE(35)] = 1059,
  [SMALL_STATE(36)] = 1080,
  [SMALL_STATE(37)] = 1101,
  [SMALL_STATE(38)] = 1135,
  [SMALL_STATE(39)] = 1157,
  [SMALL_STATE(40)] = 1179,
  [SMALL_STATE(41)] = 1201,
  [SMALL_STATE(42)] = 1223,
  [SMALL_STATE(43)] = 1238,
  [SMALL_STATE(44)] = 1259,
  [SMALL_STATE(45)] = 1280,
  [SMALL_STATE(46)] = 1297,
  [SMALL_STATE(47)] = 1318,
  [SMALL_STATE(48)] = 1335,
  [SMALL_STATE(49)] = 1350,
  [SMALL_STATE(50)] = 1365,
  [SMALL_STATE(51)] = 1386,
  [SMALL_STATE(52)] = 1401,
  [SMALL_STATE(53)] = 1411,
  [SMALL_STATE(54)] = 1421,
  [SMALL_STATE(55)] = 1431,
  [SMALL_STATE(56)] = 1449,
  [SMALL_STATE(57)] = 1463,
  [SMALL_STATE(58)] = 1473,
  [SMALL_STATE(59)] = 1487,
  [SMALL_STATE(60)] = 1505,
  [SMALL_STATE(61)] = 1524,
  [SMALL_STATE(62)] = 1537,
  [SMALL_STATE(63)] = 1550,
  [SMALL_STATE(64)] = 1563,
  [SMALL_STATE(65)] = 1576,
  [SMALL_STATE(66)] = 1589,
  [SMALL_STATE(67)] = 1602,
  [SMALL_STATE(68)] = 1621,
  [SMALL_STATE(69)] = 1634,
  [SMALL_STATE(70)] = 1647,
  [SMALL_STATE(71)] = 1660,
  [SMALL_STATE(72)] = 1673,
  [SMALL_STATE(73)] = 1692,
  [SMALL_STATE(74)] = 1705,
  [SMALL_STATE(75)] = 1718,
  [SMALL_STATE(76)] = 1731,
  [SMALL_STATE(77)] = 1747,
  [SMALL_STATE(78)] = 1763,
  [SMALL_STATE(79)] = 1771,
  [SMALL_STATE(80)] = 1779,
  [SMALL_STATE(81)] = 1789,
  [SMALL_STATE(82)] = 1797,
  [SMALL_STATE(83)] = 1811,
  [SMALL_STATE(84)] = 1819,
  [SMALL_STATE(85)] = 1827,
  [SMALL_STATE(86)] = 1841,
  [SMALL_STATE(87)] = 1854,
  [SMALL_STATE(88)] = 1867,
  [SMALL_STATE(89)] = 1880,
  [SMALL_STATE(90)] = 1893,
  [SMALL_STATE(91)] = 1906,
  [SMALL_STATE(92)] = 1919,
  [SMALL_STATE(93)] = 1932,
  [SMALL_STATE(94)] = 1945,
  [SMALL_STATE(95)] = 1958,
  [SMALL_STATE(96)] = 1971,
  [SMALL_STATE(97)] = 1984,
  [SMALL_STATE(98)] = 1991,
  [SMALL_STATE(99)] = 2004,
  [SMALL_STATE(100)] = 2017,
  [SMALL_STATE(101)] = 2030,
  [SMALL_STATE(102)] = 2043,
  [SMALL_STATE(103)] = 2056,
  [SMALL_STATE(104)] = 2069,
  [SMALL_STATE(105)] = 2082,
  [SMALL_STATE(106)] = 2095,
  [SMALL_STATE(107)] = 2108,
  [SMALL_STATE(108)] = 2121,
  [SMALL_STATE(109)] = 2134,
  [SMALL_STATE(110)] = 2147,
  [SMALL_STATE(111)] = 2160,
  [SMALL_STATE(112)] = 2173,
  [SMALL_STATE(113)] = 2186,
  [SMALL_STATE(114)] = 2199,
  [SMALL_STATE(115)] = 2209,
  [SMALL_STATE(116)] = 2219,
  [SMALL_STATE(117)] = 2229,
  [SMALL_STATE(118)] = 2239,
  [SMALL_STATE(119)] = 2249,
  [SMALL_STATE(120)] = 2259,
  [SMALL_STATE(121)] = 2269,
  [SMALL_STATE(122)] = 2279,
  [SMALL_STATE(123)] = 2289,
  [SMALL_STATE(124)] = 2299,
  [SMALL_STATE(125)] = 2309,
  [SMALL_STATE(126)] = 2319,
  [SMALL_STATE(127)] = 2326,
  [SMALL_STATE(128)] = 2333,
  [SMALL_STATE(129)] = 2340,
  [SMALL_STATE(130)] = 2347,
  [SMALL_STATE(131)] = 2354,
  [SMALL_STATE(132)] = 2361,
  [SMALL_STATE(133)] = 2368,
  [SMALL_STATE(134)] = 2375,
  [SMALL_STATE(135)] = 2382,
  [SMALL_STATE(136)] = 2389,
  [SMALL_STATE(137)] = 2396,
  [SMALL_STATE(138)] = 2403,
  [SMALL_STATE(139)] = 2410,
  [SMALL_STATE(140)] = 2417,
  [SMALL_STATE(141)] = 2424,
  [SMALL_STATE(142)] = 2431,
  [SMALL_STATE(143)] = 2438,
  [SMALL_STATE(144)] = 2445,
  [SMALL_STATE(145)] = 2452,
  [SMALL_STATE(146)] = 2459,
  [SMALL_STATE(147)] = 2466,
  [SMALL_STATE(148)] = 2473,
  [SMALL_STATE(149)] = 2477,
  [SMALL_STATE(150)] = 2481,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(141),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(149),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(119),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(118),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(91),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 14),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 14),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 14), SHIFT_REPEAT(144),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 14), SHIFT_REPEAT(111),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 4, .production_id = 12),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 4, .production_id = 12),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 3, .production_id = 10),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 3, .production_id = 10),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 15),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 15),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(126),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 13),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 13),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 8),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 8),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(140),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(131),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(103),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 9),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 9),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 6, .production_id = 13),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 6, .production_id = 13),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 11),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 11),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, .production_id = 8),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 4, .production_id = 8),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(45),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 6),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 6),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 4),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(134),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(47),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(77),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(79),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(82),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(87),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(90),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(92),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(93),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 7),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 2),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat1, 2), SHIFT_REPEAT(104),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 5),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [486] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
