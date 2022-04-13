-- enum wrapper
class RFC_DIRECTION_ENUM_API

feature {ANY}

	is_valid_enum (a_value: INTEGER): BOOLEAN 
			-- Is `a_value' a valid integer code for this enum ?
		do
			Result := a_value = rfc_import or a_value = rfc_export or a_value = rfc_changing or a_value = rfc_tables
		end

	rfc_import: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_IMPORT"
		end

	rfc_export: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_EXPORT"
		end

	rfc_changing: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_CHANGING"
		end

	rfc_tables: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_TABLES"
		end

end
