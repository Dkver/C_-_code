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
Node* lowestCommonAncestor(Node* root,Node* node1,Node* node2){
    if(root==NULL){
        return NULL;
    }
    // in this case lowestCommonAncestor is lie left subtree
    if(root->value > node1->value && root->value>node2->value){
        return lowestCommonAncestor(root->left,node1,node2);
    }
    // in this case lowestCommonAncestor is lie right subtree
    if(root->value < node1->value && root->value<node2->value){
        return lowestCommonAncestor(root->right,node1,node2);
    }
    // if root value lie between node1 and node2
    // or if root value is equal to any node value node1 or node2
    return root; 
}

int main(){
    BST bst1; // it will create the binary search tree 1
    bst1.root=insertBST(bst1.root,3);
    insertBST(bst1.root,1);
    insertBST(bst1.root,4);
    insertBST(bst1.root,2);
    insertBST(bst1.root,6);
    
    Node* node1=new Node(2);
    Node* node2=new Node(6);
    Node* temp=lowestCommonAncestor(bst1.root,node1,node2);
    cout<<temp->value<<endl;
    return 0;
}