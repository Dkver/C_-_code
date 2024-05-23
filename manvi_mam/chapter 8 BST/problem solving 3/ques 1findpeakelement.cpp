#include<iostream>
using namespace std;
int peakelementindex(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i] and arr[i]>arr[i+1]){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<peakelementindex(arr,n)<<" ";
    return 0;
}