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
class CircularLinkedList{
    public:
    Node* head;
    CircularLinkedList(){
        head=NULL;
    }
    void display(){
        Node* temp=head;
        do{
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        while (temp!=head);
        cout<<endl;
    }
    void PrintCircular(){
        Node* temp=head;
        for(int i=0;i<15;i++){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
    void insertAtBeg(int val){
    Node* new_node=new Node(val);
    if(head==NULL){
       head=new_node;
       new_node->next=head;// due to circular linked list
       return; 
    }
    Node* tail=head;
    while(tail->next!=head){
        tail=tail->next;
    }
    // now we are at end of the cll
    tail->next=new_node;
    new_node->next=head;
    head=new_node;
}
    void insertAtEnd(int val){
    Node* new_node=new Node(val);
    if(head==NULL){
       head=new_node;
       new_node->next=head;// due to circular linked list
       return; 
    }
    Node* tail=head;
    while(tail->next!=head){
        tail=tail->next;
    }
    // now we are at end of the cll
    tail->next=new_node;
    new_node->next=head;
    
}
};

int main(){
   CircularLinkedList cll;
   cll.insertAtBeg(3);
   cll.insertAtBeg(5);
   cll.insertAtBeg(7);
   cll.insertAtBeg(9);
   cll.insertAtBeg(11);
   cll.insertAtBeg(31);
   cll.display();
   cll.PrintCircular();
   cll.insertAtEnd(5);
   cll.display();
   cll.PrintCircular();
   return 0; 
}