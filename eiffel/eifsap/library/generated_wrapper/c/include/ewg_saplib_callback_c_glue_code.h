#ifndef EWG_CALLBACK_SAPLIB___
#define EWG_CALLBACK_SAPLIB___

#include <sapnwrfc.h>

typedef void (*rfc_server_error_listener_eiffel_feature) (void *a_class, RFC_SERVER_HANDLE serverhandle, RFC_ATTRIBUTES *clientinfo, RFC_ERROR_INFO *errorinfo);

void* rfc_server_error_listener_object;
rfc_server_error_listener_eiffel_feature rfc_server_error_listener_address_1;
rfc_server_error_listener_eiffel_feature rfc_server_error_listener_address_2;
rfc_server_error_listener_eiffel_feature rfc_server_error_listener_address_3;

void set_rfc_server_error_listener_object (void* a_class);

void release_rfc_server_error_listener_object (void);

void* get_rfc_server_error_listener_stub_1 ();
void* get_rfc_server_error_listener_stub_2 ();
void* get_rfc_server_error_listener_stub_3 ();

void set_rfc_server_error_listener_entry_1 (void* a_feature);
void set_rfc_server_error_listener_entry_2 (void* a_feature);
void set_rfc_server_error_listener_entry_3 (void* a_feature);

void call_rfc_server_error_listener (void *a_function, RFC_SERVER_HANDLE serverhandle, RFC_ATTRIBUTES *clientinfo, RFC_ERROR_INFO *errorinfo);


#include <sapnwrfc.h>

typedef void (*rfc_server_state_change_listener_eiffel_feature) (void *a_class, RFC_SERVER_HANDLE serverhandle, RFC_STATE_CHANGE *statechange);

void* rfc_server_state_change_listener_object;
rfc_server_state_change_listener_eiffel_feature rfc_server_state_change_listener_address_1;
rfc_server_state_change_listener_eiffel_feature rfc_server_state_change_listener_address_2;
rfc_server_state_change_listener_eiffel_feature rfc_server_state_change_listener_address_3;

void set_rfc_server_state_change_listener_object (void* a_class);

void release_rfc_server_state_change_listener_object (void);

void* get_rfc_server_state_change_listener_stub_1 ();
void* get_rfc_server_state_change_listener_stub_2 ();
void* get_rfc_server_state_change_listener_stub_3 ();

void set_rfc_server_state_change_listener_entry_1 (void* a_feature);
void set_rfc_server_state_change_listener_entry_2 (void* a_feature);
void set_rfc_server_state_change_listener_entry_3 (void* a_feature);

void call_rfc_server_state_change_listener (void *a_function, RFC_SERVER_HANDLE serverhandle, RFC_STATE_CHANGE *statechange);


#include <sapnwrfc.h>

typedef RFC_RC (*rfc_server_session_change_listener_eiffel_feature) (void *a_class, RFC_SERVER_HANDLE serverhandle, RFC_SESSION_CHANGE *sessionchange);

void* rfc_server_session_change_listener_object;
rfc_server_session_change_listener_eiffel_feature rfc_server_session_change_listener_address_1;
rfc_server_session_change_listener_eiffel_feature rfc_server_session_change_listener_address_2;
rfc_server_session_change_listener_eiffel_feature rfc_server_session_change_listener_address_3;

void set_rfc_server_session_change_listener_object (void* a_class);

void release_rfc_server_session_change_listener_object (void);

void* get_rfc_server_session_change_listener_stub_1 ();
void* get_rfc_server_session_change_listener_stub_2 ();
void* get_rfc_server_session_change_listener_stub_3 ();

void set_rfc_server_session_change_listener_entry_1 (void* a_feature);
void set_rfc_server_session_change_listener_entry_2 (void* a_feature);
void set_rfc_server_session_change_listener_entry_3 (void* a_feature);

