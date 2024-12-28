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
// void insertNode(Node* &root,int val){
//     Node* newNode=new Node(val);
//     if(root==NULL){ // then my BST is empty then root node is equal to new node
//         root=newNode;
//         return;
//     }
//     Node* current=root; 
//     while(true){
//         if(current->value>val){
//             if(current->left==NULL){
//                 current->left=newNode;
//                 return;
//             }
//             current=current->left;
//         }
//         else{
//             if(current->right==NULL){
//                 current->right=newNode;
//                 return;
//             }
//             current=current->right;
//         }
//     }
// }
Node* insertBST(Node* root,int val){
    // base case 
    if(root==NULL){
        Node* newNode=new Node(val);
        return newNode;
    }
    // recursive case
    if(root->value>val){
        root->left=insertBST(root->left,val);
    }
    else if(root->value<val){
        root->right=insertBST(root->right,val);
    }
    return root;
}
bool searchBST(Node* root, int key){
    // base case
    if(root==NULL){
        return false;
    }
    if(root->value ==key){
        return true;
    }
    // recurcive search
    if(root->value<key){
        return searchBST(root->right,key);
    }
    if(root->value>key){
        return searchBST(root->left,key);
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
    bst1.root=insertBST(bst1.root,3);
    insertBST(bst1.root,1);
    insertBST(bst1.root,5);
    insertBST(bst1.root,7);
    insertBST(bst1.root,9);
    insertBST(bst1.root,8);
    inorderTraversal(bst1.root);
    cout<<endl;
    cout<<searchBST(bst1.root,8)<<endl;
    return 0;
}