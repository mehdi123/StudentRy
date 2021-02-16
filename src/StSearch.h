#if !defined(AFX_STSEARCH_H__E9C34E34_F5A8_4119_AD03_36C50F6983CC__INCLUDED_)
#define AFX_STSEARCH_H__E9C34E34_F5A8_4119_AD03_36C50F6983CC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// StSearch.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CStSearch dialog

class CStSearch : public CDialog
{
// Construction
public:
	CStSearch(CWnd* pParent = NULL);   // standard constructor
	CStSearch(long &stId, CWnd* pParent = NULL);
// Dialog Data
	//{{AFX_DATA(CStSearch)
	enum { IDD = IDD_STSRCH };
	CEdit	m_ctrl;
	CString	m_val;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStSearch)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CStSearch)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	afx_msg void OnCancelMode();
	afx_msg void OnCaptureChanged(CWnd *pWnd);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	long * m_stid;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STSEARCH_H__E9C34E34_F5A8_4119_AD03_36C50F6983CC__INCLUDED_)
 
