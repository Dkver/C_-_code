#include<iostream>
#include<stack>
using namespace std;

/**Time complexity =O(n)
 * Space complexity= O(n)
 */
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
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insertAtBottom(st,5);
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}