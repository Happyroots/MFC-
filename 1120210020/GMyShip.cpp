#include "pch.h"
#include "GMyShip.h"

GMyShip::GMyShip()
{

	//����ս��ͼƬ
	CString imgPath = _T("res\\����.png");
	ship.Load(imgPath);
	//��ըͼƬ
	CString imgPath1 = _T("res\\��ը.png");
	MyShipBoom.Load(imgPath1);
	//�趨ս���ĳ�ʼλ��
	x = 350;
	y = 630;
}
