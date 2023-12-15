#include<iostream>
using namespace std;
int main(){
    int num=1;
    int n;   // n is always odd 
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
        cout<<((char)(64+j));
    }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=2*(n-i)-1;j>=1;j--){
            cout<<((char)(64+num++));
            
        }
        num=1;
        cout<<endl;
    }
}