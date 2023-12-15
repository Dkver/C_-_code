#include<iostream>
using namespace std;
int main(){
    int n,m;   // n= no of rows  m=no of columns
    cout<<"enter the value of n:";
    cin>>n;
    cout<<"enter the value of m:";
    cin>>m;
    for(int i=1;i<=n;i++){    // i= no of rows
        for(int j=1;j<=m;j++){  //j= no of columns
            if(i==1 || j==1 || i==n ||j==m){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}