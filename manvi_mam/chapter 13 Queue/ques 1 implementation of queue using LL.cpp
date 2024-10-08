#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Queue{
    Node* head;
    Node* tail;
    int size;
public:
    Queue(){
        this->head=NULL;
        this->tail=NULL;
        this->size=0;
    }
    void enqueue(int data){
        Node* new_node=new Node(data);
        if(this->head==NULL){  // linked list is empty
            this->head=new_node;
            this->tail=new_node;
        }
        else{
            this->tail->next=new_node;
            this->tail=new_node;
        }
        this->size++;
    }
    void dequeue(){
        if(this->head==NULL){ // LL is empty
           return;
        }
        else{
            Node* oldHead=this->head;
            Node* new_head=this->head->next;
            this->head=new_head;
            if(this->head==NULL) this->tail=NULL;
            oldHead->next=NULL;
            delete oldHead;
            this->size--;
        }
    }
    int getsize(){
        return this->size;
    }
    bool isEmpty(){
        return this->head==NULL;
    }
    int getfront(){
        if(this->head==NULL){
            return -1;
        }
        return this->head->data;
    }
};
int main(){
    Queue qu;
    qu.enqueue(3);  // 3 5 8 
    qu.enqueue(5);
    qu.enqueue(8);
    qu.dequeue();   // 5 8
    qu.enqueue(22);
    qu.enqueue(7);   // 5 8 22 7 output
    while(not qu.isEmpty()){
        cout<<qu.getfront()<<" ";
        qu.dequeue();
    }
    return 0;
}