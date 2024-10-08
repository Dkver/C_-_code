#include<iostream>
#include<vector>
using namespace std;
class queue{
    int front;
    int back;
    vector<int> v;
public:
    queue(){
        front=-1;
        back=-1;
    }
    void enqueue(int data){
        v.push_back(data);
        back++;
        if(back==0){
            front=0;
        }
    }

    void dequeue(){
        if(front==back){
            front=-1;
            back=-1;
            v.clear();
        }
        else{
            front++;
        }
    }
    int getfront(){
        if(front==-1){
            return -1;
        }
        return v[front];
    }
    bool isEmpty(){
        return front==-1;
    }
};
int main(){
    queue qu;
    qu.enqueue(3);  // 3 5 8 
    qu.enqueue(5);
    qu.enqueue(8);
    qu.dequeue();   // 5 8
    qu.enqueue(22);
    qu.enqueue(7);   // 5 8 22 7 output
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    qu.enqueue(200);
    while(not qu.isEmpty()){
        cout<<qu.getfront()<<" ";
        qu.dequeue();
    }
    return 0;
}