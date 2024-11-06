#include<iostream>
using namespace std;
void permutation(string &str, int i){
    // base case
    int n=str.size();
    if(i==n){
        cout<<str<<" ";
        return ;
    }
    for(int j=i;j<n;j++){
        swap(str[i],str[j]);  // swaping
        permutation(str,i+1);
        swap(str[i],str[j]); // step of reversal known as backtracking
    }
}
int main(){
    string str="ABCD";
    permutation(str,0);
    return 0;
}