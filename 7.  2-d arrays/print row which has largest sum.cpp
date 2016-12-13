#include<iostream>
using namespace std;
void sum(int arr[20][20],int rows,int col){
	int r,c,x,largest=0,rsum=0,row=0,csum=0;
	for(int i=0;i<rows;i++){
		rsum=0,csum=0;
		for(int j=0;j<col;j++){
			x=j;
			rsum=arr[i][j]+rsum;
			csum=arr[j][i]+csum;
		}
		cout<<"r="<<rsum<<"c="<<csum<<endl;
		if(rsum>csum && rsum>largest){
			largest=rsum;
			//cout<<"l="<<largest<<" "<<endl;
			row=i;
		}
		if(csum>rsum && csum>largest){
			largest=csum;
			//cout<<"l="<<largest<<" "<<endl;
			row=col-x;
		}
	}
    cout<<row+1<<" col/row of sum element is max "<<"l="<<largest<<endl;
}
int main(){
	int arr[20][20],i,j,rows,col;
	cout<<"enter rows";
	cin>>rows;
	cout<<"enter col";
	cin>>col;
	for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	sum(&arr[0],rows,col);
}
