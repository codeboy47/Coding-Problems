#include<iostream>
using namespace std;
int main(){
	int i=0,sum,j=0,n,a[100];
	cout<<"enter size";
	cin>>n;
	cout<<"enter array";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	i=0;
	int k=n;
	while(i<n){
		if(a[i]==0){
			j=i;
			while(j<n){
				a[j]=a[j+1];
				j++;
			}
			a[n-1]=0;
			i--;
			n--;
		}
		//cout<<i<<" ";
		i++;
	}
	for(i=0;i<k;i++){
		cout<<a[i];
	}
	return 0;
}
