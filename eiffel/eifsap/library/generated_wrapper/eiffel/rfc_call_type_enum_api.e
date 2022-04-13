-- enum wrapper
class RFC_CALL_TYPE_ENUM_API

feature {ANY}

	is_valid_enum (a_value: INTEGER): BOOLEAN 
			-- Is `a_value' a valid integer code for this enum ?
		do
			Result := a_value = rfc_synchronous or a_value = rfc_transactional or a_value = rfc_queued or a_value = rfc_background_unit
		end

	rfc_synchronous: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_SYNCHRONOUS"
		end

	rfc_transactional: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_TRANSACTIONAL"
		end

	rfc_queued: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_QUEUED"
		end

	rfc_background_unit: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_BACKGROUND_UNIT"
		end

end
