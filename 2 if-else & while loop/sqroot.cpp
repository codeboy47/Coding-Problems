#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i=2,n;
	cin>>n;
	cout<<sqrt(n)<<endl;
	while(i<=n/2)
	{
		//cout<<n<<endl;
		if(n%i==0 && i*i==n)
		{
			cout<<i<<"  it's a sq root of a no";
			break;
		}		
		if(i*i<n && (i+1)*(i+1)>n)
		{
			if((i+0.5)*(i+0.5)>n) 
			cout<<i;
			else
			cout<<i+1;
		}
		i++;
		
	}
	
	return 0;
}
