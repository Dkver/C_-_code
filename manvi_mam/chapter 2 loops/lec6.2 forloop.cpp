#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}