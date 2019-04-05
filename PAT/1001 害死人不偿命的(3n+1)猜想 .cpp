#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int counter;
	while(n!=1)
	{
		if(n%2==0) n/=2;
		else n=(3*n+1)/2;
		counter++;
	 } 
	 cout<<counter<<endl;
	return 0;
 } 
