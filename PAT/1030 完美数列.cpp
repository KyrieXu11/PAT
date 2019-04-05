#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int N;
	long p;
	cin>>N>>p;
	long m;
	vector<long> v;
	for(int i=0;i<N;i++)
	{
		scanf("%d",&m);
		v.push_back(m);
	 }
	sort(v.begin(),v.end());
	int cnt=0;
	for(int i=0;i<N;i++)
	{
		for(int j=i+cnt;j<N;j++)
		{
			if(v.at(j)>p*v.at(i))
				break;
			if(cnt<j-i+1)
				cnt=j-i+1;
		}
	}
	cout<<cnt;
	return 0;
 } 
