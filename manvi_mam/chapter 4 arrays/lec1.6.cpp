#include<iostream>
using namespace std;
int main(){
    int arr[]={-10,12,11,21,23,46,2,25,-14,47};
    int len=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"the minimum element of the given array is:"<<min<<endl;
}