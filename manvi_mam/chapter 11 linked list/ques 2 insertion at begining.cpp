#include<iostream>
using namespace std;
/**
 * Time Complexity=O(1)
 * Space Complexity=O(1)
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
    return 0;
}