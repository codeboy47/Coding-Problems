#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	char arr[200][200];
	cout<<"enter no"<<endl;
	cin>>n;
for(i=0;i<=(n)/2;i++){
		if(i%2==0){
            for(j=i;j<n-i;j++){     //   top row
                arr[i][j]='O';
            }
            for(j=i+1;j<n-i;j++){      // right col
                arr[j][n-i-1]='O';
            }
            for(j=n-i-2;j>=i;j--){      //  bottom row
                arr[n-i-1][j]='O';
            }
            for(j=n-i-2;j>i;j--){     //  right col
                arr[j][i]='O';
            }
        }
        if(i%2==1){   ///   this is for inner loop
            for(j=i;j<n-i;j++){     //   top row
                arr[i][j]='X';
            }
            for(j=i+1;j<n-i;j++){      // right col
                arr[j][n-i-1]='X';
            }
            for(j=n-i-2;j>=i;j--){      //  bottom row
                arr[n-i-1][j]='X';
            }
            for(j=n-i-2;j>i;j--){     //  right col
                arr[j][i]='X';
            }
        }
}
for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<" "<<arr[i][j];
		}
		cout<<endl;
}
    return 0;
}
