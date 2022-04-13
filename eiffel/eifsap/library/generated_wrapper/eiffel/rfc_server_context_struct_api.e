note

	description: "This file has been generated by WrapC. Do not edit. Changes will be lost!"

	generator: "Eiffel Wrapper Generator"

class RFC_SERVER_CONTEXT_STRUCT_API

inherit

	MEMORY_STRUCTURE

	
create

	make,
	make_by_pointer

feature -- Measurement

	structure_size: INTEGER 
		do
			Result := sizeof_external
		end

feature {ANY} -- Member Access

	type: INTEGER
			-- Access member `type`
		require
			exists: exists
		do
			Result := c_type (item)
		ensure
			result_correct: Result = c_type (item)
		end

	set_type (a_value: INTEGER) 
			-- Change the value of member `type` to `a_value`.
		require
			exists: exists
		do
			set_c_type (item, a_value)
		ensure
			type_set: a_value = type
		end

	tid: POINTER
			-- Access member `tid`
		require
			exists: exists
		do
			Result := c_tid (item)
		ensure
			result_correct: Result = c_tid (item)
		end

	unitidentifier: detachable RFC_UNIT_IDENTIFIER_STRUCT_API 
			-- Access member `unitIdentifier`
		require
			exists: exists
		do
			if attached c_unitidentifier (item) as l_ptr and then not l_ptr.is_default_pointer then
				create Result.make_by_pointer (l_ptr)
			end
		ensure
			result_void: Result = Void implies c_unitidentifier (item) = default_pointer 
			result_not_void: attached Result as l_result implies l_result.item = c_unitidentifier (item) 
		end

	set_unitidentifier (a_value: RFC_UNIT_IDENTIFIER_STRUCT_API) 
			-- Set member `unitIdentifier`
		require
			a_value_not_void: a_value /= Void
			exists: exists
		do
			set_c_unitidentifier (item, a_value.item)
		ensure
			unitidentifier_set: attached unitidentifier as l_value implies l_value.item = a_value.item
		end

	unitattributes: detachable RFC_UNIT_ATTRIBUTES_STRUCT_API 
			-- Access member `unitAttributes`
		require
			exists: exists
		do
			if attached c_unitattributes (item) as l_ptr and then not l_ptr.is_default_pointer then
				create Result.make_by_pointer (l_ptr)
			end
		ensure
			result_void: Result = Void implies c_unitattributes (item) = default_pointer 
			result_not_void: attached Result as l_result implies l_result.item = c_unitattributes (item) 
		end

	set_unitattributes (a_value: RFC_UNIT_ATTRIBUTES_STRUCT_API) 
			-- Set member `unitAttributes`
		require
			a_value_not_void: a_value /= Void
			exists: exists
		do
			set_c_unitattributes (item, a_value.item)
		ensure
			unitattributes_set: attached unitattributes as l_value implies l_value.item = a_value.item
		end

	isstateful: NATURAL
			-- Access member `isStateful`
		require
			exists: exists
		do
			Result := c_isstateful (item)
		ensure
			result_correct: Result = c_isstateful (item)
		end

	set_isstateful (a_value: NATURAL) 
			-- Change the value of member `isStateful` to `a_value`.
		require
			exists: exists
		do
			set_c_isstateful (item, a_value)
		ensure
			isstateful_set: a_value = isstateful
		end

	sessionid: POINTER
			-- Access member `sessionID`
		require
			exists: exists
		do
			Result := c_sessionid (item)
		ensure
			result_correct: Result = c_sessionid (item)
		end

feature {NONE} -- Implementation wrapper for struct struct _RFC_SERVER_CONTEXT

	sizeof_external: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"sizeof(struct _RFC_SERVER_CONTEXT)"
		end

	c_type (an_item: POINTER): INTEGER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((struct _RFC_SERVER_CONTEXT*)$an_item)->type
			]"
		end

	set_c_type (an_item: POINTER; a_value: INTEGER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((struct _RFC_SERVER_CONTEXT*)$an_item)->type =  (RFC_CALL_TYPE)$a_value
			]"
		ensure
			type_set: a_value = c_type (an_item)
		end

	c_tid (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((struct _RFC_SERVER_CONTEXT*)$an_item)->tid
			]"
		end

	c_unitidentifier (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((struct _RFC_SERVER_CONTEXT*)$an_item)->unitIdentifier
			]"
		end

	set_c_unitidentifier (an_item: POINTER; a_value: POINTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((struct _RFC_SERVER_CONTEXT*)$an_item)->unitIdentifier =  (RFC_UNIT_IDENTIFIER*)$a_value
			]"
		ensure
			unitidentifier_set: a_value = c_unitidentifier (an_item)
		end

	c_unitattributes (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((struct _RFC_SERVER_CONTEXT*)$an_item)->unitAttributes
			]"
		end

	set_c_unitattributes (an_item: POINTER; a_value: POINTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((struct _RFC_SERVER_CONTEXT*)$an_item)->unitAttributes =  (RFC_UNIT_ATTRIBUTES*)$a_value
			]"
		ensure
			unitattributes_set: a_value = c_unitattributes (an_item)
		end

	c_isstateful (an_item: POINTER): NATURAL
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((struct _RFC_SERVER_CONTEXT*)$an_item)->isStateful
			]"
		end

	set_c_isstateful (an_item: POINTER; a_value: NATURAL) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((struct _RFC_SERVER_CONTEXT*)$an_item)->isStateful =  (unsigned)$a_value
			]"
		ensure
			isstateful_set: a_value = c_isstateful (an_item)
		end

	c_sessionid (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((struct _RFC_SERVER_CONTEXT*)$an_item)->sessionID
			]"
		end

end
