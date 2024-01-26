#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 136
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 3
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 12

enum {
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
  anon_sym_LBRACE_LBRACE = 52,
  anon_sym_RBRACE_RBRACE = 53,
  aux_sym_script_variable_token1 = 54,
  aux_sym_script_variable_token2 = 55,
  aux_sym_xml_body_token1 = 56,
  aux_sym_xml_body_token2 = 57,
  aux_sym_xml_body_token3 = 58,
  aux_sym_json_body_token1 = 59,
  aux_sym_json_body_token2 = 60,
  aux_sym_json_body_token3 = 61,
  aux_sym_json_body_token4 = 62,
  anon_sym_query = 63,
  anon_sym_LPAREN = 64,
  anon_sym_LT = 65,
  sym_const_spec = 66,
  sym_number = 67,
  sym_string = 68,
  anon_sym_true = 69,
  anon_sym_false = 70,
  aux_sym__whitespace_token1 = 71,
  aux_sym__newline_token1 = 72,
  sym__line = 73,
  sym_document = 74,
  sym_method = 75,
  sym_host = 76,
  sym_port = 77,
  sym_path = 78,
  sym_scheme = 79,
  sym_authority = 80,
  sym_http_version = 81,
  sym_target_url = 82,
  sym_request = 83,
  sym_pair = 84,
  sym_query_param = 85,
  sym_header = 86,
  sym_variable = 87,
  sym_script_variable = 88,
  sym_variable_declaration = 89,
  sym_xml_body = 90,
  sym_json_body = 91,
  sym_graphql_body = 92,
  sym_external_body = 93,
  sym_boolean = 94,
  aux_sym__whitespace = 95,
  aux_sym_document_repeat1 = 96,
  aux_sym_path_repeat1 = 97,
  aux_sym_target_url_repeat1 = 98,
  aux_sym_request_repeat1 = 99,
  aux_sym_request_repeat2 = 100,
  aux_sym_script_variable_repeat1 = 101,
  alias_sym_key = 102,
  alias_sym_name = 103,
  alias_sym_value = 104,
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
  [sym_boolean] = "boolean",
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
  [sym_boolean] = sym_boolean,
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
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 6, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 1},
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
    {field_file_path, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [1] = alias_sym_key,
    [3] = alias_sym_value,
  },
  [8] = {
    [2] = sym_path,
  },
  [9] = {
    [0] = alias_sym_name,
    [2] = alias_sym_value,
  },
  [10] = {
    [0] = alias_sym_name,
    [3] = alias_sym_value,
  },
  [11] = {
    [4] = sym_path,
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
  [45] = 3,
  [46] = 35,
  [47] = 47,
  [48] = 37,
  [49] = 42,
  [50] = 41,
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
  [83] = 68,
  [84] = 68,
  [85] = 85,
  [86] = 86,
  [87] = 3,
  [88] = 88,
  [89] = 89,
  [90] = 79,
  [91] = 68,
  [92] = 78,
  [93] = 93,
  [94] = 80,
  [95] = 95,
  [96] = 96,
  [97] = 82,
  [98] = 98,
  [99] = 81,
  [100] = 77,
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
  [119] = 69,
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
  [131] = 73,
  [132] = 123,
  [133] = 133,
  [134] = 134,
  [135] = 135,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '&') ADVANCE(70);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == 'D') ADVANCE(119);
      if (lookahead == 'G') ADVANCE(120);
      if (lookahead == 'H') ADVANCE(121);
      if (lookahead == 'L') ADVANCE(123);
      if (lookahead == 'O') ADVANCE(125);
      if (lookahead == 'P') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == ']') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'q') ADVANCE(139);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == '-') ADVANCE(157);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == '<') ADVANCE(158);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == ']') ADVANCE(152);
      if (lookahead == '}') ADVANCE(153);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead == '}') ADVANCE(153);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(79);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(81);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '{') ADVANCE(72);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '}') ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '>') ADVANCE(11);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(74);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == 'H') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '%') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == '&') ADVANCE(70);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(76);
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
      if (lookahead == 'P') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == '{') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == '}') ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == '}') ADVANCE(12);
      END_STATE();
    case 48:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 49:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(68);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '&') ADVANCE(70);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == 'D') ADVANCE(119);
      if (lookahead == 'G') ADVANCE(120);
      if (lookahead == 'H') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(123);
      if (lookahead == 'O') ADVANCE(125);
      if (lookahead == 'P') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == 'q') ADVANCE(139);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (lookahead == '.') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_coap_PLUStcp);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_coap_PLUSws);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_coaps_PLUStcp);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_coaps_PLUSws);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_json_body_token3);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_json_body_token4);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_query);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '?') ADVANCE(44);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(44);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(112);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(112);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'P') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_const_spec);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(104);
      if (lookahead == 'U') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(112);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 134:
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 136:
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 138:
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 140:
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(82);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(143);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '%') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
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
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(28);
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'k') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_im);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_ni);
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 36:
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_ws);
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_cap);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_cid);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_dns);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_geo);
      END_STATE();
    case 57:
      if (lookahead == '3') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_ipp);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_mid);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_nih);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_sms);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_urn);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_wss);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_acct);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_arcp);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_h323);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == '1') ADVANCE(97);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_pres);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_about);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_https);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_payto);
      END_STATE();
    case 97:
      if (lookahead == '1') ADVANCE(104);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_mailto);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_pkcs11);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_reload);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(110);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_telnet);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'k') ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_secret_DASHtoken);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 50},
  [6] = {.lex_state = 50},
  [7] = {.lex_state = 50},
  [8] = {.lex_state = 50},
  [9] = {.lex_state = 50},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 50},
  [12] = {.lex_state = 50},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 50},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 50},
  [17] = {.lex_state = 50},
  [18] = {.lex_state = 50},
  [19] = {.lex_state = 50},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 50},
  [23] = {.lex_state = 50},
  [24] = {.lex_state = 50},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 50},
  [27] = {.lex_state = 50},
  [28] = {.lex_state = 50},
  [29] = {.lex_state = 50},
  [30] = {.lex_state = 50},
  [31] = {.lex_state = 50},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 50},
  [35] = {.lex_state = 50},
  [36] = {.lex_state = 50},
  [37] = {.lex_state = 50},
  [38] = {.lex_state = 50},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 50},
  [42] = {.lex_state = 50},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 50},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 50},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 50},
  [52] = {.lex_state = 50},
  [53] = {.lex_state = 50},
  [54] = {.lex_state = 50},
  [55] = {.lex_state = 50},
  [56] = {.lex_state = 50},
  [57] = {.lex_state = 50},
  [58] = {.lex_state = 50},
  [59] = {.lex_state = 50},
  [60] = {.lex_state = 50},
  [61] = {.lex_state = 50},
  [62] = {.lex_state = 50},
  [63] = {.lex_state = 50},
  [64] = {.lex_state = 50},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 50},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 50},
  [70] = {.lex_state = 50},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 50},
  [73] = {.lex_state = 50},
  [74] = {.lex_state = 50},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 50},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 17},
  [79] = {.lex_state = 50},
  [80] = {.lex_state = 50},
  [81] = {.lex_state = 50},
  [82] = {.lex_state = 50},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 50},
  [86] = {.lex_state = 50},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 50},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 17},
  [93] = {.lex_state = 50},
  [94] = {.lex_state = 50},
  [95] = {.lex_state = 50},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 50},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 50},
  [100] = {.lex_state = 17},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 48},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 50},
  [107] = {.lex_state = 17},
  [108] = {.lex_state = 50},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 50},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 17},
  [113] = {.lex_state = 50},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 50},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 50},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 50},
  [121] = {.lex_state = 49},
  [122] = {.lex_state = 17},
  [123] = {.lex_state = 50},
  [124] = {.lex_state = 48},
  [125] = {.lex_state = 50},
  [126] = {.lex_state = 50},
  [127] = {.lex_state = 17},
  [128] = {.lex_state = 17},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 50},
  [131] = {.lex_state = 17},
  [132] = {.lex_state = 50},
  [133] = {.lex_state = 50},
  [134] = {.lex_state = 50},
  [135] = {.lex_state = 50},
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
    [anon_sym_HTTP_SLASH] = ACTIONS(1),
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
    [sym_document] = STATE(125),
    [sym_method] = STATE(113),
    [sym_request] = STATE(19),
    [sym_variable] = STATE(19),
    [sym_script_variable] = STATE(19),
    [sym_variable_declaration] = STATE(19),
    [aux_sym_document_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [aux_sym_method_token1] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [aux_sym_request_token1] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [aux_sym_script_variable_token1] = ACTIONS(15),
    [sym_const_spec] = ACTIONS(9),
  },
  [2] = {
    [sym_host] = STATE(29),
    [sym_path] = STATE(54),
    [sym_scheme] = STATE(122),
    [sym_authority] = STATE(107),
    [sym_target_url] = STATE(110),
    [sym_pair] = STATE(123),
    [sym_variable] = STATE(25),
    [aux_sym__whitespace] = STATE(3),
    [aux_sym_path_repeat1] = STATE(58),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_about] = ACTIONS(21),
    [anon_sym_acct] = ACTIONS(21),
    [anon_sym_arcp] = ACTIONS(21),
    [anon_sym_cap] = ACTIONS(21),
    [anon_sym_cid] = ACTIONS(21),
    [anon_sym_coap_PLUStcp] = ACTIONS(23),
    [anon_sym_coap_PLUSws] = ACTIONS(23),
    [anon_sym_coaps_PLUStcp] = ACTIONS(23),
    [anon_sym_coaps_PLUSws] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(21),
    [anon_sym_dns] = ACTIONS(21),
    [anon_sym_example] = ACTIONS(21),
    [anon_sym_file] = ACTIONS(21),
    [anon_sym_ftp] = ACTIONS(21),
    [anon_sym_geo] = ACTIONS(21),
    [anon_sym_h323] = ACTIONS(21),
    [anon_sym_http] = ACTIONS(21),
    [anon_sym_https] = ACTIONS(21),
    [anon_sym_im] = ACTIONS(21),
    [anon_sym_info] = ACTIONS(21),
    [anon_sym_ipp] = ACTIONS(21),
    [anon_sym_mailto] = ACTIONS(21),
    [anon_sym_mid] = ACTIONS(21),
    [anon_sym_ni] = ACTIONS(21),
    [anon_sym_nih] = ACTIONS(21),
    [anon_sym_payto] = ACTIONS(21),
    [anon_sym_pkcs11] = ACTIONS(21),
    [anon_sym_pres] = ACTIONS(21),
    [anon_sym_reload] = ACTIONS(21),
    [anon_sym_secret_DASHtoken] = ACTIONS(21),
    [anon_sym_session] = ACTIONS(21),
    [anon_sym_sms] = ACTIONS(21),
    [anon_sym_tag] = ACTIONS(21),
    [anon_sym_telnet] = ACTIONS(21),
    [anon_sym_urn] = ACTIONS(21),
    [anon_sym_ws] = ACTIONS(21),
    [anon_sym_wss] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(25),
    [aux_sym_request_token1] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(27),
    [aux_sym__whitespace_token1] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
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
  [58] = 10,
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
    STATE(7), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(12), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
  [100] = 10,
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
    STATE(6), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(8), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
  [142] = 10,
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
    STATE(13), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(10), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
  [184] = 10,
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
    STATE(13), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(9), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
  [226] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
      anon_sym_query,
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
    STATE(11), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
  [261] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
      anon_sym_query,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(68), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(11), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
  [296] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
      anon_sym_query,
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
    STATE(11), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
  [331] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(74), 1,
      aux_sym_xml_body_token1,
    ACTIONS(80), 1,
      anon_sym_query,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(72), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(77), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(11), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
  [366] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
      anon_sym_query,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(62), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(11), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
  [401] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(13), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(91), 4,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [428] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(95), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(93), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [449] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(99), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(97), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [470] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(105), 1,
      aux_sym_xml_body_token3,
    ACTIONS(103), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(101), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
      anon_sym_query,
  [493] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(121), 1,
      aux_sym_script_variable_token1,
    STATE(113), 1,
      sym_method,
    ACTIONS(112), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(17), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [526] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(128), 1,
      aux_sym_xml_body_token3,
    ACTIONS(126), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(124), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
      anon_sym_query,
  [549] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_script_variable_token1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      sym_comment,
    STATE(113), 1,
      sym_method,
    ACTIONS(9), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(17), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [582] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(138), 1,
      aux_sym_xml_body_token3,
    ACTIONS(136), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(134), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
      anon_sym_query,
  [605] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(142), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(140), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
      anon_sym_query,
  [625] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(146), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(144), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
      anon_sym_query,
  [645] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(150), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(148), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
      anon_sym_query,
  [665] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(154), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
      anon_sym_query,
  [685] = 10,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_AT,
    STATE(30), 1,
      sym_authority,
    STATE(56), 1,
      sym_path,
    STATE(58), 1,
      aux_sym_path_repeat1,
    STATE(132), 1,
      sym_pair,
    ACTIONS(160), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(60), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [719] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(166), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(164), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
      anon_sym_query,
  [739] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      aux_sym_path_repeat1,
    STATE(63), 1,
      sym_path,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(168), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(52), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [761] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_path,
    STATE(58), 1,
      aux_sym_path_repeat1,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(170), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(59), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [783] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_path,
    STATE(58), 1,
      aux_sym_path_repeat1,
    ACTIONS(160), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(60), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [805] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      aux_sym_path_repeat1,
    STATE(62), 1,
      sym_path,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(172), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(53), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [827] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(176), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(174), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [842] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(182), 1,
      aux_sym__whitespace_token1,
    STATE(31), 1,
      sym_boolean,
    STATE(39), 1,
      aux_sym__whitespace,
    ACTIONS(178), 2,
      sym_number,
      sym_string,
    ACTIONS(180), 2,
      anon_sym_true,
      anon_sym_false,
  [863] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(74), 1,
      sym_variable,
    ACTIONS(186), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [880] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(190), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [895] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(194), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(192), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [910] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(198), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(196), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [925] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(202), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(200), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [940] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(206), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(204), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [955] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(210), 1,
      aux_sym__whitespace_token1,
    STATE(44), 1,
      sym_boolean,
    STATE(45), 1,
      aux_sym__whitespace,
    ACTIONS(180), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(208), 2,
      sym_number,
      sym_string,
  [976] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(212), 1,
      aux_sym__whitespace_token1,
    STATE(43), 1,
      aux_sym__whitespace,
    STATE(44), 1,
      sym_boolean,
    ACTIONS(180), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(208), 2,
      sym_number,
      sym_string,
  [997] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(216), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(214), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1012] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(220), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(218), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1027] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(210), 1,
      aux_sym__whitespace_token1,
    STATE(36), 1,
      sym_boolean,
    STATE(45), 1,
      aux_sym__whitespace,
    ACTIONS(180), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(222), 2,
      sym_number,
      sym_string,
  [1048] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(226), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(224), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1063] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(228), 1,
      aux_sym__whitespace_token1,
    STATE(45), 1,
      aux_sym__whitespace,
    ACTIONS(33), 5,
      anon_sym_HTTP_SLASH,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
  [1080] = 1,
    ACTIONS(192), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1090] = 3,
    ACTIONS(231), 1,
      anon_sym_COLON,
    STATE(67), 1,
      sym_port,
    ACTIONS(233), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1104] = 1,
    ACTIONS(200), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1114] = 1,
    ACTIONS(218), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1124] = 1,
    ACTIONS(214), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1134] = 3,
    ACTIONS(235), 1,
      anon_sym_COLON,
    STATE(67), 1,
      sym_port,
    ACTIONS(233), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1148] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(237), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1161] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(170), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1174] = 3,
    ACTIONS(160), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(60), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1187] = 3,
    ACTIONS(239), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      aux_sym_path_repeat1,
    ACTIONS(242), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1200] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(172), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(53), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1213] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(168), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(52), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1226] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      aux_sym_path_repeat1,
    ACTIONS(244), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1239] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(168), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1252] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(172), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1265] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(246), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1278] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(170), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(59), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1291] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(237), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(61), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1304] = 3,
    ACTIONS(248), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(250), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1317] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(28), 1,
      sym_host,
    STATE(112), 1,
      sym_authority,
    STATE(123), 1,
      sym_pair,
  [1336] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(210), 1,
      aux_sym__whitespace_token1,
    ACTIONS(255), 1,
      anon_sym_HTTP_SLASH,
    STATE(45), 1,
      aux_sym__whitespace,
    STATE(133), 1,
      sym_http_version,
  [1352] = 1,
    ACTIONS(257), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1360] = 4,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(263), 1,
      sym__line,
    STATE(68), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(261), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [1374] = 1,
    ACTIONS(266), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1382] = 1,
    ACTIONS(268), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1390] = 4,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(272), 1,
      sym__line,
    STATE(68), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(270), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [1404] = 1,
    ACTIONS(274), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1412] = 1,
    ACTIONS(276), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1420] = 2,
    ACTIONS(278), 1,
      anon_sym_SLASH,
    ACTIONS(242), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1430] = 4,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(281), 1,
      aux_sym_json_body_token3,
    ACTIONS(283), 1,
      sym__line,
    STATE(83), 1,
      aux_sym_script_variable_repeat1,
  [1443] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(285), 1,
      anon_sym_EQ,
    STATE(3), 1,
      aux_sym__whitespace,
  [1456] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(3), 1,
      aux_sym__whitespace,
  [1469] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      aux_sym__whitespace_token1,
    STATE(77), 1,
      aux_sym__whitespace,
  [1482] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(293), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      aux_sym__whitespace,
  [1495] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(295), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(297), 1,
      aux_sym__whitespace_token1,
    STATE(79), 1,
      aux_sym__whitespace,
  [1508] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(299), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      aux_sym__whitespace,
  [1521] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(301), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(303), 1,
      aux_sym__whitespace_token1,
    STATE(81), 1,
      aux_sym__whitespace,
  [1534] = 4,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(261), 1,
      aux_sym_json_body_token3,
    ACTIONS(305), 1,
      sym__line,
    STATE(83), 1,
      aux_sym_script_variable_repeat1,
  [1547] = 4,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(261), 1,
      aux_sym_xml_body_token2,
    ACTIONS(308), 1,
      sym__line,
    STATE(84), 1,
      aux_sym_script_variable_repeat1,
  [1560] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(311), 1,
      anon_sym_AT,
    ACTIONS(313), 1,
      aux_sym__whitespace_token1,
    STATE(88), 1,
      aux_sym__whitespace,
  [1573] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      aux_sym__whitespace,
  [1586] = 4,
    ACTIONS(31), 1,
      sym__line,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(317), 1,
      aux_sym__whitespace_token1,
    STATE(87), 1,
      aux_sym__whitespace,
  [1599] = 4,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(320), 1,
      aux_sym__whitespace_token1,
    ACTIONS(322), 1,
      sym__line,
    STATE(87), 1,
      aux_sym__whitespace,
  [1612] = 4,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(324), 1,
      aux_sym__whitespace_token1,
    ACTIONS(326), 1,
      sym__line,
    STATE(102), 1,
      aux_sym__whitespace,
  [1625] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(328), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      aux_sym__whitespace,
  [1638] = 4,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(261), 1,
      aux_sym_script_variable_token2,
    ACTIONS(330), 1,
      sym__line,
    STATE(91), 1,
      aux_sym_script_variable_repeat1,
  [1651] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(335), 1,
      aux_sym__whitespace_token1,
    STATE(100), 1,
      aux_sym__whitespace,
  [1664] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(339), 1,
      aux_sym__whitespace_token1,
    STATE(76), 1,
      aux_sym__whitespace,
  [1677] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(341), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(343), 1,
      aux_sym__whitespace_token1,
    STATE(90), 1,
      aux_sym__whitespace,
  [1690] = 1,
    ACTIONS(345), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1697] = 4,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(320), 1,
      aux_sym__whitespace_token1,
    ACTIONS(347), 1,
      sym__line,
    STATE(87), 1,
      aux_sym__whitespace,
  [1710] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(349), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(351), 1,
      aux_sym__whitespace_token1,
    STATE(99), 1,
      aux_sym__whitespace,
  [1723] = 4,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(353), 1,
      aux_sym_xml_body_token2,
    ACTIONS(355), 1,
      sym__line,
    STATE(84), 1,
      aux_sym_script_variable_repeat1,
  [1736] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(357), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      aux_sym__whitespace,
  [1749] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(359), 1,
      sym_identifier,
    STATE(3), 1,
      aux_sym__whitespace,
  [1762] = 4,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(361), 1,
      aux_sym_script_variable_token2,
    ACTIONS(363), 1,
      sym__line,
    STATE(91), 1,
      aux_sym_script_variable_repeat1,
  [1775] = 4,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(320), 1,
      aux_sym__whitespace_token1,
    ACTIONS(365), 1,
      sym__line,
    STATE(87), 1,
      aux_sym__whitespace,
  [1788] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(369), 1,
      aux_sym_port_token1,
  [1798] = 3,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(371), 1,
      sym__line,
    STATE(101), 1,
      aux_sym_script_variable_repeat1,
  [1808] = 3,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(373), 1,
      sym__line,
    STATE(98), 1,
      aux_sym_script_variable_repeat1,
  [1818] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(375), 1,
      aux_sym__whitespace_token1,
    STATE(86), 1,
      aux_sym__whitespace,
  [1828] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(377), 1,
      sym_identifier,
    STATE(30), 1,
      sym_host,
  [1838] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(379), 1,
      aux_sym__whitespace_token1,
    STATE(96), 1,
      aux_sym__whitespace,
  [1848] = 3,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(381), 1,
      sym__line,
    STATE(75), 1,
      aux_sym_script_variable_repeat1,
  [1858] = 3,
    ACTIONS(383), 1,
      aux_sym_request_token1,
    ACTIONS(385), 1,
      aux_sym__whitespace_token1,
    STATE(66), 1,
      aux_sym__whitespace,
  [1868] = 3,
    ACTIONS(259), 1,
      aux_sym_request_token1,
    ACTIONS(387), 1,
      sym__line,
    STATE(71), 1,
      aux_sym_script_variable_repeat1,
  [1878] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(377), 1,
      sym_identifier,
    STATE(27), 1,
      sym_host,
  [1888] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(389), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
  [1898] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(391), 1,
      sym_identifier,
  [1905] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(393), 1,
      anon_sym_AT,
  [1912] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(395), 1,
      sym_identifier,
  [1919] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(397), 1,
      sym_identifier,
  [1926] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(399), 1,
      anon_sym_COLON,
  [1933] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(266), 1,
      sym_identifier,
  [1940] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(401), 1,
      aux_sym__whitespace_token1,
  [1947] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(403), 1,
      aux_sym_http_version_token1,
  [1954] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(405), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1961] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(407), 1,
      anon_sym_AT,
  [1968] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(409), 1,
      aux_sym_port_token1,
  [1975] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
  [1982] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(413), 1,
      anon_sym_EQ,
  [1989] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(415), 1,
      sym_identifier,
  [1996] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(417), 1,
      sym_identifier,
  [2003] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(419), 1,
      anon_sym_COLON_SLASH_SLASH,
  [2010] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(421), 1,
      anon_sym_COLON,
  [2017] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(276), 1,
      sym_identifier,
  [2024] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(423), 1,
      anon_sym_AT,
  [2031] = 1,
    ACTIONS(425), 1,
      aux_sym_request_token1,
  [2035] = 1,
    ACTIONS(427), 1,
      aux_sym_request_token1,
  [2039] = 1,
    ACTIONS(429), 1,
      aux_sym_request_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 184,
  [SMALL_STATE(8)] = 226,
  [SMALL_STATE(9)] = 261,
  [SMALL_STATE(10)] = 296,
  [SMALL_STATE(11)] = 331,
  [SMALL_STATE(12)] = 366,
  [SMALL_STATE(13)] = 401,
  [SMALL_STATE(14)] = 428,
  [SMALL_STATE(15)] = 449,
  [SMALL_STATE(16)] = 470,
  [SMALL_STATE(17)] = 493,
  [SMALL_STATE(18)] = 526,
  [SMALL_STATE(19)] = 549,
  [SMALL_STATE(20)] = 582,
  [SMALL_STATE(21)] = 605,
  [SMALL_STATE(22)] = 625,
  [SMALL_STATE(23)] = 645,
  [SMALL_STATE(24)] = 665,
  [SMALL_STATE(25)] = 685,
  [SMALL_STATE(26)] = 719,
  [SMALL_STATE(27)] = 739,
  [SMALL_STATE(28)] = 761,
  [SMALL_STATE(29)] = 783,
  [SMALL_STATE(30)] = 805,
  [SMALL_STATE(31)] = 827,
  [SMALL_STATE(32)] = 842,
  [SMALL_STATE(33)] = 863,
  [SMALL_STATE(34)] = 880,
  [SMALL_STATE(35)] = 895,
  [SMALL_STATE(36)] = 910,
  [SMALL_STATE(37)] = 925,
  [SMALL_STATE(38)] = 940,
  [SMALL_STATE(39)] = 955,
  [SMALL_STATE(40)] = 976,
  [SMALL_STATE(41)] = 997,
  [SMALL_STATE(42)] = 1012,
  [SMALL_STATE(43)] = 1027,
  [SMALL_STATE(44)] = 1048,
  [SMALL_STATE(45)] = 1063,
  [SMALL_STATE(46)] = 1080,
  [SMALL_STATE(47)] = 1090,
  [SMALL_STATE(48)] = 1104,
  [SMALL_STATE(49)] = 1114,
  [SMALL_STATE(50)] = 1124,
  [SMALL_STATE(51)] = 1134,
  [SMALL_STATE(52)] = 1148,
  [SMALL_STATE(53)] = 1161,
  [SMALL_STATE(54)] = 1174,
  [SMALL_STATE(55)] = 1187,
  [SMALL_STATE(56)] = 1200,
  [SMALL_STATE(57)] = 1213,
  [SMALL_STATE(58)] = 1226,
  [SMALL_STATE(59)] = 1239,
  [SMALL_STATE(60)] = 1252,
  [SMALL_STATE(61)] = 1265,
  [SMALL_STATE(62)] = 1278,
  [SMALL_STATE(63)] = 1291,
  [SMALL_STATE(64)] = 1304,
  [SMALL_STATE(65)] = 1317,
  [SMALL_STATE(66)] = 1336,
  [SMALL_STATE(67)] = 1352,
  [SMALL_STATE(68)] = 1360,
  [SMALL_STATE(69)] = 1374,
  [SMALL_STATE(70)] = 1382,
  [SMALL_STATE(71)] = 1390,
  [SMALL_STATE(72)] = 1404,
  [SMALL_STATE(73)] = 1412,
  [SMALL_STATE(74)] = 1420,
  [SMALL_STATE(75)] = 1430,
  [SMALL_STATE(76)] = 1443,
  [SMALL_STATE(77)] = 1456,
  [SMALL_STATE(78)] = 1469,
  [SMALL_STATE(79)] = 1482,
  [SMALL_STATE(80)] = 1495,
  [SMALL_STATE(81)] = 1508,
  [SMALL_STATE(82)] = 1521,
  [SMALL_STATE(83)] = 1534,
  [SMALL_STATE(84)] = 1547,
  [SMALL_STATE(85)] = 1560,
  [SMALL_STATE(86)] = 1573,
  [SMALL_STATE(87)] = 1586,
  [SMALL_STATE(88)] = 1599,
  [SMALL_STATE(89)] = 1612,
  [SMALL_STATE(90)] = 1625,
  [SMALL_STATE(91)] = 1638,
  [SMALL_STATE(92)] = 1651,
  [SMALL_STATE(93)] = 1664,
  [SMALL_STATE(94)] = 1677,
  [SMALL_STATE(95)] = 1690,
  [SMALL_STATE(96)] = 1697,
  [SMALL_STATE(97)] = 1710,
  [SMALL_STATE(98)] = 1723,
  [SMALL_STATE(99)] = 1736,
  [SMALL_STATE(100)] = 1749,
  [SMALL_STATE(101)] = 1762,
  [SMALL_STATE(102)] = 1775,
  [SMALL_STATE(103)] = 1788,
  [SMALL_STATE(104)] = 1798,
  [SMALL_STATE(105)] = 1808,
  [SMALL_STATE(106)] = 1818,
  [SMALL_STATE(107)] = 1828,
  [SMALL_STATE(108)] = 1838,
  [SMALL_STATE(109)] = 1848,
  [SMALL_STATE(110)] = 1858,
  [SMALL_STATE(111)] = 1868,
  [SMALL_STATE(112)] = 1878,
  [SMALL_STATE(113)] = 1888,
  [SMALL_STATE(114)] = 1898,
  [SMALL_STATE(115)] = 1905,
  [SMALL_STATE(116)] = 1912,
  [SMALL_STATE(117)] = 1919,
  [SMALL_STATE(118)] = 1926,
  [SMALL_STATE(119)] = 1933,
  [SMALL_STATE(120)] = 1940,
  [SMALL_STATE(121)] = 1947,
  [SMALL_STATE(122)] = 1954,
  [SMALL_STATE(123)] = 1961,
  [SMALL_STATE(124)] = 1968,
  [SMALL_STATE(125)] = 1975,
  [SMALL_STATE(126)] = 1982,
  [SMALL_STATE(127)] = 1989,
  [SMALL_STATE(128)] = 1996,
  [SMALL_STATE(129)] = 2003,
  [SMALL_STATE(130)] = 2010,
  [SMALL_STATE(131)] = 2017,
  [SMALL_STATE(132)] = 2024,
  [SMALL_STATE(133)] = 2031,
  [SMALL_STATE(134)] = 2035,
  [SMALL_STATE(135)] = 2039,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(134),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(111),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(106),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(85),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(130),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 10),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 10),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 9),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 9),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(104),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 8),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 8),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 11),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 11),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 6),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 6),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 4),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(45),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(33),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(114),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(68),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(72),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(83),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(84),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(87),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(91),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 7),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [411] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
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
