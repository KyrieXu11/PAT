#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;

int main()
{
	int n;
	bool flag;
	cin>>n;
	int *a=new int[n];
	vector<int> m,result;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int k=a[i];
		while(k!=1)
		{
			if(k%2==0) k/=2;
			else k=(3*k+1)/2;
			m.push_back(k);
		}
	 }
	 for(int i=0;i<n;i++)
	 {
	 	for(auto it: m)
	 	{
	 		if(it==a[i])
			{
			 	flag=false;
			 	break;
			} 
			else
			{
				flag=true;
			} 
		 }
		if(flag)
		{
			result.push_back(a[i]);
		}
	 }
	 sort(result.begin(),result.end(),greater<int>());
	 for(int i=0;i<result.size();i++)
	 {
	 	cout<<result.at(i);
	 	if(i!=result.size()-1)
	 		cout<<" ";
	 }
	delete[] a;
	return 0;
}
