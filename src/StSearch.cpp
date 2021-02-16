// StSearch.cpp : implementation file
//

#include "stdafx.h"
#include "StudentRy.h"
#include "StSearch.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStSearch dialog


CStSearch::CStSearch(CWnd* pParent /*=NULL*/)
	: CDialog(CStSearch::IDD, pParent)
{
	//{{AFX_DATA_INIT(CStSearch)
	m_val = _T("");
	//}}AFX_DATA_INIT
}

CStSearch::CStSearch(long &stId, CWnd* pParent)
:CDialog(CStSearch::IDD, pParent)
{
	m_stid = &stId;
}
void CStSearch::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CStSearch)
	DDX_Control(pDX, IDC_EDIT, m_ctrl);
	DDX_Text(pDX, IDC_EDIT, m_val);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CStSearch, CDialog)
	//{{AFX_MSG_MAP(CStSearch)
	ON_WM_CANCELMODE()
	ON_WM_CAPTURECHANGED()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStSearch message handlers

void CStSearch::OnOK() 
{
	UpdateData();
	m_val.TrimRight();
	m_val.TrimLeft();
	sscanf(m_val, "%ld", m_stid);
	CDialog::OnOK();
}

BOOL CStSearch::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_ctrl.PostMessage(WM_LBUTTONDOWN);
	m_ctrl.PostMessage(WM_LBUTTONUP);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CStSearch::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}

void CStSearch::OnCaptureChanged(CWnd *pWnd) 
{
	CDialog::OnCaptureChanged(pWnd);
}
