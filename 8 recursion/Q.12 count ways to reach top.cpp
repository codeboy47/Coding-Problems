#include<iostream>
using namespace std;
int countways(int n){
    if(n==0)    return 1;
    if(n==1)    return 1;
    if(n==2)    return 2;
    if(n==3)    return 4;
    int c = countways(n-1)+countways(n-2)+countways(n-3);
    return c;
}

int main(){
    int n,c=1;
    cin>>n;
    cout<<countways(n);
    return 0;
}
