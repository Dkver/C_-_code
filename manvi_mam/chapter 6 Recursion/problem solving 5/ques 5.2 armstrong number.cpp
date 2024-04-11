#include<iostream>
using namespace std;
    int pow_recursive(int p,int q){
        if(q==0) return 1;
        if(q%2==0) {
            int result=pow_recursive(p,q/2);
            return result*result;
        }
        else{
            int result=pow_recursive(p,(q-1)/2);
            return p*result*result;
        }
    }
int armstrong(int n,int d){
    if(n==0) return 0;
    return pow_recursive(n%10,d)+armstrong(n/10,d);
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int no_of_digits=0;
    int temp=n;
    while(temp>0){
        temp=temp/10;
        no_of_digits++;
    }
   int result= armstrong(n,no_of_digits);
   if(result==n){
    cout<<"yes";
   }
   else{
    cout<<"no";
   }
    return 0;
}