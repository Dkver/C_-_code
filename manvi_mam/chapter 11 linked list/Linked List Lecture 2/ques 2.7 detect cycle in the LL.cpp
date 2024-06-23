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
bool detectCycleInLL(Node* &head){
    if(!head){
        return false;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<slow->val<<endl;
            return true;
        }
    }
    return false;
}
int main(){
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(6);
    ll1.insertAtTail(7);
    ll1.insertAtTail(8);
    ll1.insertAtTail(11);
    ll1.insertAtTail(9);
    ll1.insertAtTail(30);
    ll1.insertAtTail(10);
    ll1.insertAtTail(20);
    ll1.insertAtTail(32);
    ll1.display();
    ll1.head->next->next->next->next->next->next->next->next->next->next->next->next=ll1.head->next->next->next;
    cout<<detectCycleInLL(ll1.head)<<endl;
    
}