#include "pch.h"
#include "GBigEnemy.h"

GBigEnemy::GBigEnemy()
{
	//����ͼƬ
	CString imgPath = _T("res\\��д�.png");
	ship.Load(imgPath);
	//��ʼ����л���λ��
	x = 300;
	y = 0;
}
