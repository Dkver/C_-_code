#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,13,4,5,6,7,8,9,0,12,13};
    int len=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=len-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=arr[temp];
    }
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    
}
