#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            continue;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}