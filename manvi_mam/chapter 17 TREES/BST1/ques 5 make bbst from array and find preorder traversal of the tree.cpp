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
 * Time Complexity=O(n)
 * Space Complexity=O(h)  // h is the height of the bbst
 */
Node* sortedArrayToBST(vector<int> v,int start,int end){
    // base case
    if(start>end){
        return NULL;
    }
    int mid=(start+end)/2;
    Node* root=new Node(v[mid]);
    // this is my recursion case
    root->left=sortedArrayToBST(v,start,mid-1);//recursive creation of left subtree
    root->right=sortedArrayToBST(v,mid+1,end);// recursive creation of right sub tree
    return root;
}
void preOrderTraversal(Node* root){
    if(root==NULL) return;
    cout<<root->value<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    BST bst;
    bst.root=sortedArrayToBST(v,0,n-1);
    preOrderTraversal(bst.root);
}