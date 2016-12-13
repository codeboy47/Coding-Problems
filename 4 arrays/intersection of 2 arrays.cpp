#include<iostream>
using namespace std;
int main(){
	int i,j,a[10],b[10],t,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cin>>b[i];
	}
	for(i=0;i<n;){
		for(j=0;j<n;j++){
			if(a[i]==b[j]){
				cout<<" "<<a[i++];
			}
		}
	}
return 0;
}
