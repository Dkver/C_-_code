#include<iostream>
using namespace std;
int firstoccurance(int arr[],int n, int x){
    /**time=O(logn)
     * space=O(1)
    */
    int ans=-1;
    int beg=0;
    int end=n-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(arr[mid]==x){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>x){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    return ans;
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