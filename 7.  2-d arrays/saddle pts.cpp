#include<iostream>
using namespace std;
int main(){
	int arr[20][20],i,j,rows,col,a,b,large=-1111,small=1000,c=0;
	cout<<"enter rows";
	cin>>rows;
	cout<<"enter col";
	cin>>col;
	int k;
	for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	for(i=0;i<rows;i++){
		large=0;
		small=1000;
		for(j=0;j<col;j++){
			/*if(c>1){
			if(arr[i][j]==arr[a][b]){
				cout<<i<<" "<<j;
			}
			}*/
			if(arr[i][j]>=large){
				large=arr[i][j];
				cout<<"l="<<large<<endl;
				a=i;
				b=j;
			}
		}
		for(k=0;k<rows;k++){
			if(arr[k][b]<=small){
				small=arr[k][b];
				//cout<<"-"<<arr[k][b]<<"-";
				//cout<<"s="<<small<<endl;
				}
			}
		if(large==small){
				cout<<"coordinates are"<<a+1<<","<<b+1<<" : element= "<<arr[a][b]<<endl;
				c++;
			
		}
	}

}
