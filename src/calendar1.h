#if !defined(AFX_CALENDAR1_H__AD814B5F_81D0_4A2F_93BD_BB1C84B99C5E__INCLUDED_)
#define AFX_CALENDAR1_H__AD814B5F_81D0_4A2F_93BD_BB1C84B99C5E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class COleFont;

/////////////////////////////////////////////////////////////////////////////
// CCalendar1 wrapper class

class CCalendar1 : public CWnd
{
protected:
	DECLARE_DYNCREATE(CCalendar1)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x8e27c92b, 0x1264, 0x101c, { 0x8a, 0x2f, 0x4, 0x2, 0x24, 0x0, 0x9c, 0x2 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	unsigned long GetBackColor();
	void SetBackColor(unsigned long newValue);
	short GetDay();
	void SetDay(short nNewValue);
	COleFont GetDayFont();
	void SetDayFont(LPDISPATCH newValue);
	void SetRefDayFont(LPDISPATCH newValue);
	unsigned long GetDayFontColor();
	void SetDayFontColor(unsigned long newValue);
	short GetDayLength();
	void SetDayLength(short nNewValue);
	short GetFirstDay();
	void SetFirstDay(short nNewValue);
	long GetGridCellEffect();
	void SetGridCellEffect(long nNewValue);
	COleFont GetGridFont();
	void SetGridFont(LPDISPATCH newValue);
	void SetRefGridFont(LPDISPATCH newValue);
	unsigned long GetGridFontColor();
	void SetGridFontColor(unsigned long newValue);
	unsigned long GetGridLinesColor();
	void SetGridLinesColor(unsigned long newValue);
	short GetMonth();
	void SetMonth(short nNewValue);
	short GetMonthLength();
	void SetMonthLength(short nNewValue);
	BOOL GetShowDateSelectors();
	void SetShowDateSelectors(BOOL bNewValue);
	BOOL GetShowDays();
	void SetShowDays(BOOL bNewValue);
	BOOL GetShowHorizontalGrid();
	void SetShowHorizontalGrid(BOOL bNewValue);
	BOOL GetShowTitle();
	void SetShowTitle(BOOL bNewValue);
	BOOL GetShowVerticalGrid();
	void SetShowVerticalGrid(BOOL bNewValue);
	COleFont GetTitleFont();
	void SetTitleFont(LPDISPATCH newValue);
	void SetRefTitleFont(LPDISPATCH newValue);
	unsigned long GetTitleFontColor();
	void SetTitleFontColor(unsigned long newValue);
	VARIANT GetValue();
	void SetValue(const VARIANT& newValue);
	BOOL GetValueIsNull();
	void SetValueIsNull(BOOL bNewValue);
	short GetYear();
	void SetYear(short nNewValue);
	void NextDay();
	void NextMonth();
	void NextWeek();
	void NextYear();
	void PreviousDay();
	void PreviousMonth();
	void PreviousWeek();
	void PreviousYear();
	void Refresh();
	void Today();
	void AboutBox();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALENDAR1_H__AD814B5F_81D0_4A2F_93BD_BB1C84B99C5E__INCLUDED_)
