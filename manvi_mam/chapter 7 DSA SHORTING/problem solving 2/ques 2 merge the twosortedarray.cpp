#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    // pointers for these three array
    int a=0; // pointer of arr1
    int b=0; // pointer for arr2
    int c=0; // pointer for arr3
    while(a<n && b<m){
        if(arr1[a]<arr2[b]){
            arr3[c++]=arr1[a++];
        }
        else{
            arr3[c++]=arr2[b++];
        }
    }
    while(a<n){
        arr3[c++]=arr1[a++];
    }
    while(b<m){
        arr3[c++]=arr2[b++];
    }
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"enter the value of m:";
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int n3=n+m;
    int arr3[n3];
    merge(arr1,n,arr2,m,arr3);
    for(int i=0;i<n3;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    return 0;
}