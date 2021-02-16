// Course.h: interface for the CCourse class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_COURSE_H__114E6953_08DD_44B9_B4E4_CCB72C5D76BE__INCLUDED_)
#define AFX_COURSE_H__114E6953_08DD_44B9_B4E4_CCB72C5D76BE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CCourse  
{
public:
	CCourse();
	virtual ~CCourse();

	CString m_id;
	CString m_name;
	CString m_year;
	int m_sem;
	int m_group;
};

#endif // !defined(AFX_COURSE_H__114E6953_08DD_44B9_B4E4_CCB72C5D76BE__INCLUDED_)
