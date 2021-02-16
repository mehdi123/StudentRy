// StRyDoc.cpp : implementation of the CStRyDoc class
//

#include "stdafx.h"
#include "StudentRy.h"

#include "StRyDoc.h"
#include "NewCrs.h"
#include "StRyView.h"
#include "PercSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStRyDoc

IMPLEMENT_DYNCREATE(CStRyDoc, CDocument)

BEGIN_MESSAGE_MAP(CStRyDoc, CDocument)
	//{{AFX_MSG_MAP(CStRyDoc)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStRyDoc construction/destruction

CStRyDoc::CStRyDoc()
{
	m_course = new CCourse;
	m_perc = new CPerc;
	m_scoreStore = new CScrStore;
	m_stStore = new CStStore;
}

CStRyDoc::~CStRyDoc()
{
	if(m_course)
		delete m_course;
	if(m_perc)
		delete m_perc;
	if(m_scoreStore){
		delete m_scoreStore;
	}
	if(m_stStore){
		if(m_stStore->IsOpen())
			m_stStore->Close();
		delete m_stStore;
	}
}

BOOL CStRyDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	CStRyApp* pApp = (CStRyApp*)AfxGetApp();
	if(pApp->m_newFlag){
		CString name, id, year;
		int group, hp, pp, mp, fp, sem;
		CNewCrs dialog(&name, &id, &group, &hp, &pp, &mp, &fp, &year, &sem);
		if(dialog.DoModal() == IDOK){
			m_course->m_id = id;
			m_course->m_name = name;
			m_course->m_year = year;
			m_course->m_sem = sem;
			m_course->m_group = group;
			CString Id;
			Id.Format("%s_%s_%d_%d",id, year, sem, group);
			m_perc->m_id = Id;
			m_perc->m_hPerc = hp;
			m_perc->m_pPerc = pp;
			m_perc->m_mPerc = mp;
			m_perc->m_fPerc = fp;
			CPercSet percentage;
			percentage.Open();
			if(!percentage.AddNewSet(Id, hp, pp, mp, fp)){
				percentage.Close();
				return FALSE;
			}
			if(percentage.IsOpen())
				percentage.Close();
			return TRUE;
		}
		return FALSE;
	}else{
		CCourse* crs = &pApp->m_course;
		m_course->m_id = crs->m_id;
		m_course->m_name = crs->m_name;
		m_course->m_year = crs->m_year;
		m_course->m_sem = crs->m_sem;
		m_course->m_group = crs->m_group;
		CPercSet percentage;
		CString Id;
		Id.Format("%s_%s_%d_%d", crs->m_id, crs->m_year, crs->m_sem, crs->m_group);
		if(percentage.GetPercentage(Id, m_perc->m_hPerc, m_perc->m_pPerc, m_perc->m_mPerc,\
			m_perc->m_fPerc)){
			if(percentage.IsOpen())
				percentage.Close();
			return TRUE;
		}else{
			if(percentage.IsOpen())
				percentage.Close();
			return FALSE;
		}
	}
}



/////////////////////////////////////////////////////////////////////////////
// CStRyDoc serialization

void CStRyDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CStRyDoc diagnostics

#ifdef _DEBUG
void CStRyDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CStRyDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CStRyDoc commands


BOOL CStRyDoc::OnSaveDocument(CString fName, CString lName, CString ID, CString hScore
							  , CString pScore, CString mScore, CString fScore) 
{
	if(m_stStore->IsOpen()){
		CString id;
		id = ID.Left(ID.Find('_'));
		m_stStore->AddNewStudent(fName, lName, id);
		m_stStore->Close();
	}else{
		m_stStore->Open();
		CString id;
		id = ID.Left(ID.Find('_'));
		m_stStore->AddNewStudent(fName, lName, id);
	}
	if(m_scoreStore->AddNewStudent(ID, hScore, pScore, mScore, fScore)){
		if(m_scoreStore->IsOpen())
			m_scoreStore->Close();
		return TRUE;
	}else{
		if(m_scoreStore->IsOpen())
			m_scoreStore->Close();
		return FALSE;
	}
}

BOOL CStRyDoc::OnOpenDocument(LPCTSTR lpszPathName) 
{
	return TRUE;
}



