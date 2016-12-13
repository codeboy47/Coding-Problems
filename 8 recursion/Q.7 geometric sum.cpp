#include<iostream>
using namespace std;
float gm(int k,float s){
    if(k==0)   return 1;
    s =s+(2*gm(k-1,s));
    return s;
}
int main(){
    int k;
    cin>>k;
    cout<<gm(k,1);
    return 0;
}
