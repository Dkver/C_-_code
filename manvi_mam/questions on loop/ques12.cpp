#include<iostream>
using namespace std;
int main(){
    int n;   // n= no of rows  m=no of columns
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){    // i= no of rows
        for(int j=1;j<=n-i;j++){  //j= no of columns
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){  //j= no of columns
            cout<<i;
           
        }
          cout<<endl;  
    }
        
}
