#include <ewg_eiffel.h>
#include <ewg_saplib_callback_c_glue_code.h>

#ifdef _MSC_VER
#pragma warning (disable:4715) // Not all control paths return a value
#endif
void* rfc_server_error_listener_object =  NULL;
rfc_server_error_listener_eiffel_feature rfc_server_error_listener_address_1 = NULL;
rfc_server_error_listener_eiffel_feature rfc_server_error_listener_address_2 = NULL;
rfc_server_error_listener_eiffel_feature rfc_server_error_listener_address_3 = NULL;

void set_rfc_server_error_listener_object (void* a_object)
{
	if (a_object) {
		rfc_server_error_listener_object = eif_protect(a_object);
	} else { 
		rfc_server_error_listener_object = NULL;
	}
}

void release_rfc_server_error_listener_object ()
{
	eif_wean (rfc_server_error_listener_object);
}

void __stdcall rfc_server_error_listener_stub_1 (RFC_SERVER_HANDLE serverhandle, RFC_ATTRIBUTES *clientinfo, RFC_ERROR_INFO *errorinfo)
{
	if (rfc_server_error_listener_object != NULL && rfc_server_error_listener_address_1 != NULL)
	{
		rfc_server_error_listener_address_1 (eif_access(rfc_server_error_listener_object), serverhandle, clientinfo, errorinfo);
	}
}

void __stdcall rfc_server_error_listener_stub_2 (RFC_SERVER_HANDLE serverhandle, RFC_ATTRIBUTES *clientinfo, RFC_ERROR_INFO *errorinfo)
{
	if (rfc_server_error_listener_object != NULL && rfc_server_error_listener_address_2 != NULL)
	{
		rfc_server_error_listener_address_2 (eif_access(rfc_server_error_listener_object), serverhandle, clientinfo, errorinfo);
	}
}

void __stdcall rfc_server_error_listener_stub_3 (RFC_SERVER_HANDLE serverhandle, RFC_ATTRIBUTES *clientinfo, RFC_ERROR_INFO *errorinfo)
{
	if (rfc_server_error_listener_object != NULL && rfc_server_error_listener_address_3 != NULL)
	{
		rfc_server_error_listener_address_3 (eif_access(rfc_server_error_listener_object), serverhandle, clientinfo, errorinfo);
	}
}

void set_rfc_server_error_listener_entry_1 (void* a_feature){
	rfc_server_error_listener_address_1 = (rfc_server_error_listener_eiffel_feature) a_feature;
}

void set_rfc_server_error_listener_entry_2 (void* a_feature){
	rfc_server_error_listener_address_2 = (rfc_server_error_listener_eiffel_feature) a_feature;
}

void set_rfc_server_error_listener_entry_3 (void* a_feature){
	rfc_server_error_listener_address_3 = (rfc_server_error_listener_eiffel_feature) a_feature;
}

void* get_rfc_server_error_listener_stub_1 (){
	return (void*) rfc_server_error_listener_stub_1;
}

void* get_rfc_server_error_listener_stub_2 (){
	return (void*) rfc_server_error_listener_stub_2;
}

void* get_rfc_server_error_listener_stub_3 (){
	return (void*) rfc_server_error_listener_stub_3;
}

void call_rfc_server_error_listener (void *a_function, RFC_SERVER_HANDLE serverhandle, RFC_ATTRIBUTES *clientinfo, RFC_ERROR_INFO *errorinfo)
{
	((void (__stdcall *) (RFC_SERVER_HANDLE serverhandle, RFC_ATTRIBUTES *clientinfo, RFC_ERROR_INFO *errorinfo))a_function) (serverhandle, clientinfo, errorinfo);
}

void* rfc_server_state_change_listener_object =  NULL;
rfc_server_state_change_listener_eiffel_feature rfc_server_state_change_listener_address_1 = NULL;
rfc_server_state_change_listener_eiffel_feature rfc_server_state_change_listener_address_2 = NULL;
rfc_server_state_change_listener_eiffel_feature rfc_server_state_change_listener_address_3 = NULL;

