#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }
};
class LinkedList{
public:
    Node* head;
    LinkedList(){
        head=NULL;
    }
    void insertAtTail(int value){
        Node* new_node=new Node(value);
        if(head==NULL){  // linked list is empty
            head=new_node;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        // after the loop temp is pointing to the last node
        temp->next=new_node;
    }
    void display(){
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->val<<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
    }
};
Node* ReverseLL(Node* &head){
    Node* prevptr=NULL;
    Node* currptr=head;
    // currptr->next=prevptr;
    // move all three pointer  by 1 step
    while(currptr!=NULL){
        Node* temp=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=temp;
    }
    // when this loop end then my currptr pointing to the last node which is my new head
    Node* new_head=prevptr;
    return new_head;

}
int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
    ll.head=ReverseLL(ll.head);
    ll.display();
}