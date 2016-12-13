#include<iostream>
using namespace std;
int main(){
	char j = 'A';
	int n,i=0,k;
	cout<<"enter number"<<endl;
	cin>>n;
	k = n;
	for(i=0;i<n;i++){
        if(j<n+65){
            for(j='A';j<'A'+k;j++){  // OR  for(j=65;j<65+k;j++) if we do not know ascii value
                cout<<j;		 //		of char A we simply use 'A' instead of 65
            }
            k--;  // k is decremented because of next i loop j will run till 65 + k-1
        }
        if(j>65){
            for(j=j-1;j>=65;j--){
                cout<<j;
            }
        }
        cout<<"\n";
    }
}
