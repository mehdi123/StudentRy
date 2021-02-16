// Calendar.cpp : implementation file
//

#include "stdafx.h"
#include "StudentRy.h"
#include "Calendar.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCalendar dialog

char CCalendar::monthes[12][10] = {"Ú¸≠±ı∞÷", //1
			   "ñª˘ç¸≠±Ü",//2
			   "≠Ü≠∞®"	,	//3
			   "∞˝ï"	,	//4
			   "≠Ü≠∞Ï"	,	//5
			   "±Ù¸∞˘∫",	//6
			   "∞˘Ï"	,	//7
			   "ÛáåÖ"	,	//8
			   "±ØÖ"	,	//9	
				"ˇ≠"	,	//10
				"ÚÌ˘å"	,	//11
				"¨Ò◊∂Ü"	,	//12
	};		

CCalendar::CCalendar(CWnd* pParent /*=NULL*/)
	: CDialog(CCalendar::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCalendar)
	//}}AFX_DATA_INIT
}


void CCalendar::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCalendar)
	DDX_Control(pDX, IDC_SOLAR, m_Solar);
	DDX_Control(pDX, IDC_CALENDAR, m_cal);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CCalendar, CDialog)
	//{{AFX_MSG_MAP(CCalendar)
	ON_WM_CLOSE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCalendar message handlers

BOOL CCalendar::OnInitDialog() 
{
	CDialog::OnInitDialog();
	UpdateSolar();
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}




void CCalendar::UpdateSolar(){
	int year = m_cal.GetYear();
	int month = m_cal.GetMonth();
	int day = m_cal.GetDay();

	switch(month){
	case 1:
		m_sYear = year - 622;
		if((year-1)%4 == 0){
			if(day < 20){
				m_sDay = day + 11;
				m_sMonth = 10;
			}
			else{
				m_sDay = day - 19;
				m_sMonth = 11;
			}
		}else{
			if(day < 21){
				m_sDay = day + 10;
				m_sMonth = 10;
			}else{
				m_sDay = day - 20;
				m_sMonth = 11;
			}
		}
		break;
	case 2:
		m_sYear = year - 622;
		if((year-1)%4 == 0){
			if(day < 19){
				m_sMonth = 11;
				m_sDay = day + 12;
			}else{
				m_sMonth = 12;
				m_sDay = day - 18;
			}
		}else{
			if(day < 20){
				m_sMonth = 11;
				m_sDay = day + 11;
			}else{
				m_sMonth = 12;
				m_sDay = day - 19;
			}
		}
		break;
	case 3:
		if(year%4 == 0){
			if(day < 20){
				m_sYear = year - 622;
				m_sMonth = 12;
				m_sDay = day + 10;
			}else{
				m_sYear = year - 621;
				m_sMonth = 1;
				m_sDay = day - 19;
			}
		}else if(day < 21){
				m_sYear = year - 622;
				m_sMonth = 12;
				if((year-1)%4 != 0){
					if(day == 20){
						m_sDay = 1;
						m_sMonth = 1;
						m_sYear = year - 621;
					}else{
						m_sDay = day + 10;
					}
				}else 
					m_sDay = day + 10;
		}else{
			m_sMonth = 1;
			m_sDay = day - 19;
		}
		break;
	case 4:
		m_sYear = year - 621;
		if((year)%4 == 0){
			if(day < 20){
				m_sMonth = 1;
				m_sDay = day + 12;
			}else{
				m_sMonth = 2;
				m_sDay = day - 19;
			}
		}else{
			if(day < 21){
				m_sMonth = 1;
				m_sDay = day + 11;
			}else{
				m_sMonth = 2;
				m_sDay = day - 20;
			}
		}
		break;
	case 5:
		m_sYear = year - 621;
		if((year)%4 == 0){
			if(day < 21){
				m_sMonth = 2;
				m_sDay = day + 11;
			}else{
				m_sMonth = 3;
				m_sDay = day - 20;
			}
		}else{
			if(day < 22){
				m_sMonth = 2;
				m_sDay = day + 10;
			}else{
				m_sMonth = 3;
				m_sDay = day - 21;
			}
		}
		break;
	case 6:
		m_sYear = year - 621;
		m_sYear = year - 621;
		if((year)%4 == 0){
			if(day < 21){
				m_sMonth = 3;
				m_sDay = day + 11;
			}else{
				m_sMonth = 4;
				m_sDay = day - 20;
			}
		}else{
			if(day < 22){
				m_sMonth = 3;
				m_sDay = day + 10;
			}else{
				m_sMonth = 4;
				m_sDay = day - 21;
			}
		}
		break;
	case 7:
		m_sYear = year - 621;
		if((year)%4 == 0){
			if(day < 22){
				m_sMonth = 4;
				m_sDay = day + 10;
			}else{
				m_sMonth = 5;
				m_sDay = day - 21;
			}
		}else{
			if(day < 23){
				m_sMonth = 4;
				m_sDay = day + 9;
			}else{
				m_sMonth = 5;
				m_sDay = day - 22;
			}
		}
		break;
	case 8:
		m_sYear = year - 621;
		if((year)%4 == 0){
			if(day < 22){
				m_sMonth = 5;
				m_sDay = day + 10;
			}else{
				m_sMonth = 6;
				m_sDay = day - 21;
			}
		}else{
			if(day < 23){
				m_sMonth = 5;
				m_sDay = day + 11;
			}else{
				m_sMonth = 6;
				m_sDay = day - 22;
			}
		}
		break;
	case 9:
		m_sYear = year - 621;
		if((year)%4 == 0){
			if(day < 22){
				m_sMonth = 6;
				m_sDay = day + 10;
			}else{
				m_sMonth = 7;
				m_sDay = day - 21;
			}
		}else{
			if(day < 23){
				m_sMonth = 6;
				m_sDay = day + 9;
			}else{
				m_sMonth = 7;
				m_sDay = day - 22;
			}
		}
		break;
	case 10:
		m_sYear = year - 621;
		if((year)%4 == 0){
			if(day < 22){
				m_sMonth = 7;
				m_sDay = day + 9;
			}else{
				m_sMonth = 8;
				m_sDay = day - 21;
			}
		}else{
			if(day < 23){
				m_sMonth = 7;
				m_sDay = day + 8;
			}else{
				m_sMonth = 8;
				m_sDay = day - 22;
			}
		}
		break;
	case 11:
		m_sYear = year - 621;
		if((year)%4 == 0){
			if(day < 21){
				m_sMonth = 8;
				m_sDay = day + 10;
			}else{
				m_sMonth = 9;
				m_sDay = day - 20;
			}
		}else{
			if(day < 22){
				m_sMonth = 8;
				m_sDay = day + 9;
			}else{
				m_sMonth = 9;
				m_sDay = day - 21;
			}
		}
		break;
	case 12:
		m_sYear = year - 621;
		if((year)%4 == 0){
			if(day < 21){
				m_sMonth = 9;
				m_sDay = day + 10;
			}else{
				m_sMonth = 10;
				m_sDay = day - 20;
			}
		}else{
			if(day < 22){
				m_sMonth = 9;
				m_sDay = day + 9;
			}else{
				m_sMonth = 10;
				m_sDay = day - 21;
			}
		}
		break;
	}
	char str[50];
	font = new CFont;
	font->CreatePointFont(100 ,"BSFarsiHtml");
	m_Solar.SetFont(font);
	sprintf(str ,"%d  %s  %d" ,m_sYear ,CCalendar::monthes[m_sMonth-1] ,m_sDay);
	this->m_Solar.SetWindowText((LPCSTR)str);
}



