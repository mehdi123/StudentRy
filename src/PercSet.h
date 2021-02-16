#if !defined(AFX_PERCSET_H__3E42C3A8_D303_42C9_9CE2_086BDA8F79EB__INCLUDED_)
#define AFX_PERCSET_H__3E42C3A8_D303_42C9_9CE2_086BDA8F79EB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PercSet.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPercSet recordset

class CPercSet : public CRecordset
{
public:
	BOOL GetPercentage(CString &Id, int &hp, int &pp, int &mp, int& fp);
	BOOL AddNewSet(CString ID, int hp, int pp, int mp, int fp);
	CPercSet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CPercSet)

// Field/Param Data
	//{{AFX_FIELD(CPercSet, CRecordset)
	CString	m_PercID;
	int	m_hPerc;
	int	m_pPerc;
	int	m_mPerc;
	int	m_fPErc;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPercSet)
	public:
	virtual CString GetDefaultConnect();    // Default connection string
	virtual CString GetDefaultSQL();    // Default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PERCSET_H__3E42C3A8_D303_42C9_9CE2_086BDA8F79EB__INCLUDED_)
