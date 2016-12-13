#include<iostream>
using namespace std;
int power(int a,int x){
    if(x==0) return 1;
    int ans=a*power(a,x-1) ;
    return ans;
}
int main(){
    int a,x;
    cin>>a>>x;
    cout<<power(a,x);
}
