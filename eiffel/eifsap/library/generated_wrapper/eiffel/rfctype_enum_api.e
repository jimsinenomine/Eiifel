-- enum wrapper
class RFCTYPE_ENUM_API

feature {ANY}

	is_valid_enum (a_value: INTEGER): BOOLEAN 
			-- Is `a_value' a valid integer code for this enum ?
		do
			Result := a_value = rfctype_char or a_value = rfctype_date or a_value = rfctype_bcd or a_value = rfctype_time or a_value = rfctype_byte or a_value = rfctype_table or a_value = rfctype_num or a_value = rfctype_float or a_value = rfctype_int or a_value = rfctype_int2 or a_value = rfctype_int1 or a_value = rfctype_null or a_value = rfctype_abapobject or a_value = rfctype_structure or a_value = rfctype_decf16 or a_value = rfctype_decf34 or a_value = rfctype_xmldata or a_value = rfctype_string or a_value = rfctype_xstring or a_value = rfctype_int8 or a_value = rfctype_utclong or a_value = rfctype_utcsecond or a_value = rfctype_utcminute or a_value = rfctype_dtday or a_value = rfctype_dtweek or a_value = rfctype_dtmonth or a_value = rfctype_tsecond or a_value = rfctype_tminute or a_value = rfctype_cday or a_value = rfctype_box or a_value = rfctype_generic_box or a_value = rfctype_max_value
		end

	rfctype_char: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_CHAR"
		end

	rfctype_date: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_DATE"
		end

	rfctype_bcd: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_BCD"
		end

	rfctype_time: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_TIME"
		end

	rfctype_byte: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_BYTE"
		end

	rfctype_table: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_TABLE"
		end

	rfctype_num: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_NUM"
		end

	rfctype_float: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_FLOAT"
		end

	rfctype_int: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_INT"
		end

	rfctype_int2: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_INT2"
		end

	rfctype_int1: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_INT1"
		end

	rfctype_null: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_NULL"
		end

	rfctype_abapobject: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_ABAPOBJECT"
		end

	rfctype_structure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_STRUCTURE"
		end

	rfctype_decf16: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_DECF16"
		end

	rfctype_decf34: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_DECF34"
		end

	rfctype_xmldata: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_XMLDATA"
		end

	rfctype_string: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_STRING"
		end

	rfctype_xstring: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_XSTRING"
		end

	rfctype_int8: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_INT8"
		end

	rfctype_utclong: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_UTCLONG"
		end

	rfctype_utcsecond: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_UTCSECOND"
		end

	rfctype_utcminute: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_UTCMINUTE"
		end

	rfctype_dtday: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_DTDAY"
		end

	rfctype_dtweek: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_DTWEEK"
		end

	rfctype_dtmonth: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_DTMONTH"
		end

	rfctype_tsecond: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_TSECOND"
		end

	rfctype_tminute: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_TMINUTE"
		end

	rfctype_cday: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_CDAY"
		end

	rfctype_box: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_BOX"
		end

	rfctype_generic_box: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFCTYPE_GENERIC_BOX"
		end

	rfctype_max_value: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"_RFCTYPE_max_value"
		end

end
