#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
/**
 * Time complexity = O(nlogn * m) where m is general length of string
 * Space Complexity= O(1)
*/
string LongestCommonPrefix(vector<string> &str){
    // sorting the array of string
    sort(str.begin(),str.end());
    int n=str.size();
    string s1=str[0]; //first string
    int i=0; //traverse the first string
    string s2=str[n-1]; // last string
    int j=0; //traversal of last string
    string ans="";
    int m=s1.size();
    int t=s2.size();
    while(i<m && j<t){
        if(s1[i]==s2[i]){
            ans+=s1[i];
            i++;
            j++;
        }
        else{
            break;
        }
    }
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