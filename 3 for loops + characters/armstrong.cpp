#include<iostream>
using namespace std;
int no_of_digits(int n){
	int count=0;
	while(n!=0){
	count++;
	n=n/10; 
	}
	//cout<<" "<<count;
	return count;
}
int main(){
	int n,i=0,num,c=0,d=1,sum=0,digits=0;
	cin>>n;
	num=n;
	digits=no_of_digits(n);
	while(n!=0){
		c=n%10;
		d=c;
		cout<<"-"<<digits<<"-";
		for(i=1;i<digits;i++)
		{
			d=c*d;
		}
		//d=c*c*c;
		sum=sum+d;
		//cout<<" "<< sum <<" "<<d;
		n=n/10;
	}
	if(sum==num)
	cout<<"armstrong of "<<sum;
	else
	cout<<"sorry"<<sum;
	return 0;
}
