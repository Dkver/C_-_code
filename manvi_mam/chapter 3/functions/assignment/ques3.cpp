#include<iostream>
using namespace std;
bool vote(int age){
    if(age>=18){
        return true;
    }
    return false;
}
int main(){
    int age;
    cout<<"enter the value of age:";
    cin>>age;
    if(vote(age)==true){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}