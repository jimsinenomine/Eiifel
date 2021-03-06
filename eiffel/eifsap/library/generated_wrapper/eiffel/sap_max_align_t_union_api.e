note

	description: "This file has been generated by WrapC. Do not edit. Changes will be lost!"

	generator: "Eiffel Wrapper Generator"

class SAP_MAX_ALIGN_T_UNION_API

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

	align_1: INTEGER_64 
			-- Access member `align_1`
		require
			exists: exists
		do
			Result := c_align_1 (item)
		ensure
			result_correct: Result = c_align_1 (item)
		end

	set_align_1 (a_value: INTEGER_64) 
			-- Change the value of member `align_1` to `a_value`.
		require
			exists: exists
		do
			set_c_align_1 (item, a_value)
		ensure
			align_1_set: a_value = c_align_1(item)
		end

	align_2: REAL_64 
			-- Access member `align_2`
		require
			exists: exists
		do
			Result := c_align_2 (item)
		ensure
			result_correct: Result = c_align_2 (item)
		end

	set_align_2 (a_value: REAL_64) 
			-- Change the value of member `align_2` to `a_value`.
		require
			exists: exists
		do
			set_c_align_2 (item, a_value)
		ensure
			align_2_set: a_value = c_align_2(item)
		end

	align_3: POINTER 
			-- Access member `align_3`
		require
			exists: exists
		do
			Result := c_align_3 (item)
		ensure
			result_correct: Result = c_align_3 (item)
		end

	set_align_3 (a_value: POINTER) 
			-- Change the value of member `align_3` to `a_value`.
		require
			exists: exists
		do
			set_c_align_3 (item, a_value)
		ensure
			align_3_set: a_value = c_align_3(item)
		end

	align_4: POINTER 
			-- Access member `align_4`
		require
			exists: exists
		do
			Result := c_align_4 (item)
		ensure
			result_correct: Result = c_align_4 (item)
		end

feature {NONE} --C Implementation: SAP_MAX_ALIGN_T

	sizeof_external: INTEGER 
		external
			"C inline use <sapnwrfc.h>"
		alias
			"sizeof(SAP_MAX_ALIGN_T)"
		end

	c_align_1 (an_item: POINTER): INTEGER_64 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((SAP_MAX_ALIGN_T*)$an_item)->align_1
			]"
		end

	set_c_align_1 (an_item: POINTER; a_value: INTEGER_64) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((SAP_MAX_ALIGN_T*)$an_item)->align_1 =  (long)$a_value;
			]"
		end

	c_align_2 (an_item: POINTER): REAL_64 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((SAP_MAX_ALIGN_T*)$an_item)->align_2
			]"
		end

	set_c_align_2 (an_item: POINTER; a_value: REAL_64) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((SAP_MAX_ALIGN_T*)$an_item)->align_2 =  (double)$a_value;
			]"
		end

	c_align_3 (an_item: POINTER): POINTER 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((SAP_MAX_ALIGN_T*)$an_item)->align_3
			]"
		end

	set_c_align_3 (an_item: POINTER; a_value: POINTER) 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((SAP_MAX_ALIGN_T*)$an_item)->align_3 =  (void*)$a_value;
			]"
		end

	c_align_4 (an_item: POINTER): POINTER 
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline use <sapnwrfc.h>"
		alias
			"[
				((SAP_MAX_ALIGN_T*)$an_item)->align_4
			]"
		end


end
