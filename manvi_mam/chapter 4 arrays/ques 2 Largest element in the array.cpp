#include<iostream>
#include<climits>  // it is used for INT_MIN
using namespace std;
int firstMax(int arr[],int n){
    
    int Fmax=INT_MIN;
    
    for(int i=0;i<n;i++){
        if(n<2){
            return arr[i];
        }
        else if(arr[i]>Fmax){
            Fmax=arr[i];
            
        }
    }
    return Fmax;

}
int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int firstLargest=firstMax(arr,n);
    cout<<firstLargest<<endl;
    return 0;
}