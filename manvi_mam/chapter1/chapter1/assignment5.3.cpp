#include<iostream>
using namespace std;
int main(){
    int cp,sp,profit,loss;   //cp=cost price, sp=selling price
    cout<<"enter the value of cp:";
    cin>>cp;
    cout<<"enter the value of sp:";
    cin>>sp;
    if(sp>cp){
        profit=sp-cp;
        cout<<"the profit is:"<<profit<<endl;
    }
    else if(cp>sp){
        loss=cp-sp;
        cout<<"the loss is:"<<loss<<endl;
    }
    else{
        cout<<"no profit no loss"<<endl;
    }
}