# Microsoft Developer Studio Generated NMAKE File, Based on StudentRy.dsp
!IF "$(CFG)" == ""
CFG=StudentRy - Win32 Debug
!MESSAGE No configuration specified. Defaulting to StudentRy - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "StudentRy - Win32 Release" && "$(CFG)" != "StudentRy - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
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
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

!IF  "$(CFG)" == "StudentRy - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

ALL : "$(OUTDIR)\StudentRy.exe"


CLEAN :
	-@erase "$(INTDIR)\AvlTree.obj"
	-@erase "$(INTDIR)\ChildFrm.obj"
	-@erase "$(INTDIR)\Course.obj"
	-@erase "$(INTDIR)\CrsStore.obj"
	-@erase "$(INTDIR)\flexgrid.obj"
	-@erase "$(INTDIR)\font.obj"
	-@erase "$(INTDIR)\MainFrm.obj"
	-@erase "$(INTDIR)\Message.obj"
	-@erase "$(INTDIR)\NewCrs.obj"
	-@erase "$(INTDIR)\pedit.obj"
	-@erase "$(INTDIR)\Perc.obj"
	-@erase "$(INTDIR)\PercSet.obj"
	-@erase "$(INTDIR)\picture.obj"
	-@erase "$(INTDIR)\rowcursor.obj"
	-@erase "$(INTDIR)\Score.obj"
	-@erase "$(INTDIR)\ScrStore.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\StRyDoc.obj"
	-@erase "$(INTDIR)\StRyView.obj"
	-@erase "$(INTDIR)\StStore.obj"
	-@erase "$(INTDIR)\Student.obj"
	-@erase "$(INTDIR)\StudentRy.obj"
	-@erase "$(INTDIR)\StudentRy.pch"
	-@erase "$(INTDIR)\StudentRy.res"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(OUTDIR)\StudentRy.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\StudentRy.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

