#pragma once
class CChartFace
{
public:
	CChartFace();
	~CChartFace();
	struct face
	{
		double p[2] = { 0,0 }; 		//���ϵĵ�  //��������ȫ��0;	
		face* next = nullptr;		//����ʱ�ͳ�ʼ����
	}*point;
	CChartFace* pNext;
	CChartFace(const CChartFace& Face)
	{
		for (int i = 0; i < 2; i++)
		{
			point->p[i] = Face.point->p[i];
		}
		pNext = Face.pNext;
	}
private:

};

