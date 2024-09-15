#include<iostream>
using namespace std;
template<typename T>
class Node{  // it is template class
    public:
    T val;
    Node* next;
    Node(T data){
        val=data;
        next=NULL;
    }
} ;
int main(){
    // Node<int> Node1(3);// it is first type of creation
    Node<int>* node1=new Node<int> (3);
    cout<<node1->val<<endl;
    Node<char>* node2=new Node<char> ('d');
    cout<<node2->val<<endl;
    return 0;
}