// Line.cpp: implementation of the CLine class.   
//   
//////////////////////////////////////////////////////////////////////   
   
#include "stdafx.h"   
#include "exam.h"   
#include "Line.h"   
   
#ifdef _DEBUG   
#undef THIS_FILE   
static char THIS_FILE[]=__FILE__;   
#define new DEBUG_NEW   
#endif   
   
//////////////////////////////////////////////////////////////////////   
// Construction/Destruction   
//////////////////////////////////////////////////////////////////////   
   
CLine::CLine()   
{   
   
}   
   
CLine::~CLine()   
{   
   
}   
CLine::CLine(CLine& line)   
{   
    m_ptStart = line.m_ptStart;   
    m_ptEnd = line.m_ptEnd;   
}   
   
CLine& CLine::operator =(CLine line)   
{   
    m_ptStart = line.m_ptStart;   
    m_ptEnd = line.m_ptEnd;   
    return *this;   
}   
