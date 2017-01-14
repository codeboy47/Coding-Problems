#include <iostream>
#include<vector>
using namespace std;
vector<int> subset;
void printSubsets(vector<int> &v,int index){
	for(int i = index; i < v.size(); i++){
		subset.push_back(v[i]); 
		for(int j = 0;j < subset.size();j++)
		//for(auto j : subset)
			printf("%d\n",subset[j]);
		printSubsets(v,i+1);  // remember we send i+1 not index+1
		subset.pop_back();	
	}
}

int main() {
    vector<int> v{1,2,3};
    int n;
    cin>>n;
    printSubsets(v,0);
    return 0;
}
 