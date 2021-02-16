// StudentRy.h : main header file for the STUDENTRY application
//

#if !defined(AFX_STUDENTRY_H__71C7947A_34B4_4661_A572_BBBFA860392A__INCLUDED_)
#define AFX_STUDENTRY_H__71C7947A_34B4_4661_A572_BBBFA860392A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols
#include "Course.h"

/////////////////////////////////////////////////////////////////////////////
// CStRyApp:
// See StudentRy.cpp for the implementation of this class
//

class CStRyApp : public CWinApp
{
public:
	CStRyApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStRyApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CStRyApp)
	afx_msg void OnAppAbout();
	afx_msg void OnFileNew();
	afx_msg void OnFileOpen();
	afx_msg void OnFileSave();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	BOOL m_docAdded;
	int counter;
public:
	void ExOnFileOpen();
	BOOL m_openFlag;
	CCourse m_course;
	BOOL m_newFlag;
	CMultiDocTemplate* pDocTemplate;
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STUDENTRY_H__71C7947A_34B4_4661_A572_BBBFA860392A__INCLUDED_)
