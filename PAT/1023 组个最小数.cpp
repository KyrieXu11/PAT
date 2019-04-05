#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a[10]= {0},sum=0;
	vector<int> m;
	for(int i=0; i<10; i++)
	{
		cin>>a[i];
		sum+=a[i];
		m.push_back(a[i]);
		if(sum>50) return 0;
	}
	int i=1;
	while(m.at(i)==0)
	{
		i++;
	}
	if(i<=m.size()-1)
	{
		cout<<i;
		m.at(i)--;
	}
	i=0;
	while(i<=m.size()-1)
	{
		while(m.at(i)>0)
		{
			cout<<i;
			m.at(i)--;
		}
		i++;
	}
	return 0;
}
