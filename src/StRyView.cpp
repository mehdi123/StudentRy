// StRyView.cpp : implementation of the CStRyView class
//

#include "stdafx.h"
#include "StudentRy.h"

#include "StRyDoc.h"
#include "StRyView.h"
#include "NewCrs.h"
#include "def1.h"
#include "Message.h"
#include "StSearch.h"
#include "LoadCrs.h"
#include "Calendar.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStRyView

IMPLEMENT_DYNCREATE(CStRyView, CFormView)

BEGIN_MESSAGE_MAP(CStRyView, CFormView)
	//{{AFX_MSG_MAP(CStRyView)
	ON_COMMAND(ID_FILE_SAVE, OnFileSave)
	ON_COMMAND(ID_FNAME, OnSortFirstName)
	ON_COMMAND(ID_LNAME, OnSortLastName)
	ON_COMMAND(ID_F, OnSortFinal)
	ON_COMMAND(ID_FSCORE, OnSortFinalExam)
	ON_COMMAND(ID_HSCORE, OnSortHomework)
	ON_COMMAND(ID_MSCORE, OnSortMidterm)
	ON_COMMAND(ID_PSCORE, OnSortProject)
	ON_COMMAND(ID_STONUMBER, OnSortStNumber)
	ON_COMMAND(ID_SEARCH_STUDENT, OnSearchStudent)
	ON_COMMAND(ID_CAL, OnCal)
	ON_COMMAND(ID_CLOCK, OnClock)
	ON_COMMAND(ID_OPERATION_DELETEASTUDENT, OnDeleteStudent)
	ON_COMMAND(ID_FILE_CLOSE, OnFileClose)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CFormView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStRyView construction/destruction
/*LRESULT CALLBACK KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam){\
	if(LOWORD(wParam) == '\r')
	return NULL;

}*/

CStRyView::CStRyView()
	: CFormView(CStRyView::IDD)
{
	//{{AFX_DATA_INIT(CStRyView)
	//}}AFX_DATA_INIT
	// TODO: add construction code here
	m_editState = FALSE;
	m_killFocus = FALSE;
	m_sortFlag = TRUE;
}

CStRyView::~CStRyView()
{
}

void CStRyView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CStRyView)
	DDX_Control(pDX, IDE_FLOADTEDIT, m_fedit);
	DDX_Control(pDX, IDC_GRID, m_grid);
	//}}AFX_DATA_MAP
}

BOOL CStRyView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CStRyView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	ResizeParentToFit();
	m_grid.SetCols(8);
	this->SetGridHeader(GetDocument());
	SetRowsSize(400); //Set the size of grid's cell size
	m_fedit.SetText("");
 	CRect rect;
	m_grid.GetWindowRect(&rect);
	m_grid.SetWindowPos(&wndBottom, 0, 0,
		rect.Width(), rect.Height(), SWP_SHOWWINDOW);
	CStRyApp* pApp = (CStRyApp*)AfxGetApp();
	if(!pApp->m_newFlag){
		LoadCourse();
		pApp->m_newFlag = TRUE;
	}
}


/////////////////////////////////////////////////////////////////////////////
// CStRyView printing

BOOL CStRyView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CStRyView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CStRyView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CStRyView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}

/////////////////////////////////////////////////////////////////////////////
// CStRyView diagnostics

#ifdef _DEBUG
void CStRyView::AssertValid() const
{
	CFormView::AssertValid();
}

