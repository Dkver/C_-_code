#include<iostream>
using namespace std;
bool oddnumber(int x){
    if(x%2!=0){
        return true;
    }
    else{
        return false;
    }
        
    
   
}
int main(){
    int a;
    cout<<"enter the value of a:";
    cin>>a;
    int b;
    cout<<"enter the value of b:";
    cin>>b;
    for(int i=a+1;i<b;i++){
        if(oddnumber(i)){
            cout<<i<<" ";
        }
    }
}