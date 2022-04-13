-- enum wrapper
class RFC_ERROR_GROUP_ENUM_API

feature {ANY}

	is_valid_enum (a_value: INTEGER): BOOLEAN 
			-- Is `a_value' a valid integer code for this enum ?
		do
			Result := a_value = ok or a_value = abap_application_failure or a_value = abap_runtime_failure or a_value = logon_failure or a_value = communication_failure or a_value = external_runtime_failure or a_value = external_application_failure or a_value = external_authorization_failure or a_value = external_authentication_failure or a_value = cryptolib_failure
		end

	ok: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"OK"
		end

	abap_application_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"ABAP_APPLICATION_FAILURE"
		end

	abap_runtime_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"ABAP_RUNTIME_FAILURE"
		end

	logon_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"LOGON_FAILURE"
		end

	communication_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"COMMUNICATION_FAILURE"
		end

	external_runtime_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"EXTERNAL_RUNTIME_FAILURE"
		end

	external_application_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"EXTERNAL_APPLICATION_FAILURE"
		end

	external_authorization_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"EXTERNAL_AUTHORIZATION_FAILURE"
		end

	external_authentication_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"EXTERNAL_AUTHENTICATION_FAILURE"
		end

	cryptolib_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"CRYPTOLIB_FAILURE"
		end

end
