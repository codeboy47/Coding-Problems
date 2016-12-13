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
void squeeze(char *str){
	int i=0,start=0,end=length(str)-1;
	//cout<<start<<" "<<end;
	while(i<end){
			if(str[i] ==' '){
				start=i;
				while(start<end){
					str[start]=str[start+1];
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
	squeeze(str);
	return 0;	

}
