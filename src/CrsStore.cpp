// CrsStore.cpp : implementation file
//

#include "stdafx.h"
#include "StudentRy.h"
#include "CrsStore.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCrsStore

IMPLEMENT_DYNAMIC(CCrsStore, CRecordset)

CCrsStore::CCrsStore(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CCrsStore)
	m_CourseID = _T("");
	m_CourseName = _T("");
	m_CourseSemester = 0;
	m_CourseGroup = 0;
	m_CourseYear = _T("");
	m_nFields = 5;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CCrsStore::GetDefaultConnect()
{
	return _T("ODBC;DSN=College");
}

CString CCrsStore::GetDefaultSQL()
{
	return _T("[Courses]");
}

void CCrsStore::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CCrsStore)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[CourseID]"), m_CourseID);
	RFX_Text(pFX, _T("[CourseName]"), m_CourseName);
	RFX_Int(pFX, _T("[CourseSemester]"), m_CourseSemester);
	RFX_Int	(pFX, _T("[CourseGroup]"), m_CourseGroup);
	RFX_Text(pFX, _T("[CourseYear]"), m_CourseYear);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CCrsStore diagnostics

#ifdef _DEBUG
void CCrsStore::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCrsStore::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

BOOL CCrsStore::AddNewCourse(CString &num, CString &name, int sem, int group, CString &year)
{
	if(!this->IsEOF())
		MoveFirst();
	while(!this->IsEOF()){
		if(m_CourseID == num && m_CourseName == name 
			&& m_CourseSemester == sem && m_CourseYear == year)
			return FALSE;
		MoveNext();
	}
	CString str;
	str.Format("Sem :%d, Group: %d", sem, group);
	AddNew();
	m_CourseID = num, m_CourseName = name, m_CourseSemester = sem, \
		m_CourseYear = year, m_CourseGroup = group;
	return Update();
}

CString CCrsStore::GetName(CString &courseId, int courseSem, CString &courseYear, int courseGroup)
{
	if(!IsOpen())
		Open();
	if(!IsEOF())
		MoveFirst();
	while(!IsEOF()){
		if(m_CourseID == courseId && m_CourseSemester == courseSem
			&& m_CourseGroup == courseGroup && m_CourseYear == courseYear)
			return m_CourseName;
		MoveNext();
	}
	return " ";
}

//DEL void CCrsStore::DeleteStudent(long &id)
//DEL {
//DEL 	Open();
//DEL 	MoveFirst();
//DEL 	CString result, ID;
//DEL 	ID.Format("%ld", id);
//DEL 	while(!IsEOF()){
//DEL 		result = m_CourseID.Left(m_CourseID.Find('_')-1);
//DEL 		if(result == ID){
//DEL 			Delete();
//DEL 		}
//DEL 		MoveNext();
//DEL 	}
//DEL }
