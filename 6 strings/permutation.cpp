#include<iostream>
#include<cstring>
using namespace std;
bool equalstrings(char *str1,char *str2){
	while(*str1==*str2 && *str1!='\0' &&*str2!='\0'){
		cout<<*str1<<" "<<*str2<<endl;
		str1++;
		str2++;
	}
	if(*str1==*str2){
		return true;
	}
	else
	return false;
}
int length(char *str){
	int len=0;
	while(*str!='\0'){
		len++;
		str++;
	}
	return len;
}
bool permutation(char *str1,char *str2){
	int i=0,start,end;
	while(i<length(str1)){
		start=0,end=length(str1)-1;
		char t1,t2=str1[start];
			while(start<=end){
				if(start==end){
					str1[0]=t2;
				}
				else{
					t1=str1[start+1];
					str1[start+1]=t2;
					if(start+2>end){
						t2=str1[0];
						str1[0]=t1;
					}
					else{
						t2=str1[start+2];
						str1[start+2]=t1;
					}			
					//cout<<"-"<<str<<"-";
				}
				start=start+2;
			}	
		if (equalstrings(str1,str2)==1){
			//cout<<str1<<" "<<str2;
			return true;			
		}
		else
		i++;
	}
	return 0;
}
int main(){
	char str1[100],str2[100]; 
	cout<<"enter 1st string ";   
	cin.getline(str1,100);   
	cout<<"enter 2nd string:";
	cin.getline(str2,100);
	cout<<permutation(str1,str2);
	cout<<equalstrings(str1,str2);
	
}
