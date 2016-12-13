/// complexcity is O(n)
#include<iostream>
using namespace std;
int length(char *str){
	int len=0;
	while(*str!='\0'){
		len++;
		str++;
	}
	return len;
}

void reverse(char *str){
	int start=0,end=length(str)-1;
	while(start<=end ){
		char t=str[start];
		str[start]=str[end];
		str[end]=t;
		start++;
		end--;
	}
	str[length(str)]='\0';  // there is no need in this ques because length of string is same
	cout<<str;				// when combining a string length of string gets changed 
}
int main(){
	char str[100];
	cout<<"enter ist string ";
	cin.getline(str,100);
	reverse(str);
	return 0;
}
