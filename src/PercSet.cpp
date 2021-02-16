// PercSet.cpp : implementation file
//

#include "stdafx.h"
#include "StudentRy.h"
#include "PercSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPercSet

IMPLEMENT_DYNAMIC(CPercSet, CRecordset)

CPercSet::CPercSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CPercSet)
	m_PercID = _T("");
	m_hPerc = 0;
	m_pPerc = 0;
	m_mPerc = 0;
	m_fPErc = 0;
	m_nFields = 5;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dynaset;
}


CString CPercSet::GetDefaultConnect()
{
	return _T("ODBC;DSN=College");
}

CString CPercSet::GetDefaultSQL()
{
	return _T("[Percentage]");
}

void CPercSet::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CPercSet)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[PercID]"), m_PercID);
	RFX_Int(pFX, _T("[hPerc]"), m_hPerc);
	RFX_Int(pFX, _T("[pPerc]"), m_pPerc);
	RFX_Int(pFX, _T("[mPerc]"), m_mPerc);
	RFX_Int(pFX, _T("[fPErc]"), m_fPErc);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CPercSet diagnostics

#ifdef _DEBUG
void CPercSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CPercSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

BOOL CPercSet::AddNewSet(CString ID, int hp, int pp, int mp, int fp)
{	
	if(!IsEOF())
		MoveFirst();
	while(!IsEOF()){
		if(m_PercID == ID)
			return FALSE;
		MoveNext();
	}
	AddNew();
	m_PercID = ID, m_hPerc = hp, m_pPerc = pp, m_mPerc = mp, m_fPErc = fp;
	return Update();
}

BOOL CPercSet::GetPercentage(CString &Id, int &hp, int &pp, int &mp, int &fp)
{
	if(!IsOpen())
		Open();
	MoveFirst();
	while(!IsEOF()){
		if(m_PercID == Id){
			hp = m_hPerc;
			pp = m_pPerc;
			mp = m_mPerc;
			fp = m_fPErc;
			return TRUE;
		}
		MoveNext();
	}
	return FALSE;
}
