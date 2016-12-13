#include<iostream>
using namespace std;
int main(){
	int arr[20][20],i,j,row,col,k;
	cout<<"enter row";
	cin>>row;
	cout<<"enter col";
	cin>>col;
for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cin>>arr[i][j];
		}
	//cout<<endl;
}
for(i=0;i<row;i++){
		for(j=0;j<col;j++){
            if(arr[i][j]==0){
          		//arr[i][j]=1;
                for(k=0;k<row;k++){
					if(arr[i][k]!=0){
						arr[i][k]=2;
					}
				}
           }
			
		}
}

for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(arr[i][j]==0){
				for(k=0;k<row;k++){
					arr[k][j]=0;
				}
			}
		}
}
for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(arr[i][j]==2){
				arr[i][j]=0;				
			}
		}
}

for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<arr[i][j];				
			}
	cout<<endl;
}

return 0;
}
