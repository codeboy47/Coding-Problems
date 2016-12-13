#include<iostream>
using namespace std;
int main()
{
	char s;
	int x,y;
	cin>>s>>x>>y;
	if (s=='+')	
	{
	cout<<x+y;
	}
	
	if (s=='-')	
	{
	cout<<x-y;
	}
	if (s=='*')	
	{
	cout<<x*y;
	}if (s=='/')	
	{
	cout<<x/y;
	}if (s=='%')	
	{
	cout<<x%y;
	}
	
	return 0;
}
