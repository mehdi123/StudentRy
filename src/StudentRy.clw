; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CStRyView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "StudentRy.h"
LastPage=0

ClassCount=16
Class1=CStRyApp
Class2=CStRyDoc
Class3=CStRyView
Class4=CMainFrame
Class7=CStStore
Class9=CScrStore

ResourceCount=20
Resource1=IDD_STSRCH
Resource2=IDD_LOADCRS
Resource3=IDR_STUDENTYPE
Resource4=IDD_NEWCRS
Class5=CChildFrame
Class6=CAboutDlg
Class8=CCrsStore
Class10=CNewCrs
Resource5=IDR_MAINFRAME
Class11=CMessage
Class12=CPercSet
Resource6=IDD_MESSAGE
Resource7=IDD_ABOUTBOX
Class13=CLoadCrs
Resource8=IDD_WAITMSG
Class14=CStSearch
Class15=CLoadCourse
Resource9=IDD_STUDENTRY_FORM
Class16=CCalendar
Resource10=IDD_CALENDARDLG
Resource11=IDD_STSRCH (English (U.S.))
Resource12=IDD_LOADCRS (English (U.S.))
Resource13=IDD_STUDENTRY_FORM (English (U.S.))
Resource14=IDD_NEWCRS (English (U.S.))
Resource15=IDR_MAINFRAME (English (U.S.))
Resource16=IDD_WAITMSG (English (U.S.))
Resource17=IDD_MESSAGE (English (U.S.))
Resource18=IDR_STUDENTYPE (English (U.S.))
Resource19=IDD_ABOUTBOX (English (U.S.))
Resource20=IDD_CALENDARDLG (English (U.S.))

[CLS:CStRyApp]
Type=0
HeaderFile=StudentRy.h
ImplementationFile=StudentRy.cpp
Filter=N
BaseClass=CWinApp
VirtualFilter=AC
LastObject=ID_FILE_CLOSE

[CLS:CStRyDoc]
Type=0
HeaderFile=StRyDoc.h
ImplementationFile=StRyDoc.cpp
Filter=N
LastObject=CStRyDoc
BaseClass=CDocument
VirtualFilter=DC

[CLS:CStRyView]
Type=0
HeaderFile=StRyView.h
ImplementationFile=StRyView.cpp
Filter=D
BaseClass=CFormView
VirtualFilter=VWC
LastObject=CStRyView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=CMainFrame
BaseClass=CMDIFrameWnd
VirtualFilter=fWC


[CLS:CChildFrame]
Type=0
HeaderFile=ChildFrm.h
ImplementationFile=ChildFrm.cpp
Filter=M
LastObject=CChildFrame
BaseClass=CMDIChildWnd
VirtualFilter=mfWC


[CLS:CAboutDlg]
Type=0
HeaderFile=StudentRy.cpp
ImplementationFile=StudentRy.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=3
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_APP_EXIT
Command4=ID_VIEW_TOOLBAR
Command5=ID_VIEW_STATUS_BAR
Command6=ID_SEARCH_STUDENT
Command7=ID_OPERATION_DELETEASTUDENT
Command8=ID_CAL
Command9=ID_APP_ABOUT
CommandCount=9

