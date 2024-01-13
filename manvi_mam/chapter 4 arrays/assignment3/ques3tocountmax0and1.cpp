#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int count0=0;
    int count1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0  || arr[i]==1){
            count0++;
        }
        else{
            count1++;
        }
    }
    if(count0==count1){
        cout<<count0+count1;
    }
    return 0;
}

