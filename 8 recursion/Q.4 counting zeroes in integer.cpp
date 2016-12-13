#include<iostream>
using namespace std;
int countzeros(int n,int c){
    cout<<"enter"<<endl;
    if(n/10==n)  return c;
    if(n%10==0){
        c++;
    }
    int ans=countzeros(n/10,c);
    cout<<"exit "<<ans<<endl;
    return ans;
}
int main(){
    int n,c;
    cin>>n;
    cout<<countzeros(n,0);
}
