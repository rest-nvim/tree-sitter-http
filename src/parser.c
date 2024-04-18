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
#define STATE_COUNT 221
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 173
#define ALIAS_COUNT 1
#define TOKEN_COUNT 140
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 24

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
  anon_sym_QMARK = 48,
  sym_status_code = 49,
  anon_sym_Continue = 50,
  anon_sym_SwitchingProtocols = 51,
  anon_sym_Processing = 52,
  anon_sym_OK = 53,
  anon_sym_Created = 54,
  anon_sym_Accepted = 55,
  anon_sym_Non_DASHAuthoritativeInformation = 56,
  anon_sym_NoContent = 57,
  anon_sym_ResetContent = 58,
  anon_sym_PartialContent = 59,
  anon_sym_Multi_DASHStatus = 60,
  anon_sym_AlreadyReported = 61,
  anon_sym_IMUsed = 62,
  anon_sym_MultipleChoices = 63,
  anon_sym_MovedPermanently = 64,
  anon_sym_Found = 65,
  anon_sym_SeeOther = 66,
  anon_sym_NotModified = 67,
  anon_sym_UseProxy = 68,
  anon_sym_SwitchProxy = 69,
  anon_sym_TemporaryRedirect = 70,
  anon_sym_PermanentRedirect = 71,
  anon_sym_BadRequest = 72,
  anon_sym_Unauthorized = 73,
  anon_sym_PaymentRequired = 74,
  anon_sym_Forbidden = 75,
  anon_sym_NotFound = 76,
  anon_sym_MethodNotAllowed = 77,
  anon_sym_NotAcceptable = 78,
  anon_sym_ProxyAuthenticationRequired = 79,
  anon_sym_RequestTimeout = 80,
  anon_sym_Conflict = 81,
  anon_sym_Gone = 82,
  anon_sym_LengthRequired = 83,
  anon_sym_PreconditionFailed = 84,
  anon_sym_PayloadTooLarge = 85,
  anon_sym_URITooLong = 86,
  anon_sym_UnsupportedMediaType = 87,
  anon_sym_RangeNotSatisfiable = 88,
  anon_sym_ExpectationFailed = 89,
  anon_sym_I_SQUOTEmateapot = 90,
  anon_sym_MisdirectedRequest = 91,
  anon_sym_UnprocessableEntity = 92,
  anon_sym_Locked = 93,
  anon_sym_FailedDependency = 94,
  anon_sym_TooEarly = 95,
  anon_sym_UpgradeRequired = 96,
  anon_sym_PreconditionRequired = 97,
  anon_sym_TooManyRequests = 98,
  anon_sym_RequestHeaderFieldsTooLarge = 99,
  anon_sym_UnavailableForLegalReasons = 100,
  anon_sym_InternalServerError = 101,
  anon_sym_NotImplemented = 102,
  anon_sym_BadGateway = 103,
  anon_sym_ServiceUnavailable = 104,
  anon_sym_GatewayTimeout = 105,
  anon_sym_HTTPVersionNotSupported = 106,
  anon_sym_VariantAlsoNegotiates = 107,
  anon_sym_InsufficientStorage = 108,
  anon_sym_LoopDetected = 109,
  anon_sym_NotExtended = 110,
  anon_sym_NetworkAuthenticationRequired = 111,
  aux_sym_request_token1 = 112,
  anon_sym_AMP = 113,
  anon_sym_EQ = 114,
  aux_sym_header_token1 = 115,
  aux_sym_header_token2 = 116,
  anon_sym_LBRACE_LBRACE = 117,
  anon_sym_RBRACE_RBRACE = 118,
  aux_sym_script_variable_token1 = 119,
  aux_sym_script_variable_token2 = 120,
  aux_sym_xml_body_token1 = 121,
  aux_sym_xml_body_token2 = 122,
  aux_sym_xml_body_token3 = 123,
  aux_sym_json_body_token1 = 124,
  aux_sym_json_body_token2 = 125,
  aux_sym_json_body_token3 = 126,
  aux_sym_json_body_token4 = 127,
  anon_sym_query = 128,
  anon_sym_LPAREN = 129,
  anon_sym_LT = 130,
  sym_query_key = 131,
  sym_param = 132,
  sym_number = 133,
  sym_string = 134,
  anon_sym_true = 135,
  anon_sym_false = 136,
  aux_sym__whitespace_token1 = 137,
  aux_sym__newline_token1 = 138,
  sym__line = 139,
  sym_document = 140,
  sym_host = 141,
  sym_port = 142,
  sym_path = 143,
  sym_scheme = 144,
  sym_authority = 145,
  sym_http_version = 146,
  sym_target_url = 147,
  sym_status_text = 148,
  sym_response = 149,
  sym_request = 150,
  sym_pair = 151,
  sym_query_param = 152,
  sym_host_url = 153,
  sym_header = 154,
  sym_variable = 155,
  sym_script_variable = 156,
  sym_variable_declaration = 157,
  sym_xml_body = 158,
  sym_json_body = 159,
  sym_graphql_body = 160,
  sym_external_body = 161,
  sym_form_data = 162,
  sym_boolean = 163,
  aux_sym__whitespace = 164,
  aux_sym_document_repeat1 = 165,
  aux_sym_path_repeat1 = 166,
  aux_sym_target_url_repeat1 = 167,
  aux_sym_request_repeat1 = 168,
  aux_sym_request_repeat2 = 169,
  aux_sym_script_variable_repeat1 = 170,
  aux_sym_form_data_repeat1 = 171,
  aux_sym_form_data_repeat2 = 172,
  alias_sym_name = 173,
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
  [anon_sym_QMARK] = "\?",
  [sym_status_code] = "status_code",
  [anon_sym_Continue] = "Continue",
  [anon_sym_SwitchingProtocols] = "Switching Protocols",
  [anon_sym_Processing] = "Processing",
  [anon_sym_OK] = "OK",
  [anon_sym_Created] = "Created",
  [anon_sym_Accepted] = "Accepted",
  [anon_sym_Non_DASHAuthoritativeInformation] = "Non-Authoritative Information",
  [anon_sym_NoContent] = "No Content",
  [anon_sym_ResetContent] = "Reset Content",
  [anon_sym_PartialContent] = "Partial Content",
  [anon_sym_Multi_DASHStatus] = "Multi-Status",
  [anon_sym_AlreadyReported] = "Already Reported",
  [anon_sym_IMUsed] = "IM Used",
  [anon_sym_MultipleChoices] = "Multiple Choices",
  [anon_sym_MovedPermanently] = "Moved Permanently",
  [anon_sym_Found] = "Found",
  [anon_sym_SeeOther] = "See Other",
  [anon_sym_NotModified] = "Not Modified",
  [anon_sym_UseProxy] = "Use Proxy",
  [anon_sym_SwitchProxy] = "Switch Proxy",
  [anon_sym_TemporaryRedirect] = "Temporary Redirect",
  [anon_sym_PermanentRedirect] = "Permanent Redirect",
  [anon_sym_BadRequest] = "Bad Request",
  [anon_sym_Unauthorized] = "Unauthorized",
  [anon_sym_PaymentRequired] = "Payment Required",
  [anon_sym_Forbidden] = "Forbidden",
  [anon_sym_NotFound] = "Not Found",
  [anon_sym_MethodNotAllowed] = "Method Not Allowed",
  [anon_sym_NotAcceptable] = "Not Acceptable",
  [anon_sym_ProxyAuthenticationRequired] = "Proxy Authentication Required",
  [anon_sym_RequestTimeout] = "Request Timeout",
  [anon_sym_Conflict] = "Conflict",
  [anon_sym_Gone] = "Gone",
  [anon_sym_LengthRequired] = "Length Required",
  [anon_sym_PreconditionFailed] = "Precondition Failed",
  [anon_sym_PayloadTooLarge] = "Payload Too Large",
  [anon_sym_URITooLong] = "URI Too Long",
  [anon_sym_UnsupportedMediaType] = "Unsupported Media Type",
  [anon_sym_RangeNotSatisfiable] = "Range Not Satisfiable",
  [anon_sym_ExpectationFailed] = "Expectation Failed",
  [anon_sym_I_SQUOTEmateapot] = "I'm a teapot",
  [anon_sym_MisdirectedRequest] = "Misdirected Request",
  [anon_sym_UnprocessableEntity] = "Unprocessable Entity",
  [anon_sym_Locked] = "Locked",
  [anon_sym_FailedDependency] = "Failed Dependency",
  [anon_sym_TooEarly] = "Too Early",
  [anon_sym_UpgradeRequired] = "Upgrade Required",
  [anon_sym_PreconditionRequired] = "Precondition Required",
  [anon_sym_TooManyRequests] = "Too Many Requests",
  [anon_sym_RequestHeaderFieldsTooLarge] = "Request Header Fields Too Large",
  [anon_sym_UnavailableForLegalReasons] = "Unavailable For Legal Reasons",
  [anon_sym_InternalServerError] = "Internal Server Error",
  [anon_sym_NotImplemented] = "Not Implemented",
  [anon_sym_BadGateway] = "Bad Gateway",
  [anon_sym_ServiceUnavailable] = "Service Unavailable",
  [anon_sym_GatewayTimeout] = "Gateway Timeout",
  [anon_sym_HTTPVersionNotSupported] = "HTTP Version Not Supported",
  [anon_sym_VariantAlsoNegotiates] = "Variant Also Negotiates",
  [anon_sym_InsufficientStorage] = "Insufficient Storage",
  [anon_sym_LoopDetected] = "Loop Detected",
  [anon_sym_NotExtended] = "Not Extended",
  [anon_sym_NetworkAuthenticationRequired] = "Network Authentication Required",
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
  [sym_status_text] = "status_text",
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
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_status_code] = sym_status_code,
  [anon_sym_Continue] = anon_sym_Continue,
  [anon_sym_SwitchingProtocols] = anon_sym_SwitchingProtocols,
  [anon_sym_Processing] = anon_sym_Processing,
  [anon_sym_OK] = anon_sym_OK,
  [anon_sym_Created] = anon_sym_Created,
  [anon_sym_Accepted] = anon_sym_Accepted,
  [anon_sym_Non_DASHAuthoritativeInformation] = anon_sym_Non_DASHAuthoritativeInformation,
  [anon_sym_NoContent] = anon_sym_NoContent,
  [anon_sym_ResetContent] = anon_sym_ResetContent,
  [anon_sym_PartialContent] = anon_sym_PartialContent,
  [anon_sym_Multi_DASHStatus] = anon_sym_Multi_DASHStatus,
  [anon_sym_AlreadyReported] = anon_sym_AlreadyReported,
  [anon_sym_IMUsed] = anon_sym_IMUsed,
  [anon_sym_MultipleChoices] = anon_sym_MultipleChoices,
  [anon_sym_MovedPermanently] = anon_sym_MovedPermanently,
  [anon_sym_Found] = anon_sym_Found,
  [anon_sym_SeeOther] = anon_sym_SeeOther,
  [anon_sym_NotModified] = anon_sym_NotModified,
  [anon_sym_UseProxy] = anon_sym_UseProxy,
  [anon_sym_SwitchProxy] = anon_sym_SwitchProxy,
  [anon_sym_TemporaryRedirect] = anon_sym_TemporaryRedirect,
  [anon_sym_PermanentRedirect] = anon_sym_PermanentRedirect,
  [anon_sym_BadRequest] = anon_sym_BadRequest,
  [anon_sym_Unauthorized] = anon_sym_Unauthorized,
  [anon_sym_PaymentRequired] = anon_sym_PaymentRequired,
  [anon_sym_Forbidden] = anon_sym_Forbidden,
  [anon_sym_NotFound] = anon_sym_NotFound,
  [anon_sym_MethodNotAllowed] = anon_sym_MethodNotAllowed,
  [anon_sym_NotAcceptable] = anon_sym_NotAcceptable,
  [anon_sym_ProxyAuthenticationRequired] = anon_sym_ProxyAuthenticationRequired,
  [anon_sym_RequestTimeout] = anon_sym_RequestTimeout,
  [anon_sym_Conflict] = anon_sym_Conflict,
  [anon_sym_Gone] = anon_sym_Gone,
  [anon_sym_LengthRequired] = anon_sym_LengthRequired,
  [anon_sym_PreconditionFailed] = anon_sym_PreconditionFailed,
  [anon_sym_PayloadTooLarge] = anon_sym_PayloadTooLarge,
  [anon_sym_URITooLong] = anon_sym_URITooLong,
  [anon_sym_UnsupportedMediaType] = anon_sym_UnsupportedMediaType,
  [anon_sym_RangeNotSatisfiable] = anon_sym_RangeNotSatisfiable,
  [anon_sym_ExpectationFailed] = anon_sym_ExpectationFailed,
  [anon_sym_I_SQUOTEmateapot] = anon_sym_I_SQUOTEmateapot,
  [anon_sym_MisdirectedRequest] = anon_sym_MisdirectedRequest,
  [anon_sym_UnprocessableEntity] = anon_sym_UnprocessableEntity,
  [anon_sym_Locked] = anon_sym_Locked,
  [anon_sym_FailedDependency] = anon_sym_FailedDependency,
  [anon_sym_TooEarly] = anon_sym_TooEarly,
  [anon_sym_UpgradeRequired] = anon_sym_UpgradeRequired,
  [anon_sym_PreconditionRequired] = anon_sym_PreconditionRequired,
  [anon_sym_TooManyRequests] = anon_sym_TooManyRequests,
  [anon_sym_RequestHeaderFieldsTooLarge] = anon_sym_RequestHeaderFieldsTooLarge,
  [anon_sym_UnavailableForLegalReasons] = anon_sym_UnavailableForLegalReasons,
  [anon_sym_InternalServerError] = anon_sym_InternalServerError,
  [anon_sym_NotImplemented] = anon_sym_NotImplemented,
  [anon_sym_BadGateway] = anon_sym_BadGateway,
  [anon_sym_ServiceUnavailable] = anon_sym_ServiceUnavailable,
  [anon_sym_GatewayTimeout] = anon_sym_GatewayTimeout,
  [anon_sym_HTTPVersionNotSupported] = anon_sym_HTTPVersionNotSupported,
  [anon_sym_VariantAlsoNegotiates] = anon_sym_VariantAlsoNegotiates,
  [anon_sym_InsufficientStorage] = anon_sym_InsufficientStorage,
  [anon_sym_LoopDetected] = anon_sym_LoopDetected,
  [anon_sym_NotExtended] = anon_sym_NotExtended,
  [anon_sym_NetworkAuthenticationRequired] = anon_sym_NetworkAuthenticationRequired,
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
  [sym_status_text] = sym_status_text,
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
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_status_code] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SwitchingProtocols] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Processing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Created] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Accepted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Non_DASHAuthoritativeInformation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NoContent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ResetContent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PartialContent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Multi_DASHStatus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AlreadyReported] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IMUsed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MultipleChoices] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MovedPermanently] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Found] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SeeOther] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NotModified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UseProxy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SwitchProxy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TemporaryRedirect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PermanentRedirect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BadRequest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Unauthorized] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PaymentRequired] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Forbidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NotFound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MethodNotAllowed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NotAcceptable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ProxyAuthenticationRequired] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RequestTimeout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Conflict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Gone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LengthRequired] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PreconditionFailed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PayloadTooLarge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_URITooLong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UnsupportedMediaType] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RangeNotSatisfiable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ExpectationFailed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I_SQUOTEmateapot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MisdirectedRequest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UnprocessableEntity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Locked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FailedDependency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TooEarly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UpgradeRequired] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PreconditionRequired] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TooManyRequests] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RequestHeaderFieldsTooLarge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UnavailableForLegalReasons] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InternalServerError] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NotImplemented] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BadGateway] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ServiceUnavailable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GatewayTimeout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTPVersionNotSupported] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VariantAlsoNegotiates] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_InsufficientStorage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LoopDetected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NotExtended] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NetworkAuthenticationRequired] = {
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
  [sym_status_text] = {
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 1},
  [14] = {.index = 5, .length = 2},
  [15] = {.index = 5, .length = 2},
  [16] = {.index = 21, .length = 2},
  [17] = {.index = 21, .length = 2},
  [18] = {.index = 23, .length = 4},
  [19] = {.index = 27, .length = 1},
  [20] = {.index = 28, .length = 4},
  [21] = {.index = 32, .length = 4},
  [22] = {.index = 36, .length = 4},
  [23] = {.index = 2, .length = 2},
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
    {field_key, 1},
  [8] =
    {field_key, 0},
    {field_value, 1},
  [10] =
    {field_name, 1},
    {field_value, 4},
  [12] =
    {field_key, 1},
    {field_value, 2},
  [14] =
    {field_key, 0},
    {field_value, 2},
  [16] =
    {field_name, 1},
    {field_value, 5},
  [18] =
    {field_key, 1},
    {field_value, 3},
  [20] =
    {field_file_path, 2},
  [21] =
    {field_name, 0},
    {field_value, 3},
  [23] =
    {field_name, 0},
    {field_name, 3, .inherited = true},
    {field_value, 2},
    {field_value, 3, .inherited = true},
  [27] =
    {field_file_path, 4},
  [28] =
    {field_name, 0},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [32] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [36] =
    {field_name, 0},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [13] = {
    [2] = sym_path,
  },
  [14] = {
    [0] = alias_sym_name,
  },
  [15] = {
    [2] = aux_sym_header_token1,
  },
  [16] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
  },
  [17] = {
    [0] = alias_sym_name,
  },
  [18] = {
    [2] = aux_sym_header_token1,
  },
  [19] = {
    [4] = sym_path,
  },
  [20] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
    [4] = aux_sym_header_token1,
  },
  [22] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
    [4] = aux_sym_header_token1,
    [5] = aux_sym_header_token1,
  },
  [23] = {
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
  [7] = 7,
  [8] = 2,
  [9] = 3,
  [10] = 2,
  [11] = 3,
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
  [71] = 64,
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
  [82] = 44,
  [83] = 53,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 45,
  [89] = 89,
  [90] = 56,
  [91] = 91,
  [92] = 29,
  [93] = 30,
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
  [104] = 53,
  [105] = 105,
  [106] = 106,
  [107] = 85,
  [108] = 87,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 44,
  [114] = 114,
  [115] = 56,
  [116] = 45,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 2,
  [123] = 123,
  [124] = 55,
  [125] = 110,
  [126] = 126,
  [127] = 110,
  [128] = 128,
  [129] = 2,
  [130] = 128,
  [131] = 131,
  [132] = 126,
  [133] = 118,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 119,
  [138] = 138,
  [139] = 119,
  [140] = 140,
  [141] = 141,
  [142] = 54,
  [143] = 143,
  [144] = 144,
  [145] = 128,
  [146] = 138,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 117,
  [151] = 151,
  [152] = 152,
  [153] = 140,
  [154] = 140,
  [155] = 138,
  [156] = 121,
  [157] = 2,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 110,
  [163] = 126,
  [164] = 121,
  [165] = 3,
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
  [182] = 3,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 175,
  [189] = 3,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 148,
  [194] = 161,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 199,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 192,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 212,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 211,
  [219] = 219,
  [220] = 220,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(533);
      ADVANCE_MAP(
        '\n', 604,
        '\r', 604,
        '"', 43,
        '#', 534,
        '&', 605,
        '(', 627,
        '-', 675,
        '/', 538,
        ':', 535,
        '<', 628,
        '=', 606,
        '?', 548,
        '@', 544,
        'H', 685,
        '[', 13,
        ']', 14,
        'c', 816,
        'f', 690,
        't', 837,
        '{', 15,
        '}', 16,
        '\t', 909,
        0x0b, 909,
        ' ', 909,
      );
      if (lookahead == '0' ||
          ('6' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 604,
        '\r', 604,
        '/', 538,
        '?', 548,
        '@', 544,
        '{', 523,
        '\t', 909,
        0x0b, 909,
        ' ', 909,
      );
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 604,
        '\r', 600,
        '&', 605,
        '/', 539,
        '{', 900,
        '\t', 901,
        0x0b, 901,
        ' ', 901,
      );
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '=') ADVANCE(901);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(600);
      if (lookahead == '&') ADVANCE(605);
      if (lookahead == '/') ADVANCE(539);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(901);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(600);
      if (lookahead == '&') ADVANCE(605);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(901);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(601);
      if (lookahead == '&') ADVANCE(605);
      if (lookahead == '=') ADVANCE(607);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(899);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(601);
      if (lookahead == '&') ADVANCE(605);
      if (lookahead == '=') ADVANCE(902);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(899);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(602);
      if (lookahead == '-') ADVANCE(917);
      if (lookahead != 0) ADVANCE(921);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(602);
      if (lookahead == '<') ADVANCE(918);
      if (lookahead != 0) ADVANCE(921);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(602);
      if (lookahead == ']') ADVANCE(912);
      if (lookahead == '}') ADVANCE(913);
      if (lookahead != 0) ADVANCE(921);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(602);
      if (lookahead == '}') ADVANCE(913);
      if (lookahead != 0) ADVANCE(921);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(602);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(911);
      if (lookahead != 0) ADVANCE(921);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(602);
      if (lookahead != 0) ADVANCE(921);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(624);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(626);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(623);
      if (lookahead == '{') ADVANCE(616);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(625);
      if (lookahead == '}') ADVANCE(618);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(622);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(619);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(608);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '\f', 19,
        '/', 615,
        '@', 544,
        'c', 612,
        '{', 523,
        '\n', 603,
        '\r', 603,
        '\t', 910,
        0x0b, 910,
        ' ', 910,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(461);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 40:
      ADVANCE_MAP(
        '"', 43,
        ':', 47,
        'A', 792,
        'B', 692,
        'E', 890,
        'F', 693,
        'G', 694,
        'H', 687,
        'I', 672,
        'L', 735,
        'M', 739,
        'N', 743,
        'P', 695,
        'R', 705,
        'S', 736,
        'T', 737,
        'U', 683,
        'V', 699,
        'f', 690,
        't', 837,
        '\n', 604,
        '\r', 604,
        '\t', 909,
        0x0b, 909,
        ' ', 909,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(896);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(690);
      if (lookahead == 't') ADVANCE(837);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(896);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        '"', 43,
        'f', 130,
        't', 422,
        '\n', 604,
        '\r', 604,
        '\t', 909,
        0x0b, 909,
        ' ', 909,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(903);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(904);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '%') ADVANCE(18);
      END_STATE();
    case 45:
      ADVANCE_MAP(
        '(', 627,
        '/', 538,
        '=', 606,
        '@', 544,
        'c', 816,
        '{', 523,
        '}', 524,
        '\n', 604,
        '\r', 604,
        '\t', 909,
        0x0b, 909,
        ' ', 909,
      );
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(547);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == '>') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(621);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 51:
      ADVANCE_MAP(
        'A', 792,
        'B', 692,
        'E', 890,
        'F', 693,
        'G', 694,
        'H', 689,
        'I', 672,
        'L', 735,
        'M', 739,
        'N', 743,
        'P', 695,
        'R', 705,
        'S', 736,
        'T', 737,
        'U', 683,
        'V', 699,
        '\n', 604,
        '\r', 604,
        '\t', 909,
        0x0b, 909,
        ' ', 909,
      );
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(142);
      if (lookahead == 'E') ADVANCE(513);
      if (lookahead == 'F') ADVANCE(344);
      if (lookahead == 'I') ADVANCE(312);
      if (lookahead == 'M') ADVANCE(345);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(499);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(296);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(295);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(505);
      END_STATE();
    case 57:
      if (lookahead == 'C') ADVANCE(343);
      END_STATE();
    case 58:
      if (lookahead == 'C') ADVANCE(261);
      END_STATE();
    case 59:
      if (lookahead == 'C') ADVANCE(378);
      END_STATE();
    case 60:
      if (lookahead == 'C') ADVANCE(379);
      END_STATE();
    case 61:
      if (lookahead == 'D') ADVANCE(240);
      END_STATE();
    case 62:
      if (lookahead == 'D') ADVANCE(197);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead == 'M') ADVANCE(113);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(425);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(333);
      END_STATE();
    case 66:
      if (lookahead == 'F') ADVANCE(124);
      END_STATE();
    case 67:
      if (lookahead == 'F') ADVANCE(374);
      END_STATE();
    case 68:
      if (lookahead == 'F') ADVANCE(272);
      END_STATE();
    case 69:
      if (lookahead == 'F') ADVANCE(133);
      if (lookahead == 'R') ADVANCE(248);
      END_STATE();
    case 70:
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'R') ADVANCE(177);
      END_STATE();
    case 71:
      if (lookahead == 'H') ADVANCE(208);
      if (lookahead == 'T') ADVANCE(279);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(321);
      END_STATE();
    case 73:
      if (lookahead == 'L') ADVANCE(123);
      END_STATE();
    case 74:
      if (lookahead == 'L') ADVANCE(194);
      END_STATE();
    case 75:
      if (lookahead == 'L') ADVANCE(351);
      END_STATE();
    case 76:
      if (lookahead == 'L') ADVANCE(129);
      END_STATE();
    case 77:
      if (lookahead == 'M') ADVANCE(214);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(349);
      END_STATE();
    case 79:
      if (lookahead == 'N') ADVANCE(190);
      END_STATE();
    case 80:
      if (lookahead == 'N') ADVANCE(370);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(373);
      END_STATE();
    case 82:
      if (lookahead == 'O') ADVANCE(447);
      END_STATE();
    case 83:
      if (lookahead == 'P') ADVANCE(408);
      END_STATE();
    case 84:
      if (lookahead == 'P') ADVANCE(413);
      END_STATE();
    case 85:
      if (lookahead == 'P') ADVANCE(193);
      END_STATE();
    case 86:
      if (lookahead == 'P') ADVANCE(423);
      END_STATE();
    case 87:
      if (lookahead == 'R') ADVANCE(231);
      END_STATE();
    case 88:
      if (lookahead == 'R') ADVANCE(210);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(219);
      END_STATE();
    case 90:
      if (lookahead == 'R') ADVANCE(228);
      END_STATE();
    case 91:
      if (lookahead == 'R') ADVANCE(244);
      END_STATE();
    case 92:
      if (lookahead == 'R') ADVANCE(245);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(247);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(249);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(250);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(243);
      END_STATE();
    case 97:
      if (lookahead == 'R') ADVANCE(246);
      END_STATE();
    case 98:
      if (lookahead == 'S') ADVANCE(492);
      END_STATE();
    case 99:
      if (lookahead == 'S') ADVANCE(120);
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(475);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(201);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(275);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(350);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(522);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(360);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(377);
      END_STATE();
    case 107:
      if (lookahead == 'U') ADVANCE(436);
      END_STATE();
    case 108:
      if (lookahead == 'U') ADVANCE(328);
      END_STATE();
    case 109:
      if (lookahead == 'V') ADVANCE(189);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(506);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(404);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(479);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(487);
      END_STATE();
    case 137:
      if (lookahead == 'b') ADVANCE(304);
      END_STATE();
    case 138:
      if (lookahead == 'b') ADVANCE(307);
      END_STATE();
    case 139:
      if (lookahead == 'b') ADVANCE(308);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(381);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(382);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(518);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(371);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(455);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(456);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 150:
      if (lookahead == 'c') ADVANCE(476);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(556);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(567);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(598);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(560);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(597);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(572);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(590);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(555);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(566);
      END_STATE();
    case 162:
      if (lookahead == 'd') ADVANCE(584);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(578);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(568);
      END_STATE();
    case 165:
      if (lookahead == 'd') ADVANCE(573);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(585);
      END_STATE();
    case 167:
      if (lookahead == 'd') ADVANCE(594);
      END_STATE();
    case 168:
      if (lookahead == 'd') ADVANCE(570);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(599);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(273);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 252:
      if (lookahead == 'f') ADVANCE(270);
      END_STATE();
    case 253:
      if (lookahead == 'f') ADVANCE(290);
      END_STATE();
    case 254:
      if (lookahead == 'f') ADVANCE(367);
      END_STATE();
    case 255:
      if (lookahead == 'g') ADVANCE(575);
      END_STATE();
    case 256:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 257:
      if (lookahead == 'g') ADVANCE(368);
      END_STATE();
    case 258:
      if (lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 259:
      if (lookahead == 'g') ADVANCE(183);
      END_STATE();
    case 260:
      if (lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 261:
      if (lookahead == 'h') ADVANCE(354);
      END_STATE();
    case 262:
      if (lookahead == 'h') ADVANCE(199);
      END_STATE();
    case 263:
      if (lookahead == 'h') ADVANCE(235);
      END_STATE();
    case 264:
      if (lookahead == 'h') ADVANCE(251);
      END_STATE();
    case 265:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 267:
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 268:
      if (lookahead == 'i') ADVANCE(444);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(420);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(439);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(519);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(433);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 301:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 302:
      if (lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 308:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 309:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 310:
      if (lookahead == 'm') ADVANCE(293);
      END_STATE();
    case 311:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 312:
      if (lookahead == 'm') ADVANCE(383);
      END_STATE();
    case 313:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 314:
      if (lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 315:
      if (lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 316:
      if (lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 317:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(521);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(551);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(453);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 336:
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 337:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 338:
      if (lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(486);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 344:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(509);
      END_STATE();
    case 347:
      if (lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 349:
      if (lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 350:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 352:
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 353:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 354:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 355:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 356:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 357:
      if (lookahead == 'o') ADVANCE(450);
      END_STATE();
    case 358:
      if (lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 359:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 360:
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 362:
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 363:
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 364:
      if (lookahead == 'o') ADVANCE(412);
      END_STATE();
    case 365:
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 366:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 367:
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 368:
      if (lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 369:
      if (lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 370:
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 371:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(471);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(411);
      END_STATE();
    case 375:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 376:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 377:
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 378:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 381:
      if (lookahead == 'p') ADVANCE(540);
      END_STATE();
    case 382:
      if (lookahead == 'p') ADVANCE(542);
      END_STATE();
    case 383:
      if (lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 384:
      if (lookahead == 'p') ADVANCE(465);
      END_STATE();
    case 385:
      if (lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 386:
      if (lookahead == 'p') ADVANCE(358);
      END_STATE();
    case 387:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 388:
      if (lookahead == 'p') ADVANCE(236);
      END_STATE();
    case 389:
      if (lookahead == 'p') ADVANCE(376);
      END_STATE();
    case 390:
      if (lookahead == 'p') ADVANCE(389);
      END_STATE();
    case 391:
      if (lookahead == 'q') ADVANCE(493);
      END_STATE();
    case 392:
      if (lookahead == 'q') ADVANCE(491);
      END_STATE();
    case 393:
      if (lookahead == 'q') ADVANCE(497);
      END_STATE();
    case 394:
      if (lookahead == 'q') ADVANCE(498);
      END_STATE();
    case 395:
      if (lookahead == 'q') ADVANCE(500);
      END_STATE();
    case 396:
      if (lookahead == 'q') ADVANCE(501);
      END_STATE();
    case 397:
      if (lookahead == 'q') ADVANCE(502);
      END_STATE();
    case 398:
      if (lookahead == 'q') ADVANCE(503);
      END_STATE();
    case 399:
      if (lookahead == 'q') ADVANCE(504);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(589);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(507);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 412:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 413:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 414:
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 415:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 416:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 417:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 418:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 419:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 420:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 421:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 422:
      if (lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 423:
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 424:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 425:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 426:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 428:
      if (lookahead == 'r') ADVANCE(480);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(541);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(543);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(557);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(586);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(550);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(595);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(588);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(359);
      END_STATE();
    case 440:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 441:
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 442:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 443:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 444:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 445:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'w') ADVANCE(429);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(552);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(553);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 460:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 461:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 462:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 463:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 464:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 467:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 468:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 471:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 472:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 473:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 479:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'w') ADVANCE(430);
      END_STATE();
    case 482:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 483:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 484:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 485:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 486:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 487:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 489:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 490:
      if (lookahead == 'u') ADVANCE(322);
      END_STATE();
    case 491:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 492:
      if (lookahead == 'u') ADVANCE(390);
      END_STATE();
    case 493:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 494:
      if (lookahead == 'u') ADVANCE(452);
      END_STATE();
    case 495:
      if (lookahead == 'u') ADVANCE(454);
      END_STATE();
    case 496:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 497:
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 498:
      if (lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 499:
      if (lookahead == 'u') ADVANCE(482);
      END_STATE();
    case 500:
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 501:
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 502:
      if (lookahead == 'u') ADVANCE(286);
      END_STATE();
    case 503:
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 504:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 505:
      if (lookahead == 'u') ADVANCE(489);
      END_STATE();
    case 506:
      if (lookahead == 'v') ADVANCE(121);
      END_STATE();
    case 507:
      if (lookahead == 'v') ADVANCE(233);
      END_STATE();
    case 508:
      if (lookahead == 'w') ADVANCE(116);
      END_STATE();
    case 509:
      if (lookahead == 'w') ADVANCE(221);
      END_STATE();
    case 510:
      if (lookahead == 'x') ADVANCE(310);
      END_STATE();
    case 511:
      if (lookahead == 'x') ADVANCE(515);
      END_STATE();
    case 512:
      if (lookahead == 'x') ADVANCE(517);
      END_STATE();
    case 513:
      if (lookahead == 'x') ADVANCE(469);
      END_STATE();
    case 514:
      if (lookahead == 'y') ADVANCE(583);
      END_STATE();
    case 515:
      if (lookahead == 'y') ADVANCE(561);
      END_STATE();
    case 516:
      if (lookahead == 'y') ADVANCE(591);
      END_STATE();
    case 517:
      if (lookahead == 'y') ADVANCE(562);
      END_STATE();
    case 518:
      if (lookahead == 'y') ADVANCE(582);
      END_STATE();
    case 519:
      if (lookahead == 'y') ADVANCE(558);
      END_STATE();
    case 520:
      if (lookahead == 'y') ADVANCE(581);
      END_STATE();
    case 521:
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 522:
      if (lookahead == 'y') ADVANCE(387);
      END_STATE();
    case 523:
      if (lookahead == '{') ADVANCE(616);
      END_STATE();
    case 524:
      if (lookahead == '}') ADVANCE(618);
      END_STATE();
    case 525:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(604);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(909);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(530);
      END_STATE();
    case 526:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 527:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      END_STATE();
    case 528:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(604);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      END_STATE();
    case 529:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(549);
      END_STATE();
    case 530:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 531:
      if (eof) ADVANCE(533);
      ADVANCE_MAP(
        '\n', 604,
        '\r', 604,
        '#', 534,
        '&', 605,
        '(', 627,
        '-', 675,
        '/', 538,
        ':', 535,
        '<', 629,
        '=', 606,
        '?', 548,
        '@', 544,
        '[', 13,
        '{', 15,
        '}', 524,
        '\t', 909,
        0x0b, 909,
        ' ', 909,
      );
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 532:
      if (eof) ADVANCE(533);
      ADVANCE_MAP(
        '#', 534,
        '-', 675,
        '<', 629,
        '@', 544,
        'H', 685,
        '[', 13,
        '{', 15,
        '\n', 604,
        '\r', 604,
      );
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(534);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(901);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_coap_PLUStcp);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_coap_PLUSws);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_coaps_PLUStcp);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_coaps_PLUSws);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_SwitchingProtocols);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_Non_DASHAuthoritativeInformation);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_NoContent);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_ResetContent);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_PartialContent);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_AlreadyReported);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_IMUsed);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_MultipleChoices);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_MovedPermanently);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_SeeOther);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_NotModified);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_UseProxy);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_SwitchProxy);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_TemporaryRedirect);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_PermanentRedirect);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_BadRequest);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_PaymentRequired);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_NotFound);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_MethodNotAllowed);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_NotAcceptable);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_ProxyAuthenticationRequired);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_RequestTimeout);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_LengthRequired);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_PreconditionFailed);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_PayloadTooLarge);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_URITooLong);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_UnsupportedMediaType);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_RangeNotSatisfiable);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_ExpectationFailed);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_I_SQUOTEmateapot);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_MisdirectedRequest);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_UnprocessableEntity);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_FailedDependency);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_TooEarly);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_UpgradeRequired);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_PreconditionRequired);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_TooManyRequests);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_RequestHeaderFieldsTooLarge);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_UnavailableForLegalReasons);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_InternalServerError);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_NotImplemented);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_BadGateway);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_ServiceUnavailable);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_GatewayTimeout);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_HTTPVersionNotSupported);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_VariantAlsoNegotiates);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_InsufficientStorage);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_LoopDetected);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_NotExtended);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_NetworkAuthenticationRequired);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(901);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(601);
      if (lookahead == '=') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(899);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(602);
      if (lookahead != 0) ADVANCE(921);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(603);
      if (lookahead == '\r') ADVANCE(603);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(604);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(902);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\n') ADVANCE(608);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(608);
      if (lookahead == '+') ADVANCE(446);
      if (lookahead == '/') ADVANCE(615);
      if (lookahead == 's') ADVANCE(610);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(608);
      if (lookahead == '+') ADVANCE(481);
      if (lookahead == '/') ADVANCE(615);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(608);
      if (lookahead == '/') ADVANCE(615);
      if (lookahead == 'a') ADVANCE(613);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(608);
      if (lookahead == '/') ADVANCE(615);
      if (lookahead == 'o') ADVANCE(611);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(608);
      if (lookahead == '/') ADVANCE(615);
      if (lookahead == 'p') ADVANCE(609);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(608);
      if (lookahead == '/') ADVANCE(615);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(608);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(901);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_json_body_token3);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_json_body_token4);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '?') ADVANCE(510);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(510);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(676);
      if (lookahead == 't') ADVANCE(633);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == '/') ADVANCE(545);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(72);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(806);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == 'M') ADVANCE(630);
      if (lookahead == 'n') ADVANCE(851);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(446);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(895);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(678);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(545);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(882);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(636);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(677);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(638);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(639);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(679);
      if (lookahead == 'n') ADVANCE(698);
      if (lookahead == 'p') ADVANCE(767);
      if (lookahead == 's') ADVANCE(751);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(680);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(684);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(681);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(686);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(682);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(688);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(791);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(829);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(722);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(775);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(862);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(847);
      if (lookahead == 'e') ADVANCE(840);
      if (lookahead == 'r') ADVANCE(738);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(713);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(726);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(885);
      if (lookahead == 'p') ADVANCE(843);
      if (lookahead == 's') ADVANCE(880);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(841);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(729);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(815);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(849);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(780);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(805);
      if (lookahead == 'e') ADVANCE(836);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(795);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(893);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(864);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(865);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(812);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(714);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(798);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(799);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(771);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(819);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(866);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(789);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(758);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(745);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(875);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(632);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(785);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(654);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(647);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(892);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(787);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(659);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(764);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(661);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(663);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(669);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(906);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(908);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(804);
      if (lookahead == 'o') ADVANCE(817);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(746);
      if (lookahead == 'w') ADVANCE(777);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(802);
      if (lookahead == 'o') ADVANCE(818);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(716);
      if (lookahead == 'o') ADVANCE(889);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(857);
      if (lookahead == 'i') ADVANCE(853);
      if (lookahead == 'o') ADVANCE(884);
      if (lookahead == 'u') ADVANCE(793);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(888);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(717);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(855);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(858);
      if (lookahead == 'o') ADVANCE(631);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(810);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(854);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == 'r') ADVANCE(883);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(721);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(839);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(867);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(637);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(642);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(652);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(657);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(649);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(650);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(724);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(651);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(728);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(725);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(813);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(814);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(667);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(766);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(778);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(844);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(859);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(752);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(662);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(664);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(828);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(643);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(823);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(800);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(719);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(860);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(718);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(794);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(820);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(711);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(702);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(886);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(845);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(827);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(872);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(874);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(763);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(671);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(852);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(842);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(861);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(696);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(645);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(824);
      if (lookahead == 'm') ADVANCE(744);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(753);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(754);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(755);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(759);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(670);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(833);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(701);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(768);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(769);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(770);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(646);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(727);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(877);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(706);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(869);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(873);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(870);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(762);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(691);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(832);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(635);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(809);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(807);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(838);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(850);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(848);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(709);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(720);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(846);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(808);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(731);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(673);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(797);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(741);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(640);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(826);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(822);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(834);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(881);
      if (lookahead == 's') ADVANCE(750);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(878);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(790);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(811);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(803);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(782);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(748);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(825);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(700);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(747);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(703);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(863);
      if (lookahead == 'y') ADVANCE(796);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(788);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(894);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(876);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(879);
      if (lookahead == 't') ADVANCE(749);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(734);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(723);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(856);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(868);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(772);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(887);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(773);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(715);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(779);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(740);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(783);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(784);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(708);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(668);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(644);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(655);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(658);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(774);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(786);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(660);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(710);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(760);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(761);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(666);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(733);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(765);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(835);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(742);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(871);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(776);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(757);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(704);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(756);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(821);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(707);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(891);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(831);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(641);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(656);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(653);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(665);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(896);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(901);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead == '=') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(899);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead == '{') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(901);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(901);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_param);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(902);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(903);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(897);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(608);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(921);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(626);
      if (lookahead != 0) ADVANCE(921);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(625);
      if (lookahead != 0) ADVANCE(921);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(622);
      if (lookahead == '>') ADVANCE(914);
      if (lookahead != 0) ADVANCE(919);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(620);
      if (lookahead != 0) ADVANCE(921);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '%') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(921);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(921);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(921);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(919);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(921);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(921);
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
        'A', 1,
        'C', 2,
        'D', 3,
        'F', 4,
        'G', 5,
        'H', 6,
        'L', 7,
        'M', 8,
        'O', 9,
        'P', 10,
        'T', 11,
        'U', 12,
        'a', 13,
        'c', 14,
        'd', 15,
        'e', 16,
        'f', 17,
        'g', 18,
        'h', 19,
        'i', 20,
        'm', 21,
        'n', 22,
        'p', 23,
        'q', 24,
        'r', 25,
        's', 26,
        't', 27,
        'u', 28,
        'w', 29,
      );
      END_STATE();
    case 1:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == 'K') ADVANCE(42);
      if (lookahead == 'P') ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == 'U') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == '3') ADVANCE(61);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'k') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(81);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == 'L') ADVANCE(84);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(89);
      END_STATE();
    case 39:
      if (lookahead == 'S') ADVANCE(90);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_OK);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(93);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(94);
      END_STATE();
    case 45:
      if (lookahead == 'S') ADVANCE(95);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 48:
      if (lookahead == 'A') ADVANCE(97);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 61:
      if (lookahead == '2') ADVANCE(110);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_im);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_ni);
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 69:
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ws);
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(130);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(134);
      END_STATE();
    case 85:
      if (lookahead == 'b') ADVANCE(135);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 89:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(138);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(140);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(141);
      END_STATE();
    case 95:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(143);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_cap);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_cid);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_dns);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_geo);
      END_STATE();
    case 110:
      if (lookahead == '3') ADVANCE(151);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ipp);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_mid);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_nih);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_sms);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_urn);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_wss);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 130:
      if (lookahead == 'E') ADVANCE(164);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(168);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_Gone);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 140:
      if (lookahead == 'O') ADVANCE(173);
      END_STATE();
    case 141:
      if (lookahead == 'H') ADVANCE(87);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 143:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_acct);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_arcp);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_h323);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 156:
      if (lookahead == '1') ADVANCE(181);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_pres);
      END_STATE();
    case 158:
      if (lookahead == 'y') ADVANCE(182);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 164:
      if (lookahead == 'C') ADVANCE(188);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 168:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 169:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_Found);
      END_STATE();
    case 171:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 172:
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 173:
      if (lookahead == 'N') ADVANCE(195);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 175:
      if (lookahead == 'h') ADVANCE(197);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_about);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_https);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_payto);
      END_STATE();
    case 181:
      if (lookahead == '1') ADVANCE(200);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 188:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_Locked);
      END_STATE();
    case 194:
      if (lookahead == 'S') ADVANCE(210);
      END_STATE();
    case 195:
      if (lookahead == 'S') ADVANCE(87);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_mailto);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_pkcs11);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_reload);
      END_STATE();
    case 202:
      if (lookahead == '-') ADVANCE(214);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_telnet);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_Created);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_Accepted);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_Conflict);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_Continue);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_Forbidden);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 226:
      if (lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 227:
      if (lookahead == 'z') ADVANCE(231);
      END_STATE();
    case 228:
      if (lookahead == 'k') ADVANCE(232);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_Processing);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_Multi_DASHStatus);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_Unauthorized);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_secret_DASHtoken);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 531},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 40},
  [4] = {.lex_state = 51},
  [5] = {.lex_state = 45},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 45},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 532},
  [13] = {.lex_state = 532},
  [14] = {.lex_state = 531},
  [15] = {.lex_state = 531},
  [16] = {.lex_state = 531},
  [17] = {.lex_state = 531},
  [18] = {.lex_state = 531},
  [19] = {.lex_state = 531},
  [20] = {.lex_state = 531},
  [21] = {.lex_state = 531},
  [22] = {.lex_state = 531},
  [23] = {.lex_state = 531},
  [24] = {.lex_state = 531},
  [25] = {.lex_state = 531},
  [26] = {.lex_state = 531},
  [27] = {.lex_state = 531},
  [28] = {.lex_state = 531},
  [29] = {.lex_state = 531},
  [30] = {.lex_state = 531},
  [31] = {.lex_state = 531},
  [32] = {.lex_state = 531},
  [33] = {.lex_state = 531},
  [34] = {.lex_state = 531},
  [35] = {.lex_state = 531},
  [36] = {.lex_state = 531},
  [37] = {.lex_state = 531},
  [38] = {.lex_state = 531},
  [39] = {.lex_state = 531},
  [40] = {.lex_state = 531},
  [41] = {.lex_state = 531},
  [42] = {.lex_state = 531},
  [43] = {.lex_state = 531},
  [44] = {.lex_state = 531},
  [45] = {.lex_state = 531},
  [46] = {.lex_state = 531},
  [47] = {.lex_state = 531},
  [48] = {.lex_state = 531},
  [49] = {.lex_state = 531},
  [50] = {.lex_state = 531},
  [51] = {.lex_state = 531},
  [52] = {.lex_state = 531},
  [53] = {.lex_state = 531},
  [54] = {.lex_state = 531},
  [55] = {.lex_state = 531},
  [56] = {.lex_state = 531},
  [57] = {.lex_state = 531},
  [58] = {.lex_state = 531},
  [59] = {.lex_state = 531},
  [60] = {.lex_state = 531},
  [61] = {.lex_state = 531},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 42},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 42},
  [66] = {.lex_state = 42},
  [67] = {.lex_state = 42},
  [68] = {.lex_state = 531},
  [69] = {.lex_state = 41},
  [70] = {.lex_state = 531},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 41},
  [73] = {.lex_state = 531},
  [74] = {.lex_state = 531},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 531},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 531},
  [93] = {.lex_state = 531},
  [94] = {.lex_state = 531},
  [95] = {.lex_state = 531},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 531},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 40},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 531},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 531},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 531},
  [108] = {.lex_state = 531},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 531},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 531},
  [122] = {.lex_state = 11},
  [123] = {.lex_state = 531},
  [124] = {.lex_state = 531},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 525},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 531},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 531},
  [138] = {.lex_state = 531},
  [139] = {.lex_state = 531},
  [140] = {.lex_state = 531},
  [141] = {.lex_state = 525},
  [142] = {.lex_state = 531},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 531},
  [147] = {.lex_state = 531},
  [148] = {.lex_state = 531},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 531},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 531},
  [154] = {.lex_state = 531},
  [155] = {.lex_state = 531},
  [156] = {.lex_state = 531},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 531},
  [160] = {.lex_state = 531},
  [161] = {.lex_state = 531},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 531},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 531},
  [168] = {.lex_state = 531},
  [169] = {.lex_state = 531},
  [170] = {.lex_state = 531},
  [171] = {.lex_state = 531},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 531},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 526},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 531},
  [179] = {.lex_state = 531},
  [180] = {.lex_state = 531},
  [181] = {.lex_state = 531},
  [182] = {.lex_state = 525},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 531},
  [185] = {.lex_state = 531},
  [186] = {.lex_state = 531},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 526},
  [189] = {.lex_state = 11},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 531},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 40},
  [196] = {.lex_state = 531},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 40},
  [199] = {.lex_state = 527},
  [200] = {.lex_state = 531},
  [201] = {.lex_state = 531},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 527},
  [204] = {.lex_state = 531},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 531},
  [207] = {.lex_state = 531},
  [208] = {.lex_state = 40},
  [209] = {.lex_state = 531},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 531},
  [212] = {.lex_state = 528},
  [213] = {.lex_state = 528},
  [214] = {.lex_state = 531},
  [215] = {.lex_state = 531},
  [216] = {.lex_state = 531},
  [217] = {.lex_state = 531},
  [218] = {.lex_state = 531},
  [219] = {.lex_state = 531},
  [220] = {.lex_state = 531},
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
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_status_code] = ACTIONS(1),
    [anon_sym_Continue] = ACTIONS(1),
    [anon_sym_Processing] = ACTIONS(1),
    [anon_sym_OK] = ACTIONS(1),
    [anon_sym_Created] = ACTIONS(1),
    [anon_sym_Accepted] = ACTIONS(1),
    [anon_sym_Multi_DASHStatus] = ACTIONS(1),
    [anon_sym_Found] = ACTIONS(1),
    [anon_sym_Unauthorized] = ACTIONS(1),
    [anon_sym_Forbidden] = ACTIONS(1),
    [anon_sym_Conflict] = ACTIONS(1),
    [anon_sym_Gone] = ACTIONS(1),
    [anon_sym_Locked] = ACTIONS(1),
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
    [sym_document] = STATE(206),
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
  [2] = {
    [aux_sym__whitespace] = STATE(2),
    [anon_sym_HTTP_SLASH] = ACTIONS(17),
    [anon_sym_Continue] = ACTIONS(17),
    [anon_sym_SwitchingProtocols] = ACTIONS(17),
    [anon_sym_Processing] = ACTIONS(17),
    [anon_sym_OK] = ACTIONS(17),
    [anon_sym_Created] = ACTIONS(17),
    [anon_sym_Accepted] = ACTIONS(17),
    [anon_sym_Non_DASHAuthoritativeInformation] = ACTIONS(17),
    [anon_sym_NoContent] = ACTIONS(17),
    [anon_sym_ResetContent] = ACTIONS(17),
    [anon_sym_PartialContent] = ACTIONS(17),
    [anon_sym_Multi_DASHStatus] = ACTIONS(17),
    [anon_sym_AlreadyReported] = ACTIONS(17),
    [anon_sym_IMUsed] = ACTIONS(17),
    [anon_sym_MultipleChoices] = ACTIONS(17),
    [anon_sym_MovedPermanently] = ACTIONS(17),
    [anon_sym_Found] = ACTIONS(17),
    [anon_sym_SeeOther] = ACTIONS(17),
    [anon_sym_NotModified] = ACTIONS(17),
    [anon_sym_UseProxy] = ACTIONS(17),
    [anon_sym_SwitchProxy] = ACTIONS(17),
    [anon_sym_TemporaryRedirect] = ACTIONS(17),
    [anon_sym_PermanentRedirect] = ACTIONS(17),
    [anon_sym_BadRequest] = ACTIONS(17),
    [anon_sym_Unauthorized] = ACTIONS(17),
    [anon_sym_PaymentRequired] = ACTIONS(17),
    [anon_sym_Forbidden] = ACTIONS(17),
    [anon_sym_NotFound] = ACTIONS(17),
    [anon_sym_MethodNotAllowed] = ACTIONS(17),
    [anon_sym_NotAcceptable] = ACTIONS(17),
    [anon_sym_ProxyAuthenticationRequired] = ACTIONS(17),
    [anon_sym_RequestTimeout] = ACTIONS(17),
    [anon_sym_Conflict] = ACTIONS(17),
    [anon_sym_Gone] = ACTIONS(17),
    [anon_sym_LengthRequired] = ACTIONS(17),
    [anon_sym_PreconditionFailed] = ACTIONS(17),
    [anon_sym_PayloadTooLarge] = ACTIONS(17),
    [anon_sym_URITooLong] = ACTIONS(17),
    [anon_sym_UnsupportedMediaType] = ACTIONS(17),
    [anon_sym_RangeNotSatisfiable] = ACTIONS(17),
    [anon_sym_ExpectationFailed] = ACTIONS(17),
    [anon_sym_I_SQUOTEmateapot] = ACTIONS(17),
    [anon_sym_MisdirectedRequest] = ACTIONS(17),
    [anon_sym_UnprocessableEntity] = ACTIONS(17),
    [anon_sym_Locked] = ACTIONS(17),
    [anon_sym_FailedDependency] = ACTIONS(17),
    [anon_sym_TooEarly] = ACTIONS(17),
    [anon_sym_UpgradeRequired] = ACTIONS(17),
    [anon_sym_PreconditionRequired] = ACTIONS(17),
    [anon_sym_TooManyRequests] = ACTIONS(17),
    [anon_sym_RequestHeaderFieldsTooLarge] = ACTIONS(17),
    [anon_sym_UnavailableForLegalReasons] = ACTIONS(17),
    [anon_sym_InternalServerError] = ACTIONS(17),
    [anon_sym_NotImplemented] = ACTIONS(17),
    [anon_sym_BadGateway] = ACTIONS(17),
    [anon_sym_ServiceUnavailable] = ACTIONS(17),
    [anon_sym_GatewayTimeout] = ACTIONS(17),
    [anon_sym_HTTPVersionNotSupported] = ACTIONS(17),
    [anon_sym_VariantAlsoNegotiates] = ACTIONS(17),
    [anon_sym_InsufficientStorage] = ACTIONS(17),
    [anon_sym_LoopDetected] = ACTIONS(17),
    [anon_sym_NotExtended] = ACTIONS(17),
    [anon_sym_NetworkAuthenticationRequired] = ACTIONS(17),
    [aux_sym_request_token1] = ACTIONS(3),
    [sym_number] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [aux_sym__whitespace_token1] = ACTIONS(19),
  },
  [3] = {
    [anon_sym_HTTP_SLASH] = ACTIONS(22),
    [anon_sym_Continue] = ACTIONS(22),
    [anon_sym_SwitchingProtocols] = ACTIONS(22),
    [anon_sym_Processing] = ACTIONS(22),
    [anon_sym_OK] = ACTIONS(22),
    [anon_sym_Created] = ACTIONS(22),
    [anon_sym_Accepted] = ACTIONS(22),
    [anon_sym_Non_DASHAuthoritativeInformation] = ACTIONS(22),
    [anon_sym_NoContent] = ACTIONS(22),
    [anon_sym_ResetContent] = ACTIONS(22),
    [anon_sym_PartialContent] = ACTIONS(22),
    [anon_sym_Multi_DASHStatus] = ACTIONS(22),
    [anon_sym_AlreadyReported] = ACTIONS(22),
    [anon_sym_IMUsed] = ACTIONS(22),
    [anon_sym_MultipleChoices] = ACTIONS(22),
    [anon_sym_MovedPermanently] = ACTIONS(22),
    [anon_sym_Found] = ACTIONS(22),
    [anon_sym_SeeOther] = ACTIONS(22),
    [anon_sym_NotModified] = ACTIONS(22),
    [anon_sym_UseProxy] = ACTIONS(22),
    [anon_sym_SwitchProxy] = ACTIONS(22),
    [anon_sym_TemporaryRedirect] = ACTIONS(22),
    [anon_sym_PermanentRedirect] = ACTIONS(22),
    [anon_sym_BadRequest] = ACTIONS(22),
    [anon_sym_Unauthorized] = ACTIONS(22),
    [anon_sym_PaymentRequired] = ACTIONS(22),
    [anon_sym_Forbidden] = ACTIONS(22),
    [anon_sym_NotFound] = ACTIONS(22),
    [anon_sym_MethodNotAllowed] = ACTIONS(22),
    [anon_sym_NotAcceptable] = ACTIONS(22),
    [anon_sym_ProxyAuthenticationRequired] = ACTIONS(22),
    [anon_sym_RequestTimeout] = ACTIONS(22),
    [anon_sym_Conflict] = ACTIONS(22),
    [anon_sym_Gone] = ACTIONS(22),
    [anon_sym_LengthRequired] = ACTIONS(22),
    [anon_sym_PreconditionFailed] = ACTIONS(22),
    [anon_sym_PayloadTooLarge] = ACTIONS(22),
    [anon_sym_URITooLong] = ACTIONS(22),
    [anon_sym_UnsupportedMediaType] = ACTIONS(22),
    [anon_sym_RangeNotSatisfiable] = ACTIONS(22),
    [anon_sym_ExpectationFailed] = ACTIONS(22),
    [anon_sym_I_SQUOTEmateapot] = ACTIONS(22),
    [anon_sym_MisdirectedRequest] = ACTIONS(22),
    [anon_sym_UnprocessableEntity] = ACTIONS(22),
    [anon_sym_Locked] = ACTIONS(22),
    [anon_sym_FailedDependency] = ACTIONS(22),
    [anon_sym_TooEarly] = ACTIONS(22),
    [anon_sym_UpgradeRequired] = ACTIONS(22),
    [anon_sym_PreconditionRequired] = ACTIONS(22),
    [anon_sym_TooManyRequests] = ACTIONS(22),
    [anon_sym_RequestHeaderFieldsTooLarge] = ACTIONS(22),
    [anon_sym_UnavailableForLegalReasons] = ACTIONS(22),
    [anon_sym_InternalServerError] = ACTIONS(22),
    [anon_sym_NotImplemented] = ACTIONS(22),
    [anon_sym_BadGateway] = ACTIONS(22),
    [anon_sym_ServiceUnavailable] = ACTIONS(22),
    [anon_sym_GatewayTimeout] = ACTIONS(22),
    [anon_sym_HTTPVersionNotSupported] = ACTIONS(22),
    [anon_sym_VariantAlsoNegotiates] = ACTIONS(22),
    [anon_sym_InsufficientStorage] = ACTIONS(22),
    [anon_sym_LoopDetected] = ACTIONS(22),
    [anon_sym_NotExtended] = ACTIONS(22),
    [anon_sym_NetworkAuthenticationRequired] = ACTIONS(22),
    [aux_sym_request_token1] = ACTIONS(3),
    [sym_number] = ACTIONS(22),
    [sym_string] = ACTIONS(22),
    [anon_sym_true] = ACTIONS(22),
    [anon_sym_false] = ACTIONS(22),
    [aux_sym__whitespace_token1] = ACTIONS(22),
  },
  [4] = {
    [sym_status_text] = STATE(220),
    [aux_sym__whitespace] = STATE(2),
    [anon_sym_Continue] = ACTIONS(24),
    [anon_sym_SwitchingProtocols] = ACTIONS(24),
    [anon_sym_Processing] = ACTIONS(24),
    [anon_sym_OK] = ACTIONS(24),
    [anon_sym_Created] = ACTIONS(24),
    [anon_sym_Accepted] = ACTIONS(24),
    [anon_sym_Non_DASHAuthoritativeInformation] = ACTIONS(24),
    [anon_sym_NoContent] = ACTIONS(24),
    [anon_sym_ResetContent] = ACTIONS(24),
    [anon_sym_PartialContent] = ACTIONS(24),
    [anon_sym_Multi_DASHStatus] = ACTIONS(24),
    [anon_sym_AlreadyReported] = ACTIONS(24),
    [anon_sym_IMUsed] = ACTIONS(24),
    [anon_sym_MultipleChoices] = ACTIONS(24),
    [anon_sym_MovedPermanently] = ACTIONS(24),
    [anon_sym_Found] = ACTIONS(24),
    [anon_sym_SeeOther] = ACTIONS(24),
    [anon_sym_NotModified] = ACTIONS(24),
    [anon_sym_UseProxy] = ACTIONS(24),
    [anon_sym_SwitchProxy] = ACTIONS(24),
    [anon_sym_TemporaryRedirect] = ACTIONS(24),
    [anon_sym_PermanentRedirect] = ACTIONS(24),
    [anon_sym_BadRequest] = ACTIONS(24),
    [anon_sym_Unauthorized] = ACTIONS(24),
    [anon_sym_PaymentRequired] = ACTIONS(24),
    [anon_sym_Forbidden] = ACTIONS(24),
    [anon_sym_NotFound] = ACTIONS(24),
    [anon_sym_MethodNotAllowed] = ACTIONS(24),
    [anon_sym_NotAcceptable] = ACTIONS(24),
    [anon_sym_ProxyAuthenticationRequired] = ACTIONS(24),
    [anon_sym_RequestTimeout] = ACTIONS(24),
    [anon_sym_Conflict] = ACTIONS(24),
    [anon_sym_Gone] = ACTIONS(24),
    [anon_sym_LengthRequired] = ACTIONS(24),
    [anon_sym_PreconditionFailed] = ACTIONS(24),
    [anon_sym_PayloadTooLarge] = ACTIONS(24),
    [anon_sym_URITooLong] = ACTIONS(24),
    [anon_sym_UnsupportedMediaType] = ACTIONS(24),
    [anon_sym_RangeNotSatisfiable] = ACTIONS(24),
    [anon_sym_ExpectationFailed] = ACTIONS(24),
    [anon_sym_I_SQUOTEmateapot] = ACTIONS(24),
    [anon_sym_MisdirectedRequest] = ACTIONS(24),
    [anon_sym_UnprocessableEntity] = ACTIONS(24),
    [anon_sym_Locked] = ACTIONS(24),
    [anon_sym_FailedDependency] = ACTIONS(24),
    [anon_sym_TooEarly] = ACTIONS(24),
    [anon_sym_UpgradeRequired] = ACTIONS(24),
    [anon_sym_PreconditionRequired] = ACTIONS(24),
    [anon_sym_TooManyRequests] = ACTIONS(24),
    [anon_sym_RequestHeaderFieldsTooLarge] = ACTIONS(24),
    [anon_sym_UnavailableForLegalReasons] = ACTIONS(24),
    [anon_sym_InternalServerError] = ACTIONS(24),
    [anon_sym_NotImplemented] = ACTIONS(24),
    [anon_sym_BadGateway] = ACTIONS(24),
    [anon_sym_ServiceUnavailable] = ACTIONS(24),
    [anon_sym_GatewayTimeout] = ACTIONS(24),
    [anon_sym_HTTPVersionNotSupported] = ACTIONS(24),
    [anon_sym_VariantAlsoNegotiates] = ACTIONS(24),
    [anon_sym_InsufficientStorage] = ACTIONS(24),
    [anon_sym_LoopDetected] = ACTIONS(24),
    [anon_sym_NotExtended] = ACTIONS(24),
    [anon_sym_NetworkAuthenticationRequired] = ACTIONS(24),
    [aux_sym_request_token1] = ACTIONS(3),
    [aux_sym__whitespace_token1] = ACTIONS(26),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(30), 1,
      anon_sym_SLASH,
    ACTIONS(36), 1,
      anon_sym_AT,
    ACTIONS(38), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    STATE(8), 1,
      aux_sym__whitespace,
    STATE(62), 1,
      sym_variable,
    STATE(85), 1,
      aux_sym_path_repeat1,
    STATE(97), 1,
      sym_host,
    STATE(98), 1,
      sym_path,
    STATE(177), 1,
      sym_authority,
    STATE(180), 1,
      sym_target_url,
    STATE(192), 1,
      sym_pair,
    STATE(195), 1,
      sym_scheme,
    ACTIONS(34), 4,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
    ACTIONS(32), 33,
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
    ACTIONS(36), 1,
      anon_sym_AT,
    ACTIONS(42), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(46), 1,
      aux_sym_header_token1,
    ACTIONS(48), 1,
      aux_sym_header_token2,
    ACTIONS(50), 1,
      aux_sym__whitespace_token1,
    STATE(10), 1,
      aux_sym__whitespace,
    STATE(42), 1,
      sym_host,
    STATE(49), 1,
      sym_host_url,
    STATE(50), 1,
      sym_variable,
    STATE(190), 1,
      sym_authority,
    STATE(192), 1,
      sym_pair,
    STATE(208), 1,
      sym_scheme,
    ACTIONS(34), 4,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
    ACTIONS(32), 33,
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
    ACTIONS(36), 1,
      anon_sym_AT,
    ACTIONS(42), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(50), 1,
      aux_sym__whitespace_token1,
    ACTIONS(52), 1,
      aux_sym_header_token1,
    ACTIONS(54), 1,
      aux_sym_header_token2,
    STATE(6), 1,
      aux_sym__whitespace,
    STATE(41), 1,
      sym_variable,
    STATE(42), 1,
      sym_host,
    STATE(43), 1,
      sym_host_url,
    STATE(190), 1,
      sym_authority,
    STATE(192), 1,
      sym_pair,
    STATE(208), 1,
      sym_scheme,
    ACTIONS(34), 4,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
    ACTIONS(32), 33,
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
    ACTIONS(58), 1,
      aux_sym__whitespace_token1,
    STATE(8), 1,
      aux_sym__whitespace,
    ACTIONS(17), 10,
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
    ACTIONS(56), 34,
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
    ACTIONS(22), 11,
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
    ACTIONS(61), 34,
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
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(63), 1,
      aux_sym__whitespace_token1,
    STATE(10), 1,
      aux_sym__whitespace,
    ACTIONS(17), 6,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(56), 36,
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
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(22), 6,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(61), 37,
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
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(70), 1,
      sym_method,
    ACTIONS(72), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(74), 1,
      aux_sym_xml_body_token1,
    ACTIONS(78), 1,
      anon_sym_query,
    ACTIONS(80), 1,
      anon_sym_LT,
    STATE(169), 1,
      sym_http_version,
    STATE(217), 1,
      sym_response,
    ACTIONS(76), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(17), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(66), 5,
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
  [524] = 13,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(74), 1,
      aux_sym_xml_body_token1,
    ACTIONS(78), 1,
      anon_sym_query,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(84), 1,
      sym_method,
    STATE(169), 1,
      sym_http_version,
    STATE(214), 1,
      sym_response,
    ACTIONS(76), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(15), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(24), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [575] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(70), 1,
      sym_method,
    ACTIONS(74), 1,
      aux_sym_xml_body_token1,
    ACTIONS(78), 1,
      anon_sym_query,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(76), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(17), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(66), 5,
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
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(74), 1,
      aux_sym_xml_body_token1,
    ACTIONS(78), 1,
      anon_sym_query,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(88), 1,
      sym_method,
    ACTIONS(76), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(31), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(86), 5,
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
  [659] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(74), 1,
      aux_sym_xml_body_token1,
    ACTIONS(78), 1,
      anon_sym_query,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(92), 1,
      sym_method,
    ACTIONS(76), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(31), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(25), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [701] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(74), 1,
      aux_sym_xml_body_token1,
    ACTIONS(78), 1,
      anon_sym_query,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(96), 1,
      sym_method,
    ACTIONS(76), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(31), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(94), 5,
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
  [743] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(74), 1,
      aux_sym_xml_body_token1,
    ACTIONS(78), 1,
      anon_sym_query,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(100), 1,
      sym_method,
    ACTIONS(76), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(16), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(23), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [785] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(107), 1,
      sym_method,
    ACTIONS(109), 1,
      aux_sym_xml_body_token1,
    ACTIONS(115), 1,
      anon_sym_query,
    ACTIONS(118), 1,
      anon_sym_LT,
    ACTIONS(112), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(102), 5,
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
  [823] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(74), 1,
      aux_sym_xml_body_token1,
    ACTIONS(78), 1,
      anon_sym_query,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(100), 1,
      sym_method,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(76), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(98), 5,
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
  [861] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(74), 1,
      aux_sym_xml_body_token1,
    ACTIONS(78), 1,
      anon_sym_query,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(96), 1,
      sym_method,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(76), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(94), 5,
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
  [899] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(70), 1,
      sym_method,
    ACTIONS(74), 1,
      aux_sym_xml_body_token1,
    ACTIONS(78), 1,
      anon_sym_query,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(76), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(66), 5,
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
  [937] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(74), 1,
      aux_sym_xml_body_token1,
    ACTIONS(78), 1,
      anon_sym_query,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(92), 1,
      sym_method,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(76), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(90), 5,
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
  [975] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(74), 1,
      aux_sym_xml_body_token1,
    ACTIONS(78), 1,
      anon_sym_query,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(88), 1,
      sym_method,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(76), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(86), 5,
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
  [1013] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(74), 1,
      aux_sym_xml_body_token1,
    ACTIONS(78), 1,
      anon_sym_query,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_method,
    ACTIONS(76), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(123), 5,
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
  [1051] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      aux_sym_xml_body_token3,
    STATE(28), 1,
      aux_sym_form_data_repeat2,
    STATE(144), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(129), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(127), 8,
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
    ACTIONS(131), 1,
      anon_sym_AMP,
    ACTIONS(133), 1,
      aux_sym_xml_body_token3,
    STATE(26), 1,
      aux_sym_form_data_repeat2,
    STATE(144), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(137), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(135), 8,
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
    ACTIONS(143), 1,
      anon_sym_AMP,
    ACTIONS(146), 1,
      aux_sym_xml_body_token3,
    STATE(28), 1,
      aux_sym_form_data_repeat2,
    STATE(144), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(141), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(139), 8,
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
    ACTIONS(153), 1,
      anon_sym_COLON,
    STATE(55), 1,
      sym_port,
    ACTIONS(151), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(149), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1173] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(155), 1,
      anon_sym_COLON,
    STATE(55), 1,
      sym_port,
    ACTIONS(151), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(149), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1199] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(31), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(162), 3,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1225] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(166), 5,
      sym_method,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(164), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1247] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(170), 5,
      sym_method,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(168), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1269] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(176), 1,
      aux_sym_xml_body_token3,
    ACTIONS(174), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(172), 8,
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
    ACTIONS(182), 1,
      aux_sym_xml_body_token3,
    ACTIONS(180), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(178), 8,
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
    ACTIONS(188), 1,
      aux_sym_xml_body_token3,
    ACTIONS(186), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(184), 8,
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
    ACTIONS(194), 1,
      aux_sym_xml_body_token3,
    ACTIONS(192), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(190), 8,
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
    ACTIONS(200), 1,
      aux_sym_xml_body_token3,
    ACTIONS(198), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(196), 8,
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
    ACTIONS(204), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(202), 8,
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
    ACTIONS(208), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(206), 8,
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
    ACTIONS(212), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(210), 8,
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
    ACTIONS(216), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(214), 8,
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
    ACTIONS(212), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(210), 8,
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
    ACTIONS(220), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(218), 8,
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
    ACTIONS(224), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(222), 8,
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
    ACTIONS(228), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(226), 8,
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
    ACTIONS(232), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(230), 8,
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
    ACTIONS(236), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(234), 8,
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
    ACTIONS(240), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(238), 8,
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
    ACTIONS(244), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(242), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1624] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(248), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(246), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1644] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(252), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(250), 8,
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
    ACTIONS(256), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(254), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1684] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(260), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(258), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1704] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(264), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(262), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1724] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(268), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(266), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1744] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(272), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(270), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1764] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(276), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
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
  [1784] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(280), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
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
  [1804] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_method,
    ACTIONS(290), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(296), 1,
      aux_sym_script_variable_token1,
    STATE(60), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1833] = 8,
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
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 1,
      sym_comment,
    STATE(60), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1862] = 9,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      anon_sym_SLASH,
    ACTIONS(307), 1,
      anon_sym_AT,
    ACTIONS(309), 1,
      anon_sym_QMARK,
    STATE(94), 1,
      sym_authority,
    STATE(107), 1,
      aux_sym_path_repeat1,
    STATE(186), 1,
      sym_path,
    STATE(207), 1,
      sym_pair,
    ACTIONS(311), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [1891] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(26), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
    STATE(70), 1,
      sym_boolean,
    ACTIONS(313), 2,
      sym_number,
      sym_string,
    ACTIONS(315), 2,
      anon_sym_true,
      anon_sym_false,
  [1912] = 5,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(321), 1,
      anon_sym_AMP,
    ACTIONS(323), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(117), 1,
      sym_variable,
    ACTIONS(319), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [1931] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(26), 1,
      aux_sym__whitespace_token1,
    STATE(63), 1,
      aux_sym__whitespace,
    STATE(74), 1,
      sym_boolean,
    ACTIONS(315), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(325), 2,
      sym_number,
      sym_string,
  [1952] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(26), 1,
      aux_sym__whitespace_token1,
    STATE(67), 1,
      aux_sym__whitespace,
    STATE(70), 1,
      sym_boolean,
    ACTIONS(313), 2,
      sym_number,
      sym_string,
    ACTIONS(315), 2,
      anon_sym_true,
      anon_sym_false,
  [1973] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(26), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
    STATE(68), 1,
      sym_boolean,
    ACTIONS(315), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(327), 2,
      sym_number,
      sym_string,
  [1994] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(329), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2006] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(333), 1,
      sym_string,
    STATE(27), 1,
      sym_boolean,
    ACTIONS(331), 2,
      sym_identifier,
      sym_number,
    ACTIONS(335), 2,
      anon_sym_true,
      anon_sym_false,
  [2024] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(337), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2036] = 4,
    ACTIONS(38), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(339), 1,
      sym_identifier,
    STATE(150), 1,
      sym_variable,
    ACTIONS(321), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2052] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(343), 1,
      sym_string,
    STATE(32), 1,
      sym_boolean,
    ACTIONS(335), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(341), 2,
      sym_identifier,
      sym_number,
  [2070] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(345), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2082] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(347), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2094] = 4,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      sym_query_key,
    ACTIONS(349), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(79), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2109] = 4,
    ACTIONS(357), 1,
      anon_sym_AMP,
    ACTIONS(359), 1,
      anon_sym_EQ,
    ACTIONS(361), 1,
      sym_param,
    ACTIONS(355), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2124] = 4,
    ACTIONS(365), 1,
      anon_sym_AMP,
    ACTIONS(367), 1,
      anon_sym_EQ,
    ACTIONS(369), 1,
      sym_param,
    ACTIONS(363), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2139] = 4,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      sym_query_key,
    ACTIONS(371), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(79), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2154] = 4,
    ACTIONS(375), 1,
      anon_sym_AMP,
    ACTIONS(378), 1,
      sym_query_key,
    ACTIONS(373), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(79), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2169] = 5,
    ACTIONS(305), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_QMARK,
    STATE(107), 1,
      aux_sym_path_repeat1,
    STATE(173), 1,
      sym_path,
    ACTIONS(383), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2186] = 4,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      sym_query_key,
    ACTIONS(385), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(79), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2201] = 1,
    ACTIONS(218), 6,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2210] = 1,
    ACTIONS(254), 6,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2219] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(36), 1,
      anon_sym_AT,
    ACTIONS(387), 1,
      sym_identifier,
    STATE(40), 1,
      sym_host,
    STATE(172), 1,
      sym_authority,
    STATE(192), 1,
      sym_pair,
  [2238] = 4,
    ACTIONS(389), 1,
      anon_sym_SLASH,
    ACTIONS(393), 1,
      anon_sym_AMP,
    STATE(87), 1,
      aux_sym_path_repeat1,
    ACTIONS(391), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2253] = 4,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      sym_query_key,
    ACTIONS(395), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(79), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2268] = 4,
    ACTIONS(397), 1,
      anon_sym_SLASH,
    ACTIONS(402), 1,
      anon_sym_AMP,
    STATE(87), 1,
      aux_sym_path_repeat1,
    ACTIONS(400), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2283] = 1,
    ACTIONS(222), 6,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2292] = 4,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      sym_query_key,
    ACTIONS(404), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(79), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2307] = 1,
    ACTIONS(266), 6,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2316] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(36), 1,
      anon_sym_AT,
    ACTIONS(406), 1,
      sym_identifier,
    STATE(80), 1,
      sym_host,
    STATE(174), 1,
      sym_authority,
    STATE(192), 1,
      sym_pair,
  [2335] = 3,
    ACTIONS(408), 1,
      anon_sym_COLON,
    STATE(124), 1,
      sym_port,
    ACTIONS(149), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2348] = 3,
    ACTIONS(410), 1,
      anon_sym_COLON,
    STATE(124), 1,
      sym_port,
    ACTIONS(149), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2361] = 5,
    ACTIONS(305), 1,
      anon_sym_SLASH,
    ACTIONS(412), 1,
      anon_sym_QMARK,
    STATE(107), 1,
      aux_sym_path_repeat1,
    STATE(171), 1,
      sym_path,
    ACTIONS(414), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2378] = 5,
    ACTIONS(305), 1,
      anon_sym_SLASH,
    ACTIONS(416), 1,
      anon_sym_QMARK,
    STATE(107), 1,
      aux_sym_path_repeat1,
    STATE(181), 1,
      sym_path,
    ACTIONS(418), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2395] = 4,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      sym_query_key,
    ACTIONS(420), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(79), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2410] = 5,
    ACTIONS(305), 1,
      anon_sym_SLASH,
    ACTIONS(309), 1,
      anon_sym_QMARK,
    STATE(107), 1,
      aux_sym_path_repeat1,
    STATE(186), 1,
      sym_path,
    ACTIONS(311), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2427] = 4,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      sym_query_key,
    ACTIONS(422), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(75), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2442] = 4,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(426), 1,
      sym__line,
    STATE(110), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(424), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2456] = 4,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      sym_query_key,
    STATE(81), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2470] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(26), 1,
      aux_sym__whitespace_token1,
    ACTIONS(428), 1,
      anon_sym_HTTP_SLASH,
    STATE(2), 1,
      aux_sym__whitespace,
    STATE(216), 1,
      sym_http_version,
  [2486] = 3,
    ACTIONS(432), 1,
      anon_sym_AMP,
    ACTIONS(434), 1,
      sym_param,
    ACTIONS(430), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2498] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    STATE(8), 1,
      aux_sym__whitespace,
    STATE(59), 1,
      sym_variable,
  [2514] = 2,
    ACTIONS(254), 1,
      anon_sym_AMP,
    ACTIONS(256), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2524] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    STATE(8), 1,
      aux_sym__whitespace,
    STATE(52), 1,
      sym_variable,
  [2540] = 4,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      sym_query_key,
    STATE(89), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2554] = 3,
    ACTIONS(305), 1,
      anon_sym_SLASH,
    STATE(108), 1,
      aux_sym_path_repeat1,
    ACTIONS(393), 3,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2566] = 3,
    ACTIONS(436), 1,
      anon_sym_SLASH,
    STATE(108), 1,
      aux_sym_path_repeat1,
    ACTIONS(402), 3,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2578] = 4,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      sym_query_key,
    STATE(96), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2592] = 4,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(441), 1,
      sym__line,
    STATE(110), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(439), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2606] = 4,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      sym_query_key,
    STATE(78), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2620] = 3,
    ACTIONS(446), 1,
      anon_sym_AMP,
    ACTIONS(448), 1,
      sym_param,
    ACTIONS(444), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2632] = 2,
    ACTIONS(218), 1,
      anon_sym_AMP,
    ACTIONS(220), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2642] = 4,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      sym_query_key,
    STATE(86), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2656] = 2,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(268), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2666] = 2,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(224), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2676] = 3,
    ACTIONS(402), 1,
      anon_sym_AMP,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(400), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2688] = 2,
    ACTIONS(455), 1,
      anon_sym_AMP,
    ACTIONS(453), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2698] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    ACTIONS(457), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(8), 1,
      aux_sym__whitespace,
  [2711] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(459), 1,
      sym_identifier,
    ACTIONS(461), 1,
      aux_sym_xml_body_token3,
    STATE(120), 1,
      aux_sym_form_data_repeat1,
  [2724] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    ACTIONS(464), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(139), 1,
      aux_sym__whitespace,
  [2737] = 4,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(56), 1,
      sym__line,
    ACTIONS(466), 1,
      aux_sym__whitespace_token1,
    STATE(122), 1,
      aux_sym__whitespace,
  [2750] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    ACTIONS(469), 1,
      anon_sym_EQ,
    STATE(8), 1,
      aux_sym__whitespace,
  [2763] = 1,
    ACTIONS(262), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2770] = 4,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(439), 1,
      aux_sym_xml_body_token2,
    ACTIONS(471), 1,
      sym__line,
    STATE(125), 1,
      aux_sym_script_variable_repeat1,
  [2783] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(474), 1,
      sym_identifier,
    ACTIONS(476), 1,
      aux_sym__whitespace_token1,
    STATE(157), 1,
      aux_sym__whitespace,
  [2796] = 4,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(439), 1,
      aux_sym_script_variable_token2,
    ACTIONS(478), 1,
      sym__line,
    STATE(127), 1,
      aux_sym_script_variable_repeat1,
  [2809] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(476), 1,
      aux_sym__whitespace_token1,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(126), 1,
      aux_sym__whitespace,
  [2822] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(17), 1,
      sym_status_code,
    ACTIONS(483), 1,
      aux_sym__whitespace_token1,
    STATE(129), 1,
      aux_sym__whitespace,
  [2835] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(476), 1,
      aux_sym__whitespace_token1,
    ACTIONS(486), 1,
      sym_identifier,
    STATE(163), 1,
      aux_sym__whitespace,
  [2848] = 4,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(488), 1,
      aux_sym_xml_body_token2,
    ACTIONS(490), 1,
      sym__line,
    STATE(125), 1,
      aux_sym_script_variable_repeat1,
  [2861] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(476), 1,
      aux_sym__whitespace_token1,
    ACTIONS(492), 1,
      sym_identifier,
    STATE(157), 1,
      aux_sym__whitespace,
  [2874] = 1,
    ACTIONS(455), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2881] = 2,
    ACTIONS(496), 1,
      anon_sym_AMP,
    ACTIONS(494), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2890] = 4,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(498), 1,
      aux_sym_json_body_token3,
    ACTIONS(500), 1,
      sym__line,
    STATE(162), 1,
      aux_sym_script_variable_repeat1,
  [2903] = 4,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(502), 1,
      aux_sym__whitespace_token1,
    ACTIONS(504), 1,
      sym__line,
    STATE(122), 1,
      aux_sym__whitespace,
  [2916] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    ACTIONS(506), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(8), 1,
      aux_sym__whitespace,
  [2929] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    ACTIONS(508), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(140), 1,
      aux_sym__whitespace,
  [2942] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    ACTIONS(510), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(8), 1,
      aux_sym__whitespace,
  [2955] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    ACTIONS(512), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(8), 1,
      aux_sym__whitespace,
  [2968] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(514), 1,
      sym_status_code,
    ACTIONS(516), 1,
      aux_sym__whitespace_token1,
    STATE(129), 1,
      aux_sym__whitespace,
  [2981] = 1,
    ACTIONS(258), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2988] = 4,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(502), 1,
      aux_sym__whitespace_token1,
    ACTIONS(518), 1,
      sym__line,
    STATE(122), 1,
      aux_sym__whitespace,
  [3001] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(522), 1,
      aux_sym_xml_body_token3,
    STATE(120), 1,
      aux_sym_form_data_repeat1,
  [3014] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(476), 1,
      aux_sym__whitespace_token1,
    ACTIONS(524), 1,
      sym_identifier,
    STATE(132), 1,
      aux_sym__whitespace,
  [3027] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    ACTIONS(526), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(154), 1,
      aux_sym__whitespace,
  [3040] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      aux_sym__whitespace,
  [3053] = 1,
    ACTIONS(530), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3060] = 2,
    ACTIONS(534), 1,
      anon_sym_AMP,
    ACTIONS(532), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [3069] = 2,
    ACTIONS(536), 1,
      anon_sym_SLASH,
    ACTIONS(402), 3,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3078] = 2,
    ACTIONS(541), 1,
      anon_sym_AMP,
    ACTIONS(539), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [3087] = 2,
    ACTIONS(545), 1,
      anon_sym_AMP,
    ACTIONS(543), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [3096] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    ACTIONS(547), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(8), 1,
      aux_sym__whitespace,
  [3109] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    ACTIONS(549), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(8), 1,
      aux_sym__whitespace,
  [3122] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    ACTIONS(551), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(153), 1,
      aux_sym__whitespace,
  [3135] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    ACTIONS(553), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(119), 1,
      aux_sym__whitespace,
  [3148] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(555), 1,
      aux_sym__whitespace_token1,
    STATE(157), 1,
      aux_sym__whitespace,
  [3161] = 4,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(558), 1,
      aux_sym_script_variable_token2,
    ACTIONS(560), 1,
      sym__line,
    STATE(127), 1,
      aux_sym_script_variable_repeat1,
  [3174] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    ACTIONS(562), 1,
      anon_sym_EQ,
    STATE(123), 1,
      aux_sym__whitespace,
  [3187] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(564), 1,
      anon_sym_AT,
    ACTIONS(566), 1,
      aux_sym__whitespace_token1,
    STATE(143), 1,
      aux_sym__whitespace,
  [3200] = 1,
    ACTIONS(568), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3207] = 4,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(439), 1,
      aux_sym_json_body_token3,
    ACTIONS(570), 1,
      sym__line,
    STATE(162), 1,
      aux_sym_script_variable_repeat1,
  [3220] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(476), 1,
      aux_sym__whitespace_token1,
    ACTIONS(573), 1,
      sym_identifier,
    STATE(157), 1,
      aux_sym__whitespace,
  [3233] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    ACTIONS(575), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(137), 1,
      aux_sym__whitespace,
  [3246] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(22), 2,
      sym_identifier,
      aux_sym__whitespace_token1,
  [3254] = 3,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(577), 1,
      sym__line,
    STATE(99), 1,
      aux_sym_script_variable_repeat1,
  [3264] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    STATE(147), 1,
      aux_sym__whitespace,
  [3274] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(579), 1,
      anon_sym_COLON,
    ACTIONS(581), 1,
      anon_sym_EQ,
  [3284] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(516), 1,
      aux_sym__whitespace_token1,
    STATE(141), 1,
      aux_sym__whitespace,
  [3294] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(566), 1,
      aux_sym__whitespace_token1,
    STATE(136), 1,
      aux_sym__whitespace,
  [3304] = 2,
    ACTIONS(381), 1,
      anon_sym_QMARK,
    ACTIONS(383), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3312] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(58), 1,
      sym_host,
  [3322] = 2,
    ACTIONS(416), 1,
      anon_sym_QMARK,
    ACTIONS(418), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3330] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(585), 1,
      sym_identifier,
    STATE(95), 1,
      sym_host,
  [3340] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(589), 1,
      aux_sym_port_token1,
  [3350] = 3,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(591), 1,
      sym__line,
    STATE(131), 1,
      aux_sym_script_variable_repeat1,
  [3360] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(585), 1,
      sym_identifier,
    STATE(94), 1,
      sym_host,
  [3370] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    STATE(103), 1,
      aux_sym__whitespace,
  [3380] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
  [3390] = 3,
    ACTIONS(26), 1,
      aux_sym__whitespace_token1,
    ACTIONS(593), 1,
      aux_sym_request_token1,
    STATE(101), 1,
      aux_sym__whitespace,
  [3400] = 2,
    ACTIONS(595), 1,
      anon_sym_QMARK,
    ACTIONS(597), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3408] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(22), 2,
      sym_status_code,
      aux_sym__whitespace_token1,
  [3416] = 3,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(599), 1,
      sym__line,
    STATE(158), 1,
      aux_sym_script_variable_repeat1,
  [3426] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(26), 1,
      aux_sym__whitespace_token1,
    STATE(4), 1,
      aux_sym__whitespace,
  [3436] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      aux_sym__whitespace_token1,
    STATE(105), 1,
      aux_sym__whitespace,
  [3446] = 2,
    ACTIONS(412), 1,
      anon_sym_QMARK,
    ACTIONS(414), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3454] = 3,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(601), 1,
      sym__line,
    STATE(135), 1,
      aux_sym_script_variable_repeat1,
  [3464] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(587), 1,
      sym_identifier,
    ACTIONS(603), 1,
      aux_sym_port_token1,
  [3474] = 2,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(61), 2,
      aux_sym__whitespace_token1,
      sym__line,
  [3482] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(48), 1,
      sym_host,
  [3492] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(605), 1,
      sym_identifier,
  [3499] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(607), 1,
      anon_sym_AT,
  [3506] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(530), 1,
      sym_identifier,
  [3513] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(568), 1,
      sym_identifier,
  [3520] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(609), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3527] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(611), 1,
      anon_sym_EQ,
  [3534] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(520), 1,
      sym_identifier,
  [3541] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(613), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3548] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(615), 1,
      aux_sym_port_token1,
  [3555] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(617), 1,
      anon_sym_COLON,
  [3562] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(619), 1,
      anon_sym_AT,
  [3569] = 2,
    ACTIONS(44), 1,
      aux_sym_request_token1,
    ACTIONS(621), 1,
      sym_query_key,
  [3576] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(623), 1,
      aux_sym_port_token1,
  [3583] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(579), 1,
      anon_sym_COLON,
  [3590] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(625), 1,
      sym_identifier,
  [3597] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(627), 1,
      ts_builtin_sym_end,
  [3604] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(629), 1,
      anon_sym_AT,
  [3611] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(631), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3618] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(581), 1,
      anon_sym_EQ,
  [3625] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(633), 1,
      sym_identifier,
  [3632] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(635), 1,
      aux_sym__whitespace_token1,
  [3639] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(637), 1,
      aux_sym_http_version_token1,
  [3646] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(639), 1,
      aux_sym_http_version_token1,
  [3653] = 1,
    ACTIONS(641), 1,
      aux_sym_request_token1,
  [3657] = 1,
    ACTIONS(643), 1,
      aux_sym_request_token1,
  [3661] = 1,
    ACTIONS(645), 1,
      aux_sym_request_token1,
  [3665] = 1,
    ACTIONS(647), 1,
      aux_sym_request_token1,
  [3669] = 1,
    ACTIONS(635), 1,
      aux_sym_request_token1,
  [3673] = 1,
    ACTIONS(649), 1,
      aux_sym_request_token1,
  [3677] = 1,
    ACTIONS(651), 1,
      aux_sym_request_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 87,
  [SMALL_STATE(7)] = 171,
  [SMALL_STATE(8)] = 255,
  [SMALL_STATE(9)] = 313,
  [SMALL_STATE(10)] = 366,
  [SMALL_STATE(11)] = 422,
  [SMALL_STATE(12)] = 473,
  [SMALL_STATE(13)] = 524,
  [SMALL_STATE(14)] = 575,
  [SMALL_STATE(15)] = 617,
  [SMALL_STATE(16)] = 659,
  [SMALL_STATE(17)] = 701,
  [SMALL_STATE(18)] = 743,
  [SMALL_STATE(19)] = 785,
  [SMALL_STATE(20)] = 823,
  [SMALL_STATE(21)] = 861,
  [SMALL_STATE(22)] = 899,
  [SMALL_STATE(23)] = 937,
  [SMALL_STATE(24)] = 975,
  [SMALL_STATE(25)] = 1013,
  [SMALL_STATE(26)] = 1051,
  [SMALL_STATE(27)] = 1083,
  [SMALL_STATE(28)] = 1115,
  [SMALL_STATE(29)] = 1147,
  [SMALL_STATE(30)] = 1173,
  [SMALL_STATE(31)] = 1199,
  [SMALL_STATE(32)] = 1225,
  [SMALL_STATE(33)] = 1247,
  [SMALL_STATE(34)] = 1269,
  [SMALL_STATE(35)] = 1292,
  [SMALL_STATE(36)] = 1315,
  [SMALL_STATE(37)] = 1338,
  [SMALL_STATE(38)] = 1361,
  [SMALL_STATE(39)] = 1384,
  [SMALL_STATE(40)] = 1404,
  [SMALL_STATE(41)] = 1424,
  [SMALL_STATE(42)] = 1444,
  [SMALL_STATE(43)] = 1464,
  [SMALL_STATE(44)] = 1484,
  [SMALL_STATE(45)] = 1504,
  [SMALL_STATE(46)] = 1524,
  [SMALL_STATE(47)] = 1544,
  [SMALL_STATE(48)] = 1564,
  [SMALL_STATE(49)] = 1584,
  [SMALL_STATE(50)] = 1604,
  [SMALL_STATE(51)] = 1624,
  [SMALL_STATE(52)] = 1644,
  [SMALL_STATE(53)] = 1664,
  [SMALL_STATE(54)] = 1684,
  [SMALL_STATE(55)] = 1704,
  [SMALL_STATE(56)] = 1724,
  [SMALL_STATE(57)] = 1744,
  [SMALL_STATE(58)] = 1764,
  [SMALL_STATE(59)] = 1784,
  [SMALL_STATE(60)] = 1804,
  [SMALL_STATE(61)] = 1833,
  [SMALL_STATE(62)] = 1862,
  [SMALL_STATE(63)] = 1891,
  [SMALL_STATE(64)] = 1912,
  [SMALL_STATE(65)] = 1931,
  [SMALL_STATE(66)] = 1952,
  [SMALL_STATE(67)] = 1973,
  [SMALL_STATE(68)] = 1994,
  [SMALL_STATE(69)] = 2006,
  [SMALL_STATE(70)] = 2024,
  [SMALL_STATE(71)] = 2036,
  [SMALL_STATE(72)] = 2052,
  [SMALL_STATE(73)] = 2070,
  [SMALL_STATE(74)] = 2082,
  [SMALL_STATE(75)] = 2094,
  [SMALL_STATE(76)] = 2109,
  [SMALL_STATE(77)] = 2124,
  [SMALL_STATE(78)] = 2139,
  [SMALL_STATE(79)] = 2154,
  [SMALL_STATE(80)] = 2169,
  [SMALL_STATE(81)] = 2186,
  [SMALL_STATE(82)] = 2201,
  [SMALL_STATE(83)] = 2210,
  [SMALL_STATE(84)] = 2219,
  [SMALL_STATE(85)] = 2238,
  [SMALL_STATE(86)] = 2253,
  [SMALL_STATE(87)] = 2268,
  [SMALL_STATE(88)] = 2283,
  [SMALL_STATE(89)] = 2292,
  [SMALL_STATE(90)] = 2307,
  [SMALL_STATE(91)] = 2316,
  [SMALL_STATE(92)] = 2335,
  [SMALL_STATE(93)] = 2348,
  [SMALL_STATE(94)] = 2361,
  [SMALL_STATE(95)] = 2378,
  [SMALL_STATE(96)] = 2395,
  [SMALL_STATE(97)] = 2410,
  [SMALL_STATE(98)] = 2427,
  [SMALL_STATE(99)] = 2442,
  [SMALL_STATE(100)] = 2456,
  [SMALL_STATE(101)] = 2470,
  [SMALL_STATE(102)] = 2486,
  [SMALL_STATE(103)] = 2498,
  [SMALL_STATE(104)] = 2514,
  [SMALL_STATE(105)] = 2524,
  [SMALL_STATE(106)] = 2540,
  [SMALL_STATE(107)] = 2554,
  [SMALL_STATE(108)] = 2566,
  [SMALL_STATE(109)] = 2578,
  [SMALL_STATE(110)] = 2592,
  [SMALL_STATE(111)] = 2606,
  [SMALL_STATE(112)] = 2620,
  [SMALL_STATE(113)] = 2632,
  [SMALL_STATE(114)] = 2642,
  [SMALL_STATE(115)] = 2656,
  [SMALL_STATE(116)] = 2666,
  [SMALL_STATE(117)] = 2676,
  [SMALL_STATE(118)] = 2688,
  [SMALL_STATE(119)] = 2698,
  [SMALL_STATE(120)] = 2711,
  [SMALL_STATE(121)] = 2724,
  [SMALL_STATE(122)] = 2737,
  [SMALL_STATE(123)] = 2750,
  [SMALL_STATE(124)] = 2763,
  [SMALL_STATE(125)] = 2770,
  [SMALL_STATE(126)] = 2783,
  [SMALL_STATE(127)] = 2796,
  [SMALL_STATE(128)] = 2809,
  [SMALL_STATE(129)] = 2822,
  [SMALL_STATE(130)] = 2835,
  [SMALL_STATE(131)] = 2848,
  [SMALL_STATE(132)] = 2861,
  [SMALL_STATE(133)] = 2874,
  [SMALL_STATE(134)] = 2881,
  [SMALL_STATE(135)] = 2890,
  [SMALL_STATE(136)] = 2903,
  [SMALL_STATE(137)] = 2916,
  [SMALL_STATE(138)] = 2929,
  [SMALL_STATE(139)] = 2942,
  [SMALL_STATE(140)] = 2955,
  [SMALL_STATE(141)] = 2968,
  [SMALL_STATE(142)] = 2981,
  [SMALL_STATE(143)] = 2988,
  [SMALL_STATE(144)] = 3001,
  [SMALL_STATE(145)] = 3014,
  [SMALL_STATE(146)] = 3027,
  [SMALL_STATE(147)] = 3040,
  [SMALL_STATE(148)] = 3053,
  [SMALL_STATE(149)] = 3060,
  [SMALL_STATE(150)] = 3069,
  [SMALL_STATE(151)] = 3078,
  [SMALL_STATE(152)] = 3087,
  [SMALL_STATE(153)] = 3096,
  [SMALL_STATE(154)] = 3109,
  [SMALL_STATE(155)] = 3122,
  [SMALL_STATE(156)] = 3135,
  [SMALL_STATE(157)] = 3148,
  [SMALL_STATE(158)] = 3161,
  [SMALL_STATE(159)] = 3174,
  [SMALL_STATE(160)] = 3187,
  [SMALL_STATE(161)] = 3200,
  [SMALL_STATE(162)] = 3207,
  [SMALL_STATE(163)] = 3220,
  [SMALL_STATE(164)] = 3233,
  [SMALL_STATE(165)] = 3246,
  [SMALL_STATE(166)] = 3254,
  [SMALL_STATE(167)] = 3264,
  [SMALL_STATE(168)] = 3274,
  [SMALL_STATE(169)] = 3284,
  [SMALL_STATE(170)] = 3294,
  [SMALL_STATE(171)] = 3304,
  [SMALL_STATE(172)] = 3312,
  [SMALL_STATE(173)] = 3322,
  [SMALL_STATE(174)] = 3330,
  [SMALL_STATE(175)] = 3340,
  [SMALL_STATE(176)] = 3350,
  [SMALL_STATE(177)] = 3360,
  [SMALL_STATE(178)] = 3370,
  [SMALL_STATE(179)] = 3380,
  [SMALL_STATE(180)] = 3390,
  [SMALL_STATE(181)] = 3400,
  [SMALL_STATE(182)] = 3408,
  [SMALL_STATE(183)] = 3416,
  [SMALL_STATE(184)] = 3426,
  [SMALL_STATE(185)] = 3436,
  [SMALL_STATE(186)] = 3446,
  [SMALL_STATE(187)] = 3454,
  [SMALL_STATE(188)] = 3464,
  [SMALL_STATE(189)] = 3474,
  [SMALL_STATE(190)] = 3482,
  [SMALL_STATE(191)] = 3492,
  [SMALL_STATE(192)] = 3499,
  [SMALL_STATE(193)] = 3506,
  [SMALL_STATE(194)] = 3513,
  [SMALL_STATE(195)] = 3520,
  [SMALL_STATE(196)] = 3527,
  [SMALL_STATE(197)] = 3534,
  [SMALL_STATE(198)] = 3541,
  [SMALL_STATE(199)] = 3548,
  [SMALL_STATE(200)] = 3555,
  [SMALL_STATE(201)] = 3562,
  [SMALL_STATE(202)] = 3569,
  [SMALL_STATE(203)] = 3576,
  [SMALL_STATE(204)] = 3583,
  [SMALL_STATE(205)] = 3590,
  [SMALL_STATE(206)] = 3597,
  [SMALL_STATE(207)] = 3604,
  [SMALL_STATE(208)] = 3611,
  [SMALL_STATE(209)] = 3618,
  [SMALL_STATE(210)] = 3625,
  [SMALL_STATE(211)] = 3632,
  [SMALL_STATE(212)] = 3639,
  [SMALL_STATE(213)] = 3646,
  [SMALL_STATE(214)] = 3653,
  [SMALL_STATE(215)] = 3657,
  [SMALL_STATE(216)] = 3661,
  [SMALL_STATE(217)] = 3665,
  [SMALL_STATE(218)] = 3669,
  [SMALL_STATE(219)] = 3673,
  [SMALL_STATE(220)] = 3677,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 1, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(9),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 1, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(11),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(209),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(215),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(166),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(167),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(160),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 4, 0, 18),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 4, 0, 18),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 3, 0, 15),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 3, 0, 15),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, 0, 21),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, 0, 21),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, 0, 21), SHIFT_REPEAT(197),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, 0, 21), SHIFT_REPEAT(144),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 4, 0, 23),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 4, 0, 23),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, 0, 19),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, 0, 19),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, 0, 13),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, 0, 13),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 14),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 14),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, 0, 13),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 4, 0, 13),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 16),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 16),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 17),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 17),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 20),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 20),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 4),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 6, 0, 19),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 6, 0, 19),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 4, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 4, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 22),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, 0, 22),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 11),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 8),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 1, 0, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 1, 0, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, 0, 6),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, 0, 6),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 6, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 5, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 3, 0, 0),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 4, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 7, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 1, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, 0, 6),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, 0, 6),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2, 0, 0),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, 0, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, 0, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 2, 0, 0),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(189),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(182),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 4, 0, 12),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, 0, 12),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, 0, 7),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, 0, 7),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, 0, 10),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, 0, 10),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, 0, 9),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, 0, 9),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(165),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1, 0, 0),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme, 1, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 5),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [627] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_text, 1, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
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
