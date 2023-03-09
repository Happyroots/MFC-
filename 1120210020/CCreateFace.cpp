#include "pch.h"
#include "CCreateFace.h"


CCreateFace::CCreateFace()
{
	m_color = Global_items::g_CurColor;
	m_lineStyle = Global_items::g_CurLineStyle;
	m_lineWidth = Global_items::g_CurLineWidth;
	Face = new CPoint[101]; 
	m_Facecolor = Global_items::g_FaceColor;
	Line = NULL;
	len = 0;
}

CCreateFace::~CCreateFace()
{
	delete[]Face;
	delete Line;
}


void CCreateFace::DrawFace()
{

	//׼����ԴCDC* pDC
	//CDC* pDC = GetDC();
	//CPoint *Face = new CPoint[len];
	//CChartPoint* Headp = Head->P;
	//while (Head)
	//{
	//	*Face = Headp->m_begin;
	//	Headp = Headp->pNext;
	//}
	 
	//���ͼ��
	Face[len] = Face[0];
	//����
	CPen	pen;
	//����˳����ʽ����ȣ���ɫ
	pen.CreatePen(m_lineStyle, m_lineWidth, m_Facecolor);	//��������ֱ�Ӹ���
	CPen* pOldPen1 = pDC->SelectObject(&pen); // �õ�ԭ���Ļ���
	//ˢ��
	CBrush NewBrush, * pOldBrush;
	NewBrush.CreateSolidBrush(m_Facecolor);	//ʵ��ˢ��
	pOldBrush = pDC->SelectObject(&NewBrush);
	pDC->SetPolyFillMode(WINDING);//���ģʽ

	/******��ͼ********/
	//pDC��Ч? //��һ���������ﴴ�����
	pDC->Polygon(Face,len+1);
	/***************/

	//������Դ
	pDC->SelectObject(&pOldBrush);
	//pDC->SelectObject(pOldPen1);

	//ReleaseDC(*pDC);
	//pDC = NULL;
}




int CCreateFace::OnLButtonDown(UINT nFlags, CPoint point)
{
	//FacePoint = new CChartPoint;
	//if (len == 0)
	//{
	//	//��ַ��ͬ
	//	//��Ӧ�ò���ͬһ���ڴ氡
	//	Head = new Head_CChartPoint;
	//	Head->P = FacePoint;
	//}
	switch (Step)
	{
	case 0:
	{	
		Line = new CChartPoint;
		Line->m_begin = point;
		//temp = Line->m_end;
		//Line = Line->pNext;
		break;
	}
	case 1:
	{
		//Line = new CChartPoint;
		Line->m_end = point;
		//Line->m_begin = point;
		DrawLine();
		//Step = -1;
		//�����ߣ�
		Step = 0;
		Line->m_begin = Line->m_end;
		//Line = Line->pNext;
		//Line = NULL;
		break;
	}
	}
	Face[len] = point;
	len++;
	Step++;

	//���������
	//FacePoint->m_begin = point;
	//FacePoint = FacePoint->pNext;
	return Step;
}

void CCreateFace::DrawLine()
{

	//׼����ԴCDC* pDC
	//CDC* pDC = GetDC();
	CPen	pen;
	//����˳����ʽ����ȣ���ɫ
	pen.CreatePen(m_lineStyle, m_lineWidth, m_color);
	CPen* pOldPen1 = pDC->SelectObject(&pen); // �õ�ԭ���Ļ���

	/******��ͼ********/
	//pDC��Ч? //��һ���������ﴴ�����
	pDC->MoveTo(Line->m_begin);
	pDC->LineTo(Line->m_end);
	/***************/

	//������Դ
	pDC->SelectObject(pOldPen1);

	//ReleaseDC(*pDC);
	//pDC = NULL;
}

