#include<iostream>
using namespace std;

int main()
{
	int m,n,D,i=0;
	int a[1000];
	cin>>m>>n>>D;
	long sum=m+n;
	if(sum==0)
		cout<<"0";			//关键在这里 
	while(sum!=0)
	{
		a[i]=sum%D;
		sum/=D;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		cout<<a[j];
	}
	return 0;
 } 
