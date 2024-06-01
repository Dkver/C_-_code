#include<iostream>
#include<string>
# include<algorithm>
using namespace std;
/**
 * Time Complexity= O(n) where n is the length of decoded string 
 * Space Complexity= O(n)  where n is the length of decoded string 
*/
string DecodedString(string &str){
    // traversing the encoded string 
    string result="";
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]!=']'){
            result.push_back(str[i]);
        }
        else{
            // stract str fron result 
            string s="";
            while(!result.empty() && result.back()!='['){  //result.back give the last character of the string
                s.push_back(result.back());
                result.pop_back();
            }
            // reversing the s  
            reverse(s.begin(),s.end());
            // remove last character from result which is [
            result.pop_back();

            // stract number from the result
            string num="";
            while(!result.empty() && (result.back()>='0' && result.back()<='9')){
                num.push_back(result.back());
                result.pop_back();
            }
            // reversing the num string
            reverse(num.begin(),num.end());
             
             // convert string to integer
             int int_num=stoi(num);  // stoi convert the num string to num integer 
              
              // inserting str in result int_num times
              while(int_num){
                result+=s;
                int_num--;
              }
        }
    }
    return result;
}
int main(){
    string str;
    cout<<"enter the string :";
    cin>>str;
    cout<<DecodedString(str)<<endl;
    return 0;
}