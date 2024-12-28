#include<iostream>
#include<queue>
#include<stack>
#include<vector>
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
vector<int> LevelOrderTraversalReverse(Node* rootNode){
    // base case
    vector<int> ans;
    if(rootNode==NULL) return ans;
    stack<Node*>st;
    queue<Node*>q;
    q.push(rootNode);
    while(!q.empty()){
        int nodesAtCurrentLevel=q.size();
        while(nodesAtCurrentLevel--){
            Node* currNode=q.front();
            q.pop();
            st.push(currNode);
            if(currNode->right!=NULL){
                q.push(currNode->right);
            }
            if(currNode->left!=NULL){
                q.push(currNode->left);
            }
           
            //cout<<currNode->value<<" "; printing here also
        }
        
    }
    while(!st.empty()){
        ans.push_back(st.top()->value);
        st.pop();
    }
    return ans;
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
    vector<int>ans=LevelOrderTraversalReverse(rootNode);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}



// creation of tree which we can work
//              2
//          4            10
//      6       5                11
//                  6