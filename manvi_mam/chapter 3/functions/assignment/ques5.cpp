#include<iostream>
using namespace std;
bool prime(int n){
    
        if(n%2!=0){
            return true;
        }
        return false;
    }

int main(){
    int a,b;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    for(int i=a;i<=b;i++){
       if(prime(i)){
        cout<<i<<" ";
      }
    }
}