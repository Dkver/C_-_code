#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    if(n>=90 && n<=100){
        cout<<"A+"<<endl;
    }
    else if(n>=80 && n<90){
        cout<<"A"<<endl;
    }
    else if(n>=70 && n<80){
        cout<<"B+"<<endl;
    }
    else if(n>=60 && n<70){
        cout<<"B"<<endl;
    }
    else if(n>=50 && n<60){
        cout<<"C"<<endl;
    }
    else if(n>=40 && n<50){
        cout<<"D"<<endl;
    }
    else if(n>=30 && n<40){
        cout<<"E"<<endl;
    }
    else if(n>=0 && n<30){
        cout<<"F"<<endl;
    }
    else
    cout<<"nothing";

}