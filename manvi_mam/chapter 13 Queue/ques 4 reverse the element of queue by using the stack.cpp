#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(50);
    q.push(900);
    q.push(109);
    stack<int> s;
    while(not q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(not s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}