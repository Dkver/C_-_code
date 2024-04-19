#include<iostream>
#include<vector>
using namespace std;
void fun(string &str,int i,string result,vector<string> &li,vector<string> &v){
    if(i==str.size()){
        li.push_back(result);
        return;
    }
    int digit=str[i]-'0';
    if(digit<=1){
        fun(str,i+1,result,li,v);
        return;
    }
    for(int j=0;j<v[digit].length();j++){
        fun(str,i+1,result+v[digit][j],li,v);
    }
    return;
}
int main(){
    vector<string> v (10);
    v={"", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string str="23";
    vector<string>li;
    fun(str,0,"",li,v);
    for(int i=0;i<li.size();i++){
        cout<<li[i]<<" ";
    }
    return 0;
}