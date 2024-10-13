#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int> v1(n);
    vector<int> v2(m);
    cout<<"enter the value of v1:"<<endl;
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    cout<<"enter the value of v2:"<<endl;
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    int ans_sum=0;
    set<int>s1;  // insert those vector which having repeated element
    for(auto ele:v1){
        s1.insert(ele);
    }

    for(auto ele:v2){    // iterate on those vector which does not having common element
        if(s1.find(ele)!=s1.end()){
            ans_sum+=ele;
        }
    }
    cout<<ans_sum<<endl;
    return 0;
}