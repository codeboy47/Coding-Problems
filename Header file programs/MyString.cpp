#include<iostream>
#include"MyString.h"
using namespace std;
int main() {
    MyString s,s1;
    for(int i=0;i<s.Capcity();i++){
        s.append(cin.get());
    }
   for(int i=0;i<15;i++){
        s1.append('z');
    }
    s.append(s1);
    s.append('x');
    s.append('y');
    s.pop_back();
    // s.remove(4);
    s.append('z');
    s.remove(10,24);
    s.append('q');
    s.deleteAt(4);
    s.substring(1);
    for(int i=0;i<s.length();i++){
        cout<<s.getAt(i);
    }
    cout<<endl<<s.length();
    cout<<endl<<s.compare(s1);
}
