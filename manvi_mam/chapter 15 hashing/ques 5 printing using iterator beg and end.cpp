#include<iostream>
#include<map>

using namespace std;

int main(){
    /**
     * Time Complexity of insertion=O(logn)
     */
    map<string,long long> m;
    m["Deepak"]= 902697454;
    m["Vaibhav"]= 9305407116;
    m["deepali"]= 9303677890;
    m["geetu"]= 9073829683;
    m["geetu"]=8743653783;
    for(auto ele:m){
        
        cout<<"Name-"<<ele.first<<endl;   
        cout<<"Value-"<<ele.second<<endl;
    }cout<<endl;
    map<string,long long>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
        cout<<itr->first<<"- "<<itr->second<<endl;
    }
    return 0;
}