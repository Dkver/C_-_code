#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
/**
 * Time Complexity=O(n) where  n is the number of character in the every string
 * Space complexity=O(m) where m is the unique character in the every string
 */
bool canMakeEqual(vector<string> &v){
    unordered_map<char,int> m;
    for(auto str: v){  // it traversing the each string in the vector 
       for(char c: str){ // it traverse the each character of every string in v
            m[c]++; // it insert the unique character with the frequency
       }
    }
    int n=v.size();
    for(auto ele: m){ // it give the pair of values of mapping
        if(ele.second%n!=0){
            return false;
        }
        
    }
    return true;
}
int main(){
    int n;
    cout<<"enter the value of the size of array:"<<"";
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<(canMakeEqual(v) ? "yes" : "no")<<endl;

}