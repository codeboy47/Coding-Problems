#include<iostream>
using namespace std;
int main(){
	int arr[20][20],i,j,row,col,n,b=0;
	cout<<"enter no";
	cin>>n;
	cout<<"enter row";
	cin>>row;
	cout<<"enter col";
	cin>>col;
for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cin>>arr[i][j];
		}
}
for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(arr[i][j]==n){
                cout<<" no. exists";
                b++;
                return 1;
			}
		}
}
if(b==0){
    cout<<"no. not found";
}
return 0;
}
