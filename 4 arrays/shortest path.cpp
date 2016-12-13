#include<iostream>
using namespace std;
int main(){
	int n=0,s=0,e=0,w=0;
	char ch;
	ch=cin.get();
	while(ch!='$'){
		if(ch=='n'){
			n++;
			s--;
		}
		if(ch=='s'){
			n--;
			s++;
		}
		if(ch=='w'){
			w++;
			e--;
		}
		if(ch=='e'){
			e++;
			w--;
		}
		ch=cin.get();
	}
	int i=0;
	if(e>w){
		while(i<e){
		cout<<"e";
		i++;
		}
	}
	i=0;
	if(n>s){
		while(i<n){
			cout<<"n";
			i++;
		}
	}
	i=0;
	if(s>n){
		while(i<s){
		cout<<"s";
		i++;
		}
	}
	i=0;
	if(w>e){
		while(i<w){
		cout<<"w";
		i++;
		}
	}
return 0;
}
