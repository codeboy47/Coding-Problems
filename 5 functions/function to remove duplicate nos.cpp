// test case 2 4 2 8 4 8 and 1 2 3 2 3 5
#include<iostream>
using namespace std;
void removeDuplicates(int *a,int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;){
			if(a[i]==a[j]){
				int k=j;
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
}

int main(){
	int i,a[10],n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	removeDuplicates(a,n);
	return 0;
}
