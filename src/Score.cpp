// Score.cpp: implementation of the CScore class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "StudentRy.h"
#include "Score.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CScore::CScore()
{
	m_final = 0;
	m_hwrk = 0;
	m_mterm = 0;
	m_prj = 0;
}

CScore::~CScore()
{

}
