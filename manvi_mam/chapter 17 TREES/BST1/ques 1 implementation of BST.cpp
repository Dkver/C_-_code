#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* left;
    Node* right;
    Node(int v){
        value=v;
        left=NULL;
        right=NULL;
    }
};
class BST{
    public:
    Node* root;
    BST(){
        root=NULL;
    }
};
// insertion of element in the binary search tree
void insertNode(Node* &root,int val){
    Node* newNode=new Node(val);
    if(root==NULL){ // then my BST is empty then root node is equal to new node
        root=newNode;
        return;
    }
    Node* current=root; 
    while(true){
        if(current->value>val){
            if(current->left==NULL){
                current->left=newNode;
                return;
            }
            current=current->left;
        }
        else{
            if(current->right==NULL){
                current->right=newNode;
                return;
            }
            current=current->right;
        }
    }
}
void inorderTraversal(Node* root){
    if(root==NULL) return;
    inorderTraversal(root->left);
    cout<<root->value<<" ";
    inorderTraversal(root->right);
}
int main(){
    BST bst1; // it will create the binary search tree 1
    insertNode(bst1.root,3);
    insertNode(bst1.root,1);
    insertNode(bst1.root,5);
    insertNode(bst1.root,7);
    insertNode(bst1.root,9);
    insertNode(bst1.root,8);
    inorderTraversal(bst1.root);
    return 0;
}