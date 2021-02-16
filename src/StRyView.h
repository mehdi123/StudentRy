// StRyView.h : interface of the CStRyView class
//
/////////////////////////////////////////////////////////////////////////////
//{{AFX_INCLUDES()
#include "pedit.h"
#include "flexgrid.h"
//}}AFX_INCLUDES

#if !defined(AFX_STRYVIEW_H__26C4545B_CFEB_4ACE_ACB8_610616E42748__INCLUDED_)
#define AFX_STRYVIEW_H__26C4545B_CFEB_4ACE_ACB8_610616E42748__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "StRyDoc.h"

class CStRyView : public CFormView
{
protected: // create from serialization only
	CStRyView();
	DECLARE_DYNCREATE(CStRyView)
private:
	void LoadCourse();
	void SetSortFlag();
	BOOL m_sortFlag;
	BOOL m_killFocus;
	CString m_prvCellValue;
	BOOL CheckFormat(long col, CString &data);
	long m_prvCol;
	long m_prvRow;
	void SetRowsSize(int size);
	void ShowFloatEdit(BOOL flag = TRUE, BOOL negotiate = FALSE);
	void SetGridHeader(CStRyDoc* pDoc);
	CString m_hPercDec;	//For formatting the percentages
	CString m_pPercDec; //.
	CString m_mPercDec; //.
	CString m_fPercDec; //.


	void SetGridColInfos(int row, CString info[], int arraySize);
 
    
	BOOL m_editState;
public:
	//{{AFX_DATA(CStRyView)
	enum { IDD = IDD_STUDENTRY_FORM };
	CPEdit	m_fedit;
	CFlexGrid	m_grid;
	//}}AFX_DATA

// Attributes
public:
	CStRyDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStRyView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	void Calculate(long row, CScore&sc);
	void FillGrid(long row, long stNum, CString &fName, CString &lName,CScore &sc);
	virtual ~CStRyView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CStRyView)
	afx_msg void OnClickGrid();
	afx_msg void OnDblClickGrid();
	afx_msg void OnFileSave();
	afx_msg void OnSortFirstName();
	afx_msg void OnSortLastName();
	afx_msg void OnSortFinal();
	afx_msg void OnSortFinalExam();
	afx_msg void OnSortHomework();
	afx_msg void OnSortMidterm();
	afx_msg void OnSortProject();
	afx_msg void OnSortStNumber();
	afx_msg void OnSearchCourse();
	afx_msg void OnSearchStudent();
	afx_msg void OnCal();
	afx_msg void OnClock();
	afx_msg void OnDeleteStudent();
	afx_msg void OnFileClose();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in StRyView.cpp
inline CStRyDoc* CStRyView::GetDocument()
   { return (CStRyDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STRYVIEW_H__26C4545B_CFEB_4ACE_ACB8_610616E42748__INCLUDED_)
