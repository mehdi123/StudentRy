#if !defined(AFX_SCRSTORE_H__64FED1B1_7BD3_44E4_8E07_9DE2ECC145EB__INCLUDED_)
#define AFX_SCRSTORE_H__64FED1B1_7BD3_44E4_8E07_9DE2ECC145EB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ScrStore.h : header file
//
#include "Score.h"

/////////////////////////////////////////////////////////////////////////////
// CScrStore recordset

class CScrStore : public CRecordset
{
public:
	void DeleteStudent(long &id);
	BOOL FindCourses(CString& cId, CString &year, int grp, int sem, long& num, CScore &score);
	BOOL FindStudent(long &id, CString &courseId, int &courseSem, CString &courseYear,  int& courseGroup);
	BOOL AddNewStudent(CString ID, CString hScore , CString pScore, CString mScore, CString fScore);
	CScrStore(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CScrStore)

// Field/Param Data
	//{{AFX_FIELD(CScrStore, CRecordset)
	CString	m_ID;
	CString	m_Homeworks;
	CString	m_Projects;
	CString	m_Midterms;
	CString  m_Final;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CScrStore)
	public:
	virtual CString GetDefaultConnect();    // Default connection string
	virtual CString GetDefaultSQL();    // Default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCRSTORE_H__64FED1B1_7BD3_44E4_8E07_9DE2ECC145EB__INCLUDED_)
