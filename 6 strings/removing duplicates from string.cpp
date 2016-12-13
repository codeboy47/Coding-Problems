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
void removeduplicates(char *str){
	int i=0,start=0,end=length(str)-1;
	//cout<<start<<" "<<end;
	while(i<end){
			if(str[i] == str[i+1]){
				start=i;
				while(start<end){
					str[start+1]=str[start+2];
					start++;
				}
			//cout<<" "<<start<<endl<<str<<"-";
			end--;
		}
		i++;
	}
	str[end+1]='\0';
	cout<<str;
}
int main(){
	char str[100];
	char str1[100],str2[100];
	cout<<"enter string :-";
	cin.getline(str,100);
	removeduplicates(str);
	return 0;	
}
