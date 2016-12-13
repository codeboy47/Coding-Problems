#include<iostream>
using namespace std;
int main(){
	int i,j,a[20],b[20],c[20],n,m,k=0,m1,m2;
	cout<<"enter size of 1st array";
	cin>>n;
	cout<<"enter elements of 1st array";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"enter size of 2nd array";
	cin>>m;
	cout<<"enter elements of 2nd array";
	for(i=0;i<n;i++){
		cin>>b[i];
	}
	i=0;
	j=0;
		while(i<n && j<n)
		{
			if(a[i]<b[j]){
				c[k++]=a[i++];
			}
			if(a[i]>b[j]){
				c[k++]=b[j++];
			}
			if(a[i]==b[j]){
				c[k++]=a[i++];
			}
		}
		if(i<j){
			while(i<n){
				c[k++]=a[i++];
			}
		}
		if(j<i){
			while(j<n){
				c[k++]=b[j++];
			}
		}
	for(i=0;i<2*n;i++)
	{
		cout<<" "<<c[i];
	}
	m1=(2*n)/2;
	m2=m1+1;
	cout<<endl<<m1<<" "<<m2;

	return 0;
}
