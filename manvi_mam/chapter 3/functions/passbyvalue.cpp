#include<iostream>
using namespace std;
void changevalue(int z){  // if be use &z then the value is changed
    z=1000;
}
int main(){
    int a=5;
    changevalue(a);
    cout<<a<<endl;
    return 0;
}