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
};

int main(){

}