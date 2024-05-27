#include<iostream>
using namespace std;
int Binarysearch(int arr[],int n,int target){
    int beg=0;
    int end=n-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;   // it is modify to tracle overflow condition // mid= (beg+end)/2
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
int BinarysearchRecursive(int arr[],int target,int beg,int end){
    if(beg>end){
        return -1;
    }
    int mid=beg+(end-beg)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]<target){
        return BinarysearchRecursive(arr,target,mid+1,end);
    }
    else{
        return BinarysearchRecursive(arr,target,beg,mid-1);
    }
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
    cout<<BinarysearchRecursive(arr,target,0,n-1)<<endl;
    //cout<<Binarysearch(arr,target,n)<<endl;
        return 0;
    }
