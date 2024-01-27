#include<iostream>
using namespace std;
int main(){
    int *ptr;     // declaration of pointer
    cout<<ptr<<endl;
    int marks=100;
    ptr=&marks;      // re-assignment / updation
    cout<<ptr<<endl;
    return 0;
}