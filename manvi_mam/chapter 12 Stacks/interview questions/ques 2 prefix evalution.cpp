 #include<iostream>
 #include<math.h>
 #include<stack>
 /**
  * Time Complexity=O(n)
  * Space complexity=O(n)
  */
 using namespace std;
 int calculate(int v1,int v2,char  op){
    if(op=='^'){
        return pow(v1,v2);
    }
    if(op=='*'){
        return v1*v2;
    }
    if(op=='/'){
        return v1/v2;
    }
    if(op=='+'){
        return v1+v2;
    }
    else{
        return v1-v2;
    }
 }
 int evaluate(string &str){
    stack<int> st;
    int n= str.size();
    for(int i=n-1;i>=0;i--){
        char ch=str[i];
        if(isdigit(ch)){
            st.push(ch-'0'); // ch-'0' because the value of ch is in ascii form if be subtract 0 from this then be can find the original value of the character 
        }
        else{
            int v1=st.top();
            st.pop();
            int v2=st.top();
            st.pop();
            st.push(calculate(v1,v2,ch));
        }
    }
    return st.top();
 }
 int main(){
    string str="-9+*531";
    cout<<evaluate(str);
    return 0;
 }