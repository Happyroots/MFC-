#pragma once
#include "CCreateLine.h"
#include "Head_CChartPoint.h"
class CCreateFace : public CCreateLine
{
protected:
    //Head_CChartPoint* Head;
    //CPoint* temp;
protected:
    COLORREF	m_color;   // ͼԪ��ɫ
    UINT		m_lineStyle; // ͼԪ������
    int			m_lineWidth; // ͼԪ���߿�	
    //CChartPoint* FacePoint;
    //���99���ߣ�û��ʵ�ֶ�̬�滮������
   // CChartPoint* Line;
    CPoint *Face;
    COLORREF	m_Facecolor;   // ��ͼԪ��ɫ
    int len;
public:
    CDC* pDC;
    //ѡ��
    int OnLButtonDown(UINT nFlags, CPoint point);
    //����
    void DrawFace();
    void DrawLine();
    CCreateFace();

    ~CCreateFace();

    
};

