#include<iostream>
#include<limits.h>
using namespace std;
int largestelementindex(int arr[],int n){
    int max=INT_MIN;
    int maxindex=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            maxindex=i;
        }
    }
    return maxindex;
}
int main(){
    int arr[]={1,5,7,9,3,9,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int indexoflargest=largestelementindex(arr,n);
    cout<<arr[indexoflargest]<<endl;
    //arr[indexoflargest]=-1;
    int largestelement=arr[largestelementindex(arr,n)];
    for(int i=0;i<n;i++){
        if(arr[i]==largestelement){
            arr[i]=-1;
        }
    }
    int indexofsecondlargest=largestelementindex(arr,n);
    cout<<arr[indexofsecondlargest]<<endl;
    return 0;

}