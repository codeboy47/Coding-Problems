#include<iostream>
using namespace std;
bool check(char *str){
    bool ans;
    if(*str=='a'){
           if(*(str+1)=='\0'){
              return true;
           }
           else
              ans=check(str+1);
    }
    else if(*str=='a' && (*(str+1)=='a' || (*(str+1)=='b' && *(str+2)=='b') || *(str+1)=='\0')){
        if(*(str+1)=='\0'){
            return true;
        }
        ans=check(str+1);
    }
    else if(*str=='b' && *(str+1)=='b' && ( *(str+2)=='a' || *(str+2)=='\0' )){
        if(*(str+2)=='\0'){
            return true;
        }
        ans=check(str+2);
    }
    else if(ans==true){
        return ans;
    }
    else
        return false;
}
int main(){
    char str[100];
    cin.getline(str,100);
    cout<<check(str);
}
