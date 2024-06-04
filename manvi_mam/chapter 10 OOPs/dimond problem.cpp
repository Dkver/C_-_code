#include<iostream>
using namespace std;
class parent{
    public:
        parent(){
            cout<<"parent class"<<endl;
        }
};

class child1: public parent{  // to inherit the class parent
public:
    child1(){  // single inheritance
        cout<<"child1 class"<<endl;
    }
};

class child2: public parent{  // to inherit the class parent
public:
    child2(){  // single inheritance
        cout<<"child2 class"<<endl;
    }
};

class grandchild: public child1, public child2{ // it inherit the class child
public:
    grandchild(){
        cout<<"grandchild class"<<endl;
    }
};


int main(){
    grandchild c;
    return 0;
}