#include<iostream>
using namespace std;
int main(){
    int arr[]={-10,12,11,21,23,46,2,25,-14,47};
    int len=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"the maximum element of the given array is:"<<max<<endl;
}