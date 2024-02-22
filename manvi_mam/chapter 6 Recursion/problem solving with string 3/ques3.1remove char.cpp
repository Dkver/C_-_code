#include<iostream>
using namespace std;
string remove(string &s,int idx,int n){
    if(idx==n)  return " ";
    string current=" ";
    current+=s[idx];
    return ((s[idx]=='a') ? " " : current) + remove(s,idx+1,n);
}
int main(){
    string s="abcax";
    int n=5;
    cout<<remove(s,0,n);
    return 0;
}