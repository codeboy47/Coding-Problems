#include<iostream>
using namespace std;
int reverse(int n,int r){
    if(n/10==n)  return r;
    r=n%10 + r*10;
    reverse(n/10,r);
}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n,0);
    return 0;
}
