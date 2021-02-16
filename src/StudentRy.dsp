# Microsoft Developer Studio Project File - Name="StudentRy" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=StudentRy - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "StudentRy.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "StudentRy.mak" CFG="StudentRy - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "StudentRy - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "StudentRy - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "StudentRy - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "StudentRy - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "StudentRy - Win32 Release"
# Name "StudentRy - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\Calendar.cpp
# End Source File
# Begin Source File

SOURCE=.\calendar1.cpp
# End Source File
# Begin Source File

SOURCE=.\ChildFrm.cpp
# End Source File
# Begin Source File

SOURCE=.\Course.cpp
# End Source File
# Begin Source File

SOURCE=.\CrsStore.cpp
# End Source File
# Begin Source File

SOURCE=.\flexgrid.cpp
# End Source File
# Begin Source File

SOURCE=.\font.cpp
# End Source File
# Begin Source File

SOURCE=.\LoadCrs.cpp
# End Source File
# Begin Source File

SOURCE=.\MainFrm.cpp
# End Source File
# Begin Source File

SOURCE=.\Message.cpp
# End Source File
# Begin Source File

SOURCE=.\NewCrs.cpp
# End Source File
# Begin Source File

SOURCE=.\pedit.cpp
# End Source File
# Begin Source File

SOURCE=.\Perc.cpp
# End Source File
# Begin Source File

SOURCE=.\PercSet.cpp
# End Source File
# Begin Source File

SOURCE=.\picture.cpp
# End Source File
# Begin Source File

SOURCE=.\rowcursor.cpp
# End Source File
# Begin Source File

SOURCE=.\Score.cpp
# End Source File
# Begin Source File

SOURCE=.\ScrStore.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\StRyDoc.cpp
# End Source File
# Begin Source File

SOURCE=.\StRyView.cpp
# End Source File
# Begin Source File

SOURCE=.\StSearch.cpp
# End Source File
# Begin Source File

SOURCE=.\StStore.cpp
# End Source File
# Begin Source File

SOURCE=.\StudentRy.cpp
# End Source File
# Begin Source File

SOURCE=.\StudentRy.rc
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\Calendar.h
# End Source File
# Begin Source File

SOURCE=.\calendar1.h
# End Source File
# Begin Source File

SOURCE=.\ChildFrm.h
# End Source File
# Begin Source File

SOURCE=.\Course.h
# End Source File
# Begin Source File

SOURCE=.\CrsStore.h
# End Source File
# Begin Source File

SOURCE=.\def.h
# End Source File
# Begin Source File

SOURCE=.\def1.h
# End Source File
# Begin Source File

SOURCE=.\flexgrid.h
# End Source File
# Begin Source File

SOURCE=.\font.h
# End Source File
# Begin Source File

SOURCE=.\LoadCrs.h
# End Source File
# Begin Source File

SOURCE=.\LoadCrs1.h
# End Source File
# Begin Source File

SOURCE=.\MainFrm.h
# End Source File
# Begin Source File

SOURCE=.\Message.h
# End Source File
# Begin Source File

SOURCE=.\NewCrs.h
# End Source File
# Begin Source File

SOURCE=.\pedit.h
# End Source File
# Begin Source File

SOURCE=.\Perc.h
# End Source File
# Begin Source File

SOURCE=.\PercSet.h
# End Source File
# Begin Source File

SOURCE=.\picture.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\rowcursor.h
# End Source File
# Begin Source File

SOURCE=.\Score.h
# End Source File
# Begin Source File

SOURCE=.\ScrStore.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\StRyDoc.h
# End Source File
# Begin Source File

SOURCE=.\StRyView.h
# End Source File
# Begin Source File

SOURCE=.\StSearch.h
# End Source File
# Begin Source File

SOURCE=.\StStore.h
# End Source File
# Begin Source File

SOURCE=.\StudentRy.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\exclamation.ico
# End Source File
# Begin Source File

SOURCE=.\res\StRyDoc.ico
# End Source File
# Begin Source File

SOURCE=.\res\StudentRy.ico
# End Source File
# Begin Source File

SOURCE=.\res\StudentRy.rc2
# End Source File
# Begin Source File

SOURCE=.\res\Toolbar.bmp
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
# Section StudentRy : {5F4DF280-531B-11CF-91F6-C2863C385E30}
# 	2:5:Class:CFlexGrid
# 	2:10:HeaderFile:flexgrid.h
# 	2:8:ImplFile:flexgrid.cpp
# End Section
# Section StudentRy : {8E27C92C-1264-101C-8A2F-040224009C02}
# 	2:5:Class:CCalendar1
# 	2:10:HeaderFile:calendar1.h
# 	2:8:ImplFile:calendar1.cpp
# End Section
# Section StudentRy : {BEF6E003-A874-101A-8BBA-00AA00300CAB}
# 	2:5:Class:COleFont
# 	2:10:HeaderFile:font.h
# 	2:8:ImplFile:font.cpp
# End Section
# Section StudentRy : {6262D3A0-531B-11CF-91F6-C2863C385E30}
# 	2:21:DefaultSinkHeaderFile:flexgrid.h
# 	2:16:DefaultSinkClass:CFlexGrid
# End Section
# Section StudentRy : {8E27C92B-1264-101C-8A2F-040224009C02}
# 	2:21:DefaultSinkHeaderFile:calendar1.h
# 	2:16:DefaultSinkClass:CCalendar1
# End Section
# Section StudentRy : {7BF80981-BF32-101A-8BBB-00AA00300CAB}
# 	2:5:Class:CPicture
# 	2:10:HeaderFile:picture.h
# 	2:8:ImplFile:picture.cpp
# End Section
# Section StudentRy : {9C7461E3-5DDE-4ECD-B539-672B96EF12CC}
# 	2:21:DefaultSinkHeaderFile:pedit.h
# 	2:16:DefaultSinkClass:CPEdit
# End Section
# Section StudentRy : {96D52217-364E-4727-A9CC-CC71E72313C2}
# 	2:5:Class:CPEdit
# 	2:10:HeaderFile:pedit.h
# 	2:8:ImplFile:pedit.cpp
# End Section
# Section StudentRy : {9F6AA700-D188-11CD-AD48-00AA003C9CB6}
# 	2:5:Class:CRowCursor
# 	2:10:HeaderFile:rowcursor.h
# 	2:8:ImplFile:rowcursor.cpp
# End Section
