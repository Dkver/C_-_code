#include<iostream>
using namespace  std;
int main(){
    int arr[]={1,1,4,3,6,3,8,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<arr[i]<<" ";
        }
    }
}
