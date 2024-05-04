#include<iostream>
using namespace std;
int partition(int arr[],int beg,int end){
    int pivot=arr[end];
    int i=beg-1;  // for insertng element
    int j=beg ;    // for finding element < pivot
    for( ; j<end; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    // now i is pointing to the last element <pivot
    // correct position for pivot will be - i+1
    swap(arr[i+1],arr[end]);
    return i+1;

}
void quicksort(int arr[],int beg,int end){
    // base case
    if(beg>=end){
        return;
    }
    // recursive case
    int pi=partition(arr,beg,end);
    quicksort(arr,beg,pi-1);
    quicksort(arr,pi+1,end);
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}