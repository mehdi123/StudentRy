#if !defined(AFX_STSTORE_H__209C09EB_C2DF_4DC6_B31B_4827D8CACC9D__INCLUDED_)
#define AFX_STSTORE_H__209C09EB_C2DF_4DC6_B31B_4827D8CACC9D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// StStore.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CStStore recordset

class CStStore : public CRecordset
{
public:
	BOOL FindStudent(long &id, CString &fName, CString& lName);
	void AddNewStudent(CString fName, CString lName, CString ID);
	CStStore(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CStStore)

// Field/Param Data
	//{{AFX_FIELD(CStStore, CRecordset)
	long	m_StudentID;
	CString	m_FirstName;
	CString	m_LastName;
	CString	m_description;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStStore)
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

#endif // !defined(AFX_STSTORE_H__209C09EB_C2DF_4DC6_B31B_4827D8CACC9D__INCLUDED_)
