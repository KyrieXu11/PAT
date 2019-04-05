#include<iostream>
using namespace std;

int main()
{
	int n,i=0,a[4];
	cin>>n;
	while(n!=0)
	{
		int k=n%10;
		n/=10;
		a[i]=k;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		int m=a[j];
		if(j+1==3)
		{
			while(m!=0)
			{
				cout<<"B";
				m--;
			}
		}
		else if(j+1==2)
		{
			while(m!=0)
			{
				cout<<"S";
				m--;
			}
		}
		else
		{
			for(int k=1;k<=m;k++)
				cout<<k;
		}
	 } 
	return 0;
}
