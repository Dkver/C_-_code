#include<iostream>
using namespace std;
class parent1{
    public:
        parent1(){
            cout<<"parent1 class"<<endl;
        }
};

class child1: public parent1{  // to inherit the class parent
public:
    child1(){  // single inheritance
        cout<<"child1 class"<<endl;
    }
};

class child2: public parent1{  // to inherit the class parent
public:
    child2(){  // single inheritance
        cout<<"child2 class"<<endl;
    }
};



int main(){
    child1 c;
    return 0;
}