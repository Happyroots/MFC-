#pragma once
#include"CChartFace.h"
#include"CChartLine.h"
#include"CChartPoint.h"
class CChart
{
public:
	CChart();
	~CChart();			//�������ݵĸı���Ҫ������������ ���鷳��

	struct eChart
	{
		// ���ݶ���, ��ʼ����
		char cnum[20] = { -1 };	    //��ͼͼ�ţ�
		char llat[20] = { -1 };     //���ϽǾ��ȣ�
		char llong[20] = { -1 };    //���Ͻ�γ�ȣ�
		char rlat[20] = { -1 };     //���½Ǿ��ȣ�
		char rlong[20] = { -1 };    //���½�γ�ȣ�
		char scale[20] = { -1 };    //��ͼ�����ߣ�
		char cname[20] = { -1 };    //ͼ����
		char isudate[20] = { -1 };  //�������ڣ�
		char cordate[20] = { -1 };  //�޸����ڣ�
		//һ��9������
	}bscinfo;						//�����������˽ṹ bscinfo

	class CChartPoint* point;		//��������,Ϊʲô�ֿ�����Ͳ��У��벻����
	//����ʹ��ָ�룿
	class CChartLine* line;			//�������ڲ����������ⲿ
	class CChartFace* face;			//ע��������ͷ���Ȩ��

	//����������ռ䣿��������Ҫ������ģ�壻��������!
	//+һ��ָ��
	CChart* pNext;		//��ָ��

	//��ͼ��Ĳ�����
	//�޸����ԣ�9������,���һ�ٵ�����
	void corcnum(const char* ch, int len)			//����ǰ+const�ؼ��֣����򱨴�
	{
		memcpy(this->bscinfo.cnum, ch, len);		//û�ض�����
	}
	void corllat(const char* ch, int len)		//����ǰ+const�ؼ��֣����򱨴�
	{
		memcpy(this->bscinfo.llat, ch, len);
	}
	void corllong(const char* ch, int len)		//����ǰ+const�ؼ��֣����򱨴�
	{
		memcpy(this->bscinfo.llong, ch, len);
	}
	void corrlat(const char* ch, int len)		//����ǰ+const�ؼ��֣����򱨴�
	{
		memcpy(this->bscinfo.rlat, ch, len);
	}
	void corrlong(const char* ch, int len)		//����ǰ+const�ؼ��֣����򱨴�
	{
		memcpy(this->bscinfo.rlong, ch, len);
	}
	void corscale(const char* ch, int len)		//����ǰ+const�ؼ��֣����򱨴�
	{
		memcpy(this->bscinfo.scale, ch, len);
	}
	void corcname(const char* ch, int len)		//����ǰ+const�ؼ��֣����򱨴�
	{
		//std::cout <<"corcname" << sizeof(ch) << "  ";
		memcpy(this->bscinfo.cname, ch, len);
	}
	void corisudate(const char* ch, int len)		//����ǰ+const�ؼ��֣����򱨴�
	{
		memcpy(this->bscinfo.isudate, ch, len);
	}
	void corcordate(const char* ch, int len)		//����ǰ+const�ؼ��֣����򱨴�
	{
		memcpy(this->bscinfo.cordate, ch, len);
	}
	CChart(const CChart& Chart)
	{
		//*this = Chart; //�ѵ�ַҲcopy��
		memcpy(point->color, Chart.point->color, sizeof(point->color));
		memcpy(point->intr, Chart.point->intr, sizeof(point->intr));
		memcpy(point->lat, Chart.point->lat, sizeof(point->lat));
		memcpy(point->lon, Chart.point->lon, sizeof(point->lon));
		memcpy(point->pNext, Chart.point->pNext, sizeof(point->pNext));
		point->type = Chart.point->type;
		for (int i = 0; i < 2; i++)
		{
			line->point->p[i] = line->point->p[i];
		}
		for (int j = 0; j < 2; j++)
		{
			face->point->p[j] = face->point->p[j];
		}
		pNext = Chart.pNext;
	}
private:		//���ڷ���	
//����˽�����ԣ����漰����ļ̳У�����������

};



