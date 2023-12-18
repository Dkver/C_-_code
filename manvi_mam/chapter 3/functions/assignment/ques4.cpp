#include<iostream>
using namespace std;
bool odd(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            return false;
        }
        return true;
    }
}
int main(){
    int a,b;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    for(int i=a;i<=b;i++){
       if(odd(i)){
        cout<<i<<" ";
      }
    }
}