void CStRyView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CStRyDoc* CStRyView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CStRyDoc)));

	return (CStRyDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CStRyView message handlers




void CStRyView::SetGridColInfos(int row, CString info[], int arraySize){
	for(int i = 0 ; i < arraySize; i++)
		m_grid.SetTextMatrix(row , i, info[i]);
}


void CStRyView::SetGridHeader(CStRyDoc* pDoc)
{
		this->m_hPercDec.Format("(%%%d)%s", pDoc->m_perc->m_hPerc, constants[4]);
		this->m_pPercDec.Format("(%%%d)%s", pDoc->m_perc->m_pPerc, constants[5]);
		this->m_mPercDec.Format("(%%%d)%s", pDoc->m_perc->m_mPerc, constants[6]);
		this->m_fPercDec.Format("(%%%d)%s", pDoc->m_perc->m_fPerc, constants[7]);
		CString info[] = {constants[3],m_pPercDec, m_mPercDec,
			m_pPercDec, m_hPercDec, constants[2], constants[1],
			constants[0]};
		this->SetGridColInfos(0,info, 8);
}

BEGIN_EVENTSINK_MAP(CStRyView, CFormView)
    //{{AFX_EVENTSINK_MAP(CStRyView)
	ON_EVENT(CStRyView, IDC_GRID, -600 /* Click */, OnClickGrid, VTS_NONE)
	ON_EVENT(CStRyView, IDC_GRID, -601 /* DblClick */, OnDblClickGrid, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void CStRyView::OnClickGrid() 
{
	long Row = m_grid.GetMouseRow();
	CString str;
	if(m_fedit.IsWindowVisible())
		m_fedit.ShowWindow(SW_HIDE);
	if(Row == 0){
		SetSortFlag();
		m_grid.SortFarsi(m_grid.GetCol(), m_sortFlag);
	}
}

void CStRyView::ShowFloatEdit(BOOL flag, BOOL negotiate)
{
	//A method for showing the floating edit box
	if(flag){
		if(!m_grid.GetCol())
			return;
		m_prvCellValue.Format("%s", m_fedit.GetText());
		m_fedit.ShowWindow(SW_SHOW);
		CRect rect;
		m_grid.GetWindowRect(&rect);
		m_grid.SetWindowPos(&wndBottom, 0, 0,
			rect.Width(), rect.Height(), SWP_SHOWWINDOW);
		m_fedit.SetWindowPos(&wndTopMost, m_grid.GetCellLeft()/15, \
			m_grid.GetCellTop()/15, m_grid.GetCellWidth()/15, m_grid.GetCellHeight()/15,\
			SWP_SHOWWINDOW);
		m_fedit.SetText("");
		m_fedit.PostMessage(WM_LBUTTONDOWN);
		m_fedit.PostMessage(WM_LBUTTONUP);
		m_prvCol = m_grid.GetCol();
		m_prvRow = m_grid.GetRow();
		if(m_grid.GetRows() == m_grid.GetRow()+1){
			m_grid.SetRows(m_grid.GetRow()+2);//adds a new row
			m_grid.SetRowHeight(m_grid.GetRows()-1, 400);
		}
	}else{
		CString data = m_fedit.GetText();
		if(!negotiate && !CheckFormat(m_grid.GetCol(), data)){
			m_grid.SetText("");
			return;
		}
		m_fedit.ShowWindow(SW_HIDE);
		long r = m_grid.GetRow();
		CScore score;
		sscanf(m_grid.GetTextMatrix(r, 1), "%f", &score.m_final);
		sscanf(m_grid.GetTextMatrix(r, 2), "%f", &score.m_mterm);
		sscanf(m_grid.GetTextMatrix(r, 3), "%f", &score.m_prj);
		sscanf(m_grid.GetTextMatrix(r, 4), "%f", &score.m_hwrk);
		Calculate(r, score);
	}
	m_editState = flag;

}

void CStRyView::SetRowsSize(int size)
{
	for(int i = 0 ; i < m_grid.GetRows();i++)
		m_grid.SetRowHeight(i, size);
	
}




BOOL CStRyView::PreTranslateMessage(MSG* pMsg) 
{
	BOOL flag = FALSE;
	if(pMsg->message == WM_KEYDOWN){
		char ch = (char)LOWORD(pMsg->wParam);
		switch(ch){
		case VK_UP:
		case VK_DOWN:
		case VK_END:
		case VK_HOME:
		case VK_LEFT:
		case VK_RIGHT:
		case '\r':
		case '\t':
			if(m_editState){
				CString data;
				data = m_fedit.GetText();
				if(data.GetLength())
					GetDocument()->SetModifiedFlag();
				m_grid.SetText(m_fedit.GetText());
				this->ShowFloatEdit(FALSE);
			}
			flag = TRUE;
			break;
		case VK_ESCAPE:
			m_fedit.SetText("");
			ShowFloatEdit(FALSE, TRUE);
			break;
		}
		if(((ch >= 33 && ch <= 126)||ch == ' ') && !m_editState && !flag){
			ShowFloatEdit();
		}
	}
	return CFormView::PreTranslateMessage(pMsg);
}

void CStRyView::OnDblClickGrid()
{
	CString str;
	if(m_grid.GetMouseRow() == 0)
		return;
	if(m_editState){
		if(::strlen(m_fedit.GetText()))
			GetDocument()->SetModifiedFlag();
		m_grid.SetTextMatrix(m_prvRow, m_prvCol, m_fedit.GetText());
		ShowFloatEdit(FALSE);
		m_fedit.SetText("");
	}
	ShowFloatEdit();
	str = m_grid.GetText();
	m_fedit.SetText((LPCSTR)str);
}

void CStRyView::OnFileSave()
{
	CString data[7], copy;
	CStRyDoc *pDoc = GetDocument();
	for(int i = 1 ; i < m_grid.GetRows()-1; i++){
		for(int col = 7 ; col > 0 ; col--){
			data[col-1] = m_grid.GetTextMatrix(i, col);
			if(col == 5){
				data[col-1].TrimLeft();
				data[col-1].TrimRight();
				if(!data[col-1].GetLength()){
					col = 0;
					continue;
				}
			}
		}
		copy = data[4];
		data[4].Format("_%s_%d_%s_%d", pDoc->m_course->m_id,\
			pDoc->m_course->m_sem, pDoc->m_course->m_year, pDoc->m_course->m_group);
		data[4] = copy + data[4];
		if(!pDoc->OnSaveDocument(data[6], data[5], data[4], data[3], data[2], data[1], data[0])){
			CString msg, str;
			str.LoadString(IDS_DUPLICATEMSG);
			msg = copy + " : " + str;
			CMessage dlg(msg);
			dlg.DoModal();
		}
		pDoc->SetModifiedFlag(FALSE);
	}
}

BOOL CStRyView::CheckFormat(long col, CString &data)
{
	BOOL floatState = FALSE, signState = FALSE; 
	float f;
	data.TrimLeft();
	data.TrimRight();
	if(col >= 1 && col <= 5){
		sscanf(data, "%f", &f);
		if(col != 5 && f > 20.0)
			return FALSE;
		int i = 0;
		if(data.GetLength() && (data[0] == '+' || data[0] == '-')){
			signState = TRUE;
			i++;
		}
		if(col == 5 && signState)
			return FALSE;
		for(; i < data.GetLength() ;i++){
			switch(data[i]){
			case '.':
				if(floatState == TRUE || col == 5)
					return FALSE;
				floatState = TRUE;
				break;
			case '+':
			case '-':
				return FALSE;
			default:
				if(!isdigit(data[i]))
					return FALSE;
			}
		}
	}
	return TRUE;
}

void CStRyView::OnSortFirstName() 
{
	SetSortFlag();
	m_grid.SortFarsi(7, m_sortFlag);
}

void CStRyView::OnSortLastName() 
{
	SetSortFlag();
	m_grid.SortFarsi(6, m_sortFlag);	
}


void CStRyView::OnSortFinal() 
{
	SetSortFlag();
	m_grid.SortFarsi(0, m_sortFlag);
}

void CStRyView::OnSortFinalExam() 
{
	SetSortFlag();
	m_grid.SortFarsi(1, m_sortFlag);
}

void CStRyView::OnSortHomework() 
{
	SetSortFlag();
	m_grid.SortFarsi(4, m_sortFlag);
}

void CStRyView::OnSortMidterm() 
{
	SetSortFlag();
	m_grid.SortFarsi(2, m_sortFlag);
}

void CStRyView::OnSortProject() 
{
	SetSortFlag();
	m_grid.SortFarsi(3, m_sortFlag);
}

void CStRyView::OnSortStNumber() 
{
	SetSortFlag();
	m_grid.SortFarsi(5, m_sortFlag);
}

void CStRyView::SetSortFlag()
{
	if(m_sortFlag)
		m_sortFlag = FALSE;
	else
		m_sortFlag = TRUE;
}

void CStRyView::OnSearchCourse() 
{
}

void CStRyView::OnSearchStudent() 
{
	long id;
	CStSearch dlg(id);
	if(dlg.DoModal() == IDOK){
		CLoadCourse dialog(id);
		dialog.DoModal();
	}
}

void CStRyView::LoadCourse()
{
	CString fName, lName;

	CStRyDoc* pDoc = GetDocument();
	CScrStore score;
	CStStore st;
	CScore sc;
	long stNum;
	long row = 0;
	if(!score.IsOpen()){
		score.Open();
		score.MoveFirst();
	}
	while(score.FindCourses(pDoc->m_course->m_id, pDoc->m_course->m_year,
		pDoc->m_course->m_group, pDoc->m_course->m_sem, stNum, sc)){
		st.FindStudent(stNum, fName, lName);
		FillGrid(++row, stNum, fName, lName, sc);
		m_grid.SetRows(row+2);
	}
	SetRowsSize(400); //Set the size of grid's cell size	
	((CStRyApp*)AfxGetApp())->m_newFlag = TRUE;
}

void CStRyView::FillGrid(long row, long stNum, CString &fName, CString &lName, CScore &sc)
{
	CString str;
	str.Format("%ld", stNum);
	m_grid.SetTextMatrix(row, 5, str);
	m_grid.SetTextMatrix(row, 6, lName);
	m_grid.SetTextMatrix(row, 7, fName);
	str.Format("%2.2f", sc.m_final);
	m_grid.SetTextMatrix(row, 1, str);
	str.Format("%2.2f", sc.m_mterm);
	m_grid.SetTextMatrix(row, 2, str);
	str.Format("%2.2f", sc.m_prj);
	m_grid.SetTextMatrix(row, 3, str);
	str.Format("%2.2f", sc.m_hwrk);
	m_grid.SetTextMatrix(row, 4, str);
	Calculate(row, sc);
}

void CStRyView::Calculate(long row, CScore &sc)
{
	CPerc* perc = GetDocument()->m_perc;
	double sum = 0;
	CString str;
	sum = (perc->m_hPerc/100.)*sc.m_hwrk +(perc->m_pPerc/100.)*sc.m_prj +
		(perc->m_mPerc/100.)*sc.m_mterm +(perc->m_fPerc/100.)*sc.m_final;
	str.Format("%.2f", sum);
	m_grid.SetTextMatrix(row, 0, str);
}

void CStRyView::OnCal() 
{
	CCalendar dlg;
	dlg.DoModal();
	
}

void CStRyView::OnClock() 
{
	// TODO: Add your command handler code here
	
}

void CStRyView::OnDeleteStudent() 
{
	long id;
	CStSearch dlg(id);
	if(dlg.DoModal() == IDOK){
		CString str;
		str.Format("%ld", id);
		for(int i = 0 ; i < m_grid.GetRows() ;i++){
			if(str == m_grid.GetTextMatrix(i, 5)){
				m_grid.RemoveItem(i);
				break;
			}
		}
	}
}

void CStRyView::OnFileClose() 
{
	if(GetDocument()->IsModified()){
		CString msg;
		msg.LoadString(IDS_CLOSEMSG);
		CMessage dlg(msg);
		if(dlg.DoModal() == IDOK)
			OnFileSave();
	}
	GetDocument()->OnCloseDocument();
}
