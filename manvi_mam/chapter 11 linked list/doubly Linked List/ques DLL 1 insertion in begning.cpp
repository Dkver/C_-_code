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
     * Time Complexity=O(n)
     */
    void insertAtStart(int val){
       Node* new_node=new Node(val);
       if(head==NULL){
        head=new_node;
        tail=new_node;
        return;
       } 

       new_node->next=head;
       head->prev=new_node;
       head=new_node;
       return;
    }

};
int main(){
    DoublyLinkedList dll;
    dll.insertAtStart(1);
    dll.Display();
    dll.insertAtStart(2);
    dll.Display();
    dll.insertAtStart(3);
    dll.Display();
    
    return 0;
}