#include<iostream>
using namespace std;
int median(int *a,int *b,int n){
	int i=0,j=0,c[20],m1,m2,k=0;	
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
	m2=(2*n)/2;
	m1=m1-1;
	return c[m2];
}
int main(){
	int i,a[20],b[20],n,c,d;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cin>>b[i];
	}
	c=median(a,b,n);
	cout<<endl<<"median of 2 sorted arrays:"<<c;
	return 0;
}
