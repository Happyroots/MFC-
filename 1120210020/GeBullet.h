#pragma once
#include "CGameObject.h"
class GeBullet :
    public CGameObject
{
public:
	CImage Boom;
public:
	//�����ӵ��Ĵ�С;
	void shipDRAW(CDC* cDC) {
		ship.Draw(*cDC, x, y, 20, 20);
	}
	//���ñ�ըЧ��
	void BoomDRAW(CDC* cDC, int x, int y) {
		Boom.Draw(*cDC, x, y, 50, 50);//�ӵ������л��������ɱ�ը״
	}
public:
    GeBullet();

};

