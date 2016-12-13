// test case 2 4 2 8 4 8 and 1 2 3 2 3 5
#include<iostream>
using namespace std;
int main(){
	int i,j,n,a[10],c=0;
	cin>>n;
	for(j=0;j<n;j++){
		cin>>a[j];
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;){
			if(a[i]==a[j]){
				int k=j;
				c++;
				while(k<n){
				//cout<<" "<<a[k]<<endl;
					a[k]=a[k+1];
					k++;
				}
				n--;
			}
			else{
				j++;
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	cout<< " no of duplicates is "<< n<<" "<<c+1;
	
	return 0;
}
