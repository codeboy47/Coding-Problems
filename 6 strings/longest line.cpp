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
int main(){
    char str[100],str1[100];
    int i=0,j,largest=0,n;
    cout<<"enter no of lines";
    cin>>n;
    cout<<"enter strings:-"<<endl;
    cin.getline(str,100);
    int start,ends;
    while(i<n){
        if(length(str)>largest){
            largest=length(str);
            start=0,ends=length(str);
            while(start<=ends){    //      it will copy the null character also which is at last pos
                str1[start]=str[start];
                start++;
            }
        }
        cin.getline(str,100);
        i++;
    }
    if(length(str)>largest){
            largest=length(str);
            start=0,ends=length(str);
            while(start<=ends){
                str1[start]=str[start];
                start++;
            }
    }
    cout<<largest<<"- "<<str1<<"-";
return 0;
}
