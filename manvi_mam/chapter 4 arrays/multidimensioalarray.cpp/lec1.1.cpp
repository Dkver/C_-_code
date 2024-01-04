#include<iostream>
using namespace std;
int main(){
    int n;      // no of rows
    cout<<"enter the value of n:";
    cin>>n;
    int m;   // no of column
    cout<<"enter the value of m:";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}