void set_rfc_server_state_change_listener_object (void* a_object)
{
	if (a_object) {
		rfc_server_state_change_listener_object = eif_protect(a_object);
	} else { 
		rfc_server_state_change_listener_object = NULL;
	}
}

void release_rfc_server_state_change_listener_object ()
{
	eif_wean (rfc_server_state_change_listener_object);
}

void __stdcall rfc_server_state_change_listener_stub_1 (RFC_SERVER_HANDLE serverhandle, RFC_STATE_CHANGE *statechange)
{
	if (rfc_server_state_change_listener_object != NULL && rfc_server_state_change_listener_address_1 != NULL)
	{
		rfc_server_state_change_listener_address_1 (eif_access(rfc_server_state_change_listener_object), serverhandle, statechange);
	}
}

void __stdcall rfc_server_state_change_listener_stub_2 (RFC_SERVER_HANDLE serverhandle, RFC_STATE_CHANGE *statechange)
{
	if (rfc_server_state_change_listener_object != NULL && rfc_server_state_change_listener_address_2 != NULL)
	{
		rfc_server_state_change_listener_address_2 (eif_access(rfc_server_state_change_listener_object), serverhandle, statechange);
	}
}

void __stdcall rfc_server_state_change_listener_stub_3 (RFC_SERVER_HANDLE serverhandle, RFC_STATE_CHANGE *statechange)
{
	if (rfc_server_state_change_listener_object != NULL && rfc_server_state_change_listener_address_3 != NULL)
	{
		rfc_server_state_change_listener_address_3 (eif_access(rfc_server_state_change_listener_object), serverhandle, statechange);
	}
}

void set_rfc_server_state_change_listener_entry_1 (void* a_feature){
	rfc_server_state_change_listener_address_1 = (rfc_server_state_change_listener_eiffel_feature) a_feature;
}

void set_rfc_server_state_change_listener_entry_2 (void* a_feature){
	rfc_server_state_change_listener_address_2 = (rfc_server_state_change_listener_eiffel_feature) a_feature;
}

void set_rfc_server_state_change_listener_entry_3 (void* a_feature){
	rfc_server_state_change_listener_address_3 = (rfc_server_state_change_listener_eiffel_feature) a_feature;
}

void* get_rfc_server_state_change_listener_stub_1 (){
	return (void*) rfc_server_state_change_listener_stub_1;
}

void* get_rfc_server_state_change_listener_stub_2 (){
	return (void*) rfc_server_state_change_listener_stub_2;
}

void* get_rfc_server_state_change_listener_stub_3 (){
	return (void*) rfc_server_state_change_listener_stub_3;
}

void call_rfc_server_state_change_listener (void *a_function, RFC_SERVER_HANDLE serverhandle, RFC_STATE_CHANGE *statechange)
{
	((void (__stdcall *) (RFC_SERVER_HANDLE serverhandle, RFC_STATE_CHANGE *statechange))a_function) (serverhandle, statechange);
}

void* rfc_server_session_change_listener_object =  NULL;
rfc_server_session_change_listener_eiffel_feature rfc_server_session_change_listener_address_1 = NULL;
rfc_server_session_change_listener_eiffel_feature rfc_server_session_change_listener_address_2 = NULL;
rfc_server_session_change_listener_eiffel_feature rfc_server_session_change_listener_address_3 = NULL;

void set_rfc_server_session_change_listener_object (void* a_object)
{
	if (a_object) {
		rfc_server_session_change_listener_object = eif_protect(a_object);
	} else { 
		rfc_server_session_change_listener_object = NULL;
	}
}

void release_rfc_server_session_change_listener_object ()
{
	eif_wean (rfc_server_session_change_listener_object);
}

