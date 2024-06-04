#include<iostream>
using namespace std;
class parent{
public:
    virtual void print(){  // virtual=defines which function will be call or it is used for function over riding 
        cout<<"it is parent class"<<endl;
    }
    void show(){  // if this also overriding then use virtual before function define
        cout<<"parent class"<<endl;
    }
};
class child : public parent{
public:
    void print(){
        cout<<"it is child class"<<endl;
    }
    void show(){
        cout<<"child class"<<endl;
    }
};
int main(){
    parent *p;
    child c;
    p=&c;
    p->print();// it is child class 
    p->show();// parent class
    return 0;
}