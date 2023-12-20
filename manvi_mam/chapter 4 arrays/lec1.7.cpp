#include<iostream>
using namespace std;
int main(){
    int arr[]={-10,12,11,21,23,46,2,25,-14,47};
    int len=sizeof(arr)/sizeof(arr[0]);
    int key=47;
    int ans=-1;
    for(int i=0;i<len;i++){
        if(arr[i]==key){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}