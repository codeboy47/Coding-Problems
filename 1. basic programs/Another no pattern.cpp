// program to print the pattern
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 1;
    while ( i <= n) {
        int j = 1,k = n-1 ,value = i;
        while (j <= i) {
            cout << value << ' ';
            value = value + k;
            j = j + 1;
            k--;
        }
        i = i + 1;
        cout << endl;
    }
    return 0;
}
