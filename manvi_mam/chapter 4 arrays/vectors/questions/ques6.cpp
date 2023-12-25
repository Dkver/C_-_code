#include<iostream>
using namespace std;
int main(){
    int targetsum;
    cout<<"enter the value of target sum:";
    cin>>targetsum;
    int pair=0;
    int arr[]={1,5,3,4,2,0,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==targetsum){
            pair++;
        }
    }
    }
    cout<<pair<<endl;
}