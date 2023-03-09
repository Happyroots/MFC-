#pragma once
#include "Global_items.h"
class CChartPoint:public CObject
{
	DECLARE_SERIAL(CChartPoint)
protected:
	COLORREF	m_color;   // ͼԪ��ɫ
	UINT		m_lineStyle; // ͼԪ������
	int			m_lineWidth; // ͼԪ���߿�	
public:
	CDC* pDC;
	CChartPoint();
	~CChartPoint();
	void DrawLine();
	void Serialize(CArchive& ar);
	char lon[20] = {};				//��ʼ����ȫΪ0
	char lat[20] = {};
	int type;
	char color[3] = { 0,0,0 };	    //�ַ�����
	char intr[20] = { "����" };	    //˵�������ֵƱ꣬19���ֹ����� 
	CChartPoint* pNext;

public:
	CPoint m_begin, m_end;

	//��������
public:
	//CChartPoint operator=(const CChartPoint& cchartPoint);

private:

};

