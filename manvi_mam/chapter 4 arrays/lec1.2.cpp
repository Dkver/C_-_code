#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    // for loop
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //for each loop
    for( int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    // while loop
    int index=0;
    while(index<len){
        cout<<arr[index]<<" ";
        index++;
    }
}