#include<iostream>
using namespace std;
int firstoccurance(int arr[],int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
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
    cout<<firstoccurance(arr,n,x)<<endl;
    return 0;
}