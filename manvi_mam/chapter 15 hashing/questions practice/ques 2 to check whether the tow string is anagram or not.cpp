#include<iostream>
#include<unordered_map>
#include<vector>
/**
 * Time complexity= o(n) where n is the sum of length of s1 and s2
 */
using namespace std;
bool checkAnagram(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    unordered_map<char,int> m;
    
    for(auto c1:s1){
        m[c1]++;  // storing the character and there frequency of s1
    }
    for(auto c2:s2){
        if(m.find(c2)==m.end()){
            return false;
        }
        else{
            m[c2]--;
        }
    }
    for(auto ele: m){
        if(ele.second !=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s1;
    cout<<"enter the first string :"<<" ";
    cin>>s1;
    string s2;
    cout<<"enter the second string :"<<" ";
    cin>>s2;
    cout<<(checkAnagram(s1,s2) ? "Anagram" : "Not Anagram")<<endl;
     
    return 0;
}