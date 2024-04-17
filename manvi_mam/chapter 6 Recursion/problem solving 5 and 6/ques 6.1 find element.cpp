#include<iostream>
using namespace std;
bool fun(int* arr,int n,int i,int x){
    if(i==n){
        return false;
    }
    else{
        return (arr[i]==x) || fun(arr,n,i+1,x);
    }
}
int main(){
    int x;
    cout<<"enter the value of x:";
    cin>>x;
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool result=fun(arr,n,0,x);
    if(result) cout<<"yes";
    else cout<<"no";
    return 0;
}