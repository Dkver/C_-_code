#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"enter the value of x:";
    cin>>x;
    int i=0;
    int j=n-1;
    int count=0;
    while(i<j){
        if(arr[i]+arr[j]==x){
            count++;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]>x){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<count;
    return 0;
}