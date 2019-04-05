#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

bool containsKey(char c,char *p)
{
	if(strlen(p)==0) return false;			//估计加了这一句19pt 
	for(int i=0;i<strlen(p);i++)
	{
		if(p[i]==c)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int i=0,j=0;
	char in[80];	
	scanf("%s",in);
	char real[80];
	scanf("%s",real);
	char repeat[80];
	for(i=0;i<strlen(in);i++)
	{
		if(!containsKey(in[i],real))
		{
			if(in[i]<='z'&&in[i]>='a')
			{
				in[i]-='z'-'Z';
			}
			if(!containsKey(in[i],repeat))
			{
				repeat[j]=char(in[i]);		//原来这里没有char，6pt；后来加了一个char，15pt. 
				j++;
			}
		}
	}
	for(int i=0;i<strlen(repeat);i++)
	{
		cout<<repeat[i];
	}
	return 0;
}
