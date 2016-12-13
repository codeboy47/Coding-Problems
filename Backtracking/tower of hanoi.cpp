#include<iostream>
using namespace std;
void solve(int n,char *source,char *destination,char *helpingpeg){
         if(n==1){
             cout<<"move disc "<<n<<" from "<<source<<" to "<<destination<<endl;
            return;
         }
         if(n>1){
            solve(n-1,source,helpingpeg,destination);            /// moving n-1 discs from s to h
            cout<<"move disc "<<n<<" from "<<source<<" to "<<destination<<endl;
            solve(n-1,helpingpeg,destination,s                  /// moving n-1 discs from h to d
         }
}
int main(){
    int i,n;
    cout<<"enter no of disks";
    cin>>n;
    solve(n,"source","destination","helping_peg");
}
