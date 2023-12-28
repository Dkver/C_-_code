#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter the value of m:";
    cin>>m;
    vector<int>v1(m-1,0);
    for(int i=0;i<m;i++){
        cin>>v1[i];
    }
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    vector<int>v2(n-1,0);
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    vector<int>v(m+n-1,0);
    for(int i=0;i<m+n;i++){
        if(i<m){
            v[i]=v1[i];
        }
        else if(i>=m){
            v[i]=v2[i-m];
        }
    }
    for(int i=0;i<m+n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}