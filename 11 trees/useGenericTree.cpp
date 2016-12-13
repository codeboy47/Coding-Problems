#include<iostream>
#include"GenericTree.h"
using namespace std;
int main() {
    GenericTree<int> T;
    T.createTree();
    T.printPreOrder();
   // GenericTreeNode<int> *S =
    cout<<endl<<T.findNodeWithLargestData();
    return 0;
}
