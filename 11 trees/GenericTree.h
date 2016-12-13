#ifndef GENERIC_TREE_H
#define GENERIC_TREE_H
#include<vector>
#include<queue>
using namespace std;
template <typename T>
class GenericTreeNode {
    T data;
    vector<GenericTreeNode *> children;
    GenericTreeNode * parent;
    public:
    GenericTreeNode() : parent(NULL){}
    GenericTreeNode(const T & d) : parent(NULL), data(d) {}
    const T & getData() const {
        return data;
    }

    template<typename V>
        friend class GenericTree;
};
template<typename T>
class GenericTree {
    GenericTreeNode<T> * root;
    void clear(){
        while (root != NULL) {
            for(int i=0;i<root->children.size();i++){
                GenericTreeNode<T> * temp = root->children[i];
                delete root;
                root = temp;
            }
        }
    }
    void copy(const GenericTree & G){
        clear();
        GenericTreeNode<T> * it=G.root;
        GenericTreeNode<T> * prev=0;
        int k=0;
        while(prev){
          int i=0;
         while(it){
           GenericTreeNode<T> * temp = new GenericTreeNode<T>(*it);
           temp->children = 0;
           if (root == NULL) {
               root = prev = temp;
           } else {
               prev->children[i] = temp;
               prev = temp;
           }
           it = it->children[i];
            //prev=temp;
            i++;
        }
        it=prev->children[k];
        prev=prev->children[k];
      }
    }
    static int findheightoftree(const GenericTree<T> * root){
        if(root==NULL){
            return 0;
        }
        for(int i=0;i<root->children.size();i++){
            int c=findheightoftree(root->children[i]);
            c++;
        }
        int cl=findheightoftree(root->left);   cl++;
        int cr=findheightoftree(root->right);  cr++;
        if(cl>cr){
            return cl;
        }
        else return cr;
    }
    static GenericTreeNode<T> * findNodeLargestData(GenericTreeNode<T> * root) {
        if(root==NULL){
            return root;
        }
        GenericTreeNode<T> * largest=root;
        for(int i = 0; i < root->children.size(); i++) {
            GenericTreeNode<T> * d=findNodeLargestData(root->children[i]);
            if(d->data > largest->data){
                cout<<endl<<d->data;
                largest=d;
                //return d;
            }
        }
        return largest;
    }
    static void printPostOrderHelper(GenericTreeNode<T> * root) {
        if (root == NULL) {
            return ;
        }
        for(int i = 0; i < root->children.size(); i++) {
            printPostOrderHelper(root->children[i]);
        }
        cout << root->data << " ";
        return ;
    }
    static void printPreOrderHelper(GenericTreeNode<T> * root) {
        if (root == NULL) {
            return;
        }
        cout << root->data << " ";
        for(int i = 0; i < root->children.size(); i++) {
            printPreOrderHelper(root->children[i]);
        }
        return;
    }
    public:
    GenericTree() : root(0) {}
    ~GenericTree(){
    //    clear();
    }
    GenericTree(const GenericTree & G) : root(0) {
        copy(G);
    }
    GenericTree & operator=(const GenericTree & G){
        copy(G);
        return *this;
    }
    void printPreOrder() {
        printPreOrderHelper(root);
    }
    void printPostOrder() {
        printPostOrderHelper(root);
    }
    void createTree() {
        if (root != NULL) {
            throw " tree already exists";
        }
        T el;
        cout << "Enter data for root node";
        cin >> el;
        root = new GenericTreeNode<T>(el);
        queue<GenericTreeNode<T> * > Q;
        Q.push(root);
        while(!Q.empty()) {
            int count;
            GenericTreeNode<T> * temp = Q.front();
            Q.pop();
            cout << " Enter children count for node with data: " << temp->data << " ";
            cin >>count;
            for (int i =0; i < count; i++) {
                cout << " Enter data for " << i << " child  ";
                cin >> el;
                GenericTreeNode<T> * child = new GenericTreeNode<T>(el);
                child->parent = temp;
                temp->children.push_back(child);
                Q.push(child);
            }
        }
    }
    int findheight(){
        int c=findheightoftree(root);
        return c;
    }
    GenericTreeNode<T> * findNodeWithLargestData()  {
        GenericTreeNode<T> *it=findNodeLargestData(root);
        //cout<<endl<<it->data;
        return it;
    }
};
#endif
