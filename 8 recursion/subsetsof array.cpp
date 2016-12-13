#include<iostream>
using namespace std;
void subsets(int *a,int n,int index,int *s){
        if(*a==0){
        for(int i=0;i<index;i++){
            cout<<s[i];
        }
        cout<<endl;
        return ;
        }
        //cout<<*a<<" ";
    subsets(a+1,n,index,s);
    s[index]=*a;
    s[index+1]=0;
    subsets(a+1,n,index+1,s);
    return;
}

int main(){
    int i,a[100],n,s[100];
    cout<<"n ";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    a[n]=0;
    s[0]=a[n];
    subsets(a,n,0,s);
}
