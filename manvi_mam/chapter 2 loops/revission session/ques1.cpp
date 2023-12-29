#include<iostream>
using namespace std;
int main(){
    //for loop
    for(int i=1;i<=10;i++){
        cout<<i<<" ";
    }
    // while loop
    int i=1;
    while(i<=10){
        cout<<i<<" ";
        i++;
    }
    //do while loop
   
    do{
        cout<<i<<" ";
        i++;
    }
    while(i<=10);
    return 0;
}