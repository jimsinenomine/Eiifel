-- enum wrapper
class RFC_AUTHENTICATION_TYPE_ENUM_API

feature {ANY}

	is_valid_enum (a_value: INTEGER): BOOLEAN 
			-- Is `a_value' a valid integer code for this enum ?
		do
			Result := a_value = rfc_auth_none or a_value = rfc_auth_basic or a_value = rfc_auth_x509 or a_value = rfc_auth_sso
		end

	rfc_auth_none: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_AUTH_NONE"
		end

	rfc_auth_basic: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_AUTH_BASIC"
		end

	rfc_auth_x509: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_AUTH_X509"
		end

	rfc_auth_sso: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_AUTH_SSO"
		end

end
