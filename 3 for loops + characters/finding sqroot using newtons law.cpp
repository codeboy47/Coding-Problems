#include<iostream>
using namespace std;
int main(){
	float i=0,sq,x,n;
	cin>>n;
	x=n/4;
	while(i<5){
	sq=(x-(((x*x)-n)/(2*x)));
	x=sq;
	i++;	
	}
	if(n==0){
		cout<<"sq root is 0";
	}
	else{
	cout<<sq;
	}
	return 0;
}
