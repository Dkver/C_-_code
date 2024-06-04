#include<iostream>
using namespace std;
class parent{
    public:
        parent(){
            cout<<"parent class"<<endl;
        }
};

class child: public parent{  // to inherit the class parent
public:
    child(){  // single inheritance
        cout<<"child class"<<endl;
    }
};

class grandchild: public child{ // it inherit the class child
public:
    grandchild(){
        cout<<"grandchild class"<<endl;
    }
};


int main(){
    parent p;
    child c; // it is single inheritance
    grandchild gc; // it is multilevel inheritance
    return 0;
}