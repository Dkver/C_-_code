#include<iostream>
using namespace std;
int main(){
    int l,b;   //l=length, b=breadth
    cout<<"enter the value of l:";
    cin>>l;
    cout<<"enter the value of b:";
    cin>>b;
    if(l==b){
        cout<<" it is square"<<endl;
    }
    else{
        cout<<"it is rectangle"<<endl;
    }
}