-- enum wrapper
class RFC_CLASS_ATTRIBUTE_TYPE_ENUM_API

feature {ANY}

	is_valid_enum (a_value: INTEGER): BOOLEAN 
			-- Is `a_value' a valid integer code for this enum ?
		do
			Result := a_value = rfc_class_attribute_instance or a_value = rfc_class_attribute_class or a_value = rfc_class_attribute_constant
		end

	rfc_class_attribute_instance: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_CLASS_ATTRIBUTE_INSTANCE"
		end

	rfc_class_attribute_class: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_CLASS_ATTRIBUTE_CLASS"
		end

	rfc_class_attribute_constant: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_CLASS_ATTRIBUTE_CONSTANT"
		end

end
