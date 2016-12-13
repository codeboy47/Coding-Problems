#include<iostream>
using namespace std;
int main(){
	int i,j,a[10],t,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<=n-2;i++){
		for(j=0;j<=n-2-i;j++){
			if(a[j]>a[j+1]){
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
			
		}
	}
for(i=0;i<n;i++)
{
	cout<<a[i];
}
return 0;
}
