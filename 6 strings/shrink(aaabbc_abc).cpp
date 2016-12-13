///  aaaaaaaaabbbbbbbbccd --> abcd
#include<iostream>
#include<cstring>
using namespace std;

void shrink(char *str){
    char str2[100];
	int start =0;
	for(int i=0;i<strlen(str);i++){
        if(str[i]!=str[i+1] && str[i] >= 'a' && str[i] <= 'z'){
            str2[start++] = str[i];
        }
	}
	cout<<start<<"   - " ;
	str2[start] = '\0';
	strcpy(str,str2);
	cout<<endl<<str2<<endl;
}

int main(){
	char str[1000];
	cin.getline(str, 1000);
	shrink(str);
	for(int i =0;i<=strlen(str)-1;i++)
        cout<<str[i];
	return 0;
}
