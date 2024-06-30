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
Node* reorderLinkedList(Node* &head){
    // we can check for at least three node
    // first find the middle element of the ll
    Node* slow=head;
    Node* fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    // now we know that the slow pointer is pointing to the middle of the element
    //2. seperate the ll and reverse the second half of the linked list
    Node* temp=slow->next;
    slow->next=NULL;
    Node* prev=slow;
    while(temp){
        Node* nextptr=temp->next;
        temp->next=prev;
        prev=temp;
        temp=nextptr;
    }
    //3. merging the two half of the ll
    Node* ptr1=head;  // ll1 first half
    Node* ptr2=prev;   // ll2 second half
    while(ptr1!=ptr2){
        Node* curr=ptr1->next;
        ptr1->next=ptr2;
        ptr1=ptr2;
        ptr2=curr;
    }

    return head;
}
int main(){
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.insertAtTail(6);
    ll1.display();
    ll1.head=reorderLinkedList(ll1.head);
    ll1.display();
    
}