#include<iostream>
#include<vector>
#include<algorithm>  // reverse is the function of algorithms
using namespace std;
void rotateArray(vector<vector<int>>&v){
    //transpose
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    // reverse every row
    for(int i=0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
    }
    return;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    rotateArray(v);   // by 90 degree
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}