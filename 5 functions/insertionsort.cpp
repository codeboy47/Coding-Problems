#include<iostream>
using namespace std;

void insertion(int *a,int n){
	int i=0,j=0,small;
	while(i<n-1){
		j=i+1;
		small=a[j];
		while(j>0){
			if(a[j-1]>small){
				a[j]=a[j-1];
				j--;
			}
			else{
				break;
			}
		}
		a[j]=small;
		i++;
	}
	for(i=0;i<n;i++){
		cout<<" "<<a[i];
	}
}
int main(){  
	int a[20],i,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	insertion(a,n);
	
	return 0;
}
