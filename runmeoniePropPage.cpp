// runmeoniePropPage.cpp : Implementation of the CrunmeoniePropPage property page class.

#include "stdafx.h"
#include "runmeonie.h"
#include "runmeoniePropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CrunmeoniePropPage, COlePropertyPage)

// Message map

BEGIN_MESSAGE_MAP(CrunmeoniePropPage, COlePropertyPage)
END_MESSAGE_MAP()

// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CrunmeoniePropPage, "RUNMEONIE.runmeoniePropPage.1",
	0x2ec03bfc, 0x92c9, 0x4f3e, 0xb9, 0x98, 0xa4, 0x3e, 0x9f, 0xce, 0x27, 0x97)

// CrunmeoniePropPage::CrunmeoniePropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CrunmeoniePropPage

BOOL CrunmeoniePropPage::CrunmeoniePropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_RUNMEONIE_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CrunmeoniePropPage::CrunmeoniePropPage - Constructor

CrunmeoniePropPage::CrunmeoniePropPage() :
	COlePropertyPage(IDD, IDS_RUNMEONIE_PPG_CAPTION)
{
}

// CrunmeoniePropPage::DoDataExchange - Moves data between page and properties

void CrunmeoniePropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CrunmeoniePropPage message handlers
