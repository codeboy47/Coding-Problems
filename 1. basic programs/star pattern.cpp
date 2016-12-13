#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 1;
    while ( i <= n) {
        int j = 1;
        while (j <= n-i) {
            cout << " ";
            j = j + 1;
        }
        j=1;
        while( j <= 2*i -1 ){
        	cout<<"*";
        	j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
//---------------------------------------below part----	
//	cout<<"\n";
	i=0;
	while(i<n)
	{
		int j=0;
		while(j<=i){
			cout<<" ";
			j++;
		}		
		j=n;
		while(j>=2*i-1)
		{
			cout<<"*";
			j = j - 1; // 54321
		}
		cout<< '\n';
		i = i + 1;
	}  
	  
	  
	   return 0; 
}
