/* TEST CASES :-
	1. 2 6 -6
	2. 2 3 1 -5
	3. 3 2 2 -4
	4. 2 3 4 -4 1 */
#include<iostream>
using namespace std;

bool issumzero(int *a,int N){
	int i,j,s,k=0;
	i=0;
	j=0;
	while(k<N){
		i=k;
		s=a[k];     // updating s
		while(i<N){
			j=i+1;
			while(j<N){
				if(s+a[j]==0){
					return true;
				}
				else{
					cout<<" "<<s<<"+"<<a[j]<<"="<<s+a[j]<<endl;
					j++;
				}
			}
			s=s+a[i+1];	
			i++;
		}
		k++;
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
return 0;
}
