#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include<iostream>
using namespace std;
template <typename T> class LinkedList;
template <typename T>
class Node {
    T data;
    Node * next;
    public:
    Node() : next(0) {}
    Node(const T & el) : data(el), next(0) {}
    Node(const T & el, Node * ad): data(el), next(ad) {}
    T getData() const {
        return data;
    }
    template <typename V>
        friend class LinkedList;
    template<typename V>
       friend ostream & operator<<(ostream &, const LinkedList<V> &);
};

// This is a linked list class which has head and tail pointers. Implement all the below functions.
// Make sure that head and tail are always pointing to correct node after each operation.
// This is not double linked list. You only have one pointer in each node to store address of next element.
template <typename T>
class LinkedList {
    Node<T> * head;
    Node<T> * tail;
    // Private function which empties the list.
    void clear() {
        while(head!=NULL){
            Node<T> *temp=head->next;
            delete head;
            head=temp;
        }
        tail=NULL;
    }
    // Private function which empties the list and then creates the copy of the LinkedList passed as argument
    void copyAs(const LinkedList & L) {
        clear();
        Node<T> *it = L.head;
        while(*it!=NULL){
        Node<T> *temp= new Node<T>(el);
        temp->next=0;
        if(head==NULL){
            head=tail=temp;
        }
        else{
            tail->next=temp;
        }
        tail=temp;
        it=it->next;
        }
    }
    public:
    LinkedList() : head(0) ,tail(0) {}
    ~LinkedList() {
        clear();
    }
    LinkedList(const LinkedList & L) : head(0) {
        copyAs(L);
    }
    LinkedList & operator=(const LinkedList & L) {
        copyAs(L);
        return *this;
    }
    // Inserts element at the end.
    void append(const T & el) {
        Node<T> *temp= new Node<T>(el);
        if(head==0){
            head=temp;
            return;
        }
        Node<T> *it=head;
        while(it->next!=0){
            it=it->next;
        }
        it->next=temp;
        tail=temp;
    }
    // Inserts element at the beginning
    void prepend(const T & el) {
        Node<T> *temp= new Node<T>(el);
        if(head==NULL){
            head=tail=temp;
        }
        temp->next=head;
        head=temp;
    }

    // Delete one element from the beginning
    void deleteFromHead() {
        Node<T> *temp=head;
        head=head->next;
        delete temp;
    }
    // Delete one element from the end
    void deleteFromTail() {
        Node<T> *temp= head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        tail->next=NULL;
    }

