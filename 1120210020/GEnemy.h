#pragma once
#include "CGameObject.h"
class GEnemy :
    public CGameObject
{
public:
    void shipDRAW(CDC* cDC) {
        ship.Draw(*cDC, x, y, 50, 50); //С�л���50����50
    }
public:
    GEnemy();
};

