#include<iostream>
#include<queue>    // by using header file of queue
using namespace std;
int main(){
    queue<int> q; // creation of queue
    q.push(3);  // work as enqueue
    q.push(6);
    q.push(5);
    q.push(8);
    q.push(9);
    q.push(0);
    q.pop();  // work as dequeue
    q.pop();
    while(not q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}