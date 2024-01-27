#include<iostream>
using namespace std;
int main(){
    int x=10;
    float y=9.8;
    int *ptr=&x;
    cout<<"the address of the variable x is:"<<ptr<<endl;
    cout<<"the value at variable x is:"<<*ptr<<endl;
    float *ptrr=&y;
    cout<<"the address of the variable y is:"<<ptrr<<endl;
    cout<<"the value at variable y is:"<<*ptrr<<endl;
    x=23;
    cout<<"the new udated value of x:"<<*ptr<<endl;
    return 0;
}