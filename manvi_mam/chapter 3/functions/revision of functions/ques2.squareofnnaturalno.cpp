#include<iostream>
using namespace std;
int square(int n){
    int result=n*n;
    return result;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<square(i)<<" ";

    }
}