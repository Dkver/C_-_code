#include<iostream>
#include<stack>
using namespace std;
class queue{
    stack<int> st;
public:
    queue(){}
    /**
     * Time: O(n)
     */
    void push(int x){  // queue.enque()
        stack<int> tmp;
        while(not st.empty()){
            tmp.push(st.top());
                st.pop();
            }
            st.push(x);
            while(not tmp.empty()){
                st.push(tmp.top());
                tmp.pop();
            }
    }
    void pop(){  // queue.dequeue()
    /**
     * Time: O(1)
     */
    if(st.empty()) return ;
        st.pop();
    }
    bool empty(){
        return st.empty();
    }
    int front(){
        if(st.empty()) return -1;
        return st.top();
    }     
};
int main(){
    queue q; // creation of queue
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