#include<iostream>
using namespace std;
int main(){
    int x=10;
    float y=0.2;
    cout<<&x<<" "<<&y;
    cout<<endl;
    // create a pointer that can store the address
    // so x is an integer variable so be need a pointer 
    // that can store address of integer type
    int *ptr=&x;
    float *ptrr=&y;
    cout<<ptr<<" "<<ptrr;
    return 0;
}