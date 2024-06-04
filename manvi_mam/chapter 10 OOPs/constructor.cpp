#include<iostream>
using namespace std;
class Rectangle{
    public:  // to public the class
        int l;
        int b;
        // type 1 constructor
        Rectangle(){  // default constructor there is --> no argument passed
            l=0;
            b=0;

        }
        // type 2 constructor (parameterised constructor)
        Rectangle(int x, int y){  // the argument  --> passed
            l=x; // l=length
            b=y;  // b=breadth
        }

        // type 3 constructor
        Rectangle(Rectangle& r){  // copy constructor --->initialised an object by another existing object
            l=r.l;
            b=r.b;
        }
};
int main(){
    Rectangle r1;
    cout<<r1.l<<" "<<r1.b<<endl;
    Rectangle r2(3,4);
    cout<<r2.l<<" "<<r2.b<<endl;
    Rectangle r3=r2; // to copy the element of r2 in r3
    cout<<r3.l<<" "<<r3.b<<endl;
    return 0;
}