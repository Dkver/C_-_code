#include<iostream>
using namespace std;
bool primenumber(int x){
    for(int i=2;i<=(x-1);i++){
        if(x%i==0)
        return false;
    }
    return true;
}
int main(){
    int a;
    cout<<"enter the value of a:";
    cin>>a;
    int b;
    cout<<" enter the value of b";
    cin>>b;
    for(int i=a;i<=b;i++){
        if(primenumber(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}