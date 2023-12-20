#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,13,4,5,6,7,8,9,0,12,13};
    int len=sizeof(arr)/sizeof(arr[0]);
    int greatest=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]>greatest){
            greatest=arr[i];
        }
     }
     cout<<"the greatest element is:"<<greatest<<endl;
     int smallest=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
     }
     cout<<"the smallest element is:"<<smallest<<endl;
     int sum;
     sum=greatest+smallest;
     cout<<"the sum of greatest and smallest elements is :"<<sum<<endl;
}
