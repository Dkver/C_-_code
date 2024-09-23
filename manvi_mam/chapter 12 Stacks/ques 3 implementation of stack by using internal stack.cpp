#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.push(10);
    cout<<st.top()<<"\n";
    st.push(6);
    st.push(7);
    cout<<st.top()<<"\n";
    st.pop();
    st.pop();
    st.pop();
    cout<<st.top()<<"\n";
    return 0;

}