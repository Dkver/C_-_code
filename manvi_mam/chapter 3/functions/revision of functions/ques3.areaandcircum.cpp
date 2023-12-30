#include<iostream>
using namespace std;
float area(int x){
    float a=3.14*x*x;
    return a;
}
float circum(int y){
    float c=2*3.14*y;
    return c;
}
int main(){
    int r;
    cout<<"enter the value of r:";
    cin>>r;
    cout<<"the area is :"<<area(r)<<endl;
    cout<<"the circumfrence is :"<<circum(r)<<endl;
}