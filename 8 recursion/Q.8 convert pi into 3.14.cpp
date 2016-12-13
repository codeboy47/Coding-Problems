#include<iostream>
using namespace std;
void changepi(char *str,char *c,int i){
    if(*str=='\0'){
        c[i]='\0';
        return  ;
    }
    else if(*str=='p' && *(str+1)=='i'){
        c[i]='3';
        c[i+1]='.';
        c[i+2]='1';
        c[i+3]='4';
        i=i+4;
        if(*(str+2)!='\0'){
            changepi(str+2,c,i);
        }
        if(*(str+2)=='\0'){
            c[i]='\0';
            return;
        }
    }
    else{
    c[i]=*str;
    changepi(str+1,c,i+1);
    }
}
int main(){
    char str[100],c[100];
    cin.getline(str,100);
    changepi(str,c,0);
    cout<<c;
}
