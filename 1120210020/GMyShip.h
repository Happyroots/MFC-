#pragma once
#include "CGameObject.h"
class GMyShip :
    public CGameObject
{
public:
	CImage MyShipBoom;
public:
	GMyShip();
	//�趨ս���Ĵ�С
	void shipDRAW(CDC* cDC) 
	{
		ship.Draw(*cDC, x, y, 80, 80);
	}
	//���뱬ըЧ������
	void MyShipBoomDraw(CDC* cDC, int x, int y)
	{
		//ս�����л���ײ����ɱ�ը״
		MyShipBoom.Draw(*cDC, x, y, 100, 100);
	}
};

