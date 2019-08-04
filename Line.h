// Line.h: interface for the CLine class. 
// 
////////////////////////////////////////////////////////////////////// 
 
#if !defined(AFX_LINE_H__26441511_6892_4271_8766_5D22E848BAAD__INCLUDED_) 
#define AFX_LINE_H__26441511_6892_4271_8766_5D22E848BAAD__INCLUDED_ 
 
#if _MSC_VER > 1000 
#pragma once 
#endif // _MSC_VER > 1000 
 
class CLine   
{ 
public: 
	CPoint m_ptStart; 
	CPoint m_ptEnd; 
	CLine(); 
	CLine(CLine& line); 
	CLine& operator =(CLine line); 
	virtual ~CLine(); 
}; 
 
#endif // !defined(AFX_LINE_H__26441511_6892_4271_8766_5D22E848BAAD__INCLUDED_) 