#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    //for upper part of diamond
    for(int i=1;i<=n;i++){
        // for upper triangle spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        } 
        // for character
        for(int j=1;j<=2*i-1;j++){
            cout<<(char)(64+j);
        }
        cout<<endl;
    }
    //for lower part of diamond
    for(int i=1;i<=n;i++){
        //for lower triangle space
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        // for character
        for(int j=1;j<=2*(n-i)-1;j++){
            cout<<(char)(64+j);
        }
        cout<<endl;
    }
}