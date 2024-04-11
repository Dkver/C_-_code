#include<iostream>
using namespace std;
void fun(int n, int k){
    if(k==0){
      return;
    }
    else{
       fun(n,k-1);
       cout<<(n*k)<<" ";
    }
}
int main(){
int n;
cout<<"ente the value of n:";
cin>>n;
int k;
cout<<"enter the value of k:";
cin>>k;
fun(n,k);
return 0;
}
