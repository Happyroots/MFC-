#pragma once
#include "CChartPoint.h"
#include "Global_items.h"

class CCreateLine :public CObject
{
    //�������ֲ�Ӱ��̳�
protected:
 
	int Step;

public:
    CChartPoint* Line;

    CCreateLine();
    ~CCreateLine();

    //ѡ��
    int OnLButtonDown(UINT nFlags, CPoint point);
    //����
    //void DrawLine();
    //�洢
    //void CCreateLine::Serialize(CArchive& ar);
};

