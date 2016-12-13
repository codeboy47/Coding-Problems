#include<iostream>
using namespace std;
bool canplace(char mat[][100], int N, int x, int y) {
    int i,j;
    for (i = 0; i < N;i++) {
        if (mat[x][i] == 'Q' || mat[i][y] == 'Q') {
            return false;
        }
    }
    for( i=x,j=y;i>=0,j>=0;i--,j--){
        if(mat[i][j]=='Q'){
            return false;
        }
    }
    for(i=x,j=y;i<N,j>=0;i++,j--){
        if(mat[i][j]=='Q'){
            return false;
        }
    }
    return true;
}
int solve(char mat[][100], int N, int x, int y,int c) {
    //int  newy = y+1,
    int i;
    if (y== N) {
        return   1;//true;          /// this base case
    }
    int count =0;
    for(i=0;i<N;i++){
        if(canplace(mat,N,i,y)){
            mat[i][y]='Q';
            count=solve(mat,N,x,y+1,c);
            //mat[i][y]='.';
            if(count==false){
             mat[i][y]='.';
            }
        }
    }
    if(i==N){
        return count;
    }
    return false;
}
int main () {
    int i,j,n,c=0,x=0;
    char mat[100][100];
    cout<<"enter no of queens to be placed :- ";
    cin>>n;
    for (i = 0; i < n; i++){
      for (j = 0; j < n; j++){
         mat[i][j] = '.';
      }
    }
    int ans=solve(mat,n,x,0,c);
    cout<<ans<<endl;
    for (i = 0; i < n; i++){
      for (j = 0; j < n; j++){
         cout<<mat[i][j]<<" ";
    }
      cout<<endl;
    }
    return 0;
}