    // Insert at Kth Position
    void insertATKthPosition(int K, const T & el) {
        Node<T> *temp= new Node<T>(el);
        Node<T> *ptr=head;
        for(int i=1;i<K-1;i++){
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }

    // Delete from Kth Position
    void deleteAtKthPosition(int K) {
        Node<T> *temp=head;
        Node<T> *ptr=head;
        for(int i=1;i<K-1;i++){
            ptr=ptr->next;
        }
        temp=ptr->next;
        ptr->next=temp->next;
        delete temp;
    }

    // Return address of el in the list. If not present return NULL
    Node<T> * findElement(const T & el) const {
        Node<T> *temp=head;
        int c=0;
        while(temp->data!=el && temp!=NULL){
            temp=temp->next;
            c++;
        }
        if(temp==NULL){
            return 0;
        }
        else
        return temp;
    }
    // Function which returns length of the linked list
    int length() const {
        Node<T> *temp=head;
        int c=0;
        while(temp!=NULL){
            temp=temp->next;
            c++;
        }
        return c;
    }
    // function which returns address of Kth Node - returns NULL if K is out of Bound
    Node<T> * findKthElement() const {
        Node<T> *temp=head;
        int k;
        cout<<"enter index";
        cin>>k;
        for(int i=1;i<k;i++){
            temp=temp->next;
        }
        if(temp==NULL){
            return 0;
        }
        else{
            return temp;
        }
    }
    // Swap ith and Jth Node of the linked list - Swap Nodes not the data. Do nothing if I or J are out of bounds
    void swap(int i, int j) {
        Node<T> *temp=head,*loc=head,*ptr,*it;
        for(int x=1;x<i;x++){
            ptr=temp;
            temp=temp->next;
        }
        for(int x=1;x<j;x++){
            it=loc;
            loc=loc->next;
        }
        ptr->next=temp->next;
        temp->next=loc->next;
        loc->next=ptr->next;
        ptr->next=loc;
        it->next=temp;
    }
    // Reverses the linked list. You need to actually reverse the list not print in reverse order.
    void reverse() {
        Node<T> *it2=0,*it1=head,*temp=head;
        tail=head;
        while(temp!=0){
            it1=temp->next;
            temp->next=it2;
            it2=temp;
            temp=it1;
        }
        head=it2;
        return;
    }
    // Sort the linked list using selection sort. You need to change next pointers in the data without using any array.
    void selectionsort() {
    }

    // Returns address of the mid node of the linked list
    Node<T> * findMidPoint() const {
        int l=length(),n=0;
        Node<T> *temp=head;
        while(n<l/2){
            temp=temp->next;
            n++;
        }
        return temp;
    }

    // Returns true if elements in the linked list make it palindrome for e.g: 1->13->4->5->4->13->1
     bool checkIfPalindrome() const {
        LinkedList<T> newlist;
        newlist=(*this);
        newlist.reverse();
        Node<T> *temp1=head,*temp2=newlist.head;
        while((temp1->data==temp2->data) && (temp1->next!=NULL && temp2->next!=NULL)){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if(temp1->next==0){
            return true;
        }
        else{
            return false;
        }
    }

    // Rearrange the nodes such that all even elements are after odd elements. Again you need change next pointers not the data
    void arrangeEvenElementsAfterOddElements() {
        Node<T> *temp1=head,*ptr=head;
        while(temp!=NULL){
            if((temp->data)%2==1 && temp!=head){
                ptr->next=temp->next;
                temp->next=head;
                head=temp;
                temp=ptr->next;
            }
            else{
                ptr=temp;
                temp=temp->next;
            }
        }
    }
//Rotate Linked List By K. You need to clockwise rotate the linked list by K. E.g. 1->2->3->4->5->6->null and if K was 2 linked list
//should become 5->6->1->2->3->4->null
    void rotateClockWise(int K) {

    }

    // K reverse the linked list i.e. you reverse first K elements then reverse next K elements and join the linked list and so on.
    // For e.g. 3->4->5->2->6->1->9->10->NULL, and For K = 3 should become 5->4->3->1->6->2->10->9->NULL
    void kReverse(int K) {
        Node<T> *it=head,*it2=0,*it1=head,*temp=head;
        tail=head;
        while(it!=0){
            int c=0;
            while(c<K && temp!=0){
                it1=temp->next;
                temp->next=it2;
                it2=temp;
                temp=it1;
                c++;
            }
            if(temp!=NULL){
                head->next=temp;
            }
            it=temp;
        }
        //head=it2;
        return;
    }

    // Remove Duplicates From the sortedList.
    // This function assumes the linked list is sorted and deletes duplicated nodes from the linked list.
    void removeDuplicatesFromSorted() {
        Node<T> *temp1=head,*temp2=head->next;
            while(temp2!=NULL){
                if(temp1->data==temp2->data){
                    Node<T> *it=temp2;
                    temp1->next=temp2->next;
                    temp2=temp2->next;
                    it->next=0;
                    delete it;
                }
                else{
                    temp1=temp2;
                    temp2=temp2->next;
                }
            }
    }
    template<typename V>
       friend ostream & operator<<(ostream &, const LinkedList<V> &);
};

template <typename T>
ostream & operator<<(ostream & obj, const LinkedList<T> & L) {
    const Node<T> * it = L.head;
    while (it != NULL) {
        obj << it->data << "-->";
        it = it->next;
    }
    obj << "NULL";
    return obj;
}
#endif
