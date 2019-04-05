#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

//int main()
//{
//	int i=0,k=0;
//	stack<char> s;
//	char c[80],in;
//	while((in=getchar())!='\n')
//	{
//		s.push(in);
//		i++;
//	}
//	for(int j=0;j<i;j++)
//	{
//		c[j]=s.top();
//		s.pop();
//		k++;
//	}
//	for(int m=0;m<k;m++)
//		cout<<c[m];
//}    会错题目意思了...................................................
//   这个主函数是把"asdasda"反序了 
//   实际应该是Hello World Here I Come 到 Come I Here World Hello 

int main()
{
	int end=0,front=0; 
	vector<char> m;
	char in;
	while((in=getchar())!='\n')
	{
		m.push_back(in);			//把输入的字符都放到vector里面去 
		end++;						//end为m的长度,注意vector从0开始到end-1 
	}
	front=end-1;
	while(front>-1)
	{
		if(m.at(front)==' ')
		{
			for(int j=front+1;j<end;j++)
			{
				cout<<m.at(j);
			}
			end=front;
			cout<<" "; 
		}
		if(front==0)
		{
			for(int j=front;j<end;j++)
			{
				cout<<m.at(j);
			}
		}
		front--;
	}
	return 0;
 } 
