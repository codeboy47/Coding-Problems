#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<j;
            j++;
        } int k=0;
        while(k<2*(n-i)){
            cout<<" ";
            k++;
        }
        while(j>1){
            cout<<j-1;
            j--;
        }
        cout<<endl;
        i++;
    }
return 0;
}
