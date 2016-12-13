#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,sum=0;
	cin>>n;
	//for(i=n;i!=0;n=n/10)
	while(n!=0)
	{
		sum=(n%10)+sum;
		n=n/10;
	}
cout<<sum;
}
