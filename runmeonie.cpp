// runmeonie.cpp : Implementation of CrunmeonieApp and DLL registration.

#include "stdafx.h"
#include "runmeonie.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CrunmeonieApp theApp;

const GUID CDECL _tlid = { 0xE06F66E8, 0x3A2E, 0x45A1, { 0xBB, 0x38, 0xBF, 0xFC, 0xFE, 0xA3, 0x7E, 0x25 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CrunmeonieApp::InitInstance - DLL initialization

BOOL CrunmeonieApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: Add your own module initialization code here.
	}

	return bInit;
}



// CrunmeonieApp::ExitInstance - DLL termination

int CrunmeonieApp::ExitInstance()
{
	// TODO: Add your own module termination code here.

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - Adds entries to the system registry

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
