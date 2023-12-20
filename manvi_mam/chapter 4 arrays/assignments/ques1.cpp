#include<iostream>
using namespace std;
int main(){
    int evencount=0;
    int oddcount=0;
    int arr[]={1,2,3,13,4,5,6,7,8,9,0,12,13};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    cout<<"the number of evencout is:"<<evencount<<endl;
    cout<<"the number of oddcout is:"<<oddcount<<endl;
    
}
