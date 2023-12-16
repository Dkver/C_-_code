#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int ans=0;
    int pow=1;
    while(n>0){
        int ld=n%10;
        ans=ans+(ld*pow);
        pow*=2;
        n/=10;
    }
    cout<<ans<<endl;
}