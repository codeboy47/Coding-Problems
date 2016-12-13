#include<iostream>
using namespace std;
void print(char mat[][100],int n){
    int i,j;
    mat[0][0]='S';
    mat[n-1][n-1]='E';
    for (i = 0; i < n; i++){
      for (j = 0; j < n; j++){
           if(mat[i][j]=='0' || mat[i][j]=='1'){
                mat[i][j]='X';
           }
       }
    }
    cout<<endl;
    for (i = 0; i < n; i++){
      for (j = 0; j < n; j++){
         cout<<mat[i][j]<<" ";
        }
    cout<<endl;
    }
}
bool canplace(char mat[][100], int N, int x, int y) {
    int i,j;
    if (mat[x][y] == '1' && x<N && x>=0 &&  y>=0 && y<N){
            return true;
    }
    return false;
}
int solve(char mat[][100], int N, int x, int y) {
    int i;
    if (y== N && x==N) {
        return true;
    }
    if(canplace(mat,N,x+1,y)){
        mat[x+1][y]='p';
        bool ans=solve(mat,N,x+1,y);
            if(ans==true){
                return ans;
            }
    }
    if(canplace(mat,N,x,y+1)){
        mat[x][y+1]='p';
        bool ans=solve(mat,N,x,y+1);
            if(ans==true){
                return ans;
            }
            if(ans==false){
                mat[x][y+1]='0';
            }
    }
    else{
        if(x>y)
            mat[x][y]='0';
        return false;
    }
}
int main () {
    int i,j,n,c=0,x=0;
    char mat[100][100];
    cout<<"enter size of array :- ";
    cin>>n;
    for (i = 0; i < n; i++){
      for (j = 0; j < n; j++){
        cin>>mat[i][j];
      }
    }
    int ans=solve(mat,n,0,0);
    print(mat,n);
    return 0;
}
