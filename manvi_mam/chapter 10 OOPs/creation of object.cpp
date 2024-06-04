#include<iostream>
using namespace std;
class Fruit{
    public:// to public the class 
    string name;
    string color;
};
int main(){
    // first way to define class
    Fruit apple; // object
    apple.name="Apple";
    apple.color="Red";
    cout<<apple.name<<"-"<<apple.color<<endl;

     // second way way to define class
    Fruit * mango= new Fruit(); //  second way to define class 
    mango->name="Mango";
    mango->color="yellow";
    cout<<mango->name<<"-"<<mango->color<<endl;
    return 0;
}