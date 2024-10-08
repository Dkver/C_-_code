#include<iostream>
#include<vector>
using namespace std;
class queue{
    int front;
    int back;
    vector<int> v;
    int cs;
    int ts;
public:
    queue(int n){
        v.resize(n);
        front=n-1;
        back=0;
        cs=0;
        ts=n;
    }
    void enqueue(int data){
        if(isFull()) return;
       back=(back+1)%ts;
       v[back]=data;
       cs++;
    }

    void dequeue(){
       if(isEmpty()) return;
        front=(front+1)%ts;
        cs--;
    }
    int getfront(){
        if(front==-1){
            return -1;
        }
        return v[front];
    }
    bool isEmpty(){
        return cs==0;
    }
    bool isFull(){
        return cs==ts;
    }
};
int main(){
    queue qu(4);
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