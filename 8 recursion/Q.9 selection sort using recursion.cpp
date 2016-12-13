#include<iostream>
using namespace std;
void swap(int *p,int *q){
	int t=*p; //      swapping values at address of array
	*p=*q;
	*q=t;
	return;
}
void selection(int *arr,int i,int j,int smallest_pos,int n){
    if(i>=n && j>=n)  return  ;           /// base case
    if(i<n){
        if(j<n){
            if(arr[smallest_pos]>arr[j]){
                smallest_pos=j;
                 swap(&arr[i],&arr[smallest_pos]);
            }
            selection(arr,i,j+1,smallest_pos,n);
        }
        selection(arr,i+1,i+2,i+1,n);
    }
}
int main(){
	int arr[100],n,i,j,smallest_pos;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	i=0;
	j=i+1;
	smallest_pos=i;
	selection(arr,i,j,smallest_pos,n);
	for(i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
	return 0;
}
