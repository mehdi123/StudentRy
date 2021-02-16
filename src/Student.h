// Student.h: interface for the CStudent class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STUDENT_H__AC8B4308_2637_4E77_A54D_77CFA87954B2__INCLUDED_)
#define AFX_STUDENT_H__AC8B4308_2637_4E77_A54D_77CFA87954B2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CStudent  
{
public:
	CStudent();
	virtual ~CStudent();

	long m_id;
	CString m_fname;
	CString m_lname;
	CString m_desc;

};

#endif // !defined(AFX_STUDENT_H__AC8B4308_2637_4E77_A54D_77CFA87954B2__INCLUDED_)
