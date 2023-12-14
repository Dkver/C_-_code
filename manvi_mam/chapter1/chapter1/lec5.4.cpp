#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    if(n%2==0 && n%3==0){
        cout<<n;
    }
    else{
        cout<<"false";
    }
}