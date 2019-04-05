//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<int> m;
//	int n;
//	while(cin>>n)
//	{
//		m.push_back(n);
//		if(cin.get()=='\n')
//			break;
//	}
//	for(int i=0;i<=m.size()-2;i+=2)		//i表系数，j表示指数
//	{
//		int j=i+1;
//		if(m.at(j)!=0)
//		{
//			m.at(i)=m.at(i)*m.at(j);
//			m.at(j)=m.at(j)-1;
//		}
//		else
//		{
//			m.at(i)=0;
//		}
//	}
//	for(int i=0;i<=m.size()-2;i+=2)
//	{
//		int j=i+1;
//		if(m.at(i)!=0)
//		{
//			cout<<m.at(i)<<" "<<m.at(j);
//		}
//		if(i!=m.size()-2)
//			cout<<" ";
//	}
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<int> m;
//	int n;
//	while(cin>>n)
//	{
//		m.push_back(n);
//		if(cin.get()=='\n')
//			break;
//	}
//	for(int i=0;i<=m.size()-2;i+=2)		//i表系数，j表示指数
//	{
//		int j=i+1;
//		if(m.at(j)!=0)
//		{
//			m.at(i)=m.at(i)*m.at(j);
//			m.at(j)=m.at(j)-1;
//		}
//		else if(m.at(i)!=0)
//		{
//			m.at(i)=0;
//		}
//	}
//	for(int i=0;i<m.size();i++)
//	{
//		cout<<m.at(i);
//		if(i!=m.size()-1)
//			cout<<" ";
//	}
//	return 0;
//}   //19分


#include <stdio.h>

int main()
{
	int m,n;
	int flag=1;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		if(n>0)
		{
			if(flag==1)
			{
				printf("%d %d",m*n,n-1);
				flag=0;
			}
			else
			{
				printf(" %d %d",m*n,n-1);
			}
		}
	}
	if(flag==1)
		printf("0 0");
	return 0;
}
