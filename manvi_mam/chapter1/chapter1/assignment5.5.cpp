#include<iostream>
using namespace std;
int main(){
    char operation;
    cout<<"enter the character '+', '-','/','*'";
    cin>>operation;
    int x,y;   
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of y:";
    cin>>y;
    switch(operation){
        case '+':
            cout<<"x"<<"+"<<"y"<<"="<<x+y<<endl;
            break;
        case '-':
            cout<<"x"<<"-"<<"y"<<"="<<x-y<<endl;
            break;
        case '*':
            cout<<"x"<<"*"<<"y"<<"="<<x*y<<endl;
            break;
        case '/':
            cout<<"x"<<"/"<<"y"<<"="<<x/y<<endl;
            break;
        default:
            cout<<"error! the operation is not correct"<<endl;
            break;
    }
}