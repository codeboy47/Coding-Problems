#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,c,i=1,d;
	cin>>n;
	d=n;
	while(n/i!=1)
	{
		c=d%2;
		if(c==0)
		cout<<"1";
		if(c==1)
		cout<<"0";
		d=d/2;
		i++;	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*while(pow(2,i)==n)
	{
		a[i++]=c%2;
		cout<<a[i];
		c=n/2;
	
	}
	while(i>0)
	{
		cout<<a[i--];
	}*/
	
	return 0;
}
	
