#include<iostream>
#include<vector>
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
/** 
 * TC=O(n)
 * sc=O(h) h=height opf the tree
 */
Node* leafNodeRemove(Node* root){
    // base case
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        return NULL;//when root is a lef node 

    }
    // recursive cases
    root->left=leafNodeRemove(root->left);
    root->right=leafNodeRemove(root->right);
    return root;
}
void preOrderTraversal(Node* root){
    if(root==NULL) return;
    cout<<root->value<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

int main(){
    BST bst1; // it will create the binary search tree 1
    bst1.root=insertBST(bst1.root,3);
    insertBST(bst1.root,1);
    insertBST(bst1.root,4);
    insertBST(bst1.root,2);
    insertBST(bst1.root,6);
    
    preOrderTraversal(bst1.root);
    cout<<endl;
    bst1.root=leafNodeRemove(bst1.root);
    preOrderTraversal(bst1.root);
    cout<<endl;
    return 0;
}