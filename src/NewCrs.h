//{{AFX_INCLUDES()
#include "pedit.h"
//}}AFX_INCLUDES
#if !defined(AFX_NEWCRS_H__CE980A81_E342_4C59_BC1C_7441D0771CDF__INCLUDED_)
#define AFX_NEWCRS_H__CE980A81_E342_4C59_BC1C_7441D0771CDF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NewCrs.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNewCrs dialog

class CNewCrs : public CDialog
{
// Construction
public:
	static void ShowMessage(int msgIndex);
	CNewCrs(CWnd* pParent = NULL);   // standard constructor
	CNewCrs(CString* name, CString* id, int* group, int* hperc,
		int* pperc, int* mperc, int* fperc, CString* year, int* term,
		CWnd* pParent = NULL);

// Dialog Data
	//{{AFX_DATA(CNewCrs)
	enum { IDD = IDD_NEWCRS };
	CComboBox	m_pcb;
	CComboBox	m_mcb;
	CComboBox	m_hcb;
	CComboBox	m_fcb;
	CString	m_fPerc;
	CString	m_hPerc;
	CString	m_mPerc;
	CString	m_pPerc;
	CPEdit	m_cGroup;
	CPEdit	m_cNum;
	CPEdit	m_cName;
	CPEdit	m_cYear;
	CString	m_term;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNewCrs)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
	static void Strip(CString& str);
protected:

	// Generated message map functions
	//{{AFX_MSG(CNewCrs)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	afx_msg void OnDestroy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CFont* m_font;

	CString* name;
	CString* id;
	CString* year;
	int* group;
	int* hperc;
	int* pperc;
	int* mperc;
	int* fperc;
	int* term;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NEWCRS_H__CE980A81_E342_4C59_BC1C_7441D0771CDF__INCLUDED_)
