note

	description: "This file has been generated by WrapC. Do not edit. Changes will be lost!"

	generator: "Eiffel Wrapper Generator"

class RFC_UNIT_IDENTIFIER_STRUCT_API

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

	unittype: CHARACTER
			-- Access member `unitType`
		require
			exists: exists
		do
			Result := c_unittype (item)
		ensure
			result_correct: Result = c_unittype (item)
		end

	set_unittype (a_value: CHARACTER) 
			-- Change the value of member `unitType` to `a_value`.
		require
			exists: exists
		do
			set_c_unittype (item, a_value)
		ensure
			unittype_set: a_value = unittype
		end

	unitid: POINTER
			-- Access member `unitID`
		require
			exists: exists
		do
			Result := c_unitid (item)
		ensure
			result_correct: Result = c_unitid (item)
		end

feature {NONE} -- Implementation wrapper for struct struct _RFC_UNIT_IDENTIFIER

	sizeof_external: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"sizeof(struct _RFC_UNIT_IDENTIFIER)"
		end

	c_unittype (an_item: POINTER): CHARACTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((struct _RFC_UNIT_IDENTIFIER*)$an_item)->unitType
			]"
		end

	set_c_unittype (an_item: POINTER; a_value: CHARACTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((struct _RFC_UNIT_IDENTIFIER*)$an_item)->unitType =  (SAP_UC)$a_value
			]"
		ensure
			unittype_set: a_value = c_unittype (an_item)
		end

	c_unitid (an_item: POINTER): POINTER
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((struct _RFC_UNIT_IDENTIFIER*)$an_item)->unitID
			]"
		end

end
