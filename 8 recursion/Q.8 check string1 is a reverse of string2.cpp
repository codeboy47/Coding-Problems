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
bool checkreverse(char *str1,char *str2,int start,int ends){
    //int start=0,end=length(*str)-1;
    if(start>length(str2)-1 && ends<0)  return 1;
    if(str1[ends]==str2[start]){
        checkreverse(str1,str2,start+1,ends-1);
    }
    else return 0;
}
int main(){
	char str1[100],str2[100];
	cout<<"enter ist string ";
	cin.getline(str1,100);
	cout<<"enter 2nd string ";
	cin.getline(str2,100);
	int ends=length(str1)-1;
	cout<<checkreverse(str1,str2,0,ends);
	return 0;
}
