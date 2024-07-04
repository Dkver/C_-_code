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
    void Display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
        cout<<endl;
    }
    /** 
     * Time Compexity=O(n)
     */
    void insertAtEnd(int val){
       Node* new_node=new Node(val);
       if(tail==NULL){
        head=new_node;
        tail=new_node;
        return;
       } 

       tail->next=new_node;
       new_node->prev=tail;
       tail=new_node;
    
    }

};
int main(){
    DoublyLinkedList dll;
    dll.insertAtEnd(1);
    dll.Display();
    dll.insertAtEnd(2);
    dll.Display();
    dll.insertAtEnd(3);
    dll.Display();
    
    return 0;
}