BEGIN_EVENTSINK_MAP(CCalendar, CDialog)
    //{{AFX_EVENTSINK_MAP(CCalendar)
	ON_EVENT(CCalendar, IDC_CALENDAR, -600 /* Click */, OnClickCalendar, VTS_NONE)
	ON_EVENT(CCalendar, IDC_CALENDAR, -601 /* DblClick */, OnDblClickCalendar, VTS_NONE)
	ON_EVENT(CCalendar, IDC_CALENDAR, -602 /* KeyDown */, OnKeyDownCalendar, VTS_PI2 VTS_I2)
	ON_EVENT(CCalendar, IDC_CALENDAR, 1 /* AfterUpdate */, OnAfterUpdateCalendar, VTS_NONE)
	ON_EVENT(CCalendar, IDC_CALENDAR, 3 /* NewMonth */, OnNewMonthCalendar, VTS_NONE)
	ON_EVENT(CCalendar, IDC_CALENDAR, 4 /* NewYear */, OnNewYearCalendar, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void CCalendar::OnClickCalendar() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	UpdateSolar();
	
}

void CCalendar::OnDblClickCalendar() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	UpdateSolar();
	
}

void CCalendar::OnKeyDownCalendar(short FAR* KeyCode, short Shift) 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	UpdateSolar();
	
}

void CCalendar::OnAfterUpdateCalendar() 
{
	// TODO: Add your control notification handler code here
	UpdateData();
	UpdateSolar();
	
}

void CCalendar::OnNewMonthCalendar() 
{
	// TODO: Add your control notification handler code here
	
}

void CCalendar::OnNewYearCalendar() 
{
	// TODO: Add your control notification handler code here

}

void CCalendar::OnClose(){
	delete font;
	CDialog::OnClose();
}
