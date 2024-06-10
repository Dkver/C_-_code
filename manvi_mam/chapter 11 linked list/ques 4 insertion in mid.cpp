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
void insertInbetween(Node* &head,int val,int pos){
    if(pos==0){
        InsertAtBegining(head,val);
        return;
    }
    Node* new_node=new Node(val);
    Node* temp=head;
    int current_pos=0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;
    }
    // at the end of above loop my temp pointer is pointint to pos-1
    new_node->next=temp->next;
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
    insertInbetween(head,40,1);
    display(head);
    return 0;
}