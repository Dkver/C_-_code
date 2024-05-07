#include<iostream>
#include<limits.h>
using namespace std;

int partition(int arr[],int beg,int end){
    int pivot=arr[end];
    int i=beg;
    for(int j=beg;j<end;j++){
        if(arr[j]<pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[end]);
    return i;
}

int kthsmallest(int arr[],int beg,int end,int k){
    if(k>0 && k<=end-beg+1){
        int pos=partition(arr,beg,end); // position of pivot element
        if(pos-beg==k-1){
            return arr[pos];
        }
        else if(pos-beg>k-1){
            return kthsmallest(arr,beg,pos-1,k);
        }
        else{
            return kthsmallest(arr,pos+1,end,k-(pos-beg+1));
        }
    }
    return INT_MAX;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int k;
    cout<<"enter the value of k:";
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<kthsmallest(arr,0,n-1,k)<<endl;
    return 0;
}
