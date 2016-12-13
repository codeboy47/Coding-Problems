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
void addnumber(char *str1,char *str2,char *ans){    // use *str when we want to point single character of string
	int start=0,end=length(str1)-1;
	while(end>=start){
		//if(ans[end+1]=='0'){
		//	ans[end]=str2[end-1]+str1[end-1]-47;
		//}
		//else
		//if(ans[end+1]<=58){
		ans[end]=str1[end]+str2[end]-'0';//}
		else if(ans[end]>=58){
			ans[end]=str1[end]+str2[end]-58;
			ans[end-1]=str2[end-1]+str1[end-1]-47;
			//end=end-2;
			end--;
		}
		else{
			end--;
		}
	}
	cout<<ans;
}
int main(){
	char str1[100],str2[100],ans[100];
	cout<<"enter 1 string";
	cin.getline(str1,100);
	cout<<"enter 2 string";
	cin.getline(str2,100);
	addnumber(str1,str2,ans);
	return 0;	
}
