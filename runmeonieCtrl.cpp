// runmeonieCtrl.cpp : Implementation of the CrunmeonieCtrl ActiveX Control class.

#include "stdafx.h"
#include "runmeonie.h"
#include "runmeonieCtrl.h"
#include "runmeoniePropPage.h"
#include "afxdialogex.h"
#include <mshtml.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CrunmeonieCtrl, COleControl)

// Message map

BEGIN_MESSAGE_MAP(CrunmeonieCtrl, COleControl)
	ON_MESSAGE(OCM_COMMAND, &CrunmeonieCtrl::OnOcmCommand)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
  ON_WM_CREATE()
END_MESSAGE_MAP()

// Dispatch map

BEGIN_DISPATCH_MAP(CrunmeonieCtrl, COleControl)
    DISP_FUNCTION_ID(CrunmeonieCtrl, "Hello", dispidHello, Hello, VT_UI4, VTS_BSTR)
END_DISPATCH_MAP()

// Event map

BEGIN_EVENT_MAP(CrunmeonieCtrl, COleControl)
END_EVENT_MAP()

// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CrunmeonieCtrl, 1)
	PROPPAGEID(CrunmeoniePropPage::guid)
END_PROPPAGEIDS(CrunmeonieCtrl)

// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CrunmeonieCtrl, "RUNMEONIE.runmeonieCtrl.1",
	0x5c630378, 0xa070, 0x42a6, 0xbf, 0xd5, 0xc7, 0x46, 0xf7, 0xdc, 0xaa, 0xcc)

// Type library ID and version

IMPLEMENT_OLETYPELIB(CrunmeonieCtrl, _tlid, _wVerMajor, _wVerMinor)

// Interface IDs

const IID IID_Drunmeonie = { 0x2B3AE6CB, 0x34E5, 0x4F1B, { 0x99, 0xB7, 0xB6, 0x2E, 0x5C, 0x20, 0x75, 0xE8 } };
const IID IID_DrunmeonieEvents = { 0xB596F9A3, 0x1FE2, 0x48B0, { 0x95, 0x10, 0xA4, 0xD4, 0xD7, 0x94, 0x2D, 0x6F } };

// Control type information

static const DWORD _dwrunmeonieOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CrunmeonieCtrl, IDS_RUNMEONIE, _dwrunmeonieOleMisc)

// CrunmeonieCtrl::CrunmeonieCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CrunmeonieCtrl

BOOL CrunmeonieCtrl::CrunmeonieCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegApartmentThreading to 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_RUNMEONIE,
			IDB_RUNMEONIE,
			afxRegApartmentThreading,
			_dwrunmeonieOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// CrunmeonieCtrl::CrunmeonieCtrl - Constructor

CrunmeonieCtrl::CrunmeonieCtrl()
{
	InitializeIIDs(&IID_Drunmeonie, &IID_DrunmeonieEvents);
	// TODO: Initialize your control's instance data here.
}

// CrunmeonieCtrl::~CrunmeonieCtrl - Destructor

CrunmeonieCtrl::~CrunmeonieCtrl()
{
	// TODO: Cleanup your control's instance data here.
}

// CrunmeonieCtrl::OnDraw - Drawing function

void CrunmeonieCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}

// CrunmeonieCtrl::DoPropExchange - Persistence support

void CrunmeonieCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.
}


// CrunmeonieCtrl::GetControlFlags -
// Flags to customize MFC's implementation of ActiveX controls.
//
DWORD CrunmeonieCtrl::GetControlFlags()
{
	DWORD dwFlags = COleControl::GetControlFlags();


	// The control will not be redrawn when making the transition
	// between the active and inactivate state.
	dwFlags |= noFlickerActivate;
	return dwFlags;
}


// CrunmeonieCtrl::OnResetState - Reset control to default state

void CrunmeonieCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}


// CrunmeonieCtrl::PreCreateWindow - Modify parameters for CreateWindowEx

BOOL CrunmeonieCtrl::PreCreateWindow(CREATESTRUCT& cs)
{
	cs.lpszClass = _T("STATIC");
	return COleControl::PreCreateWindow(cs);
}

// CrunmeonieCtrl::IsSubclassedControl - This is a subclassed control

BOOL CrunmeonieCtrl::IsSubclassedControl()
{
	return TRUE;
}

// CrunmeonieCtrl::OnOcmCommand - Handle command messages

LRESULT CrunmeonieCtrl::OnOcmCommand(WPARAM wParam, LPARAM lParam)
{
	WORD wNotifyCode = HIWORD(wParam);

	// TODO: Switch on wNotifyCode here.

	return 0;
}

void Log(LPCWSTR format, ...) {
  WCHAR linebuf[1024];
  va_list v;
  va_start(v, format);
  wvsprintf(linebuf, format, v);
  va_end(v);
  OutputDebugString(linebuf);
}

void InvokeJavaScriptMethod(IHTMLDocument *document, OLECHAR *method) {
  ATL::CComPtr<IDispatch> dispatch;
  if (SUCCEEDED(document->get_Script(&dispatch))) {
    COleDispatchDriver driver;
    driver.AttachDispatch(dispatch);
    DISPID id{};
    if (SUCCEEDED(dispatch->GetIDsOfNames(IID_NULL,
      &method,
      1,
      LOCALE_SYSTEM_DEFAULT,
      &id))) {
      TRY{
        driver.InvokeHelper(id, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
      }
        CATCH(COleException, e) {
        Log(L"COleException\n");
      }
      END_CATCH
    }
    driver.DetachDispatch();
  }
}

// CrunmeonieCtrl message handlers

ULONG CrunmeonieCtrl::Hello(LPCTSTR Greeting)
{
  AFX_MANAGE_STATE(AfxGetStaticModuleState());
  // https://code.msdn.microsoft.com/MFCSafeActiveX-690cd758/sourcecode?fileId=21807&pathId=571421019
  ATL::CComPtr<IOleClientSite> site = GetClientSite();
  if (site) {
    ATL::CComPtr<IOleContainer> container;
    if (SUCCEEDED(site->GetContainer(&container))) {
      if (ATL::CComQIPtr<IHTMLDocument2> doc = container) {
        ATL::CComBSTR copied(Greeting);
        InvokeJavaScriptMethod(doc, copied);
      }
    }
  }
  return 42; // The answer is always 42.
}


int CrunmeonieCtrl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
  if (COleControl::OnCreate(lpCreateStruct) == -1)
    return -1;

  HWND h = CreateWindow(L"BUTTON",
                        L"!!",
                        WS_CHILD | WS_VISIBLE,
                        0, 0, 32, 32,
                        m_hWnd,
                        nullptr,
                        AfxGetInstanceHandle(),
                        nullptr);
  return 0;
}