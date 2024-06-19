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
// assuming k is less then/equal the length of the linkedlist
void DeleteKthNodeFromLast(Node* &head,int k){
    Node* ptr1=head;
    Node* ptr2=head;
    // move ptr2 by k step
    int count=k;
    while(count--){
        ptr2=ptr2->next;
    }
    if(ptr2==NULL){   // k is equal to the length of linked list
        //we have to delete head node
        Node* temp=head;
        head=head->next;
        free(temp);
        return;
    }
    // now ptr2 k step ahead of ptr1
    while(ptr2->next!=NULL){ // when ptr2 at NULL then ptr1 point to those node be are deleted 
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    // now ptr1 is pointing to the node before kth node from end
    // node to be deleted is ptr1->next
    Node* temp=ptr1->next;
    ptr1->next=ptr1->next->next;
    free(temp);

}
int main(){
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.display();
    DeleteKthNodeFromLast(ll1.head,5);
    ll1.display();
}