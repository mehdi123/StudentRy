// ScrStore.cpp : implementation file
//

#include "stdafx.h"
#include "StudentRy.h"
#include "ScrStore.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CScrStore

IMPLEMENT_DYNAMIC(CScrStore, CRecordset)

CScrStore::CScrStore(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CScrStore)
	m_ID = _T("");
	m_Homeworks = _T("");
	m_Projects = _T("");
	m_Midterms = _T("");
	m_Final = _T("");
	m_nFields = 5;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CScrStore::GetDefaultConnect()
{
	return _T("ODBC;DSN=College");
}

CString CScrStore::GetDefaultSQL()
{
	return _T("[Scores]");
}

void CScrStore::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CScrStore)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[Homeworks]"), m_Homeworks);
	RFX_Text(pFX, _T("[Projects]"), m_Projects);
	RFX_Text(pFX, _T("[Midterms]"), m_Midterms);
	RFX_Text(pFX, _T("[Final]"), m_Final);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CScrStore diagnostics

#ifdef _DEBUG
void CScrStore::AssertValid() const
{
	CRecordset::AssertValid();
}

void CScrStore::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

BOOL CScrStore::AddNewStudent(CString ID, CString hScore, CString pScore,
							  CString mScore, CString fScore)
{
	if(!IsOpen())
		Open();
	if(!IsEOF())
		MoveFirst();
	while(!IsEOF()){
		if(m_ID == ID)
			return FALSE;
		MoveNext();
	}
	AddNew();
	m_ID = ID, m_Homeworks = hScore, m_Projects = pScore, m_Midterms = mScore,\
	m_Final	= fScore;
	return Update();

}

BOOL CScrStore::FindStudent(long &id, CString &courseId, int &courseSem, CString &courseYear, int &courseGroup)
{
	long tempId = 0;
	CString temp;
	CString str;
	int i = 0, j = 0;

	while(!IsEOF() && tempId != id){
		j = 0;
		temp.Empty();
		for(int count = 0 ; count < m_ID.GetLength() ; count++){
			if(m_ID[count] == '_'){
				i = 0;
				switch(j++){
				case 0:
					sscanf(temp, "%ld", &tempId);
					break;
				case 1:
					courseId.Format("%s", temp);
					break;
				case 2:
					sscanf(temp, "%d", &courseSem);
					break;
				case 3:
					courseYear.Format("%s", temp);
					break;
				}
				temp.Empty();
			}else{
				str = m_ID.GetAt(count);
				temp = temp + str;
			}
		}
		sscanf(temp, "%d", &courseGroup);
		MoveNext();
	}
	if(tempId == id)
		return TRUE;
	return FALSE;
}

BOOL CScrStore::FindCourses(CString &cId, CString &year, int grp, int sem, long &num, CScore& score)
{
	CString courseId, courseYear;
	CString temp, str;
	long tempId;
	int i = 0, j = 0, courseSem, courseGroup;
	if(IsEOF())
		return FALSE;
	while(!IsEOF()){
		j = 0;
		temp.Empty();
		TRACE("\n%s: ",m_ID);
		if(m_Homeworks.GetLength())
			sscanf(m_Homeworks, "%f", &score.m_hwrk);
		if(m_Projects.GetLength())
			sscanf(m_Projects, "%f", &score.m_prj);
		if(m_Midterms.GetLength())
			sscanf(m_Midterms, "%f", &score.m_mterm);
		if(m_Final.GetLength())
			sscanf(m_Final, "%f", &score.m_final);
		for(int count = 0 ; count < m_ID.GetLength() ; count++){
			if(m_ID[count] == '_'){
				switch(j++){
				case 0:
					sscanf(temp, "%ld", &tempId);
					break;
				case 1:
					courseId.Format("%s", temp);
					break;
				case 2:
					sscanf(temp, "%d", &courseSem);
					break;
				case 3:
					courseYear.Format("%s", temp);
					break;
				}
				temp.Empty();
			}else{
				str =  m_ID[count];
				temp = temp + str;
			}
		}
		sscanf(temp, "%d", &courseGroup);
		num = tempId;
		MoveNext();
		if(courseId == cId && year == courseYear && grp == courseGroup&& sem == courseSem){
			break;
		}
	}
	if(courseId == cId && year == courseYear && grp == courseGroup
		&& sem == courseSem){
		return TRUE;
	}else
		return FALSE;
}

void CScrStore::DeleteStudent(long &id)
{
	Open();
 	MoveFirst();
 	CString result, ID;
 	ID.Format("%ld", id);
 	while(!IsEOF()){
 		result = m_ID.Left(m_ID.Find('_'));
 		if(result == ID){
 			Delete();
 		}
 		MoveNext();
 	}
}