RFC_RC __stdcall rfc_server_session_change_listener_stub_1 (RFC_SERVER_HANDLE serverhandle, RFC_SESSION_CHANGE *sessionchange)
{
	if (rfc_server_session_change_listener_object != NULL && rfc_server_session_change_listener_address_1 != NULL)
	{
		return rfc_server_session_change_listener_address_1 (eif_access(rfc_server_session_change_listener_object), serverhandle, sessionchange);
	}
}

RFC_RC __stdcall rfc_server_session_change_listener_stub_2 (RFC_SERVER_HANDLE serverhandle, RFC_SESSION_CHANGE *sessionchange)
{
	if (rfc_server_session_change_listener_object != NULL && rfc_server_session_change_listener_address_2 != NULL)
	{
		return rfc_server_session_change_listener_address_2 (eif_access(rfc_server_session_change_listener_object), serverhandle, sessionchange);
	}
}

RFC_RC __stdcall rfc_server_session_change_listener_stub_3 (RFC_SERVER_HANDLE serverhandle, RFC_SESSION_CHANGE *sessionchange)
{
	if (rfc_server_session_change_listener_object != NULL && rfc_server_session_change_listener_address_3 != NULL)
	{
		return rfc_server_session_change_listener_address_3 (eif_access(rfc_server_session_change_listener_object), serverhandle, sessionchange);
	}
}

void set_rfc_server_session_change_listener_entry_1 (void* a_feature){
	rfc_server_session_change_listener_address_1 = (rfc_server_session_change_listener_eiffel_feature) a_feature;
}

void set_rfc_server_session_change_listener_entry_2 (void* a_feature){
	rfc_server_session_change_listener_address_2 = (rfc_server_session_change_listener_eiffel_feature) a_feature;
}

void set_rfc_server_session_change_listener_entry_3 (void* a_feature){
	rfc_server_session_change_listener_address_3 = (rfc_server_session_change_listener_eiffel_feature) a_feature;
}

void* get_rfc_server_session_change_listener_stub_1 (){
	return (void*) rfc_server_session_change_listener_stub_1;
}

void* get_rfc_server_session_change_listener_stub_2 (){
	return (void*) rfc_server_session_change_listener_stub_2;
}

void* get_rfc_server_session_change_listener_stub_3 (){
	return (void*) rfc_server_session_change_listener_stub_3;
}

RFC_RC call_rfc_server_session_change_listener (void *a_function, RFC_SERVER_HANDLE serverhandle, RFC_SESSION_CHANGE *sessionchange)
{
	return ((RFC_RC (__stdcall *) (RFC_SERVER_HANDLE serverhandle, RFC_SESSION_CHANGE *sessionchange))a_function) (serverhandle, sessionchange);
}

void* rfc_server_function_object =  NULL;
rfc_server_function_eiffel_feature rfc_server_function_address_1 = NULL;
rfc_server_function_eiffel_feature rfc_server_function_address_2 = NULL;
rfc_server_function_eiffel_feature rfc_server_function_address_3 = NULL;

void set_rfc_server_function_object (void* a_object)
{
	if (a_object) {
		rfc_server_function_object = eif_protect(a_object);
	} else { 
		rfc_server_function_object = NULL;
	}
}

void release_rfc_server_function_object ()
{
	eif_wean (rfc_server_function_object);
}

RFC_RC __stdcall rfc_server_function_stub_1 (RFC_CONNECTION_HANDLE rfchandle, RFC_FUNCTION_HANDLE funchandle, RFC_ERROR_INFO *errorinfo)
{
	if (rfc_server_function_object != NULL && rfc_server_function_address_1 != NULL)
	{
		return rfc_server_function_address_1 (eif_access(rfc_server_function_object), rfchandle, funchandle, errorinfo);
	}
}

RFC_RC __stdcall rfc_server_function_stub_2 (RFC_CONNECTION_HANDLE rfchandle, RFC_FUNCTION_HANDLE funchandle, RFC_ERROR_INFO *errorinfo)
{
	if (rfc_server_function_object != NULL && rfc_server_function_address_2 != NULL)
	{
		return rfc_server_function_address_2 (eif_access(rfc_server_function_object), rfchandle, funchandle, errorinfo);
	}
}

