#include "pch.h"
#include "CCreatePoint.h"
#include "resource.h"

void CCreatePoint::OnLButtonDown(UINT nFlags, CPoint point)
{
	///׼����ͼ����λͼ
	CBitmap Chartbackg;						 //λͼ����	
	//˫����
	CDC MemDC;

	pDC->SetBkMode(TRANSPARENT);	     //MFC��̬�ı�����Ϊ͸��ɫ
	pDC->SetTextColor(RGB(0, 0, 0));     //����������ɫ

	//װ����Դ����Ӧ�õĿ�ִ���ļ��м���һ��������λͼ��Դ����ʼ��λͼ����
	switch (Global_items::g_BitmapType)
	{
	case ��ɫ�Ƹ�:
	{
		//Ϊʲô�ǵ�Copyһ�飿,����
		Chartbackg.LoadBitmap(IDB_BITMAP_redBouy);
		pDC->TextOut(point.x+40, point.y, Global_items::g_redLightIntro);
		break;
	}
	case ��ɫ�Ƹ�:
	{
		Chartbackg.LoadBitmap(IDB_BITMAP_greenBouy);
		pDC->TextOut(point.x + 40, point.y,  Global_items::g_greenLightIntro);
		break;
	}
	case ˮ���:
	{
		pDC->TextOut(point.x, point.y, Global_items::g_waterDepth);
		return;
		break;
	}
	default:
	{
		break;
	}
	}
	BITMAP ChartbackgInfo;// 3����λͼ������
	Chartbackg.GetObject(sizeof(ChartbackgInfo), &ChartbackgInfo);//6��λͼ�����ͼƬ���뵽λͼ������

	MemDC.CreateCompatibleDC(pDC);		//��pDC���ݵ�CDC����
	MemDC.SelectObject(&Chartbackg);		//���λͼ���,�����Ƕ���
	//�������Ƶ���ʾ�����ϣ�
	//9ͼƬ���ڴ滷���������豸���������Ҫ����λͼ������ֻ����Ҫ���ȺͿ�ȣ�
	pDC->BitBlt(point.x, point.y, ChartbackgInfo.bmWidth, ChartbackgInfo.bmHeight, &MemDC, 0, 0, SRCCOPY);
	
	//�ͷ���Դ
	Chartbackg.DeleteObject();
	MemDC.DeleteDC();	//DC�����޵�
}
