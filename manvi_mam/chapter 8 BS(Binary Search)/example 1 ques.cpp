#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return false;
}
int main(){
    int k;
    cout<<"enter the value of k:";
    cin>>k;
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<linearsearch(arr,n,k)<<" ";
        return 0;
    }
