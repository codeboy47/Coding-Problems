#include<iostream>
using namespace std;

int facto(int N)
{
	int i,f=1;
	for(i=N;i>=1;i--)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int N,i=0,j,c;
	cin>>N;
	while(i<N)
	{
		
		j=1;
		while(j<N-i)
			{
				cout<<' ';
				j++;
			}
		
		j=0;
		while(j<=i)
		{
				c=(facto(i)/(facto(j)*facto(i-j)));
				cout<<c<<" ";
				j++;
		}
		cout<<"\n";
		i++;
	}
	return 0;
}

