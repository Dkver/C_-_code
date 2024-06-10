#include<iostream>
using namespace std;
/**
 * Time Complexity=O(n)
 * Time Complexity=O(1) if the tail pointer is given in the question
 */
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }
};
void InsertAtBegining(Node* &head,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}
void InsertAtEnd(Node* &head,int val){
    Node* new_node=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head=NULL;
    InsertAtBegining(head,10);
    display(head);
    InsertAtBegining(head,20);
    display(head);
    InsertAtEnd(head,30);
    display(head);
    return 0;
}