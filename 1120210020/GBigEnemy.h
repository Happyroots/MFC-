#pragma once
#include "CGameObject.h"
class GBigEnemy :
	public CGameObject
{
public:

	void shipDRAW(CDC* cDC) {  //�趨��л��Ĵ�С
		ship.Draw(*cDC, x, y, 100, 50);//ͼƬ�Ŀ�Ϊ100����50
	}
public:
	GBigEnemy();
};

