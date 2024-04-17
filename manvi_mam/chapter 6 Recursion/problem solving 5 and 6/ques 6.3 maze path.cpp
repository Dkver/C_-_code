#include<iostream>
using namespace std;
int fun(int i,int j,int n, int m){
    if(i==n-1 && j==m-1){
        return 1;
    }
    if(i>=n || j>=m){
        return 0;
    }
    return fun(i,j+1,n,m)+fun(i+1,j,n,m);
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int m;
    cout<<"enter the value of m:";
    cin>>m;
    int i=0,j=0;
    cout<<fun(i,j,n,m);
    return 0;
}