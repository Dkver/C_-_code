#include<iostream>
using namespace std;
int fun(int n){
    if(n==0){
        return 0;
    }
    else{
        return fun(n-1)+((n%2==0) ? (-n) : (n));
    }
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<fun(n);
    return 0;
}