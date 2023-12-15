#include<iostream>
using namespace std;
int main(){
    cout<<"armstrong numbers in the range between 100 to 500 are:";
    for(int i=100;i<1000;i++){
        int sum=0;
        int t=i;
        while(t!=0){
            sum=sum+((t%10)*(t%10)*(t%10));
            t=t/10;
        }
        if(sum==i){
            cout<<i<<endl;
        }
    }
}