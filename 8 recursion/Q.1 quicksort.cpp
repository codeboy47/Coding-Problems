#include<iostream>
using namespace std;
void swap(int *p,int *q){
    int t=*p;
    *p=*q;
    *q=t;
}
int partition(int arr[],int i,int j){
	int pivot=arr[i],t;
	int end=j;
	int start=i;
	while(1){
		while(arr[i]>=arr[start] && start<j){
			start++;
		}
		while(arr[i]<arr[end] && end!=0){
			end--;
		}
		if(start<end){
		swap(&arr[start],&arr[end]);
		}
		else{
		swap(&arr[end],&arr[i]);
			return end;
		}
	}
}
void quick_sort(int arr[],int i,int j){     
	int p;
    if(i<j){
	p=partition(arr,i,j);
	quick_sort(arr,i,p-1);
	quick_sort(arr,p+1,j);
	}
}
int main(){
	int i,arr[100],size;
	cout<<"enter size of array";
	cin>>size;
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	quick_sort(arr,0,size-1);
	for(i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
}
