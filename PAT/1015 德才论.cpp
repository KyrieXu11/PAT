#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;

struct Examinee
{
	int num;		//����
	int de;			//�·�
	int cai;		//�ŷ�
};

bool cmp(Examinee inf1,Examinee inf2)
{
	if((inf1.cai+inf1.de)!= (inf2.cai+inf2.de))
	{
		return((inf1.cai+inf1.de)> (inf2.cai+inf2.de));
	}
	else
	{
		if(inf1.de!=inf2.de)
		{
			return (inf1.de>inf2.de);
		}
		else
		{
			return (inf1.num<inf2.num);
		}
	}
}

int main()
{
	int N,L,H;
	cin>>N>>L>>H;
 	if(L>=H) return 0;
 	Examinee inf; 
//	Examinee *s=new Examinee(); 			
	int flag=0,cnt=0;
	vector<Examinee> v[4];
	for(int i=0; i<N; i++)
	{
		scanf("%d %d %d",&(inf.num),&(inf.de),&(inf.cai));
		if(inf.de>100||inf.cai>100)
			return 0;
		if(inf.de>=L&&inf.cai>=L)
		{
			if(inf.cai>=H&&inf.de>=H)
				flag=0;
			else if(inf.cai<H&&inf.de>=H)
				flag=1;
			else if(inf.cai<=H&&inf.de<=H&&inf.de>=inf.cai)					//����ģ��������һ�������и�����....... 
				flag=2;
			else
				flag=3;
			cnt++;
			v[flag].push_back(inf);
		}
//		scanf("%d %d %d",&(s->num),&(s->de),&(s->cai));
//		if ((s->de) >= L && (s->cai) >= L)
//        {
//            if ((s->de) >= H && (s->cai) >= H)
//                flag = 0;
//            else if ((s->de) >= H && (s->cai) < H)
//                flag = 1;
//            else if ((s->de) < H && (s->cai) < H && (s->de) >= (s->cai))
//                flag = 2;
//            else
//                flag = 3;
//            
//            v[flag].push_back(*s);
//            cnt++;
//        }
	}
	cout<<cnt<<endl;
	for(int i=0; i<4; i++)
	{
		sort(v[i].begin(),v[i].end(),cmp);
		for(int j=0; j<v[i].size(); j++)
		{
			printf("%d %d %d\n",v[i][j].num,v[i][j].de,v[i][j].cai);			//������������ݵ�ʱ��printfҪ��cout��ܶ� 
		}
	}
	return 0;
}
