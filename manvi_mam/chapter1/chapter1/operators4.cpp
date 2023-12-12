#include<iostream>
using namespace std;
int main(){
    int x=5;
    cout<<(x<<1)<<endl;   //10
    cout<<(x>>1)<<endl;  // 2
    int y=8;
    cout<<(x|y)<<endl;  //13
    cout<<(x&y)<<endl;  //0
    cout<<(x^y)<<endl;  //13
}