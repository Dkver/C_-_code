#include<iostream>
using namespace std;
int pow(int p, int q){
    if(q==0){
        return 1;
    }
    else{
        return p*pow(p,q-1);
    }
}
int main(){
    int p,q;
    cout<<"enter the value of p:";
    cin>>p;
    cout<<"enter the value of q:";
    cin>>q;
    cout<<pow(p,q);
    return 0;
}