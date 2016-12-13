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
void removeduplicates(char *str,int start,int end,int i){
	if(i>end) return ;  // base case
	if(i<=end){
		if(str[i]==str[i+1]){
			//start=i;
			str[start+1]=str[start+2];
			removeduplicates(str,start+1,end,0);
			//end--;
		}
		//i++;
		removeduplicates(str,i+1,end-1,i+1);
		//end--;
	}
	str[end+1]='\0';
	cout<<str<<endl;		
}
int main(){
	char str[100];
	char str1[100],str2[100];
	cout<<"enter string :-";
	cin.getline(str,100);
	int start=0,end=length(str)-1;
	removeduplicates(str,start,end,0);
	cout<<str;
	return 0;	
}
