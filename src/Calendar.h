//{{AFX_INCLUDES()
#include "calendar1.h"
//}}AFX_INCLUDES
#if !defined(AFX_CALENDAR_H__B85D9DC6_2524_4B3C_8DC6_16BDF036BEC3__INCLUDED_)
#define AFX_CALENDAR_H__B85D9DC6_2524_4B3C_8DC6_16BDF036BEC3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Calendar.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCalendar dialog

class CCalendar : public CDialog
{
// Construction
public:
	static char monthes[12][10];
	void UpdateSolar();
	CCalendar(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CCalendar)
	enum { IDD = IDD_CALENDARDLG };
	CStatic	m_Solar;
	CCalendar1	m_cal;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCalendar)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCalendar)
	virtual BOOL OnInitDialog();
	afx_msg void OnClickCalendar();
	afx_msg void OnDblClickCalendar();
	afx_msg void OnKeyDownCalendar(short FAR* KeyCode, short Shift);
	afx_msg void OnAfterUpdateCalendar();
	afx_msg void OnNewMonthCalendar();
	afx_msg void OnNewYearCalendar();
	afx_msg void OnClose();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CFont* font;
	int m_sDay;
	int m_sMonth;
	int m_sYear;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALENDAR_H__B85D9DC6_2524_4B3C_8DC6_16BDF036BEC3__INCLUDED_)
