#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
string evaluate(string &pre){
    stack<string>st;
    reverse(pre.begin(),pre.end());
    int n=pre.size();
    for(int i=0;i<n;i++){
        if(isdigit(pre[i])){
            st.push(to_string(pre[i]-'0'));
        }
        else{
            string v1=st.top();
            st.pop();
            string v2=st.top();
            st.pop();
            string exp=v1+v2+pre[i];
            st.push(exp);
        }
    }
    return st.top();
}
int main(){
    string str="*+31-15";
    cout<<evaluate(str)<<endl;
    return 0;
}