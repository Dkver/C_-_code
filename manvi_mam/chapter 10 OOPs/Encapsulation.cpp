#include<iostream>
using namespace std;
class ABC{
    int x; // this x is private to this class

    public:  // to access this class variable  used below functions
    void set(int n){
        x=n;
    }

    int get(){
        return x;
    }
};
int main(){
    ABC obj1;
    obj1.set(3);
    cout<<obj1.get()<<endl;
    return 0;
}