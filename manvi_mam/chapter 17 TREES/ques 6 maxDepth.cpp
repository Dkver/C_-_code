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
int MaxDepth(Node* root){
    // base case
    if(root==NULL){
        return 0;
    }
    // recursive case
    int leftDepth=MaxDepth(root->left);
    int rightDepth=MaxDepth(root->right);


    return (max(leftDepth,rightDepth)+1);
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
    cout<<MaxDepth(rootNode);
    return 0;
}



// creation of tree which we can work
//              2
//          4            10
//      6       5                11
//                  6