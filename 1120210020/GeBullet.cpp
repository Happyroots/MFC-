#include "pch.h"
#include "GeBullet.h"

GeBullet::GeBullet()
{
	//�����ӵ�ͼƬ
	CString imgPath = _T("res\\�о��ӵ�.png");
	ship.Load(imgPath);
	//���ر�ըͼƬ
	CString imgPath1 = _T("res\\��ը.png");
	Boom.Load(imgPath1);
	//�趨�ӵ���ʼλ��
	x = 365;
	y = 50;
}
