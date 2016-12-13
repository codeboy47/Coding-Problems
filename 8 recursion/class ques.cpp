#include<iostream>
using namespace std;
void print(int *a,int n,int index){
    if(n==0 && index>0){
        for(int i=0;i<index;i++){
            cout<<" "<<a[i];
        }
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        a[index]=i;
        print(a,n-i,index+1);
    }
   return;
}
int main(){
    int i,a[100],n;
    cout<<"n"<<endl;
    cin>>n;
    print(a,n,0);
}
