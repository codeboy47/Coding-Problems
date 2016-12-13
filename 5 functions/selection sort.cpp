#include<iostream>
using namespace std;
void swap(int *p,int *q){
	int t=*p; //      swapping values at address of array
	*p=*q;
	*q=t;
	return;
}
void selection(int *a,int n){    // void selection(int a[],int n)
	int i,j,smallest_pos;
	for(i=0;i<n-1;i++){
		smallest_pos=i;
		for(j=i+1;j<n;j++){
                if(a[smallest_pos]>a[j]){
				smallest_pos=j;
                }
		}
        swap(&a[i],&a[smallest_pos]);
        for(int k=0;k<n;k++){
            cout<<" "<<a[k];
        }
        cout<<endl;
    }
return ;
}

int main(){
	int arr[10],n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	selection(arr,n);
	for(i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
	return 0;
}


