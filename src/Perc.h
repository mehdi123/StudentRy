// Perc.h: interface for the CPerc class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PERC_H__B18820B8_F02F_4B1E_961F_D49338B882AA__INCLUDED_)
#define AFX_PERC_H__B18820B8_F02F_4B1E_961F_D49338B882AA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CPerc  
{
public:
	CPerc();
	virtual ~CPerc();
	CString m_id;
	int m_hPerc;
	int m_pPerc;
	int m_mPerc;
	int m_fPerc;

};

#endif // !defined(AFX_PERC_H__B18820B8_F02F_4B1E_961F_D49338B882AA__INCLUDED_)
