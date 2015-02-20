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

const GUID CDECL CATID_AppContainerCompatible =
{ 0x59fb2056, 0xd625, 0x48d0, { 0xa9, 0x44, 0x1a, 0x85, 0xb5, 0xab, 0x26, 0x40 } };
const GUID CDECL CLSID_RunMeOnIE =
{ 0x5C630378, 0xA070, 0x42A6, { 0xBF, 0xD5, 0xC7, 0x46, 0xF7, 0xDC, 0xAA, 0xCC } };


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


//
// http://stackoverflow.com/questions/17591740/ie-bho-toolbar-in-epm-enhanced-protected-mode
// http://www.askyb.com/bho/step-by-step-guide-to-making-you-bho-epm-compatible-with-ie11-on-windows-8/
//
HRESULT RegiterClassWithCategory(CLSID ClassId, CATID CategoryId, bool IsRegister = true) {
    ICatRegister *Registerer = NULL;
    HRESULT hr = S_OK;

    hr = CoCreateInstance(CLSID_StdComponentCategoriesMgr,
        NULL,
        CLSCTX_INPROC_SERVER,
        IID_ICatRegister,
        (LPVOID*)&Registerer);

    if (SUCCEEDED(hr)) {
        if (IsRegister) {
            hr = Registerer->RegisterClassImplCategories(ClassId, 1, &CategoryId);
        }
        else {
            hr = Registerer->UnRegisterClassImplCategories(ClassId, 1, &CategoryId);
        }

        Registerer->Release();
    }

    return hr;
}

// DllRegisterServer - Adds entries to the system registry

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

    RegiterClassWithCategory(CLSID_RunMeOnIE, CATID_AppContainerCompatible);

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

    RegiterClassWithCategory(CLSID_RunMeOnIE, CATID_AppContainerCompatible, false);

	return NOERROR;
}
