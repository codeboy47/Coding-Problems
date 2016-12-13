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
	int i=0,n,start,end;
	char str[100];
	cin>>n;
	cin.get();            // because in buffer there is '\n' after we take n from input as cin.get() will 
	cout<<"enter string ";   //take '\n'so if we dont use cin.get() cin.getline will not take string as  
	cin.getline(str,100);   // it will take string until we get '\n' or we can write cin>>n 
	//cin>>n;					after cin.getline()
	while(i<n){
		start=0,end=length(str)-1;
		char t1,t2=str[start];
			while(start<=end){
				if(start==end){
					str[0]=t2;
				}
				else{
					t1=str[start+1];
					str[start+1]=t2;
					if(start+2>end){
						t2=str[0];
						str[0]=t1;
					}
					else{
						t2=str[start+2];
						str[start+2]=t1;
					}			
					//cout<<"-"<<str<<"-";
				}
				start=start+2;
			}	
		i++;
	}
	cout<<str;
	return 0;
}
