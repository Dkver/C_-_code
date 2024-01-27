#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int *ptrx=&x;
    int *ptry=&y;
    int result;
    int *ptr_result=&result;
    *ptr_result=*ptrx+*ptry;
    cout<<result<<" "<<*ptr_result;
    //ptr=10; we cant do this bc of ptr is the address box
    return 0;
}