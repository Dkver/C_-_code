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
bool isPalindrome(Node* &head){
    //1. find middle element
    Node* slow=head;
    Node* fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    // now slow is pointing to the middle element
    // 2. break the linked list in the middle
    Node* curr=slow->next;
    Node* prev=slow;
    slow->next=NULL;
    // 3. reverse the second half of the linkedlist
    while(curr){
        Node* nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    // 4. check if two linked list are equal
    Node* head1=head;
    Node* head2=prev;
    while(head2){
        if(head1->val!=head2->val){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
}   
int main(){
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(1);
    ll1.display();
    cout<<isPalindrome(ll1.head)<<endl;
    return 0;
}