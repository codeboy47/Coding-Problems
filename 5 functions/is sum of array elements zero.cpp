#include<iostream>
using namespace std;

bool issumzero(int *a,int N){
	int i,j,s=0;
	i=0;
	j=0;
	while(i<N){        // use 3 for loops
		j=i+1;
		s=a[i];
		while(j<N){
			s=s+a[j];
			if(s==0){
				return true;
			}
			else{
				j++;
			}
		}
	i++;
	}
	return false;
}
int main(){
	bool c;
	int i,n,a[10];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	c=issumzero(a,n);
	if(c==1){
		cout<<"ans is true";
	}
	else{
		cout<<" ans is false ";
	}
}
