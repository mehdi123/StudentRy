// LoadCrs.cpp : implementation file
//

#include "stdafx.h"
#include "StudentRy.h"
#include "LoadCrs.h"
#include "StStore.h"
#include "ScrStore.h"
#include "CrsStore.h"
#include "Course.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLoadCrs dialog


CLoadCourse::CLoadCourse(long stId, CWnd* pParent /*=NULL*/)
	: CDialog(CLoadCourse::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLoadCrs)
	//}}AFX_DATA_INIT
	m_stID = stId;
}


/////////////////////////////////////////////////////////////////////////////
// CLoadCrs message handlers

BOOL CLoadCourse::OnInitDialog() 
{
	CDialog::OnInitDialog();
	m_font = new CFont;
	m_font->CreatePointFont(150, "BSFarsiHtml");
	m_list.SetFont(m_font);
	((CButton*)GetDlgItem(IDOK))->SetFont(m_font);
	((CButton*)GetDlgItem(IDCANCEL))->SetFont(m_font);

	CStStore dbase;
	CScrStore scores;
	CCrsStore course;
	CString fName, lName, result;

	CString courseId, courseName, courseYear;
	int courseSem, courseGroup, count = 0;
	if(m_stID != -1){
		if(dbase.FindStudent(m_stID, fName, lName)){
			result.Format(":%s %s %ld", lName, fName, m_stID);
			m_list.InsertString(0, result);
			if(!scores.IsOpen())
				scores.Open();
			scores.MoveFirst();
			while(scores.FindStudent(m_stID, courseId, courseSem, 
				courseYear, courseGroup)){
				courseName = course.GetName(courseId, courseSem, courseYear, courseGroup);
				result.Format("%d:ûõ°â    %s:ë‡¶    %d:ï°•   (%s)%s:¹±­", courseGroup, courseYear, courseSem, courseId, courseName);
				CCourse *crs = new CCourse;
				crs->m_group = courseGroup;
				crs->m_id = courseId;
				crs->m_name = courseName;
				crs->m_year = courseYear;
				crs->m_sem = courseSem;
				m_list.InsertString(++count, result);
				m_list.SetItemDataPtr(count, crs);
			}
		}
		if(scores.IsOpen())
			scores.Close();
		if(dbase.IsOpen())
			dbase.Close();
		if(course.IsOpen())
			course.Close();
	}else{
		course.Open();
		course.MoveFirst();
		result.Format(":­ôœôì ÿ‡ù¶±­");
		m_list.InsertString(0, result);
		while(!course.IsEOF()){
			result.Format("%d:ûõ°â\t %s:ë‡¶ \t%d:ï°• \t(%s)%s:¹±­", course.m_CourseGroup, course.m_CourseYear, 
				course.m_CourseSemester, course.m_CourseID, course.m_CourseName);
			m_list.InsertString(++count, result);
			CCourse *crs = new CCourse;
			crs->m_group = course.m_CourseGroup;
			crs->m_id = course.m_CourseID;
			crs->m_name = course.m_CourseName;
			crs->m_year = course.m_CourseYear;
			crs->m_sem = course.m_CourseSemester;
			m_list.SetItemDataPtr(count, crs);
			course.MoveNext();
		}
	}
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}





void CLoadCourse::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLoadCourse)
	DDX_Control(pDX, IDC_LIST, m_list);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLoadCourse, CDialog)
	//{{AFX_MSG_MAP(CLoadCourse)
	ON_WM_DESTROY()
	ON_WM_CLOSE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLoadCourse message handlers

void CLoadCourse::OnOK() 
{
	int nSel = m_list.GetCurSel();
	if(nSel > 0){
		CCourse *crs = (CCourse*)m_list.GetItemDataPtr(nSel);
		CStRyApp *pApp = (CStRyApp *)AfxGetApp();
		pApp->m_course.m_group = crs->m_group;
		pApp->m_course.m_id = crs->m_id;
		pApp->m_course.m_name = crs->m_name;
		pApp->m_course.m_sem = crs->m_sem;
		pApp->m_course.m_year = crs->m_year;
		pApp->m_newFlag = FALSE;
		pApp->ExOnFileOpen();
	}
	CDialog::OnOK();
}


void CLoadCourse::OnDestroy() 
{
	CDialog::OnDestroy();
	for(int i = 0 ; i < m_list.GetCount();i++)
		delete (CCourse*)m_list.GetItemDataPtr(i);
	delete m_font;
}

void CLoadCourse::OnClose() 
{
	CDialog::OnClose();
}
