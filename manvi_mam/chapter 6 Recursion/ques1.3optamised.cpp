#include<iostream>
using namespace std;
int pow(int p, int q){
    if(q==0)
        return 1;
    // if q is even
     if(q%2==0){
        int result=pow(p,q/2);
        return result*result;
    }
    // if q is odd
    else{
       int result=pow(p,(q-1)/2);
        return p*result*result;        // complexity= log(q)
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