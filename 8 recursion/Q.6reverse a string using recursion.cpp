/// time complexcity is O(n)
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
void reverse(char *str,int start,int ends){
    //int start=0,end=length(*str)-1;
    if(start>ends){
    	cout<<str; 
    	return ;
	}
	if(start<=ends){
        char t=str[start];
		str[start]=str[ends];
		str[ends]=t;
		reverse(str,start+1,ends-1);
    }
    return;
}
int main(){
	char str[100];
	cout<<"enter ist string ";
	cin.getline(str,100);
	int ends=length(str)-1;
	reverse(str,0,ends);
	return 0;
}
