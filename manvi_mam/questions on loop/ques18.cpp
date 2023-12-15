#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    int res=1;
    for(int i=1;i<=b;i++){
        res=res*a;
    }
    cout<<res;
}