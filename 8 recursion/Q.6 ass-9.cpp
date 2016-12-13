#include<iostream>
using namespace std;
void sc(int n,int limit){
    if(n>=limit){
        return ;
    }
    cout<<n<<endl;
    int  i = n==0  ? 1 : 0;
    for(;i<=9;i++){
        sc(n*10+i,limit);
    }
    return ;
}
int main(){
    sc(1,333);
    return 0;
}
