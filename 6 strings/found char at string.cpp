
#include<iostream>
using namespace std;
int found1(char *str,char c){
	for(int i = 0;str[i]!='\0';){
		if(str[i]==c){
			return i+1;
		}
		i++;
	}
	return -1;
}
bool found2(char *str,char c){
	while(*str!='\0'){
		if(*str==c){
			return true;
		}
		str++;
	}
	return false;
}
int main(){
	char str[100],c;
	cin.getline(str,100);
	c=cin.get();
	cout<<"found at "<<found1(str,c);
	cout<<"  found "<<found2(str,c);
}
