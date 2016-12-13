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
void concat(char *str1,char *str2){
	int s1=0,s2=0,l1=length(str1)-1,l2=length(str2)-1;
	//cout<<l2<<str2[s2];
	while(s2<=l2){
		//if(start>=l1+1){
			str1[l1+1]=str2[s2];
			//cout<<str1[l1+1];
			l1++;
			s2++;
		}
	str1[l1+1]='\0';   // last element of string is null so that it will not print garbage value
	cout<<str1;
}

int main(){
	int c;
	char str1[100],str2[100];
	cout<<"enter ist string ";
	cin.getline(str1,100);
	cout<<"enter 2nd string ";
	cin.getline(str2,100);
	//c=length(str1);
	//cout<<c<<"  ";
	concat(str1,str2);
	return 0;
	}
