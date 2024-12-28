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
Node* largestNodeBST(Node* root){
    Node* curr=root;
    while(curr && curr->right!=NULL){
        curr=curr->right;
    }
    return curr;
}
Node* deleteBST(Node* root,int key){
    if(root==NULL){
        return root;
    }
    if(root->value<key){
        root->right=deleteBST(root->right,key);
    }
    else if(root->value>key){
        root->left=deleteBST(root->left,key);
    }
    else{    // root value is equal to key or root is the node to be deleted
        if(root->left==NULL && root->right==NULL){// node having 0 child
            free(root);
            return NULL;
        }
        else if(root->left==NULL ){// it having 1 child
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){ // root having 1 child
            Node* temp=root->left;
            free(root);
            return temp;

        }
        else{  // node having 2 child 
            Node* justSmallerNode=largestNodeBST(root->left);
            root->value=justSmallerNode->value;
            root->left=deleteBST(root->left,justSmallerNode->value);
        }
    }
    return root;
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
    // cout<<searchBST(bst1.root,8)<<endl;
    // bst1.root=deleteBST(bst1.root,7);  //it is for 1 child
    // inorderTraversal(bst1.root);
    // cout<<endl;
    // bst1.root=deleteBST(bst1.root,9);  // it is for 0 child
    // inorderTraversal(bst1.root);
    // cout<<endl;
    bst1.root=deleteBST(bst1.root,5);
    inorderTraversal(bst1.root);
    cout<<endl;
    return 0;
}