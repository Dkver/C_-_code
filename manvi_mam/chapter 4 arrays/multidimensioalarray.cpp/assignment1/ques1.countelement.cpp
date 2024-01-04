#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;    // no of rows
    cout<<"enter the value rows n:";
    cin>>n;
    int m;    // no of column
    cout<<"enter the value of column m:";
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
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
        
    }
    cout<<max;
    return 0;
}