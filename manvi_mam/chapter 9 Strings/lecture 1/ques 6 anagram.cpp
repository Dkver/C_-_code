#include<iostream>
#include<string>
#include<vector>
using namespace std;
/**
 * Time complexity=O(length of the string)
 * space complexity=O(26) which is constant
*/
bool isAnagram(string s1,string s2){
    vector<int> freq(26,0);
    // frequency of the words in s1
    int n=s1.length();
    int m=s2.length();
    if(n!=m){
        return false;
    }
    // store frequency of string s1 and s2
    for(int i=0;i<n;i++){
        freq[s1[i]-'a']++; //for s1 , incrementing frequency of char
        freq[s2[i]-'a']--; // for s2 ,decremenbting frequency of char
    }
    // checking the frequency of every character is 0 or not
    for(int i=0;i<26;i++){
        if(freq[i]!=0){  // means not anagram
            return false;
        }
    }
    return true;
}
int main(){
    string s1;
    cout<<"enter the first string:";
    cin>>s1;
    string s2;
    cout<<"enter the second string:";
    cin>>s2;
    if(isAnagram(s1,s2)){
        cout<<"The strings is anagram"<<endl;
    }
    else{
        cout<<"The string is not anagram"<<endl;
    }
    return 0;
}