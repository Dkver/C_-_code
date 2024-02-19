#include<iostream>
using namespace std;
int sum(int n){
    if(n>=0 && n<=9){
        return n;
    }
    else{
        return (n%10)+sum(n/10);
    }
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<sum(n);
    return 0;
}