RFC_RC __stdcall rfc_server_function_stub_3 (RFC_CONNECTION_HANDLE rfchandle, RFC_FUNCTION_HANDLE funchandle, RFC_ERROR_INFO *errorinfo)
{
	if (rfc_server_function_object != NULL && rfc_server_function_address_3 != NULL)
	{
		return rfc_server_function_address_3 (eif_access(rfc_server_function_object), rfchandle, funchandle, errorinfo);
	}
}

void set_rfc_server_function_entry_1 (void* a_feature){
	rfc_server_function_address_1 = (rfc_server_function_eiffel_feature) a_feature;
}

void set_rfc_server_function_entry_2 (void* a_feature){
	rfc_server_function_address_2 = (rfc_server_function_eiffel_feature) a_feature;
}

void set_rfc_server_function_entry_3 (void* a_feature){
	rfc_server_function_address_3 = (rfc_server_function_eiffel_feature) a_feature;
}

void* get_rfc_server_function_stub_1 (){
	return (void*) rfc_server_function_stub_1;
}

void* get_rfc_server_function_stub_2 (){
	return (void*) rfc_server_function_stub_2;
}

void* get_rfc_server_function_stub_3 (){
	return (void*) rfc_server_function_stub_3;
}

RFC_RC call_rfc_server_function (void *a_function, RFC_CONNECTION_HANDLE rfchandle, RFC_FUNCTION_HANDLE funchandle, RFC_ERROR_INFO *errorinfo)
{
	return ((RFC_RC (__stdcall *) (RFC_CONNECTION_HANDLE rfchandle, RFC_FUNCTION_HANDLE funchandle, RFC_ERROR_INFO *errorinfo))a_function) (rfchandle, funchandle, errorinfo);
}

void* rfc_func_desc_callback_object =  NULL;
rfc_func_desc_callback_eiffel_feature rfc_func_desc_callback_address_1 = NULL;
rfc_func_desc_callback_eiffel_feature rfc_func_desc_callback_address_2 = NULL;
rfc_func_desc_callback_eiffel_feature rfc_func_desc_callback_address_3 = NULL;

void set_rfc_func_desc_callback_object (void* a_object)
{
	if (a_object) {
		rfc_func_desc_callback_object = eif_protect(a_object);
	} else { 
		rfc_func_desc_callback_object = NULL;
	}
}

void release_rfc_func_desc_callback_object ()
{
	eif_wean (rfc_func_desc_callback_object);
}

RFC_RC __stdcall rfc_func_desc_callback_stub_1 (SAP_UC const *functionname, RFC_ATTRIBUTES rfcattributes, RFC_FUNCTION_DESC_HANDLE *funcdeschandle)
{
	if (rfc_func_desc_callback_object != NULL && rfc_func_desc_callback_address_1 != NULL)
	{
		return rfc_func_desc_callback_address_1 (eif_access(rfc_func_desc_callback_object), functionname, rfcattributes, funcdeschandle);
	}
}

RFC_RC __stdcall rfc_func_desc_callback_stub_2 (SAP_UC const *functionname, RFC_ATTRIBUTES rfcattributes, RFC_FUNCTION_DESC_HANDLE *funcdeschandle)
{
	if (rfc_func_desc_callback_object != NULL && rfc_func_desc_callback_address_2 != NULL)
	{
		return rfc_func_desc_callback_address_2 (eif_access(rfc_func_desc_callback_object), functionname, rfcattributes, funcdeschandle);
	}
}

RFC_RC __stdcall rfc_func_desc_callback_stub_3 (SAP_UC const *functionname, RFC_ATTRIBUTES rfcattributes, RFC_FUNCTION_DESC_HANDLE *funcdeschandle)
{
	if (rfc_func_desc_callback_object != NULL && rfc_func_desc_callback_address_3 != NULL)
	{
		return rfc_func_desc_callback_address_3 (eif_access(rfc_func_desc_callback_object), functionname, rfcattributes, funcdeschandle);
	}
}

