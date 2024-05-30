#include<iostream>
#include<string>
#include<vector>
using namespace std;
/**
 Time complexity=O(length of string)
*/
string sortedstring(string str){
    vector<int> freq(26,0);
    //sorting frequency of every character 
    int n=str.length();
    for(int i=0;i<n;i++){
        int index=str[i]-'a';
        freq[index]++;
    }
    //create our sorted string
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            str[j]=i+'a';
            j++;
        }
    }
    return str;
}
int main(){
    string str;
    cout<<"enter the string :";
    cin>>str;
    cout<<sortedstring(str)<<endl;
    return 0;
}