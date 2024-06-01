#include<iostream>
#include<string>
using namespace std;
/**
 * Time Complexity=O(n)  where n is the length of input string
 * Space Complexity=O(1)
*/
int Maxonescountbyflipingkthzeros(string str,int k){
    int n=str.length();
    int start=0;
    int end=0;
    int zero_count=0;
    int max_length=0;
    for(;end<n;end++){
        if(str[end]=='0'){
            zero_count++;
        }
        while(zero_count>k){
            if(str[start]=='0') zero_count--;
            start++;  // contracting our window
        }
        // zero_count<=k
        max_length=max(max_length,end-start+1);
    }
    return max_length;
}
int main(){
    string str;
    cout<<"enter the binary string:";
    cin>>str;
    int k;
    cout<<"enter the value of k which flips 0's to 1's:";
    cin>>k;
    cout<<Maxonescountbyflipingkthzeros(str,k)<<endl;
    return 0;
}