RFC_RC call_rfc_server_session_change_listener (void *a_function, RFC_SERVER_HANDLE serverhandle, RFC_SESSION_CHANGE *sessionchange);


#include <sapnwrfc.h>

typedef RFC_RC (*rfc_server_function_eiffel_feature) (void *a_class, RFC_CONNECTION_HANDLE rfchandle, RFC_FUNCTION_HANDLE funchandle, RFC_ERROR_INFO *errorinfo);

void* rfc_server_function_object;
rfc_server_function_eiffel_feature rfc_server_function_address_1;
rfc_server_function_eiffel_feature rfc_server_function_address_2;
rfc_server_function_eiffel_feature rfc_server_function_address_3;

void set_rfc_server_function_object (void* a_class);

void release_rfc_server_function_object (void);

void* get_rfc_server_function_stub_1 ();
void* get_rfc_server_function_stub_2 ();
void* get_rfc_server_function_stub_3 ();

void set_rfc_server_function_entry_1 (void* a_feature);
void set_rfc_server_function_entry_2 (void* a_feature);
void set_rfc_server_function_entry_3 (void* a_feature);

RFC_RC call_rfc_server_function (void *a_function, RFC_CONNECTION_HANDLE rfchandle, RFC_FUNCTION_HANDLE funchandle, RFC_ERROR_INFO *errorinfo);


#include <sapnwrfc.h>

typedef RFC_RC (*rfc_func_desc_callback_eiffel_feature) (void *a_class, SAP_UC const *functionname, RFC_ATTRIBUTES rfcattributes, RFC_FUNCTION_DESC_HANDLE *funcdeschandle);

void* rfc_func_desc_callback_object;
rfc_func_desc_callback_eiffel_feature rfc_func_desc_callback_address_1;
rfc_func_desc_callback_eiffel_feature rfc_func_desc_callback_address_2;
rfc_func_desc_callback_eiffel_feature rfc_func_desc_callback_address_3;

void set_rfc_func_desc_callback_object (void* a_class);

void release_rfc_func_desc_callback_object (void);

void* get_rfc_func_desc_callback_stub_1 ();
void* get_rfc_func_desc_callback_stub_2 ();
void* get_rfc_func_desc_callback_stub_3 ();

void set_rfc_func_desc_callback_entry_1 (void* a_feature);
void set_rfc_func_desc_callback_entry_2 (void* a_feature);
void set_rfc_func_desc_callback_entry_3 (void* a_feature);

RFC_RC call_rfc_func_desc_callback (void *a_function, SAP_UC const *functionname, RFC_ATTRIBUTES rfcattributes, RFC_FUNCTION_DESC_HANDLE *funcdeschandle);


#include <sapnwrfc.h>

typedef RFC_RC (*rfc_on_authorization_check_eiffel_feature) (void *a_class, RFC_CONNECTION_HANDLE rfchandle, RFC_SECURITY_ATTRIBUTES *secattributes, RFC_ERROR_INFO *errorinfo);

void* rfc_on_authorization_check_object;
rfc_on_authorization_check_eiffel_feature rfc_on_authorization_check_address_1;
rfc_on_authorization_check_eiffel_feature rfc_on_authorization_check_address_2;
rfc_on_authorization_check_eiffel_feature rfc_on_authorization_check_address_3;

void set_rfc_on_authorization_check_object (void* a_class);

void release_rfc_on_authorization_check_object (void);

void* get_rfc_on_authorization_check_stub_1 ();
void* get_rfc_on_authorization_check_stub_2 ();
void* get_rfc_on_authorization_check_stub_3 ();

void set_rfc_on_authorization_check_entry_1 (void* a_feature);
void set_rfc_on_authorization_check_entry_2 (void* a_feature);
void set_rfc_on_authorization_check_entry_3 (void* a_feature);

RFC_RC call_rfc_on_authorization_check (void *a_function, RFC_CONNECTION_HANDLE rfchandle, RFC_SECURITY_ATTRIBUTES *secattributes, RFC_ERROR_INFO *errorinfo);


