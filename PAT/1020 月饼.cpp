#include<iostream>
#include<stdio.h>
#include<algorithm> 
using namespace std;
struct moonCake
{
	float num;			//�±�������
	float profit;		//�±��ĵ�������
	float price;		//�ܵ��±��ļ۸� 
} cake[1000];			//����Ҫ�����ڴ���һ���ṹ�壬�����������ʱ�򣬽ṹ����������Զ��ᱻ��Ӧ������ 

bool downSort(moonCake a,moonCake b)
{
	return a.profit>b.profit;		//ʹ��sort������ʱ�򣬴������һ���������ýṹ�����齵�� 
}

int main()
{
	int n,d;
	cin>>n>>d;
	for(int i=0;i<n;i++)
		cin>>cake[i].num;								//�����±�������
	for(int i=0;i<n;i++)
		cin>>cake[i].price;								//�����±��ļ۸�
	for(int i=0;i<n;i++)
		cake[i].profit=cake[i].price/cake[i].num;		//���±��ĵ�������
	 sort(cake,cake+n,downSort); 						//�������� 
	 float result=0;
	 for(int i=0;i<n;i++)
	 {
	 	if(d>=cake[i].num)
	 	{
	 		result+=cake[i].price;						//������������������������Ļ��������ҵڶ���� 
	 		d-=cake[i].num;								//�����������ȥ��Ӧ�Ŀ���� 
		}
		else
		{
			result+=cake[i].profit*d;					//�ҵ�����������ȿ��С�ģ����������������� 
			break;
		}
	 }
	printf("%.2f",result);
	return 0;
	/*
	**  �����ܽ᣺����Ҫ���Ǵ���һ���ṹ�����±��ĸ������ԣ��������ʱ������Ҳ���������
	**  ʮ�ֵķ��㡣 
	*/ 
}
