#include<iostream>
using namespace std;
int main(){
	int b,i,s=0;
	cin>>b;
	i=b/2;
	while(i>0){
		s=b/2-i+s;
		//cout<<" "<<s;
		i--;
	}
cout<<s;
}
