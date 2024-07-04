#include<iostream>
using namespace std;
class Node{  // initialization
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int data){ // constructor
        val=data;
        prev=NULL;
        next=NULL;
    }
};
class DoublyLinkedList{ // creation of doubly linked list
    public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){ // constructor
        head=NULL;
        tail=NULL;
    }

};
int main(){
    Node* new_node=new Node(3);
    DoublyLinkedList dll;
    dll.head=new_node;
    dll.tail=new_node;
    cout<<dll.head->val<<endl;
    return 0;
}