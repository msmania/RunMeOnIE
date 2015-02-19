#pragma once

// runmeonieCtrl.h : Declaration of the CrunmeonieCtrl ActiveX Control class.


// CrunmeonieCtrl : See runmeonieCtrl.cpp for implementation.

class CrunmeonieCtrl : public COleControl
{
	DECLARE_DYNCREATE(CrunmeonieCtrl)

// Constructor
public:
	CrunmeonieCtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();
	virtual DWORD GetControlFlags();

// Implementation
protected:
	~CrunmeonieCtrl();

	DECLARE_OLECREATE_EX(CrunmeonieCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CrunmeonieCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CrunmeonieCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CrunmeonieCtrl)		// Type name and misc status

	// Subclassed control support
	BOOL IsSubclassedControl();
	LRESULT OnOcmCommand(WPARAM wParam, LPARAM lParam);

// Message maps
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	DECLARE_DISPATCH_MAP()

// Event maps
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
        dispidHello = 1L
    };
protected:
    ULONG Hello(LPCTSTR Greeting);

};

