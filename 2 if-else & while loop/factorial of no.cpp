#include<iostream>
#include<cmath>
using namespace std;
int facto(int N)
{
	int i,fact=1;
	//cin>>N;
	for(i=N;i>=1;i--)
	{
		fact=fact*i;
	}
	//cout<<fact;
	return fact;
}
int main()
{
	int i=0,c,j=1;
	c=(facto(i)/(facto(j-1)*facto(i-j+1)));
				cout<<c;
	return 0;
}
