#include<iostream>
using namespace std;
int main(){
	int j=1,i,c=0;
	unsigned int n;
	cin>>n;
	i=0;
	j=n;
	while(i<32){
	if(n & 1 > 0) {	
		cout<<c;
		c++;
		}
	n=n>>1;
	i++;
	}
	cout<<c;
	return 0;
}
