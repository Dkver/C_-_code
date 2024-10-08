#include<iostream>
#include<climits>  // it is used for INT_MIN
using namespace std;
int secMax(int arr[],int n){
    if(n<2){
        cout<<"the array contain less then or equal to 1 element:";
        return INT_MIN;
    }
    int Fmax=INT_MIN;
    int Smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>Fmax){
            Smax=Fmax;
            Fmax=arr[i];
        }
        else if(arr[i]>Smax and arr[i]!=Fmax){
            Smax=arr[i];
        }
    }
    if(Smax==INT_MIN){
        cout<<"there is no second largest element";
        return INT_MIN;
    }
    return Smax;

}
int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int secondLargest=secMax(arr,n);
    cout<<secondLargest<<endl;
    return 0;
}