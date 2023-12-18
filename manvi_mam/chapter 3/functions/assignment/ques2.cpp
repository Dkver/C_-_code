#include<iostream>
using namespace std;
double circum(int r){
    double cir=2*3.14*r;
    return cir;
}
double area(int r){
    double ar=3.14*r*r;
    return ar;
}
int main(){
    int r;
    cout<<"enter the value of r:";
    cin>>r;
    cout<<"circumference:"<<circum(r)<<endl;
    cout<<"area:"<<area(r);
}