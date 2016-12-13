#include<iostream>
using namespace std;
int main(){
    int index,size,arr[100],i,s=0,sum=0,d=-1111;
    cout<<"enter size of array";
    cin>>size;
    cout<<"enter array elements";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    for(i=0;i<size;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
    for(i=0;i<size;i++){
        s=s+arr[i];
        if((sum-s)-s>d){
            d=(sum-s)-s;
            index=i;
        }
    }
    cout<<index;
}
