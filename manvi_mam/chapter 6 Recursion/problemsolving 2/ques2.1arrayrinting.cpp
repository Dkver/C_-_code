#include<iostream>
using namespace std;
void fun(int *arr,int idx,int n){
    if(idx==n) return;
    cout<<arr[idx]<<endl;
    fun(arr,idx+1,n);
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
    fun(arr,0,n);
    return 0;
}