#include<iostream>
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
void PreorderedTraversal(Node* rootNode){
    // base case
    if(rootNode==NULL){
        return;
    }
    cout<<rootNode->value<<" ";
    // recursive call for left subtree and right subtree
    PreorderedTraversal(rootNode->left);
    PreorderedTraversal(rootNode->right);
}
int main(){
    Node*  rootNode=new Node(2);
    rootNode->left=new Node(4);
    rootNode->right=new Node(10);
    rootNode->left->left=new Node(6);
    rootNode->left->right=new Node(5);
    rootNode->right->right=new Node(11);
    PreorderedTraversal(rootNode);
    return 0;
}



// creation of tree which we can work
//              2
//          4       10
//      6       5        11
//
//