#include<iostream>
using namespace std;
int main(){
	int i=0,sum,j=0,n,a[10];
	cout<<"enter size";
	cin>>n;
	cout<<" enter sum";
	cin>>sum;
	cout<<"enter array";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	i=0;
	while(i<n){
		j=i+1;
		//cout<<j;
		while(j<n){
			if(a[i]+a[j]==sum){
				cout<<a[i]<<" "<<a[j]<<endl;
			}
		j++;
		}
	i++;
	}
	return 0;
}
