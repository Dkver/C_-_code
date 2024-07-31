#include<iostream>
#include<vector>
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
};
vector<int> pairSum(Node* head,Node* tail,int x){
    vector<int> ans (2,-1);
    while(head!=tail){
        int sum=head->val+tail->val;
        if(sum==x){
            ans[0]=head->val;
            ans[1]=tail->val;
            return ans;
        }
        else if(sum<x){
            head=head->next;
        }
        else{
            tail=tail->prev;
        }
    }
    return ans;
}
int main(){
    DoublyLinkedList dll;
    dll.insertAtEnd(2);
    dll.insertAtEnd(5);
    dll.insertAtEnd(6);
    dll.insertAtEnd(8);
    dll.insertAtEnd(10);
    dll.Display();
    vector<int> ans=pairSum(dll.head,dll.tail, 11);
    cout<<ans[0]<<" "<<ans[1]<<endl;
     
    
    return 0;
}