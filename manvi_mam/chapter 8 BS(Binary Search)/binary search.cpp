#include<iostream>
using namespace std;
int Binarysearch(int arr[],int n,int target){
    int beg=0;
    int end=n-1;
    while(beg<=end){
        int mid=(beg+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            beg=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int target;
    cout<<"enter the value of target:";
    cin>>target;
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Binarysearch(arr,n,target)<<" ";
        return 0;
    }
