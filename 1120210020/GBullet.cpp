#include "pch.h"
#include "GBullet.h"

GBullet::GBullet()
{

	//�����ӵ�ͼƬ
	CString imgPath = _T("res\\�ӵ�.png");
	ship.Load(imgPath);
	//���ر�ըͼƬ
	CString imgPath1 = _T("res\\��ը.png");
	Boom.Load(imgPath1);
	//�趨�ӵ���ʼλ��
	x = 320;
	y = 600;
}
