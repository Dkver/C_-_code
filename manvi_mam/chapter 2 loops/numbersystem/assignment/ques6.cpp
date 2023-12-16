#include<iostream>
using namespace std;
int main(){
    int a,b, temp;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    cout<<a<<endl<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<endl<<b<<endl;

}