#include<iostream>
using namespace std;
bool sorting(int *a,int n){
    if(n==0)  return 1;          /// base case
    if(a[n]>a[n-1]){
        sorting(a,n-1);
    }
    else{
        return 0;
    }
}
int main(){
    int a[100],n,i,j;
    cout<<"enter size";
    cin>>n;
    cout<<"enter elements";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sorting(a,n-1);
    return 0;
}
