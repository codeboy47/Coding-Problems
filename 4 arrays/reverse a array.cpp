#include<iostream>
using namespace std;
int main(){
	int i,j,a[10],t,n;
	cin>>n;
	j=n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(i=0;i<n;i++){
		t=a[i];
		a[i]=a[n-1];
		a[n-1]=t;
		n--;
	}
	for(i=0;i<j;i++)
	{
		cout<<" "<<a[i];
	}
return 0;
}
