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
/**
 * Time Complesity=O(2n-k)
 */
Node* RotateLLbyKth(Node* &head,int k){
    //1. find length of linked list
    int n=0;
    // 2.find tail node
    Node* tail=head;
    while(tail->next){
        n++;
        tail=tail->next;  // finding last node
    }
    n++;    // for including last node
    k=k%n;
    if(k==0){
        return head;
    }
    tail->next=head;
    // 3.traverse n-k nodes 
    Node* temp=head;
    for(int i=1;i<n-k;i++){
        temp=temp->next;
    }
    // now temp is pointing to (n-k)th node
    Node* newhead=temp->next;
    temp->next=NULL;
    return newhead;
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
    ll1.head=RotateLLbyKth(ll1.head,3);
    ll1.display();

    
}