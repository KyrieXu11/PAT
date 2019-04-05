#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	char n;
	int a[3];
	int sum=0;
	int i=1;
	while((n=getchar())!='\n'&&i<=100)
	{
		sum=sum+(n-'0');
		i++;
	}
	i=0;
	while(sum!=0)
	{
		a[i]=sum%10;
		sum/=10;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		switch(a[j])
		{
			case 0:
				cout<<"ling";
				break;
			case 1:
				cout<<"yi";
				break;
			case 2:
				cout<<"er";
				break;
			case 3:
				cout<<"san";
				break;
			case 4:
				cout<<"si";
				break;
			case 5:
				cout<<"wu";
				break;
			case 6:
				cout<<"liu";
				break;
			case 7:
				cout<<"qi";
				break;
			case 8:
				cout<<"ba";
				break;
			case 9:
				cout<<"jiu";
				break;
		}	
		if(j!=0) cout<<" ";
	}
	return 0;
}
