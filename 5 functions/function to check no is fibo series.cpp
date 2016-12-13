#include<iostream>
using namespace std;
int fibo(int n){
	int c=0,a=0,b=1;
	while(n>=c){
		c=a+b;
		a=b;
		b=c;
		if(c==n){
			return 1;
		}
	}
	//else 
		return 0;
}
int main(){
	int c,n;
	cout<<"enter no to check it is a member of fibonacci series";
	cin>>n;
	c=fibo(n);
	if(c==1){
		cout<<"yes it is a member";
	}
	if(c==0){
		cout<<
		"not a member";
	}
	return 0;
}
