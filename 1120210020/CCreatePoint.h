#pragma once
#include "Global_items.h"

enum BitmapType
{
	��ɫ�Ƹ�,
	��ɫ�Ƹ�,
	ˮ���,
};

class CCreatePoint
{
protected:
	//CPoint P;
	CString tempstr;
public:
	CDC* pDC;
	CCreatePoint()
	{
		//P.x = P.y = 0;
		pDC = NULL;
		tempstr = _T("");
	}
	void OnLButtonDown(UINT nFlags, CPoint point);
};

