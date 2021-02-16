// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "calendar1.h"

// Dispatch interfaces referenced by this interface
#include "font.h"

/////////////////////////////////////////////////////////////////////////////
// CCalendar1

IMPLEMENT_DYNCREATE(CCalendar1, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CCalendar1 properties

/////////////////////////////////////////////////////////////////////////////
// CCalendar1 operations

unsigned long CCalendar1::GetBackColor()
{
	unsigned long result;
	InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetBackColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

short CCalendar1::GetDay()
{
	short result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetDay(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

COleFont CCalendar1::GetDayFont()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return COleFont(pDispatch);
}

void CCalendar1::SetDayFont(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void CCalendar1::SetRefDayFont(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CCalendar1::GetDayFontColor()
{
	unsigned long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetDayFontColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

short CCalendar1::GetDayLength()
{
	short result;
	InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetDayLength(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x12, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CCalendar1::GetFirstDay()
{
	short result;
	InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetFirstDay(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x13, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CCalendar1::GetGridCellEffect()
{
	long result;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetGridCellEffect(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x14, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

COleFont CCalendar1::GetGridFont()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return COleFont(pDispatch);
}

void CCalendar1::SetGridFont(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void CCalendar1::SetRefGridFont(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CCalendar1::GetGridFontColor()
{
	unsigned long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetGridFontColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CCalendar1::GetGridLinesColor()
{
	unsigned long result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetGridLinesColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

short CCalendar1::GetMonth()
{
	short result;
	InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetMonth(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x10, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CCalendar1::GetMonthLength()
{
	short result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetMonthLength(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x15, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CCalendar1::GetShowDateSelectors()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetShowDateSelectors(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CCalendar1::GetShowDays()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetShowDays(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CCalendar1::GetShowHorizontalGrid()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetShowHorizontalGrid(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CCalendar1::GetShowTitle()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetShowTitle(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CCalendar1::GetShowVerticalGrid()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetShowVerticalGrid(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

COleFont CCalendar1::GetTitleFont()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return COleFont(pDispatch);
}

void CCalendar1::SetTitleFont(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void CCalendar1::SetRefTitleFont(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CCalendar1::GetTitleFontColor()
{
	unsigned long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetTitleFontColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

VARIANT CCalendar1::GetValue()
{
	VARIANT result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetValue(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

BOOL CCalendar1::GetValueIsNull()
{
	BOOL result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetValueIsNull(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

short CCalendar1::GetYear()
{
	short result;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CCalendar1::SetYear(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void CCalendar1::NextDay()
{
	InvokeHelper(0x16, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar1::NextMonth()
{
	InvokeHelper(0x17, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar1::NextWeek()
{
	InvokeHelper(0x18, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar1::NextYear()
{
	InvokeHelper(0x19, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar1::PreviousDay()
{
	InvokeHelper(0x1a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar1::PreviousMonth()
{
	InvokeHelper(0x1b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar1::PreviousWeek()
{
	InvokeHelper(0x1c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar1::PreviousYear()
{
	InvokeHelper(0x1d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar1::Refresh()
{
	InvokeHelper(DISPID_REFRESH, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar1::Today()
{
	InvokeHelper(0x1e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar1::AboutBox()
{
	InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}