#include <sapnwrfc.h>

typedef RFC_RC (*rfc_on_check_transaction_eiffel_feature) (void *a_class, RFC_CONNECTION_HANDLE rfchandle, SAP_UC const *tid);

void* rfc_on_check_transaction_object;
rfc_on_check_transaction_eiffel_feature rfc_on_check_transaction_address_1;
rfc_on_check_transaction_eiffel_feature rfc_on_check_transaction_address_2;
rfc_on_check_transaction_eiffel_feature rfc_on_check_transaction_address_3;

void set_rfc_on_check_transaction_object (void* a_class);

void release_rfc_on_check_transaction_object (void);

void* get_rfc_on_check_transaction_stub_1 ();
void* get_rfc_on_check_transaction_stub_2 ();
void* get_rfc_on_check_transaction_stub_3 ();

void set_rfc_on_check_transaction_entry_1 (void* a_feature);
void set_rfc_on_check_transaction_entry_2 (void* a_feature);
void set_rfc_on_check_transaction_entry_3 (void* a_feature);

RFC_RC call_rfc_on_check_transaction (void *a_function, RFC_CONNECTION_HANDLE rfchandle, SAP_UC const *tid);


#include <sapnwrfc.h>

typedef RFC_RC (*rfc_on_check_unit_eiffel_feature) (void *a_class, RFC_CONNECTION_HANDLE rfchandle, RFC_UNIT_IDENTIFIER const *identifier);

void* rfc_on_check_unit_object;
rfc_on_check_unit_eiffel_feature rfc_on_check_unit_address_1;
rfc_on_check_unit_eiffel_feature rfc_on_check_unit_address_2;
rfc_on_check_unit_eiffel_feature rfc_on_check_unit_address_3;

void set_rfc_on_check_unit_object (void* a_class);

void release_rfc_on_check_unit_object (void);

void* get_rfc_on_check_unit_stub_1 ();
void* get_rfc_on_check_unit_stub_2 ();
void* get_rfc_on_check_unit_stub_3 ();

void set_rfc_on_check_unit_entry_1 (void* a_feature);
void set_rfc_on_check_unit_entry_2 (void* a_feature);
void set_rfc_on_check_unit_entry_3 (void* a_feature);

RFC_RC call_rfc_on_check_unit (void *a_function, RFC_CONNECTION_HANDLE rfchandle, RFC_UNIT_IDENTIFIER const *identifier);


#include <sapnwrfc.h>

typedef RFC_RC (*rfc_on_get_unit_state_eiffel_feature) (void *a_class, RFC_CONNECTION_HANDLE rfchandle, RFC_UNIT_IDENTIFIER const *identifier, RFC_UNIT_STATE *unitstate);

void* rfc_on_get_unit_state_object;
rfc_on_get_unit_state_eiffel_feature rfc_on_get_unit_state_address_1;
rfc_on_get_unit_state_eiffel_feature rfc_on_get_unit_state_address_2;
rfc_on_get_unit_state_eiffel_feature rfc_on_get_unit_state_address_3;

void set_rfc_on_get_unit_state_object (void* a_class);

void release_rfc_on_get_unit_state_object (void);

void* get_rfc_on_get_unit_state_stub_1 ();
void* get_rfc_on_get_unit_state_stub_2 ();
void* get_rfc_on_get_unit_state_stub_3 ();

void set_rfc_on_get_unit_state_entry_1 (void* a_feature);
void set_rfc_on_get_unit_state_entry_2 (void* a_feature);
void set_rfc_on_get_unit_state_entry_3 (void* a_feature);

RFC_RC call_rfc_on_get_unit_state (void *a_function, RFC_CONNECTION_HANDLE rfchandle, RFC_UNIT_IDENTIFIER const *identifier, RFC_UNIT_STATE *unitstate);


#endif
