#include "pch.h"
#include "GEnemy.h"

GEnemy::GEnemy()
{
	//����ͼƬ
	CString imgPath = _T("res\\�д�.png");
	ship.Load(imgPath);
	//�趨С�л��ĳ�ʼλ��
	x = 350;
	y = 0;
}
