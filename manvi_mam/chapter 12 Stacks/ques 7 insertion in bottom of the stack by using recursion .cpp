#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &st ,int x){
    stack<int> temp;
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);  // it is the point where the x got inserted at the bottom
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        st.push(curr);
    }
}
/**Time complexity =O(n)
 * Space complexity= O(n)
 */
void f(stack<int> &st, int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int curr=st.top();
    st.pop();
    f(st,x);
    st.push(curr);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    f(st,5);
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}