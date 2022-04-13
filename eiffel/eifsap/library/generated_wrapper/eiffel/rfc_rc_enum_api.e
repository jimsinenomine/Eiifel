-- enum wrapper
class RFC_RC_ENUM_API

feature {ANY}

	is_valid_enum (a_value: INTEGER): BOOLEAN 
			-- Is `a_value' a valid integer code for this enum ?
		do
			Result := a_value = rfc_ok or a_value = rfc_communication_failure or a_value = rfc_logon_failure or a_value = rfc_abap_runtime_failure or a_value = rfc_abap_message or a_value = rfc_abap_exception or a_value = rfc_closed or a_value = rfc_canceled or a_value = rfc_timeout or a_value = rfc_memory_insufficient or a_value = rfc_version_mismatch or a_value = rfc_invalid_protocol or a_value = rfc_serialization_failure or a_value = rfc_invalid_handle or a_value = rfc_retry or a_value = rfc_external_failure or a_value = rfc_executed or a_value = rfc_not_found or a_value = rfc_not_supported or a_value = rfc_illegal_state or a_value = rfc_invalid_parameter or a_value = rfc_codepage_conversion_failure or a_value = rfc_conversion_failure or a_value = rfc_buffer_too_small or a_value = rfc_table_move_bof or a_value = rfc_table_move_eof or a_value = rfc_start_sapgui_failure or a_value = rfc_abap_class_exception or a_value = rfc_unknown_error or a_value = rfc_authorization_failure or a_value = rfc_authentication_failure or a_value = rfc_cryptolib_failure or a_value = rfc_io_failure or a_value = rfc_rc_max_value
		end

	rfc_ok: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_OK"
		end

	rfc_communication_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_COMMUNICATION_FAILURE"
		end

	rfc_logon_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_LOGON_FAILURE"
		end

	rfc_abap_runtime_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_ABAP_RUNTIME_FAILURE"
		end

	rfc_abap_message: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_ABAP_MESSAGE"
		end

	rfc_abap_exception: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_ABAP_EXCEPTION"
		end

	rfc_closed: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_CLOSED"
		end

	rfc_canceled: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_CANCELED"
		end

	rfc_timeout: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_TIMEOUT"
		end

	rfc_memory_insufficient: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_MEMORY_INSUFFICIENT"
		end

	rfc_version_mismatch: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_VERSION_MISMATCH"
		end

	rfc_invalid_protocol: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_INVALID_PROTOCOL"
		end

	rfc_serialization_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_SERIALIZATION_FAILURE"
		end

	rfc_invalid_handle: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_INVALID_HANDLE"
		end

	rfc_retry: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_RETRY"
		end

	rfc_external_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_EXTERNAL_FAILURE"
		end

	rfc_executed: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_EXECUTED"
		end

	rfc_not_found: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_NOT_FOUND"
		end

	rfc_not_supported: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_NOT_SUPPORTED"
		end

	rfc_illegal_state: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_ILLEGAL_STATE"
		end

	rfc_invalid_parameter: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_INVALID_PARAMETER"
		end

	rfc_codepage_conversion_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_CODEPAGE_CONVERSION_FAILURE"
		end

	rfc_conversion_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_CONVERSION_FAILURE"
		end

	rfc_buffer_too_small: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_BUFFER_TOO_SMALL"
		end

	rfc_table_move_bof: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_TABLE_MOVE_BOF"
		end

	rfc_table_move_eof: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_TABLE_MOVE_EOF"
		end

	rfc_start_sapgui_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_START_SAPGUI_FAILURE"
		end

	rfc_abap_class_exception: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_ABAP_CLASS_EXCEPTION"
		end

	rfc_unknown_error: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_UNKNOWN_ERROR"
		end

	rfc_authorization_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_AUTHORIZATION_FAILURE"
		end

	rfc_authentication_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_AUTHENTICATION_FAILURE"
		end

	rfc_cryptolib_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_CRYPTOLIB_FAILURE"
		end

	rfc_io_failure: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"RFC_IO_FAILURE"
		end

	rfc_rc_max_value: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"_RFC_RC_max_value"
		end

end
