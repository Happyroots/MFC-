#include "pch.h"
#include "CCreateLine.h"
//#include "Global_items.cpp"
//#include "Global_items.h"
//using namespace Global_items;

CCreateLine::CCreateLine()
{
	Line = NULL;
	Line = new CChartPoint;
	//pDC = NULL;
	Step = 0;
	/*len = 0;*/
}

CCreateLine::~CCreateLine()
{
	//������������Ƕ����
	/*   delete pDC;
	   pDC = NULL;*/
	//if (Line)
	//{
	//	delete Line;
	//	Line = NULL;
	//}
}


int CCreateLine::OnLButtonDown(UINT nFlags, CPoint point)
{
	switch (Step)
	{
	case 0:
	{
		Line->m_begin = point;
		break;
	}
	case 1:
	{
		Line->m_end = point;
		Line->DrawLine();
		Step = -1;
		//�����ߣ�
		//Step = 0;
		//pt_begin = pt_end;
		//delete Line;
		//Line = NULL;
		break;
	}
	}
	Step++;


	return Step;
}


