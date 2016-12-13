#include<iostream>
using namespace std;
int main()
{
	int i=0,n;
	cin>>n;
	while(i<n)
	{
		int	j=0;
		while(j<i){
			cout<<" ";
			j++;
		}		
		j=n;
		while(j>=2*i-1)
		{
			cout<<"*";
			j = j - 1; // 54321
		}
		cout<< '\n';
		i = i + 1;
	}
		return 0;
}
