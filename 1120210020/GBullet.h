#pragma once
#include "CGameObject.h"
class GBullet :
    public CGameObject
{
public:
    CImage Boom;
public:
    GBullet();

	//�����ӵ��Ĵ�С;
	void shipDRAW(CDC* cDC) {
		ship.Draw(*cDC,  x,  y, 20, 20);
	}
	//���ñ�ըЧ��
	void BoomDRAW(CDC* cDC, int x, int y) {
		Boom.Draw(*cDC, x, y, 50, 50);//�ӵ������л��������ɱ�ը״
	}
};

