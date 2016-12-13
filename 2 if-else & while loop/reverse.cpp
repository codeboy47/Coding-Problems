#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,c=0,reverse=0;
	cin>>n;
	//for(i=n;i!=0;n=n/10)
	while(n!=0)
	{
		reverse=(n%10)+reverse*10;
		n=n/10;
	}
	cout<<reverse;
}
