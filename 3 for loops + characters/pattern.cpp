#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cout<<"enter any odd number"<<endl;
	cin>>n;
	for(j=0;j<n;j++){
			cout<<"*";
	}
		cout<<endl;
	for(i=0;i<n/2;i++){
		for(j=0;j<(n/2)-i;j++){
			cout<<"*";
		}
		for(j=0;j<2*i+1;j++){
			cout<<" ";
		}
		for(j=0;j<(n/2)-i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	int k=4;
	for(i=0;i<(n/2)-1;i++){
		for(j=0;j<i+2;j++){
			cout<<"*";
		}
		for(j=n-k;j>=1;j--){
			cout<<" ";
		}
		k=k+2;
		for(j=0;j<i+2;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(j=0;j<n;j++){
			cout<<"*";
	}
	return 0;
}
