#include<iostream>
#include<map>
using namespace std;

int main(){
    /**
     * Time Complexity of insertion=O(logn)
     */
    map<string,long long> m;
    m["Deepak"]= 9026977654;
    m["Vaibhav"]= 9305406532;
    m["deepali"]= 9303677523;
    m["geetu"]= 9073829064;
    for(auto ele:m){
        
        cout<<"Name-"<<ele.first<<endl;   
        cout<<"Value-"<<ele.second<<endl;
    }
    return 0;
}