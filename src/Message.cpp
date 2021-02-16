// Message.cpp : implementation file
//

#include "stdafx.h"
#include "StudentRy.h"
#include "Message.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMessage dialog


CMessage::CMessage(CWnd* pParent /*=NULL*/)
	: CDialog(CMessage::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMessage)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

CMessage::CMessage(LPCSTR pMsg, CWnd *parent)
	: CDialog(CMessage::IDD, parent)
{
	m_msg = pMsg;
	m_font = new CFont;
	m_font->CreatePointFont(130, "BSFarsiHtml");
}

CMessage::CMessage(CString &msg, CWnd *pParent)
	:CDialog(CMessage::IDD, pParent)
{
	m_msg = msg;
	m_font = new CFont;
	m_font->CreatePointFont(130, "BSFarsiHtml");
}
void CMessage::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMessage)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CMessage, CDialog)
	//{{AFX_MSG_MAP(CMessage)
	ON_WM_DESTROY()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMessage message handlers


BOOL CMessage::OnInitDialog() 
{
	CDialog::OnInitDialog();
	SetFont(m_font);
	CStatic *label = (CStatic *)GetDlgItem(IDC_MSG);
	label->SetFont(m_font);
	label->SetWindowText(m_msg);
	CButton *button = (CButton *)GetDlgItem(IDOK);
	button->SetFont(m_font);
	button->SetWindowText("¨˝¸áï");
	button = (CButton*)GetDlgItem(IDCANCEL);
	button->SetFont(m_font);
	button->SetWindowText("Ù”Ë");
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}





void CMessage::OnDestroy() 
{
	CDialog::OnDestroy();
	
	if(m_font)
		delete m_font;
}

void CMessage::OnOK() 
{
			
	CDialog::OnOK();
}