void set_rfc_func_desc_callback_entry_1 (void* a_feature){
	rfc_func_desc_callback_address_1 = (rfc_func_desc_callback_eiffel_feature) a_feature;
}

void set_rfc_func_desc_callback_entry_2 (void* a_feature){
	rfc_func_desc_callback_address_2 = (rfc_func_desc_callback_eiffel_feature) a_feature;
}

void set_rfc_func_desc_callback_entry_3 (void* a_feature){
	rfc_func_desc_callback_address_3 = (rfc_func_desc_callback_eiffel_feature) a_feature;
}

void* get_rfc_func_desc_callback_stub_1 (){
	return (void*) rfc_func_desc_callback_stub_1;
}

void* get_rfc_func_desc_callback_stub_2 (){
	return (void*) rfc_func_desc_callback_stub_2;
}

void* get_rfc_func_desc_callback_stub_3 (){
	return (void*) rfc_func_desc_callback_stub_3;
}

RFC_RC call_rfc_func_desc_callback (void *a_function, SAP_UC const *functionname, RFC_ATTRIBUTES rfcattributes, RFC_FUNCTION_DESC_HANDLE *funcdeschandle)
{
	return ((RFC_RC (__stdcall *) (SAP_UC const *functionname, RFC_ATTRIBUTES rfcattributes, RFC_FUNCTION_DESC_HANDLE *funcdeschandle))a_function) (functionname, rfcattributes, funcdeschandle);
}

void* rfc_on_authorization_check_object =  NULL;
rfc_on_authorization_check_eiffel_feature rfc_on_authorization_check_address_1 = NULL;
rfc_on_authorization_check_eiffel_feature rfc_on_authorization_check_address_2 = NULL;
rfc_on_authorization_check_eiffel_feature rfc_on_authorization_check_address_3 = NULL;

void set_rfc_on_authorization_check_object (void* a_object)
{
	if (a_object) {
		rfc_on_authorization_check_object = eif_protect(a_object);
	} else { 
		rfc_on_authorization_check_object = NULL;
	}
}

void release_rfc_on_authorization_check_object ()
{
	eif_wean (rfc_on_authorization_check_object);
}

RFC_RC __stdcall rfc_on_authorization_check_stub_1 (RFC_CONNECTION_HANDLE rfchandle, RFC_SECURITY_ATTRIBUTES *secattributes, RFC_ERROR_INFO *errorinfo)
{
	if (rfc_on_authorization_check_object != NULL && rfc_on_authorization_check_address_1 != NULL)
	{
		return rfc_on_authorization_check_address_1 (eif_access(rfc_on_authorization_check_object), rfchandle, secattributes, errorinfo);
	}
}

RFC_RC __stdcall rfc_on_authorization_check_stub_2 (RFC_CONNECTION_HANDLE rfchandle, RFC_SECURITY_ATTRIBUTES *secattributes, RFC_ERROR_INFO *errorinfo)
{
	if (rfc_on_authorization_check_object != NULL && rfc_on_authorization_check_address_2 != NULL)
	{
		return rfc_on_authorization_check_address_2 (eif_access(rfc_on_authorization_check_object), rfchandle, secattributes, errorinfo);
	}
}

RFC_RC __stdcall rfc_on_authorization_check_stub_3 (RFC_CONNECTION_HANDLE rfchandle, RFC_SECURITY_ATTRIBUTES *secattributes, RFC_ERROR_INFO *errorinfo)
{
	if (rfc_on_authorization_check_object != NULL && rfc_on_authorization_check_address_3 != NULL)
	{
		return rfc_on_authorization_check_address_3 (eif_access(rfc_on_authorization_check_object), rfchandle, secattributes, errorinfo);
	}
}

