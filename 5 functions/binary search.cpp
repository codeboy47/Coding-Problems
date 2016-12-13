#include<iostream>
using namespace std;
int binary(int *a,int start,int end,int n){
	int mid;
	while(start<=end){
	mid=(start+end)/2;
	if(n>a[mid]){
		start=mid+1;
		//binary(a[],start,end,n);
	}
	else if(n<a[mid]){
		end=mid-1;
		//binary(*a,start,end,n);
	}
	else if(a[mid]==n){
		//cout<<" found at pos "<<mid+1;
		return mid+1;
		//break;
	}
	else if(start==end){
		//cout<<" found at pos "<<start+1;
		return start+1;
		//break;
		}		
	}
	return -1;
}
int main(){
	int c,no,n,i,a[20],start,end;
	cout<<"enter no of elements-";
	cin>>no;
	cout<<" enter no to be searched-";
	cin>>n;
	for(i=0;i<no;i++){
		cin>>a[i];
	}
	start=0;
	end=no-1;
	c=binary(a,start,end,n);
	if(c>=0){
	cout<<"no found at position "<<c;
	}
	else{
	cout<<" no not found";
	}
	return 0;
}
