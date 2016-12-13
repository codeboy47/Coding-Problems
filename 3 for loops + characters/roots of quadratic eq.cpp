#include<iostream>
using namespace std;
float sqroot(int n){   // we are returning square root in floating point
	float i=0,sq,x;
	x=n/4;
	while(i<5){
	sq=(x-(((x*x)-n)/(2*x)));
	x=sq;
	i++;	
	}
	if(n==0){
		return 0;
	}
	else{
		return sq;
	}
}
int main(){
	float a,b,c,r1,r2,D;
	cin>>a>>b>>c;
	D=((b*b)-(4*a*c));
	r1=(-b+sqroot(D))/2*a;
	r2=(-b-sqroot(D))/2*a;
	if(D>0){
		cout<<endl<<"roots are real and distinct";
		cout<<endl<<"roots of eq "<<a<<"x^2+"<<b<<"x+"<<c<<"=0 are ";
		cout<<" r1 = "<<r1<<" and "<<"r2 = "<<r2;
	
	}
	if(D==0){
		cout<<endl<<"roots are equal";
		cout<<endl<<"roots of eq "<<a<<"x^2+"<<b<<"x+"<<c<<"=0 are ";
		cout<<" r1 = "<<r1<<" and "<<"r2 = "<<r2;
	
	}
	if(D<0){
		cout<<endl<<"roots of eq "<<a<<"x^2+"<<b<<"x+"<<c<<"=0 are imaginary";
	}
	return 0;
}

