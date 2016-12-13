#include<iostream>
using namespace std;
int sumofarray(int *a,int n){
    if(n==0) return a[n];
    int sum=a[n]+sumofarray(a,n-1);
    return sum;
}
int main(){
    int a[100],n,i,j;
    cout<<"enter size";
    cin>>n;
    cout<<"enter elements";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sumofarray(a,n-1);
    return 0;
}