[TB:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[MNU:IDR_STUDENTYPE]
Type=1
Class=CStRyView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_SAVE
Command5=ID_APP_EXIT
Command6=ID_EDIT_UNDO
Command7=ID_EDIT_CUT
Command8=ID_EDIT_COPY
Command9=ID_EDIT_PASTE
Command10=ID_VIEW_TOOLBAR
Command11=ID_VIEW_STATUS_BAR
Command12=ID_SEARCH_STUDENT
Command13=ID_FNAME
Command14=ID_LNAME
Command15=ID_STONUMBER
Command16=ID_HSCORE
Command17=ID_PSCORE
Command18=ID_MSCORE
Command19=ID_FSCORE
Command20=ID_F
Command21=ID_OPERATION_DELETEASTUDENT
Command22=ID_CAL
Command23=ID_WINDOW_NEW
Command24=ID_WINDOW_CASCADE
Command25=ID_WINDOW_TILE_HORZ
Command26=ID_WINDOW_ARRANGE
Command27=ID_APP_ABOUT
CommandCount=27

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[DLG:IDD_STUDENTRY_FORM]
Type=1
Class=CStRyView
ControlCount=2
Control1=IDC_GRID,{6262D3A0-531B-11CF-91F6-C2863C385E30},1342242816
Control2=IDE_FLOADTEDIT,{9C7461E3-5DDE-4ECD-B539-672B96EF12CC},1073938432

[CLS:CStStore]
Type=0
HeaderFile=StStore.h
ImplementationFile=StStore.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r
LastObject=CStStore

[DB:CStStore]
DB=1
DBType=ODBC
ColumnCount=4
Column1=[StudentID], 4, 4
Column2=[FirstName], 12, 60
Column3=[LastName], 12, 60
Column4=[description], 12, 200

[CLS:CCrsStore]
Type=0
HeaderFile=CrsStore.h
ImplementationFile=CrsStore.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r

[DB:CCrsStore]
DB=1
DBType=ODBC
ColumnCount=4
Column1=[CourseID], 12, 100
Column2=[CourseName], 12, 100
Column3=[CourseSemester], 4, 4
Column4=[CourseYear], 12, 100

[CLS:CScrStore]
Type=0
HeaderFile=ScrStore.h
ImplementationFile=ScrStore.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r
LastObject=CScrStore

[DB:CScrStore]
DB=1
DBType=ODBC
ColumnCount=5
Column1=[ID], 12, 100
Column2=[Homeworks], 12, 100
Column3=[Projects], 12, 100
Column4=[Midterms], 12, 100
Column5=[Final], 4, 4

[DLG:IDD_NEWCRS]
Type=1
Class=CNewCrs
ControlCount=21
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC1,static,1342308352
Control4=IDC_STATIC2,static,1342308352
Control5=IDC_STATIC3,static,1342308352
Control6=IDC_STATIC4,static,1342308352
Control7=IDE_NEWCOURSE,{9C7461E3-5DDE-4ECD-B539-672B96EF12CC},1342242816
Control8=IDE_COURSENUM,{9C7461E3-5DDE-4ECD-B539-672B96EF12CC},1342242816
Control9=IDE_COURSEGRP,{9C7461E3-5DDE-4ECD-B539-672B96EF12CC},1342242816
Control10=IDC_STATIC5,button,1342242823
Control11=IDE_YEAR,{9C7461E3-5DDE-4ECD-B539-672B96EF12CC},1342242816
Control12=IDC_STATIC6,static,1342308352
Control13=IDC_HPERC,combobox,1344340291
Control14=IDC_PPERC,combobox,1344340291
Control15=IDC_MPERC,combobox,1344340291
Control16=IDC_FPERC,combobox,1344340291
Control17=IDC_STATIC7,static,1342308352
Control18=IDC_STATIC8,static,1342308352
Control19=IDC_STATIC9,static,1342308352
Control20=IDC_STATIC10,static,1342308352
Control21=IDC_TERM,combobox,1344341250

[CLS:CNewCrs]
Type=0
HeaderFile=NewCrs.h
ImplementationFile=NewCrs.cpp
BaseClass=CDialog
Filter=D
LastObject=CNewCrs
VirtualFilter=dWC

[CLS:CMessage]
Type=0
HeaderFile=Message.h
ImplementationFile=Message.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDOK

[DLG:IDD_MESSAGE]
Type=1
Class=CMessage
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDC_MSG,static,1342308352
Control3=IDC_STATIC,static,1342177283
Control4=IDCANCEL,button,1342242816

[CLS:CPercSet]
Type=0
HeaderFile=PercSet.h
ImplementationFile=PercSet.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r
LastObject=CPercSet

[DB:CPercSet]
DB=1
DBType=ODBC
ColumnCount=5
Column1=[PercID], 12, 100
Column2=[hPerc], 4, 4
Column3=[pPerc], 4, 4
Column4=[mPerc], 4, 4
Column5=[fPErc], 4, 4

[DLG:IDD_WAITMSG]
Type=1
Class=?
ControlCount=1
Control1=IDC_WMSG,static,1342308352

[DB:c]
DB=1
DBType=DAO
ColumnCount=4
Column1=[tbl1].[First Name], 12, 50
Column2=[tbl1].[Last Name], 12, 50
Column3=[tbl2].[First Name], 12, 50
Column4=[tbl2].[Last Name], 12, 50

[CLS:CLoadCrs]
Type=0
HeaderFile=LoadCrs.h
ImplementationFile=LoadCrs.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_COURSELIST

[DLG:IDD_STSRCH]
Type=1
Class=CStSearch
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT,edit,1350631552

[CLS:CStSearch]
Type=0
HeaderFile=StSearch.h
ImplementationFile=StSearch.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CStSearch

[DLG:IDD_LOADCRS]
Type=1
Class=CLoadCourse
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_LIST,listbox,1352728835

[CLS:CLoadCourse]
Type=0
HeaderFile=loadcrs.h
ImplementationFile=loadcrs.cpp
LastObject=IDOK
Filter=D
BaseClass=CDialog
VirtualFilter=dWC

[DLG:IDD_CALENDARDLG]
Type=1
Class=CCalendar
ControlCount=2
Control1=IDC_CALENDAR,{8E27C92B-1264-101C-8A2F-040224009C02},1342242816
Control2=IDC_SOLAR,static,1342308352

[CLS:CCalendar]
Type=0
HeaderFile=Calendar.h
ImplementationFile=Calendar.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_CALENDAR

[DLG:IDD_STUDENTRY_FORM (English (U.S.))]
Type=1
Class=?
ControlCount=2
Control1=IDC_GRID,{6262D3A0-531B-11CF-91F6-C2863C385E30},1342242816
Control2=IDE_FLOADTEDIT,{9C7461E3-5DDE-4ECD-B539-672B96EF12CC},1073938432

[DLG:IDD_NEWCRS (English (U.S.))]
Type=1
Class=?
ControlCount=21
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC1,static,1342308352
Control4=IDC_STATIC2,static,1342308352
Control5=IDC_STATIC3,static,1342308352
Control6=IDC_STATIC4,static,1342308352
Control7=IDE_NEWCOURSE,{9C7461E3-5DDE-4ECD-B539-672B96EF12CC},1342242816
Control8=IDE_COURSENUM,{9C7461E3-5DDE-4ECD-B539-672B96EF12CC},1342242816
Control9=IDE_COURSEGRP,{9C7461E3-5DDE-4ECD-B539-672B96EF12CC},1342242816
Control10=IDC_STATIC5,button,1342242823
Control11=IDE_YEAR,{9C7461E3-5DDE-4ECD-B539-672B96EF12CC},1342242816
Control12=IDC_STATIC6,static,1342308352
Control13=IDC_HPERC,combobox,1344340291
Control14=IDC_PPERC,combobox,1344340291
Control15=IDC_MPERC,combobox,1344340291
Control16=IDC_FPERC,combobox,1344340291
Control17=IDC_STATIC7,static,1342308352
Control18=IDC_STATIC8,static,1342308352
Control19=IDC_STATIC9,static,1342308352
Control20=IDC_STATIC10,static,1342308352
Control21=IDC_TERM,combobox,1344341250

[DLG:IDD_STSRCH (English (U.S.))]
Type=1
Class=?
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT,edit,1350631552

[DLG:IDD_LOADCRS (English (U.S.))]
Type=1
Class=?
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_LIST,listbox,1352728835

[MNU:IDR_MAINFRAME (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_APP_EXIT
Command4=ID_VIEW_TOOLBAR
Command5=ID_VIEW_STATUS_BAR
Command6=ID_SEARCH_STUDENT
Command7=ID_OPERATION_DELETEASTUDENT
Command8=ID_CAL
Command9=ID_APP_ABOUT
CommandCount=9

[MNU:IDR_STUDENTYPE (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_SAVE
Command5=ID_APP_EXIT
Command6=ID_EDIT_UNDO
Command7=ID_EDIT_CUT
Command8=ID_EDIT_COPY
Command9=ID_EDIT_PASTE
Command10=ID_VIEW_TOOLBAR
Command11=ID_VIEW_STATUS_BAR
Command12=ID_SEARCH_STUDENT
Command13=ID_FNAME
Command14=ID_LNAME
Command15=ID_STONUMBER
Command16=ID_HSCORE
Command17=ID_PSCORE
Command18=ID_MSCORE
Command19=ID_FSCORE
Command20=ID_F
Command21=ID_OPERATION_DELETEASTUDENT
Command22=ID_CAL
Command23=ID_WINDOW_NEW
Command24=ID_WINDOW_CASCADE
Command25=ID_WINDOW_TILE_HORZ
Command26=ID_WINDOW_ARRANGE
Command27=ID_APP_ABOUT
CommandCount=27

[DLG:IDD_CALENDARDLG (English (U.S.))]
Type=1
Class=?
ControlCount=2
Control1=IDC_SOLAR,static,1342308352
Control2=IDC_CALENDAR,{8E27C92B-1264-101C-8A2F-040224009C02},1342242816

[DLG:IDD_MESSAGE (English (U.S.))]
Type=1
Class=?
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDC_MSG,static,1342308352
Control3=IDC_STATIC,static,1342177283
Control4=IDCANCEL,button,1342242816

[TB:IDR_MAINFRAME (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[ACL:IDR_MAINFRAME (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[DLG:IDD_ABOUTBOX (English (U.S.))]
Type=1
Class=?
ControlCount=3
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDOK,button,1342373889

[DLG:IDD_WAITMSG (English (U.S.))]
Type=1
Class=?
ControlCount=1
Control1=IDC_WMSG,static,1342308352

