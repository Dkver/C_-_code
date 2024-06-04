#include<iostream>
using namespace std;
class sum{
public:
    void add(int x,int y){
        int sum=x+y;
        cout<<sum<<endl;
    }
    void add(int x,int y,int z){
        int sum=x+y+z;
        cout<<sum<<endl;
    }
    void add(float x,float y){
        float sum=x+y;
        cout<<sum<<endl;
    }

};
int main(){
    sum s;
    s.add(2,3);// it call the first function
    s.add(3,5,900); // it call the secon function
    s.add(float(3.4),float(5.3)); // it call the third function
    return 0;
}