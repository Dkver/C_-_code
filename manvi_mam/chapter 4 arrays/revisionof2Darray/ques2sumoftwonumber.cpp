#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the value of n:";
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
    // to find the sum of two number is equal to x
    int i=0;
    int j=1;
    bool found =false;
    while(i<j){       // if two pairs equal then (i<=j)
        if(arr[i]+arr[j]==x){
            found=true;
            break;
        }
        else if(arr[i]+arr[j]>x){
            j--;
        }
        else{
            i++;
        }
    }
    if(found==true){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}