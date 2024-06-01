#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
/**
 * Time complexity = O((n-1)*m) where n-1 is number of string and m is the general length of string 
 * Space Complexity= O(1)
*/
string LongestCommonPrefix(vector<string> &str){
   // keeping first string as constant and comparing with all string
   string s1=str[0];
   int m=s1.size();
   int ans_length=m;
   int n=str.size();
   for(int i=0;i<n;i++){
    int j=0;
    while(j<m && j<str[i].size() && s1[j]==str[i][j]) // finding the common prefix
        j++;
    ans_length=min(ans_length,j); // updating length of ans string
   }
   string ans=s1.substr(0,ans_length);
   return ans;
}
int main(){
    int n;
    cout<<"enter the number of string:";
    cin>>n;
    cout<<"enter strings:";
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<"longest common perfix is:"<<LongestCommonPrefix(str)<<endl;
    return 0;
}