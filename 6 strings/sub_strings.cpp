#include<iostream>
using namespace std;
int length(char *str){
    int start=0,len=0;
    while(*str!='\0'){
        len++;
        str++;
    }
    return len;
}
int main(){
    char str[100];
    cout<<"enter string : ";
    cin.getline(str,100);
    int start=0,last=length(str)-1,i,j,k;
    for(k=0;k<=last;k++){
        for(i=k;i<=last;i++){
            for(j=k;j<=i;j++){
                cout<<str[j];
            }
        cout<<endl;
        }
}
    return 0;
}
