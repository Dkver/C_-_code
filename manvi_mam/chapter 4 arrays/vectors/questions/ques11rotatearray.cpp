#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"enter the value of k:";
    cin>>k;
    k=k%n;
    int ans[n];
    int j=0;
    //inserting the last k elements in ans array
    for(int i=n-k;i<n;i++){
        ans[j++]=arr[i];
    }
    // inserting the first n-k elements in ans array
    for(int i=0;i<n-k;i++){
        ans[j++]=arr[i];
    }
    // printing the ans array
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;

}