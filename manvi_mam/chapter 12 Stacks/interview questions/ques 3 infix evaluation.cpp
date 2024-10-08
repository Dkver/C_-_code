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
 int precedence(char ch){
    if(ch=='^') return 3;
    else if(ch=='*' or ch=='/' ) return 2;
    else if(ch=='+' or ch=='-') return 1;
    else return -1;
 }
 
 int evaluate(string &str){
    stack<int> num;
    stack<int> op;
    int n=str.size();
    for(int i=0;i<n;i++){
        if(isdigit(str[i])){
            num.push(str[i]-'0');
        }
        else if(str[i]=='('){
            op.push('(');
        }
        else if(str[i]==')'){
            while(not op.empty() and op.top()!='('){
            char ops=op.top();
            op.pop();
            int v1=num.top();
            num.pop();
            int v2=num.top();
            num.pop();
            num.push(calculate(v1,v2,ops));
            }
            if(not op.empty()) op.pop();
        }
        else{
            while(not op.empty() and precedence(op.top()) >=precedence(str[i])){
                char ops=op.top();
                op.pop();
                int v1=num.top();
                num.pop();
                int v2=num.top();
                num.pop();
                num.push(calculate(v1,v2,ops));
            }
            op.push(str[i]);
        }
    }
    while(not op.empty()){
        char ops=op.top();
        op.pop();
        int v1=num.top();
        num.pop();
        int v2=num.top();
        num.pop();
        num.push(calculate(v1,v2,ops));
    }
    return num.top();
 }
 int main(){
    string str="1+(2*3)*5+(4+8)";
    cout<<evaluate(str);
    return 0;
 }