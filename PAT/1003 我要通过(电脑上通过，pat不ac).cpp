#include<iostream>
#include<string>
using namespace std;

bool Judge(string s)
{
	bool pf=false,af=false,tf=false;
	for(int j=0; j<s.length(); j++)
	{
		if(s[j]=='P') pf=true;
		else if(s[j]=='A') af=true;
		else if(s[j]=='T') tf=true;
		else 
			return false;
	}
	if(pf&&af&&tf)
	{
		int p_pos,t_pos;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='P') 
			{
				p_pos=i;
				break;
			}
		}
		for(int i=s.length()-1;i>=0;i--)
		{
			if(s[i]=='T') 
			{
				t_pos=i;
				break;
			}
		} 
		for(int i=p_pos+1;i<t_pos;i++)
		{
			if(s[i]!='A') return false;
		} 
		int pcnt=p_pos;
		int tcnt=s.length()-t_pos-1;
		int durStringA=t_pos-p_pos-1;
		if(pcnt*durStringA==tcnt)
			return true;
		return false; 
	}
	return false;
}


int main()
{
	int n;
	cin>>n;
	string *p=new string[n];
	for(int i=0; i<n; i++)
	{
		cin>>p[i];
		if(Judge(p[i]))
			cout<<"YES"<<endl;
		else cout<<"N0"<<endl;
	}
	delete[] p;
	return 0;
}

