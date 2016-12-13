#include<iostream>
using namespace std;
int main(){
	char c,p=' ';
	int words=0,lines=1,characters=0;
	c=cin.get();
	while(p!='$'){
	
		if(c == '\n'){
				lines++;
		}
		
		if(c!=' ' && c!='\t' && c!='\n' && c!='$'){
		characters++;
		}

		if((c==' ' || c=='\t' || c=='\n' || c=='$') && (p!=' ' || p!='\t' || p!='\n' || p!='$')) {
			 words++; 
			cout<<words<<endl;
			//break;
		}
		p=c;
		c=cin.get();	
	}
	cout<<"characters="<<characters<<endl<<"words="<<words<<endl<<"lines="<<lines;
return 0;
}
