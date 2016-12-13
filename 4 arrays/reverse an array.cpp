#include<iostream>
using namespace std;
void swap(int *p,int *q){
    int t=*p;
    *p=*q;
    *q=t;
}
int main(){
    int a[100],i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0,j=n-1;i<j;i++,j--){
        swap(&a[i],&a[j]);
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
