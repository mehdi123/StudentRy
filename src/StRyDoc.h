// StRyDoc.h : interface of the CStRyDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_STRYDOC_H__E361D4F5_B5F5_43AA_8E63_64E66A3A7F7F__INCLUDED_)
#define AFX_STRYDOC_H__E361D4F5_B5F5_43AA_8E63_64E66A3A7F7F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Perc.h"
#include "Score.h"
#include "Course.h"
#include "AvlTree.h"
#include "ScrStore.h"
#include "StStore.h"

class CStRyDoc : public CDocument
{
protected: // create from serialization only
	CStRyDoc();
	DECLARE_DYNCREATE(CStRyDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStRyDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CStRyDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CStRyDoc)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	BOOL OnSaveDocument(CString fName, CString lName, CString ID, CString hScore,  CString pScore, CString mScore, CString fScore);
	CPerc* m_perc;
	CCourse* m_course;

private:
	CScrStore * m_scoreStore;
	CStStore * m_stStore;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STRYDOC_H__E361D4F5_B5F5_43AA_8E63_64E66A3A7F7F__INCLUDED_)
