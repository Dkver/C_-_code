#include<iostream>
using namespace std;
void fun(int n){
    if(n<1){
        return;
    }
    else{
        cout<<n<<" ";
        fun(n-1);
    }
}
int main(){
    int n;
    cout<<" enter the value of n:";
    cin>>n;
    fun(n);
    return 0;
}