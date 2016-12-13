#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cin>>n;
	i=n;
	while(i>=-1)
	{
		int j=0;
		/*while(j<i-3)
		{
			cout<<" ";
			j++;
		}*/
		while(j<=i+1)
		{
			cout<<"*";
			j++;
		}
		cout<< '\n';
		i=i-2;
	}
		return 0;
}
