-- enum wrapper
class RFC_UNIT_STATE_ENUM_API

feature {ANY}

	is_valid_enum (a_value: INTEGER): BOOLEAN 
			-- Is `a_value' a valid integer code for this enum ?
		do
			Result := a_value = rfc_unit_not_found or a_value = rfc_unit_in_process or a_value = rfc_unit_committed or a_value = rfc_unit_rolled_back or a_value = rfc_unit_confirmed
		end

	rfc_unit_not_found: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_UNIT_NOT_FOUND"
		end

	rfc_unit_in_process: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_UNIT_IN_PROCESS"
		end

	rfc_unit_committed: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_UNIT_COMMITTED"
		end

	rfc_unit_rolled_back: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_UNIT_ROLLED_BACK"
		end

	rfc_unit_confirmed: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_UNIT_CONFIRMED"
		end

end
