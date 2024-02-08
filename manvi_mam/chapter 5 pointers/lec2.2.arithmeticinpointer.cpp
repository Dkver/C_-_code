#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr=&x;
    double dec=9.8;
    double *ptrd=&dec;
    cout<<"the size of double is:"<<sizeof(dec)<<endl;
    cout<<"the size of int is:"<<sizeof(x)<<endl;
    cout<<ptr<<"   "<<(ptr+1)<<endl;
    cout<<ptrd<<"   "<<(ptrd+1)<<endl;
    return 0;
}