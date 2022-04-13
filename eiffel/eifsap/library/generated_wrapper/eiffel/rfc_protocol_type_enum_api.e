-- enum wrapper
class RFC_PROTOCOL_TYPE_ENUM_API

feature {ANY}

	is_valid_enum (a_value: INTEGER): BOOLEAN 
			-- Is `a_value' a valid integer code for this enum ?
		do
			Result := a_value = rfc_unkown or a_value = rfc_client or a_value = rfc_started_server or a_value = rfc_registered_server or a_value = rfc_multi_count_registered_server or a_value = rfc_tcp_socket_client or a_value = rfc_tcp_socket_server or a_value = rfc_websocket_client or a_value = rfc_websocket_server or a_value = rfc_proxy_websocket_client
		end

	rfc_unkown: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_UNKOWN"
		end

	rfc_client: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_CLIENT"
		end

	rfc_started_server: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_STARTED_SERVER"
		end

	rfc_registered_server: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_REGISTERED_SERVER"
		end

	rfc_multi_count_registered_server: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_MULTI_COUNT_REGISTERED_SERVER"
		end

	rfc_tcp_socket_client: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_TCP_SOCKET_CLIENT"
		end

	rfc_tcp_socket_server: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_TCP_SOCKET_SERVER"
		end

	rfc_websocket_client: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_WEBSOCKET_CLIENT"
		end

	rfc_websocket_server: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_WEBSOCKET_SERVER"
		end

	rfc_proxy_websocket_client: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_PROXY_WEBSOCKET_CLIENT"
		end

end
