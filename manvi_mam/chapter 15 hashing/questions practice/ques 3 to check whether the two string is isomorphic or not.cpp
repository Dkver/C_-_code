#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
/**
 * Time Complexity= O(N) where N is the sum of the length of both the string
 * Space Complexity= O(n) where n is the number of unique character
 */
bool checkNoOneToManyMapping(string s1,string s2){
    unordered_map<char,char>m;
    int n=s1.length();
    for(int i=0;i<n;i++){
        if(m.find(s1[i])!=m.end()){
            if(m[s1[i]]!=s2[i]){
                return false;
            }
        }
        else{
            m[s1[i]]=s2[i];
        }
    }
    return true;
}
bool checkIsomorphic(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    
    // checking one to many mapping from s1-> s2
    bool s1s2=checkNoOneToManyMapping(s1,s2);
    
    // checking for one to many from s2->s1
    bool s2s1=checkNoOneToManyMapping(s2,s1);
    return s1s2 && s2s1;
}  
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<(checkIsomorphic(s1,s2)? "Is isomorphic" : "not isomorphic");
    return 0;
}