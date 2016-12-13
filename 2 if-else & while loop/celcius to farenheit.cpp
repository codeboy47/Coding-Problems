#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j=0,f,s,C,F;
	cin>>i>>f>>s;
	F=i;
	while(F<=f)
	{
		//j=F;
		C=((float)5*(F-32)/9);
		//F=((9*C+32)/5);
		cout<<F<<"  "<<C<<endl;
		F=s+F;
	}
	return 0;
}
