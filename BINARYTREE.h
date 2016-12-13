#indef BINARY_TREE_H
#define BINARY_TREE_H
#include<iostream>
#include<queue>
using namespace std;
class node{
    int data;
    node *left;     ///  or node *arr[2];
    node *right;
    node() : left(0) , right(0) { }
    node(int & el) : data(el),left(0),right(0) { }
};
class tree{
    node *root;
    static void createhelper(node *root){
        if(root==0){
            return;
        }
        char ch;
        int el;
        cout<<"want to make left node y/n ?";
        cin>>ch;
        if(ch=='Y' || ch=='y'){
            cout<<"enter data";
            cin>>el;
            node *temp= new node(el);
        }
        cout<<"want to make right node y/n ?";
        cin>>ch;
        if(ch=='Y' || ch=='y'){
            cout<<"enter data";
            cin>>el;
            node *temp= new node(el);
        }
        createhelper(root->left);
        createhelper(root->right);
        return;
    }
    static node * createfrompreandpost(int vector &pre,int vector &in, int prestart, int preend, int instart, int inend){

    }
    static node * copyhelper(node *fromroot){
        if(fromroot==NULL){
            return NULL;
        }
        node * temp = new node(*fromroot);
        temp->left=copyhelper(fromroot->left);
        temp->right=copyhelper(fromroot->right);
        return fromroot->left;
        return fromroot->right;
    }
    static void clearhelper(node *root){
        if(root == 0){
            delete root;
            return ;
        }
        clear(root->left);
        clear(root->right);
        return;
    }
    void inorderhelper(node *root){
        if(root->left!=0){
            inorderhelper(root->left);
        }
        cout<<root->data;
        if(root->right!=0){
            inorderhelper(root->right);
        }
    }
    public:
    tree() : root(0) { }
    ~tree(){
        clear();
    }
    tree(const tree & T) : root(0) {
        if(T.root==0) { return ; }
        root = copyhelper(T.root);
    }
    void mirrorbt(){

        //int *temp=new node(el)
    }
    void inorder(){
        inorderhelper(root);
    }
    void create(){
        createhelper(root);
        return;
    }
    int height(node *root){
        if(root==NULL){
            return 0;
        }
        int cl=height(root->left);   cl++;
        int cr=height(root->right);  cr++;
        if(cl>cr){
            return cl;
        }
        else return cr;
    }

    private :
    static void helperprintAllRootToPath(BinaryTreeNode<T> * root,vector<T> &V){
        if(root==NULL){
            return;
        }
        if(!root->left && !root->right){
            for(i=0;i<V.size;i++){
                cout<<V[i]<<" ";
            }
            cout<<root->data;
            return;
        }
        V.push_back(root->data);
         helperprintAllRootToPath(root->left,V);
         helperprintAllRootToPath(root->right,V);
         V.pop_back();
         return;
    }
    static bool helpercheckTreeIsSumChildren(BinaryTreeNode<T> * root){
        if()
    }

    static BinaryTreeNode<T> * helpercheckSumOfNodesIsGreaterThanK(BinaryTreeNode<T> * root,T sum,T K){
        if(root==NULL){
            return NULL;
        }
        sum=sum+root->data;
        if(!root->left && !root->right){   ///  I am leaf node
            if(sum>=k){
                return root;
            }
            else{
                delete root;
                return NULL;
            }
        }
        root->left=helpercheckSumOfNodesIsGreaterThanK(root->left,sum,K);
        root->right=helpercheckSumOfNodesIsGreaterThanK(root->right,sum,K);
        if((root->left || root->right) || sum>=k){  /// checking node when we are coming back
                return root;
        }
        else{
            delete root;
            return NULL;
        }
    }
    public :
    void printAllRootToPath(){
        vector<T> V;
        helperprintAllRootToPath(root,V);
    }
    bool checkTreeIsSumChildren(){
        helpercheckTreeIsSumChildren(root);
    }

    void checkSumOfNodesIsGreaterThanK(){
        helpercheckSumOfNodesIsGreaterThanK(root,0,45);
    }
};
#endif
