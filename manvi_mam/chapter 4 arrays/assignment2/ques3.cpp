#include<iostream>
#include<vector>
using namespace std;
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
    int k;
    cout<<"enter the value of k:";
    cin>>k;
    int sum;
    for(int i=1;i<n;i++){
        sum=v[i]+v[i-1];
    }
    if(sum==k){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}