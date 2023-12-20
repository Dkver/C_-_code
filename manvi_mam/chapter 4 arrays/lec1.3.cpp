#include<iostream>
using namespace std;
int main(){
    char arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // by using for each loop
    for(char ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    // by using while loop
    int index=0;
    while(index<5){
        cout<<arr[index]<<" ";
        index++;
    }
}