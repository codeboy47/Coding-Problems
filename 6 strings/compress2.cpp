#include<iostream>
#include<cstring>
//#include<cstdlib>
#include<cstdio>
using namespace std;
void compress(char *str){
    char str2[100],arr[100];
    int count =1,j=0;
	bool change = false;
	for(int i=0;i<=strlen(str)-1;i++){
        if(str[i] == str[i+1]){
            ++count;
        }
        sprintf(arr, "%d", count);
        if(str[i] != str[i+1]){
            str2[j++] = str[i];
            for(int k = 0;k<strlen(arr);k++)
                str2[j++] = arr[k];
            //char t = count + 48;
            //str2[j++] = t;
            count = 1;
        }
	}
	str2[j] = '\0';
	strcpy(str,str2);
}
int main(){
	char str[1000];
	cin.getline(str, 1000);
	compress(str);
	for(int i =0;i<=strlen(str)-1;i++)
        cout<<str[i];
	return 0;
}
