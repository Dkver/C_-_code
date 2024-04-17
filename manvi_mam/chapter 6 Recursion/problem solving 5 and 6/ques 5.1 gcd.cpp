#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b>a) return gcd(b,a);
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int a;
    cout<<"enter the value of a:";
    cin>>a;
    int b;
    cout<<"enter the value of b:";
    cin>>b;
    cout<<gcd(a,b);
    return 0;
}