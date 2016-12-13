#include<iostream>
#include "LL.h"
using namespace std;
int main() {
    Node<int> N;
    LinkedList<int> L;
    //for(int i = 0; i < 6;i++) {
       // L.append(i*i);
    //}
    L.append(11);
    L.append(11);
    L.append(11);
    L.append(21);
    L.append(43);
    L.append(43);
    LinkedList<int> L1 = L;
    // L.prepend(45);
    // L.prepend(34);
    //L.insertATKthPosition(2,1111);
    //L.deleteFromHead();  // delete 1st node i.e. 34
    //L.deleteFromTail();   // delete 81
    //L.deleteAtKthPosition(2);  // delete 1111 from 2nd pos
    //L.swap(1,3);  // swap 45(2) with 16(7)
    //L.anbn();  //  0->9->1->16->4->25->NULL
    //LReverse(3); // 25->4->16->1->9->0->NULL
    //L.arrangeEvenElementsAfterOddElements();
    L.removeDuplicatesFromSorted();
    cout << L << endl;
    cout<<L.length()<<endl;  // ans is 11
    // cout<<L.findElement(16)<<endl;
    // cout<<L.findKthElement()<<endl;
    Node<int> *mid=L.findMidPoint();
    cout<<mid->getData()<<endl;
    cout<<L.checkIfPalindrome()<<endl;
    return 0;
}
