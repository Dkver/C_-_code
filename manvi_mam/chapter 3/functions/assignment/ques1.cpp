#include<iostream>
using namespace std;
int square(int num){
    int sqa=num*num;
    return sqa;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<square(i)<<" ";
    }
}