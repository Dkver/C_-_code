#include<iostream>
using namespace std;
bool f(int num, int *temp){
    if(num<=9 && num>=0){
        int lastdigitoftemp=(*temp)%10;
        (*temp)/=10;
        return (num==lastdigitoftemp);
    }
    bool result=(f(num/10,temp) && num%10==(*temp)%10);
    (*temp)/=10;
    return result;
}
int main(){
    int num;
    cout<<"enter the value of num:";
    cin>>num;
    int anothernum=num;
    int *temp=&anothernum;
    cout<<f(num,temp);
    return 0;
}