#include<iostream>
using namespace std;
int sum(int *arr,int idx,int n){
    if(idx==n-1){
        return arr[idx];
    }
    return arr[idx]+sum(arr,idx+1,n);
}
int main(){
    int n;                           // time complexity =O(n)  space complexity= O(n)
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"enter element"<<"  ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sum(arr,0,n);
    return 0;
}