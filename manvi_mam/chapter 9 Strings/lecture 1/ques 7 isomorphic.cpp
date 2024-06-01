#include<iostream>
#include<string>
#include<vector>
using namespace std;
/**
 * Time complexity=O(n) where n is the length of string
 * space complexity= O(256) due to two frequency vector of each size is 128
*/
bool IsIsomorphic(string s1,string s2){
    int n=s1.length();
    int m=s2.length();
    if(n!=m){   // if string length does not match
        return false;
    }
    // frequency array s1
    vector<int> freq1(128,-1);
    vector<int> freq2(128,-1);
    for(int i=0;i<n;i++){
        if(freq1[s1[i]]!=freq2[s2[i]]){  // checking if the value of character of bothindex i match with both freq
            return false;
        }
       freq1[s1[i]]=freq2[s2[i]]=i; // storing string position of both the vector index i
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
    if(IsIsomorphic(s1,s2)){
        cout<<"the string is isomorphic"<<endl;
    }
    else{
        cout<<"the string is not isomorphic "<<endl;
    }
    return 0;
}
