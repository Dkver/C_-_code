#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int value;
    Node* left;
    Node* right;
    Node(int v){
        value=v;
        left=right=NULL;
    }
};
int LeafNode(Node* root){
    // base case
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL and root->right==NULL){
        return 1;  // it is my leafNode
    }
    // recursive clls of the left and right sub tree
    int leftsubTreeLeafNode=LeafNode(root->left);
    int rightSubtreeLeafNode=LeafNode(root->right);
    return leftsubTreeLeafNode+rightSubtreeLeafNode;
}
int main(){
    Node*  rootNode=new Node(2);
    rootNode->left=new Node(4);
    rootNode->right=new Node(10);
    rootNode->left->left=new Node(6);
    rootNode->left->right=new Node(5);
    rootNode->right->right=new Node(11);
    rootNode->right->right=new Node(11);
    rootNode->left->right->right=new Node(6);
    cout<<LeafNode(rootNode);
    return 0;
}



// creation of tree which we can work
//              2
//          4            10
//      6       5                11
//                  6