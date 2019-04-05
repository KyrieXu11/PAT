#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
	int n,a[5]={0},cnt1=0,cnt2=0;			//cnt1表示记录输入数字的下标 
	cin>>n;
	float a4=0; 
	while(n>0)
	{
		int m;
		cin>>m;
		if(m%5==0&&m%2==0)
		{
			a[0]+=m;
		}
		if(m%5==1)
		{
			a[1]+=pow(-1,cnt1)*m;
			cnt1++;
		}
		if(m%5==2)
		{
			a[2]++;
		}
		if(m%5==3)
		{
			cnt2++;
			a[3]+=m;
			a4=((float)a[3]/cnt2);
		}
		if(m%5==4)
		{
			if(a[4]<m)
			{
				a[4]=m;
			}
		}
		n--;
	}
	for(int i=0;i<5;i++)
	{
		if(a[i]==0)
		{
			cout<<"N";
		}
		else
		{
			if(i==3)
				printf("%.1f",a4);
			else
				cout<<a[i];
		}
		if(i!=4)
			cout<<" ";
	}
	return 0;
}
