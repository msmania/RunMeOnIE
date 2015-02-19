#pragma once

// runmeoniePropPage.h : Declaration of the CrunmeoniePropPage property page class.


// CrunmeoniePropPage : See runmeoniePropPage.cpp for implementation.

class CrunmeoniePropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CrunmeoniePropPage)
	DECLARE_OLECREATE_EX(CrunmeoniePropPage)

// Constructor
public:
	CrunmeoniePropPage();

// Dialog Data
	enum { IDD = IDD_PROPPAGE_RUNMEONIE };

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	DECLARE_MESSAGE_MAP()
};

