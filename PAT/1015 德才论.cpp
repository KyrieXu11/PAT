#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;

struct Examinee
{
	int num;		//考号
	int de;			//德分
	int cai;		//才分
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
			else if(inf.cai<=H&&inf.de<=H&&inf.de>=inf.cai)					//他妈的，这里最后一个条件有个等于....... 
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
			printf("%d %d %d\n",v[i][j].num,v[i][j].de,v[i][j].cai);			//在输出大量数据的时候，printf要比cout快很多 
		}
	}
	return 0;
}
