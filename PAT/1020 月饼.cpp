#include<iostream>
#include<stdio.h>
#include<algorithm> 
using namespace std;
struct moonCake
{
	float num;			//月饼的数量
	float profit;		//月饼的单价利润
	float price;		//总的月饼的价格 
} cake[1000];			//此题要点在于创建一个结构体，这样在排序的时候，结构体的所有属性都会被相应的排序 

bool downSort(moonCake a,moonCake b)
{
	return a.profit>b.profit;		//使用sort函数的时候，传进最后一个参数，让结构体数组降序 
}

int main()
{
	int n,d;
	cin>>n>>d;
	for(int i=0;i<n;i++)
		cin>>cake[i].num;								//输入月饼的数量
	for(int i=0;i<n;i++)
		cin>>cake[i].price;								//输入月饼的价格
	for(int i=0;i<n;i++)
		cake[i].profit=cake[i].price/cake[i].num;		//求月饼的单价利润
	 sort(cake,cake+n,downSort); 						//降序排列 
	 float result=0;
	 for(int i=0;i<n;i++)
	 {
	 	if(d>=cake[i].num)
	 	{
	 		result+=cake[i].price;						//最大需求大于最大的利润的数量的话，就再找第二大的 
	 		d-=cake[i].num;								//最大需求量减去对应的库存量 
		}
		else
		{
			result+=cake[i].profit*d;					//找到最大需求量比库存小的，利润乘以最大需求量 
			break;
		}
	 }
	printf("%.2f",result);
	return 0;
	/*
	**  此题总结：最重要的是创建一个结构体存放月饼的各个属性，在排序的时候属性也会跟着排序
	**  十分的方便。 
	*/ 
}
