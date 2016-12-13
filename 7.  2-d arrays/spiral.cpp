#include<iostream>
using namespace std;
int main(){
	int i,j,n,arr[200][200];
	cout<<"enter no"<<endl;
	cin>>n;
for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
}
for(i=0;i<=(n)/2;i++){
		if(i%2==0){
            for(j=i;j<n-i;j++){     //   top row
                cout<<" "<<arr[i][j];
            }
            for(j=i+1;j<n-i;j++){      // right col
                cout<<" "<<arr[j][n-i-1];
            }
            for(j=n-i-2;j>=i;j--){      //  bottom row
                cout<<" "<<arr[n-i-1][j];
            }
            for(j=n-i-2;j>i;j--){     //  right col
                cout<<" "<<arr[j][i];
            }
        }
        if(i%2==1){   ///   this is for inner loop
            for(j=i;j<n-i;j++){     //   top row
                cout<<" "<<arr[i][j];
            }
            for(j=i+1;j<n-i;j++){      // right col
                cout<<" "<<arr[j][n-i-1];
            }
            for(j=n-i-2;j>=i;j--){      //  bottom row
                cout<<" "<<arr[n-i-1][j];
            }
            for(j=n-i-2;j>i;j--){     //  right col
                cout<<" "<<arr[j][i];
            }
        }
}
return 0;
}
