#pragma once
#include <afx.h>
class CGameObject :
    public CObject
{
    DECLARE_SERIAL(CGameObject)
public:
    CImage ship;
    int x;
    int y;
    //void shipDRAW(CDC* cDC) 
    //{  //�趨�����ӵ��Ĵ�С
    //    ship.Draw(*cDC, x, y, 100, 50);//ͼƬ�Ŀ�Ϊ100����50
    //}
    CGameObject();
};


