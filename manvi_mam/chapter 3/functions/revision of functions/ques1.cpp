#include<iostream>
using namespace std;
int addition(int x, int y){
    int result=x+y;
    return result;
}
void fun(string name){
    cout<<"are you having fun "<<name<<" ?"<<endl;// it cant have any return type , only print in function,it cant store in the variable
}
int main(){
    // cout<<addition(20,40)<<" ";
    fun("deepak");
    addition(20,30);
    cout<<addition(20,10);
}