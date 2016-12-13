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
		while(k<=(m+n)/2){
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
	cout<<" median is"<<c[k-1]<<endl;	
	for(i=0;i<(n+m)/2;i++)
	{
		cout<<" "<<c[i];
	}
	m1=(n+m)/2;
	m2=m1-1;
	if((n+m)%2==0)
	cout<<endl<<"median is "<<float(c[m1]+c[m2])/2;
	if((n+m)%2==1)
	cout<<endl<<c[m1];
	return 0;
}
