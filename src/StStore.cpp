// StStore.cpp : implementation file
//

#include "stdafx.h"
#include "StudentRy.h"
#include "StStore.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStStore

IMPLEMENT_DYNAMIC(CStStore, CRecordset)

CStStore::CStStore(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CStStore)
	m_StudentID = 0;
	m_FirstName = _T("");
	m_LastName = _T("");
	m_description = _T("");
	m_nFields = 4;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CStStore::GetDefaultConnect()
{
	return _T("ODBC;DSN=College");
}

CString CStStore::GetDefaultSQL()
{
	return _T("[Students]");
}

void CStStore::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CStStore)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Long(pFX, _T("[StudentID]"), m_StudentID);
	RFX_Text(pFX, _T("[FirstName]"), m_FirstName);
	RFX_Text(pFX, _T("[LastName]"), m_LastName);
	RFX_Text(pFX, _T("[description]"), m_description);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CStStore diagnostics

#ifdef _DEBUG
void CStStore::AssertValid() const
{
	CRecordset::AssertValid();
}

void CStStore::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

void CStStore::AddNewStudent(CString fName, CString lName, CString ID)
{
	if(!IsOpen())
		Open();
	long id;
	sscanf(ID, "%ld", &id);
	if(!IsEOF())
		MoveFirst();
	while(!IsEOF()){
		if(m_StudentID == id)
			return;
		MoveNext();
	}
	AddNew();
	m_StudentID = id, m_FirstName = fName, m_LastName = lName, m_description = "";
	Update();
}

BOOL CStStore::FindStudent(long &id, CString &fName, CString &lName)
{
	if(!IsOpen())
		Open();
	if(!IsEOF())
		MoveFirst();
	while(!IsEOF()){
		if(m_StudentID == id){
			fName = m_FirstName;
			lName = m_LastName;
			return TRUE;
		}
		MoveNext();
	}
	return FALSE;
}
