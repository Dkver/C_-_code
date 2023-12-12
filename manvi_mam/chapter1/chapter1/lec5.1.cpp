#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of y:";
    cin>>y;
    cout<<"enter the value of z:";
    cin>>z;
    if(x>y && x>z){
        cout<<"x is greatest:"<< x <<endl;
    }
    else if(z>y){
        cout<<"z is greatest:" <<z <<endl;
    }
    else{
        cout<<"y is greatest:"<< y <<endl;
    }
    return 0;
}