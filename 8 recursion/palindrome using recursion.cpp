#include<iostream>
using namespace std;
int length(char * str) {
    int len = 0,c=0,p=0;
    while (*str != '\0') {
    	len++;
        str++;
    }
    return len;
}
bool palindrome(char *str,int start,int ends){
    if(start>ends) return true;
    if(str[start]!=str[ends]){
        return false;
    }
    else{
        palindrome(str,start+1,ends-1);
    }
}
int main(){
    char str[100];
    cin.getline(str,100);
    int start=0,ends=length(str)-1;
    cout<<palindrome(str,start,ends);
}
