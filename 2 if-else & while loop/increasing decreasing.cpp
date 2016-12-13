#include<iostream>
using namespace std;
int main(){
    int i=2,n,p=10000,N,f1,f2;
    cin>>N;
    cin>>n;
    f1=n;
    cin>>n;
    f2=n;
    while(p>n){
            if(i==N){
                break;
            }
            p=n;
            cin>>n;
            i++;
    }
    while(n>p){
            if(i==N){
                break;
            }
            p=n;
            cin>>n;
            i++;
    }
    if(i<N){
        for(int j=i;j<N;j++){
            cin>>n;
        }
    }
    if(p>n){
        cout<<"NO";
    }
    else if(n>p && f1>f2){
        cout<<"YES";
    }
    else
        cout<<"no";
return 0;
}
