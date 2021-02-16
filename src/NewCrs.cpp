// NewCrs.cpp : implementation file
//

#include "stdafx.h"
#include "StudentRy.h"
#include "NewCrs.h"
#include "CrsStore.h"
#include "Message.h"
#include "def.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNewCrs dialog


CNewCrs::CNewCrs(CWnd* pParent /*=NULL*/)
	: CDialog(CNewCrs::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNewCrs)
	m_fPerc = _T("");
	m_hPerc = _T("");
	m_mPerc = _T("");
	m_pPerc = _T("");
	m_term = _T("");
	//}}AFX_DATA_INIT
}

CNewCrs::CNewCrs(CString* name, CString* id, int* group, int* hperc, 
		int* pperc, int* mperc, int* fperc, CString* year, int* term,
		CWnd* pParent) : CDialog(CNewCrs::IDD, pParent)
{
	this->name =  name;
	this->id = id;
	this->year = year;
	this->group = group;
	this->hperc = hperc;
	this->pperc = pperc;
	this->mperc = mperc;
	this->fperc = fperc;
	this->term = term;
}		

void CNewCrs::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNewCrs)
	DDX_Control(pDX, IDC_PPERC, m_pcb);
	DDX_Control(pDX, IDC_MPERC, m_mcb);
	DDX_Control(pDX, IDC_HPERC, m_hcb);
	DDX_Control(pDX, IDC_FPERC, m_fcb);
	DDX_CBString(pDX, IDC_FPERC, m_fPerc);
	DDX_CBString(pDX, IDC_HPERC, m_hPerc);
	DDX_CBString(pDX, IDC_MPERC, m_mPerc);
	DDX_CBString(pDX, IDC_PPERC, m_pPerc);
	DDX_Control(pDX, IDE_COURSEGRP, m_cGroup);
	DDX_Control(pDX, IDE_COURSENUM, m_cNum);
	DDX_Control(pDX, IDE_NEWCOURSE, m_cName);
	DDX_Control(pDX, IDE_YEAR, m_cYear);
	DDX_CBString(pDX, IDC_TERM, m_term);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNewCrs, CDialog)
	//{{AFX_MSG_MAP(CNewCrs)
	ON_WM_DESTROY()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNewCrs message handlers

BOOL CNewCrs::OnInitDialog() 
{
	CDialog::OnInitDialog();
	m_font = new CFont;
	m_font->CreatePointFont(150, "BSFarsiHtml");
	((CStatic*)GetDlgItem(IDC_STATIC1))->SetFont(m_font);
	((CStatic*)GetDlgItem(IDC_STATIC2))->SetFont(m_font);
	((CStatic*)GetDlgItem(IDC_STATIC3))->SetFont(m_font);
	((CStatic*)GetDlgItem(IDC_STATIC4))->SetFont(m_font);
	((CStatic*)GetDlgItem(IDC_STATIC5))->SetFont(m_font);
	((CStatic*)GetDlgItem(IDC_STATIC6))->SetFont(m_font);
	((CStatic*)GetDlgItem(IDC_STATIC7))->SetFont(m_font);
	((CStatic*)GetDlgItem(IDC_STATIC8))->SetFont(m_font);
	((CStatic*)GetDlgItem(IDC_STATIC9))->SetFont(m_font);
	((CStatic*)GetDlgItem(IDC_STATIC10))->SetFont(m_font);

	((CComboBox*)GetDlgItem(IDC_TERM))->SetFont(m_font);
	((CStatic*)GetDlgItem(IDC_FPERC))->SetFont(m_font);
	((CStatic*)GetDlgItem(IDC_HPERC))->SetFont(m_font);
	((CStatic*)GetDlgItem(IDC_MPERC))->SetFont(m_font);
	((CStatic*)GetDlgItem(IDC_PPERC))->SetFont(m_font);

	((CStatic*)GetDlgItem(IDCANCEL))->SetFont(m_font);
	((CStatic*)GetDlgItem(IDOK))->SetFont(m_font);

	for(int i = 0 ; i <= 100 ; i++){
		CString string;
		string.Format("%d", i);
		m_fcb.InsertString(i, string);
		m_hcb.InsertString(i, string);
		m_mcb.InsertString(i, string);
		m_pcb.InsertString(i, string);
	}
	m_cName.PostMessage(WM_LBUTTONDOWN);
	m_cName.PostMessage(WM_LBUTTONUP);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CNewCrs::OnOK() 
{
	UpdateData(TRUE);
	CString name, number, group, year;
	name = m_cName.GetText();
	Strip(name);

	number = m_cNum.GetText();
	Strip(number);

	group = m_cGroup.GetText();
	Strip(group);

	year = m_cYear.GetText();
	Strip(year);

	if(!name.GetLength()){
		ShowMessage(0);
		return;
	}
	if(!number.GetLength()){
		ShowMessage(1);
		return;
	}
	if(!group.GetLength()){
		ShowMessage(8);
		return;
	}
	if(!year.GetLength()){
		ShowMessage(2);
		return;
	}
	int sum, perc;
	sscanf(m_fPerc, "%d", &perc);
	sum = perc;
	*fperc = perc;
	sscanf(m_hPerc, "%d", &perc);
	*hperc = perc;
	sum += perc;
	sscanf(m_mPerc, "%d", &perc);
	*(this->mperc) = perc;
	sum += perc;
	sscanf(m_pPerc, "%d", &perc);
	*(this->pperc) = perc;
	sum += perc;
	if(sum != 100){
		ShowMessage(4);
		return;
	}
	if(m_term != "1" && m_term != "2"){
		ShowMessage(3);
		return;
	}
	CCrsStore dbase;
	dbase.Open();
	int grp, term;
	sscanf(group, "%d", &grp);
	sscanf(m_term, "%d", &term);
	if(!dbase.AddNewCourse(number, name, term, grp, year)){
		ShowMessage(9);
		return;
	}

	*(this->name) = name;
	*(this->id) = number;
	*(this->year) = year;
	sscanf(group, "%d",&*(this->group));
	*(this->term) = term;
	if(dbase.IsOpen())
	dbase.Close();
	
	CDialog::OnOK();
}


void CNewCrs::Strip(CString &str)
{
	str.TrimLeft();
	str.TrimRight();
}

void CNewCrs::ShowMessage(int msgIndex)
{
	CMessage dlg(message[msgIndex]);
	dlg.DoModal();
}

void CNewCrs::OnDestroy() 
{
	CDialog::OnDestroy();
	
	if(m_font)
		delete m_font;
}