void set_rfc_on_authorization_check_entry_1 (void* a_feature){
	rfc_on_authorization_check_address_1 = (rfc_on_authorization_check_eiffel_feature) a_feature;
}

void set_rfc_on_authorization_check_entry_2 (void* a_feature){
	rfc_on_authorization_check_address_2 = (rfc_on_authorization_check_eiffel_feature) a_feature;
}

void set_rfc_on_authorization_check_entry_3 (void* a_feature){
	rfc_on_authorization_check_address_3 = (rfc_on_authorization_check_eiffel_feature) a_feature;
}

void* get_rfc_on_authorization_check_stub_1 (){
	return (void*) rfc_on_authorization_check_stub_1;
}

void* get_rfc_on_authorization_check_stub_2 (){
	return (void*) rfc_on_authorization_check_stub_2;
}

void* get_rfc_on_authorization_check_stub_3 (){
	return (void*) rfc_on_authorization_check_stub_3;
}

RFC_RC call_rfc_on_authorization_check (void *a_function, RFC_CONNECTION_HANDLE rfchandle, RFC_SECURITY_ATTRIBUTES *secattributes, RFC_ERROR_INFO *errorinfo)
{
	return ((RFC_RC (__stdcall *) (RFC_CONNECTION_HANDLE rfchandle, RFC_SECURITY_ATTRIBUTES *secattributes, RFC_ERROR_INFO *errorinfo))a_function) (rfchandle, secattributes, errorinfo);
}

void* rfc_on_check_transaction_object =  NULL;
rfc_on_check_transaction_eiffel_feature rfc_on_check_transaction_address_1 = NULL;
rfc_on_check_transaction_eiffel_feature rfc_on_check_transaction_address_2 = NULL;
rfc_on_check_transaction_eiffel_feature rfc_on_check_transaction_address_3 = NULL;

void set_rfc_on_check_transaction_object (void* a_object)
{
	if (a_object) {
		rfc_on_check_transaction_object = eif_protect(a_object);
	} else { 
		rfc_on_check_transaction_object = NULL;
	}
}

void release_rfc_on_check_transaction_object ()
{
	eif_wean (rfc_on_check_transaction_object);
}

RFC_RC __stdcall rfc_on_check_transaction_stub_1 (RFC_CONNECTION_HANDLE rfchandle, SAP_UC const *tid)
{
	if (rfc_on_check_transaction_object != NULL && rfc_on_check_transaction_address_1 != NULL)
	{
		return rfc_on_check_transaction_address_1 (eif_access(rfc_on_check_transaction_object), rfchandle, tid);
	}
}

RFC_RC __stdcall rfc_on_check_transaction_stub_2 (RFC_CONNECTION_HANDLE rfchandle, SAP_UC const *tid)
{
	if (rfc_on_check_transaction_object != NULL && rfc_on_check_transaction_address_2 != NULL)
	{
		return rfc_on_check_transaction_address_2 (eif_access(rfc_on_check_transaction_object), rfchandle, tid);
	}
}

RFC_RC __stdcall rfc_on_check_transaction_stub_3 (RFC_CONNECTION_HANDLE rfchandle, SAP_UC const *tid)
{
	if (rfc_on_check_transaction_object != NULL && rfc_on_check_transaction_address_3 != NULL)
	{
		return rfc_on_check_transaction_address_3 (eif_access(rfc_on_check_transaction_object), rfchandle, tid);
	}
}

void set_rfc_on_check_transaction_entry_1 (void* a_feature){
	rfc_on_check_transaction_address_1 = (rfc_on_check_transaction_eiffel_feature) a_feature;
}

void set_rfc_on_check_transaction_entry_2 (void* a_feature){
	rfc_on_check_transaction_address_2 = (rfc_on_check_transaction_eiffel_feature) a_feature;
}

void set_rfc_on_check_transaction_entry_3 (void* a_feature){
	rfc_on_check_transaction_address_3 = (rfc_on_check_transaction_eiffel_feature) a_feature;
}

