-- enum wrapper
class RFC_SERVER_STATE_ENUM_API

feature {ANY}

	is_valid_enum (a_value: INTEGER): BOOLEAN 
			-- Is `a_value' a valid integer code for this enum ?
		do
			Result := a_value = rfc_server_initial or a_value = rfc_server_starting or a_value = rfc_server_running or a_value = rfc_server_broken or a_value = rfc_server_stopping or a_value = rfc_server_stopped
		end

	rfc_server_initial: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_SERVER_INITIAL"
		end

	rfc_server_starting: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_SERVER_STARTING"
		end

	rfc_server_running: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_SERVER_RUNNING"
		end

	rfc_server_broken: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_SERVER_BROKEN"
		end

	rfc_server_stopping: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_SERVER_STOPPING"
		end

	rfc_server_stopped: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_SERVER_STOPPED"
		end

end
