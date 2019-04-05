#include<iostream>
#include<math.h> 
using namespace std;

/*bool isPrime(int n)
{
	if(n==1) return true;
	else
	{
		int counter=0;
		for(int i=2;i<n;i++)
		{
			if(n%i==0) counter++;
		}
		if(counter!=0) return false;
		else return true;
	}
}*/ //运行超时的算法 

bool isPrime(int n)
{
	if(n==1) return true;
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0) return false;
		}
		return true;
	}
}

int main()
{
	int n;
	cin>>n;
	int counter=0;
	for(int i=3;i<=n;i++)
	{
		if(isPrime(i)&&isPrime(i+2)) counter++;
	}
	cout<<counter;
	return 0;
 } 
