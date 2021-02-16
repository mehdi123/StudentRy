#if !defined(AFX_LOADCRS1_H__CD11C443_C858_4636_852B_859F1BDC46A9__INCLUDED_)
#define AFX_LOADCRS1_H__CD11C443_C858_4636_852B_859F1BDC46A9__INCLUDED_

#include "Course.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LoadCrs1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CLoadCourse dialog

class CLoadCourse : public CDialog
{
// Construction
public:
	CFont* m_font;
	CLoadCourse(long stId, CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CLoadCourse)
	enum { IDD = IDD_LOADCRS };
	CListBox	m_list;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLoadCourse)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CLoadCourse)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	afx_msg void OnDestroy();
	afx_msg void OnClose();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	long m_stID;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOADCRS1_H__CD11C443_C858_4636_852B_859F1BDC46A9__INCLUDED_)
