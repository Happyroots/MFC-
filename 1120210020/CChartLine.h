#pragma once
class CChartLine
{

public:
	CChartLine();
	~CChartLine();
	//���ߣ�����ԣ��Ǿ���Ҫ�����ܶ���ɣ��ԣ�Ȼ����������
	//һ����1����
	//�������ڰ���һ������
	struct line
	{
		double p[2] = { 0,0 }; 	//���ϵĵ�  //��������ȫ��0;	
		//double p2[2] = { 0,0 };	//�յ�
		line* next = nullptr;
	}*point;							//����Ϊָ��Ļ�������̫�࣬�����ڿ�������

	//�������죬��������ָ������ռ�ı���ʱ������������Ҫ���
	//ע�⣬��Ҫ�������б����������Ƿ���ָ��ָ��ģ���Ϊԭ���Ŀ������캯��û����
	CChartLine(const CChartLine& Line)
	{
		point->p[0] = Line.point->p[0];
		point->p[1] = Line.point->p[1];
		pNext = Line.pNext;
		//point->next = *Line.point.next;

	}
	//��������
	CChartLine* pNext;
private:

};

