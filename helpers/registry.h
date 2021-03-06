#ifndef _REGISTRY_H
#define _REGISTRY_H
#pragma once

#include "windows.h"
#include <winreg.h>
#include <stdio.h>

#include "../versioning/version.h"

//#if !defined(_WIN64)
	#define REGISTRY_BASE_KEY "SOFTWARE\\Last Squirrel IT\\"ENDPOINT_NAME"-CP"
//#else
//	#define REGISTRY_BASE_KEY L"SOFTWARE\\Wow6432Node\\Last Squirrel IT\\DUMMY-CP"
//#endif


enum CONF_VALUE
{
	CONF_SERVER_URL = 0,
	CONF_LOGIN_TEXT = 1,
	CONF_SSL_VERIFY_HOSTNAME = 2,
	CONF_SSL_VERIFY_SIGNATURE = 3,

	CONF_V1_BITMAP_PATH = 4,
	CONF_V2_BITMAP_PATH = 5,
	CONF_TWO_STEP_HIDE_OTP = 6,
	CONF_TWO_STEP_SEND_PASSWORD = 7,
	CONF_NUM_VALUES = 8,
};

static const LPCSTR s_CONF_VALUES[] =
{
	"server_url",
	"login_text",
	"ssl_verify_hostname",
	"ssl_verify_signature",

	"v1_bitmap_path",
	"v2_bitmap_path",

	"two_step_hide_otp",
	"two_step_send_password",
};

DWORD readRegistryValueString(__in LPCSTR value, __in LPCSTR key, __in int buffer_size, __deref_out_opt char* data);
DWORD readRegistryValueString( __in CONF_VALUE conf_value, __in int buffer_size, __deref_out_opt char* data);

DWORD readRegistryValueInteger(__in LPCSTR value, __in LPCSTR key, __deref_out_opt int* data);
DWORD readRegistryValueInteger( __in CONF_VALUE conf_value, __deref_out_opt int* data );

DWORD readRegistryValueBinary(__in LPCSTR value, __in LPCSTR key, __in int buffer_size, __deref_out_opt unsigned char* data);

DWORD writeRegistryValueString(__in LPCSTR value, __in LPCSTR key, __in char* data, __in int buffer_size);
DWORD writeRegistryValueString( __in CONF_VALUE conf_value, __in char* data, __in int buffer_size);

DWORD writeRegistryValueInteger(__in LPCSTR value, __in LPCSTR key, __in int data);
DWORD writeRegistryValueInteger( __in CONF_VALUE conf_value, __in int data );

DWORD writeRegistryValueBinary(__in LPCSTR value, __in LPCSTR key, __in unsigned char* data, __in int buffer_size);

#endif