void* get_rfc_on_check_transaction_stub_1 (){
	return (void*) rfc_on_check_transaction_stub_1;
}

void* get_rfc_on_check_transaction_stub_2 (){
	return (void*) rfc_on_check_transaction_stub_2;
}

void* get_rfc_on_check_transaction_stub_3 (){
	return (void*) rfc_on_check_transaction_stub_3;
}

RFC_RC call_rfc_on_check_transaction (void *a_function, RFC_CONNECTION_HANDLE rfchandle, SAP_UC const *tid)
{
	return ((RFC_RC (__stdcall *) (RFC_CONNECTION_HANDLE rfchandle, SAP_UC const *tid))a_function) (rfchandle, tid);
}

void* rfc_on_check_unit_object =  NULL;
rfc_on_check_unit_eiffel_feature rfc_on_check_unit_address_1 = NULL;
rfc_on_check_unit_eiffel_feature rfc_on_check_unit_address_2 = NULL;
rfc_on_check_unit_eiffel_feature rfc_on_check_unit_address_3 = NULL;

void set_rfc_on_check_unit_object (void* a_object)
{
	if (a_object) {
		rfc_on_check_unit_object = eif_protect(a_object);
	} else { 
		rfc_on_check_unit_object = NULL;
	}
}

void release_rfc_on_check_unit_object ()
{
	eif_wean (rfc_on_check_unit_object);
}

RFC_RC __stdcall rfc_on_check_unit_stub_1 (RFC_CONNECTION_HANDLE rfchandle, RFC_UNIT_IDENTIFIER const *identifier)
{
	if (rfc_on_check_unit_object != NULL && rfc_on_check_unit_address_1 != NULL)
	{
		return rfc_on_check_unit_address_1 (eif_access(rfc_on_check_unit_object), rfchandle, identifier);
	}
}

RFC_RC __stdcall rfc_on_check_unit_stub_2 (RFC_CONNECTION_HANDLE rfchandle, RFC_UNIT_IDENTIFIER const *identifier)
{
	if (rfc_on_check_unit_object != NULL && rfc_on_check_unit_address_2 != NULL)
	{
		return rfc_on_check_unit_address_2 (eif_access(rfc_on_check_unit_object), rfchandle, identifier);
	}
}

RFC_RC __stdcall rfc_on_check_unit_stub_3 (RFC_CONNECTION_HANDLE rfchandle, RFC_UNIT_IDENTIFIER const *identifier)
{
	if (rfc_on_check_unit_object != NULL && rfc_on_check_unit_address_3 != NULL)
	{
		return rfc_on_check_unit_address_3 (eif_access(rfc_on_check_unit_object), rfchandle, identifier);
	}
}

void set_rfc_on_check_unit_entry_1 (void* a_feature){
	rfc_on_check_unit_address_1 = (rfc_on_check_unit_eiffel_feature) a_feature;
}

void set_rfc_on_check_unit_entry_2 (void* a_feature){
	rfc_on_check_unit_address_2 = (rfc_on_check_unit_eiffel_feature) a_feature;
}

void set_rfc_on_check_unit_entry_3 (void* a_feature){
	rfc_on_check_unit_address_3 = (rfc_on_check_unit_eiffel_feature) a_feature;
}

void* get_rfc_on_check_unit_stub_1 (){
	return (void*) rfc_on_check_unit_stub_1;
}

void* get_rfc_on_check_unit_stub_2 (){
	return (void*) rfc_on_check_unit_stub_2;
}

void* get_rfc_on_check_unit_stub_3 (){
	return (void*) rfc_on_check_unit_stub_3;
}

RFC_RC call_rfc_on_check_unit (void *a_function, RFC_CONNECTION_HANDLE rfchandle, RFC_UNIT_IDENTIFIER const *identifier)
{
	return ((RFC_RC (__stdcall *) (RFC_CONNECTION_HANDLE rfchandle, RFC_UNIT_IDENTIFIER const *identifier))a_function) (rfchandle, identifier);
}

