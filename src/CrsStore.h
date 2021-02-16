#if !defined(AFX_CRSSTORE_H__B7B42582_4458_4EC6_84A7_1BF10DA40C42__INCLUDED_)
#define AFX_CRSSTORE_H__B7B42582_4458_4EC6_84A7_1BF10DA40C42__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CrsStore.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCrsStore recordset

class CCrsStore : public CRecordset
{
public:
	CString GetName(CString &courseId, int courseSem, CString &courseYear, int courseGroup);
	BOOL AddNewCourse(CString &num, CString &name, int sem, int group, CString& year);
	CCrsStore(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CCrsStore)

// Field/Param Data
	//{{AFX_FIELD(CCrsStore, CRecordset)
	CString	m_CourseID;
	CString	m_CourseName;
	int		m_CourseSemester;
	int		m_CourseGroup;
	CString	m_CourseYear;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCrsStore)
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

#endif // !defined(AFX_CRSSTORE_H__B7B42582_4458_4EC6_84A7_1BF10DA40C42__INCLUDED_)
