#include<iostream>
#include<stack>
using namespace std;
class queue{
public:
    stack<int> st;
   queue(){}
   /**
    * Time: O(1)
    */
    void push(int x){  // queue.enque()
        st.push(x);
    }
    void pop(){  // queue.dequeue()
    /**
    * Time: O(n)
    */
        if( st.empty()) return;
        stack<int> temp;
        while(st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        // now we are at the bottom element of the st
        st.pop();
        while(not temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }
    bool empty(){
        return st.empty();
    }
    int front(){
        /**
    * Time: O(n)
    */
        if( st.empty()) return -1;
        stack<int> temp;
        while(st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        // now we are at the bottom element of the st
        int result=st.top();
        while(not temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return result;
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