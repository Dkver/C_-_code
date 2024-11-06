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
void LevelOrderTraversal(Node* rootNode){
    // base case
    if(rootNode==NULL) return;
    queue<Node*>q;
    q.push(rootNode);
    while(!q.empty()){
        int nodesAtCurrentLevel=q.size();
        while(nodesAtCurrentLevel--){
            Node* currNode=q.front();
            q.pop();
            cout<<currNode->value<<" ";
            if(currNode->left!=NULL){
                q.push(currNode->left);
            }
            if(currNode->right!=NULL){
                q.push(currNode->right);
            }
            //cout<<currNode->value<<" "; printing here also
        }
        cout<<endl;
    }
    
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
    LevelOrderTraversal(rootNode);
    return 0;
}



// creation of tree which we can work
//              2
//          4            10
//      6       5                11
//                  6