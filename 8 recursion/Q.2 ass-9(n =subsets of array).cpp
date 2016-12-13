#include<iostream>
using namespace std;
void print(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void subsets(int *a,int n,int index,int *s,int N){
    if(*a==0){
        int sum=0;
        for(int i=0;i<index;i++){
            sum=sum+s[i];
        }
        if(sum==N){
            print(s,index);
            cout<<endl;
        }
        return ;
    }
        //cout<<*a<<" ";
    subsets(a+1,n,index,s,N);
    s[index]=*a;
    s[index+1]=0;
    subsets(a+1,n,index+1,s,N);
    return;
}

int main(){
    int i,N,a[100],n,s[100];
    cout<<"n ";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter N";
    cin>>N;
    a[n]=0;
    s[0]=a[n];
    subsets(a,n,0,s,N);
}
