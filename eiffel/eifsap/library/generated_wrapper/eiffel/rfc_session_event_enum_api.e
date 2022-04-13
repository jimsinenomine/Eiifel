-- enum wrapper
class RFC_SESSION_EVENT_ENUM_API

feature {ANY}

	is_valid_enum (a_value: INTEGER): BOOLEAN 
			-- Is `a_value' a valid integer code for this enum ?
		do
			Result := a_value = rfc_session_created or a_value = rfc_session_activated or a_value = rfc_session_passivated or a_value = rfc_session_destroyed
		end

	rfc_session_created: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_SESSION_CREATED"
		end

	rfc_session_activated: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_SESSION_ACTIVATED"
		end

	rfc_session_passivated: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_SESSION_PASSIVATED"
		end

	rfc_session_destroyed: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_SESSION_DESTROYED"
		end

end
