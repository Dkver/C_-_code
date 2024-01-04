#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void runningsum(vector<int> &v){
    for(int i=1;i<v.size();i++){
        v[i]=v[i]+v[i-1];
    }
    return;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    runningsum(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0; 
}