#include<iostream>
using namespace std;
int main(){
    int arr[2]={5,4};
    int *ptr=&arr[0];
    cout<<(*ptr)++<<"  "<<endl;  //first print the value then increase(postfix)
    cout<<arr[0]<<"  "<<arr[1]<<endl;
    cout<<*++ptr<<"  "<<endl;     // first increase the pointer then print
    cout<<arr[0]<<"   "<<arr[1]<<endl;
    cout<<++*ptr<<endl;            // first increase the value the print
    cout<<arr[0]<<"   "<<arr[1];
    return 0;
}