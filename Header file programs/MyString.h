// You need to complete this class as assignment - 10
// This is a header file for your flexible string. I have already included function declarations.
// All you need to do is complete the functions.
// Make sure to append null character to end of the array!!

#ifndef MYSTRING_H
#define MYSTRING_H
#include<iostream>
using namespace std;
class MyString {
    char * arr;     // Pointer variable to store address of the dynamic allocated memory
    int len;        // To store length of the string
    int capacity;    // To store the capacity of the string
    void expand() {
        capacity *=2;
        char * temp = new char[capacity];
        for(int i = 0; i < len; i++) {
            temp[i] = arr[i];
        }
        delete [] arr;
        arr = temp;
        arr[len]='\0';
    }

    public:
    // This is the zero parameterized constructor. It should create a empty string of initial length 0 and capacity 10;
    MyString() : len(0) , capacity(10) {
        arr = new char[10];
        arr[len]='\0';
    }

    // Another constructor which takes a 'C' type string [ character array terminated by Null Character] and creates an object
    // which is same as str.
    MyString(char *str) : len(0) , capacity(10) {

    }

    // Copy constructor
    MyString(MyString & b) : len(b.len), capacity(b.capacity){
        arr = new char[capacity];
        for(int i=0;i<len;i++){
            arr[i]=b.arr[i];
        }
        arr[len]='\0';
    }

    // Destructor
    ~MyString() {
        delete [] arr;
    }

    // Copy Assignment Operator
    void operator=(MyString & b) {
        delete [] arr;
        len=b.len;
        capacity=b.capacity;
        arr=new char[b.capacity];
        for(int i=0;i<len;i++){
            arr[i]=b.arr[i];
        }
        arr[len]='\0';
    }

    // It adds ch at the end of the string
    void append(char ch) {
        if(len==capacity){
            expand();
        }
        arr[len]=ch;
        len++;
        arr[len]='\0';
    }

    // It adds all characters of 'C' type string str to the end.
    void append(char *str) {
        for(int i=len;*str!='\0';i++){
            arr[i]=*str;
            str++;
            len++;
        }
        arr[len]='\0';
    }

    // It adds all character of string b to the end.
    void append(MyString & b) {
      //  cout<<"b "<<b.length()<<endl;
        int k=b.length()+len,j=0;
        for(int i=len;i<k;i++){
            if(len==capacity){
                expand();
            }
            arr[i]=b.arr[j];
            len++;
            j++;
        }
 //       cout<<endl<<"--"<<len;
   //     cout<<"c "<<capacity;
        arr[len]='\0';
    }

    // returns length of the string
    int length() {
        return len;
    }

    // returns capacity of the string
    int Capcity() {
        return capacity;
    }

    // It removes the last character
    void pop_back() {
        if(len==0){
            return;
        }
        len--;
        arr[len]='\0';
    }

    // It removes characters of the string from start to end
    void remove(int start, int end) {
        int i=start,j=end;
        while(arr[end]!='\0'){
            arr[start]=arr[end+1];
            start++; end++;
        }
        arr[start]='\0';
        len=len-(j-i)-1;
    }

    // It removes characters of the string from start to len
    void remove(int start) {
        len=len-(length()-start);
        arr[len]='\0';
    }

    // It deletes characters at the index.
    void deleteAt(int index) {
        while(arr[index]!='\0'){
            arr[index-1]=arr[index];
            index++;
        }
        len=len-1;
        arr[len]='\0';
    }

    // Returns a MyString Object which has characters of this string from start to end
    MyString substring(int start, int end) {
        int j=0;
        for(int i=start;i<=end;i++){
            arr[j]=arr[i];
            j++;
        }
        len=end-start+1;
        arr[len]='\0';
        //return arr;
    }

    // Returns a MyString Object which has characters of this string from start to length
    MyString substring(int start) {
        int j=0;
        for(int i=start;i<len;i++){
            arr[j]=arr[i];
            j++;
        }
        len=j;
        arr[len]='\0';
        //return arr;
    }

    // Returns character at the index
    char getAt(int index) {
        return arr[index];
    }

    // Returns first index of string b in this string after pos index
    /*int find(MyString &b, int pos = 0) {
        for(i=0;i<len;i++){
            if(arr[i]==b.arr[])
        }
    }

    // Returns first index of "C" type string str in this string after pos index
    int find(char *str, int pos = 0) {
    }*/

    // Compare function for "C" type string
    int compare(char * str) {
        for(int i=0;i<length();){
            if(arr[i]==*str){
                i++; str++;
            }
            else return 0;
        }
    }

    // Compare function for MyString type string
    int compare(MyString & b) {
        for(int i=0;i<length();){
            if(arr[i]==b.arr[i]){
                i++;
            }
            else return 0;
        }
        return 1;
    }
};
#endif;