void* rfc_on_get_unit_state_object =  NULL;
rfc_on_get_unit_state_eiffel_feature rfc_on_get_unit_state_address_1 = NULL;
rfc_on_get_unit_state_eiffel_feature rfc_on_get_unit_state_address_2 = NULL;
rfc_on_get_unit_state_eiffel_feature rfc_on_get_unit_state_address_3 = NULL;

void set_rfc_on_get_unit_state_object (void* a_object)
{
	if (a_object) {
		rfc_on_get_unit_state_object = eif_protect(a_object);
	} else { 
		rfc_on_get_unit_state_object = NULL;
	}
}

void release_rfc_on_get_unit_state_object ()
{
	eif_wean (rfc_on_get_unit_state_object);
}

RFC_RC __stdcall rfc_on_get_unit_state_stub_1 (RFC_CONNECTION_HANDLE rfchandle, RFC_UNIT_IDENTIFIER const *identifier, RFC_UNIT_STATE *unitstate)
{
	if (rfc_on_get_unit_state_object != NULL && rfc_on_get_unit_state_address_1 != NULL)
	{
		return rfc_on_get_unit_state_address_1 (eif_access(rfc_on_get_unit_state_object), rfchandle, identifier, unitstate);
	}
}

RFC_RC __stdcall rfc_on_get_unit_state_stub_2 (RFC_CONNECTION_HANDLE rfchandle, RFC_UNIT_IDENTIFIER const *identifier, RFC_UNIT_STATE *unitstate)
{
	if (rfc_on_get_unit_state_object != NULL && rfc_on_get_unit_state_address_2 != NULL)
	{
		return rfc_on_get_unit_state_address_2 (eif_access(rfc_on_get_unit_state_object), rfchandle, identifier, unitstate);
	}
}

RFC_RC __stdcall rfc_on_get_unit_state_stub_3 (RFC_CONNECTION_HANDLE rfchandle, RFC_UNIT_IDENTIFIER const *identifier, RFC_UNIT_STATE *unitstate)
{
	if (rfc_on_get_unit_state_object != NULL && rfc_on_get_unit_state_address_3 != NULL)
	{
		return rfc_on_get_unit_state_address_3 (eif_access(rfc_on_get_unit_state_object), rfchandle, identifier, unitstate);
	}
}

void set_rfc_on_get_unit_state_entry_1 (void* a_feature){
	rfc_on_get_unit_state_address_1 = (rfc_on_get_unit_state_eiffel_feature) a_feature;
}

void set_rfc_on_get_unit_state_entry_2 (void* a_feature){
	rfc_on_get_unit_state_address_2 = (rfc_on_get_unit_state_eiffel_feature) a_feature;
}

void set_rfc_on_get_unit_state_entry_3 (void* a_feature){
	rfc_on_get_unit_state_address_3 = (rfc_on_get_unit_state_eiffel_feature) a_feature;
}

void* get_rfc_on_get_unit_state_stub_1 (){
	return (void*) rfc_on_get_unit_state_stub_1;
}

void* get_rfc_on_get_unit_state_stub_2 (){
	return (void*) rfc_on_get_unit_state_stub_2;
}

void* get_rfc_on_get_unit_state_stub_3 (){
	return (void*) rfc_on_get_unit_state_stub_3;
}

RFC_RC call_rfc_on_get_unit_state (void *a_function, RFC_CONNECTION_HANDLE rfchandle, RFC_UNIT_IDENTIFIER const *identifier, RFC_UNIT_STATE *unitstate)
{
	return ((RFC_RC (__stdcall *) (RFC_CONNECTION_HANDLE rfchandle, RFC_UNIT_IDENTIFIER const *identifier, RFC_UNIT_STATE *unitstate))a_function) (rfchandle, identifier, unitstate);
}

