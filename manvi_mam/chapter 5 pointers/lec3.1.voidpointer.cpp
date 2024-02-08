#include<iostream>
using namespace std;
int main(){
    float f=10.5;
    int x=10;
    void *ptr=&f;
    ptr=&x;
   // cout<<*ptr  ye nhi kar sakte
   int *integerpointer=(int *)ptr;
   cout<<integerpointer<<'\n';
    return 0;
}