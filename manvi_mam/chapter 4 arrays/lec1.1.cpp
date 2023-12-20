#include<iostream>
using namespace std;   
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    cout<<sizeof(arr)<<endl;
    cout<<"number of  element is:"<<sizeof(arr)/sizeof(arr[0])<<endl;
}