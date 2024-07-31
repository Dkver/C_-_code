#include<iostream>
using namespace std;
class Node{  // initialization
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int data){ // constructor
        val=data;
        prev=NULL;
        next=NULL;
    }
};
class DoublyLinkedList{ // creation of doubly linked list
    public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){ // constructor
        head=NULL;
        tail=NULL;
    }
    void Display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
        cout<<endl;
    }
    void insertAtEnd(int val){
       Node* new_node=new Node(val);
       if(tail==NULL){
        head=new_node;
        tail=new_node;
        return;
       } 

       tail->next=new_node;
       new_node->prev=tail;
       tail=new_node;
    
    }
    /**
     * Time Complexity=O(k) where k is the position
     */
    void insertAtKthPos(int val, int k){
        // assuming k is less or equal to the length of doubly linked list
       Node* temp=head;
       int count=1;
       while(count<(k-1)){
        temp=temp->next;
        count++;
       }

       // temp is pointing to the k-1 position

       Node* new_node=new Node(val);
       new_node->next=temp->next;
       temp->next=new_node;
       new_node->prev=temp;
       new_node->next->prev=new_node;
       return;
    }
    bool CheckPalindrome(Node* head,Node* tail){
        while(head!=tail && tail!=head->prev){
            if(head->val!=tail->val){
                return false;
            }
            head=head->next;
            tail=tail->prev;
        }
        return true;
    }
};
int main(){
    DoublyLinkedList dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(3);
    dll.insertAtEnd(5);
    dll.insertAtEnd(1);
    dll.Display();
    cout<<dll.CheckPalindrome(dll.head,dll.tail)<<endl;
    
    return 0;
}