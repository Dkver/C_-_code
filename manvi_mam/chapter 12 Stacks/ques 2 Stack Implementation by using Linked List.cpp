#include<iostream>
#include<climits>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int d){
            this->data=d;
            this->next=NULL;
        }
};
class Stack{
    Node* head;
    int capacity;
    int currentsize;
    public:
    Stack(int c){
        this->capacity=c;
        this->currentsize=0;
        head=NULL;
    }
    bool isEmpty(){
        return this->head==NULL;
    }
    bool isFull(){
        return this->currentsize==this->capacity;
    }
    void push(int data){
        if(this->currentsize==this->capacity){
            cout<<"stack overflow"<<endl;
            return;
        }
        Node* new_node=new Node(data);
        new_node->next=this->head;
        this->head=new_node;
        this->currentsize++;
    }
    int pop(){
        if(this->head==NULL){
            cout<<"satck underflow"<<endl;
            return INT_MIN;
        }
        Node* new_head=this->head->next;
        this->head->next=NULL;
        Node* tobeRemoved=this->head;
        int result=tobeRemoved->data;
        delete tobeRemoved;
        this->head=new_head;
        return result;

    }
    int size(){
        return this->currentsize;
    }
    int  gettop(){
       if(this->head==NULL){
            cout<<"satck underflow"<<endl;
            return INT_MIN;
        }
        return this->head->data; 
    }
};
int main(){
    Stack st(5);
    st.push(1);
    st.push(3);
    st.push(5);
    cout<<st.gettop()<<"\n";
    st.push(6);
    st.push(8);
    cout<<st.gettop()<<"\n";
    st.push(9);
    st.pop();
    st.pop();
    cout<<st.gettop()<<"\n";
    return 0;
}