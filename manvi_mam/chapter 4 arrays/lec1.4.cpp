#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        sum=sum+arr[i];
    }
    cout<<"sum of the array is:"<<sum<<endl;
}