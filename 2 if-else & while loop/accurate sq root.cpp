#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int digit,n,i=1,j=1,divisor,dividend;
	cin>>n;
	while(i*i<n)
	{
		i=i+1;
	}
i=i-1;
cout<<"closest int is "<<i<<'.';

divisor= 2*i;
dividend=(n-(i*i));
while(j<=5)
{
	dividend=dividend*100;
	//divisor=divisor*10;
	digit=0;
	while((divisor*10+digit)*digit<dividend)
	{
		digit=digit+1;
	}
digit=digit-1;
cout<<digit;
dividend=(dividend-divisor*10+digit)*digit;
divisor=(divisor*10)+digit;
}
return 0;
}
