#include<iostream>
using namespace std;
int main()
{	
	char s;
	//int i;
	s=cin.get();
	//cin>>s;
	//i=s;
	if(s>='A' && s<='Z')
	cout<<"uppercase";
	else if(s<='z' && s>='a')
	cout<<"lowercase";
	else
	cout<<"invalid";
	return 0;
}