.c{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

MTL=midl.exe
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /win32 
RSC=rc.exe
RSC_PROJ=/l 0x409 /fo"$(INTDIR)\StudentRy.res" /d "NDEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\StudentRy.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:no /pdb:"$(OUTDIR)\StudentRy.pdb" /machine:I386 /out:"$(OUTDIR)\StudentRy.exe" 
LINK32_OBJS= \
	"$(INTDIR)\AvlTree.obj" \
	"$(INTDIR)\ChildFrm.obj" \
	"$(INTDIR)\Course.obj" \
	"$(INTDIR)\CrsStore.obj" \
	"$(INTDIR)\flexgrid.obj" \
	"$(INTDIR)\font.obj" \
	"$(INTDIR)\MainFrm.obj" \
	"$(INTDIR)\Message.obj" \
	"$(INTDIR)\NewCrs.obj" \
	"$(INTDIR)\pedit.obj" \
	"$(INTDIR)\Perc.obj" \
	"$(INTDIR)\PercSet.obj" \
	"$(INTDIR)\picture.obj" \
	"$(INTDIR)\rowcursor.obj" \
	"$(INTDIR)\Score.obj" \
	"$(INTDIR)\ScrStore.obj" \
	"$(INTDIR)\StdAfx.obj" \
	"$(INTDIR)\StRyDoc.obj" \
	"$(INTDIR)\StRyView.obj" \
	"$(INTDIR)\StStore.obj" \
	"$(INTDIR)\Student.obj" \
	"$(INTDIR)\StudentRy.obj" \
	"$(INTDIR)\StudentRy.res"

"$(OUTDIR)\StudentRy.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "StudentRy - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

ALL : "$(OUTDIR)\StudentRy.exe"


CLEAN :
	-@erase "$(INTDIR)\AvlTree.obj"
	-@erase "$(INTDIR)\ChildFrm.obj"
	-@erase "$(INTDIR)\Course.obj"
	-@erase "$(INTDIR)\CrsStore.obj"
	-@erase "$(INTDIR)\flexgrid.obj"
	-@erase "$(INTDIR)\font.obj"
	-@erase "$(INTDIR)\MainFrm.obj"
	-@erase "$(INTDIR)\Message.obj"
	-@erase "$(INTDIR)\NewCrs.obj"
	-@erase "$(INTDIR)\pedit.obj"
	-@erase "$(INTDIR)\Perc.obj"
	-@erase "$(INTDIR)\PercSet.obj"
	-@erase "$(INTDIR)\picture.obj"
	-@erase "$(INTDIR)\rowcursor.obj"
	-@erase "$(INTDIR)\Score.obj"
	-@erase "$(INTDIR)\ScrStore.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\StRyDoc.obj"
	-@erase "$(INTDIR)\StRyView.obj"
	-@erase "$(INTDIR)\StStore.obj"
	-@erase "$(INTDIR)\Student.obj"
	-@erase "$(INTDIR)\StudentRy.obj"
	-@erase "$(INTDIR)\StudentRy.pch"
	-@erase "$(INTDIR)\StudentRy.res"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(INTDIR)\vc60.pdb"
	-@erase "$(OUTDIR)\StudentRy.exe"
	-@erase "$(OUTDIR)\StudentRy.ilk"
	-@erase "$(OUTDIR)\StudentRy.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\StudentRy.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /GZ /c 

.c{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

MTL=midl.exe
MTL_PROJ=/nologo /D "_DEBUG" /mktyplib203 /win32 
RSC=rc.exe
RSC_PROJ=/l 0x409 /fo"$(INTDIR)\StudentRy.res" /d "_DEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\StudentRy.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:yes /pdb:"$(OUTDIR)\StudentRy.pdb" /debug /machine:I386 /out:"$(OUTDIR)\StudentRy.exe" /pdbtype:sept 
LINK32_OBJS= \
	"$(INTDIR)\AvlTree.obj" \
	"$(INTDIR)\ChildFrm.obj" \
	"$(INTDIR)\Course.obj" \
	"$(INTDIR)\CrsStore.obj" \
	"$(INTDIR)\flexgrid.obj" \
	"$(INTDIR)\font.obj" \
	"$(INTDIR)\MainFrm.obj" \
	"$(INTDIR)\Message.obj" \
	"$(INTDIR)\NewCrs.obj" \
	"$(INTDIR)\pedit.obj" \
	"$(INTDIR)\Perc.obj" \
	"$(INTDIR)\PercSet.obj" \
	"$(INTDIR)\picture.obj" \
	"$(INTDIR)\rowcursor.obj" \
	"$(INTDIR)\Score.obj" \
	"$(INTDIR)\ScrStore.obj" \
	"$(INTDIR)\StdAfx.obj" \
	"$(INTDIR)\StRyDoc.obj" \
	"$(INTDIR)\StRyView.obj" \
	"$(INTDIR)\StStore.obj" \
	"$(INTDIR)\Student.obj" \
	"$(INTDIR)\StudentRy.obj" \
	"$(INTDIR)\StudentRy.res"

"$(OUTDIR)\StudentRy.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 


!IF "$(NO_EXTERNAL_DEPS)" != "1"
!IF EXISTS("StudentRy.dep")
!INCLUDE "StudentRy.dep"
!ELSE 
!MESSAGE Warning: cannot find "StudentRy.dep"
!ENDIF 
!ENDIF 


!IF "$(CFG)" == "StudentRy - Win32 Release" || "$(CFG)" == "StudentRy - Win32 Debug"
SOURCE=.\AvlTree.cpp

"$(INTDIR)\AvlTree.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\ChildFrm.cpp

"$(INTDIR)\ChildFrm.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\Course.cpp

"$(INTDIR)\Course.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\CrsStore.cpp

"$(INTDIR)\CrsStore.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\flexgrid.cpp

"$(INTDIR)\flexgrid.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\font.cpp

"$(INTDIR)\font.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\MainFrm.cpp

"$(INTDIR)\MainFrm.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\Message.cpp

"$(INTDIR)\Message.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\NewCrs.cpp

"$(INTDIR)\NewCrs.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\pedit.cpp

"$(INTDIR)\pedit.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\Perc.cpp

"$(INTDIR)\Perc.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\PercSet.cpp

"$(INTDIR)\PercSet.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\picture.cpp

"$(INTDIR)\picture.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\rowcursor.cpp

"$(INTDIR)\rowcursor.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\Score.cpp

"$(INTDIR)\Score.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\ScrStore.cpp

"$(INTDIR)\ScrStore.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\StdAfx.cpp

!IF  "$(CFG)" == "StudentRy - Win32 Release"

CPP_SWITCHES=/nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\StudentRy.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\StudentRy.pch" : $(SOURCE) "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "StudentRy - Win32 Debug"

CPP_SWITCHES=/nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\StudentRy.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /GZ /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\StudentRy.pch" : $(SOURCE) "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ENDIF 

SOURCE=.\StRyDoc.cpp

"$(INTDIR)\StRyDoc.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\StRyView.cpp

"$(INTDIR)\StRyView.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\StStore.cpp

"$(INTDIR)\StStore.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\Student.cpp

"$(INTDIR)\Student.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\StudentRy.cpp

"$(INTDIR)\StudentRy.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\StudentRy.pch"


SOURCE=.\StudentRy.rc

"$(INTDIR)\StudentRy.res" : $(SOURCE) "$(INTDIR)"
	$(RSC) $(RSC_PROJ) $(SOURCE)



!ENDIF 

