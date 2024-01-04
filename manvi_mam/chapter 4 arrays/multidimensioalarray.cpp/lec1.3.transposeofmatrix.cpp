#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter the value of row r:";
    cin>>r;
    int c;
    cout<<"enter the value of column c:";
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int trans[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            trans[i][j]=arr[j][i];
        }
        cout<<endl;
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}