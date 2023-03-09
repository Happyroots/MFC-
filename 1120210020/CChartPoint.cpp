#include "pch.h"
#include "CChartPoint.h"


IMPLEMENT_SERIAL(CChartPoint, CObject, 0)

CChartPoint::CChartPoint()
{
	//����LONG��
	m_begin.x = m_begin.x = m_end.x = m_end.y = 0;
	pNext = nullptr;
	m_color = Global_items::g_CurColor;
	m_lineStyle = Global_items::g_CurLineStyle;
	m_lineWidth = Global_items::g_CurLineWidth;
	pDC = NULL;

}

CChartPoint::~CChartPoint()
{
	//AfxMessageBox(L"CChartPoint::Line�Ѿ�����");
}



void CChartPoint::DrawLine()
{

	//׼����ԴCDC* pDC
	//CDC* pDC = GetDC();
	CPen	pen;
	if (m_lineStyle == PS_DASH)
	{
		LOGBRUSH logBrush;
		logBrush.lbStyle = BS_SOLID;
		logBrush.lbColor = m_color;
		//��Ҫ�ظ��������
		pen.CreatePen(PS_DASH | PS_GEOMETRIC | PS_ENDCAP_ROUND, m_lineWidth, &logBrush);
	}
	else if(m_lineStyle == PS_SOLID)
	{
		pen.CreatePen(PS_SOLID, m_lineWidth, m_color);
	}
	//����˳����ʽ����ȣ���ɫ
	CPen* pOldPen1 = pDC->SelectObject(&pen); // �õ�ԭ���Ļ���

	/******��ͼ********/
	//pDC��Ч? //��һ���������ﴴ�����
	pDC->MoveTo(m_begin);
	pDC->LineTo(m_end);
	/***************/

	//������Դ

	pen.DeleteObject();
	pDC->SelectObject(pOldPen1);

	//ReleaseDC(*pDC);
	//pDC = NULL;
}


//
//CChartPoint CChartPoint::operator=(const CChartPoint& cchartPoint)
//{
//	this->m_begin = cchartPoint.m_begin;
//	this->m_end = cchartPoint.m_end;
//	this->pNext = cchartPoint.pNext;
//	//m_age = new int(*p.m_age);
//	return *this;
//}


void CChartPoint::Serialize(CArchive& ar)
{
	CObject::Serialize(ar);
	//������ɫ�����ͣ��߿�
	if (ar.IsStoring())
		ar << m_color << m_lineStyle << m_lineWidth
		<< m_begin << m_end;
	else
		ar >> m_color >> m_lineStyle >> m_lineWidth
		>> m_begin >> m_end;
}