#include<iostream>
using namespace std;
bool checkelegibilitytovote(int age, int limit){
    if(age>=limit){
        return true;
    }
    else{
        return false;
    }
    
}
int main(){
    int  limit=18;
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int eligibleforvoting=checkelegibilitytovote(n,limit);
    if(eligibleforvoting){
        cout<<"yes, the current person is eligible for vote";
    }
    else{
        cout<<"no, the person is not elligible for voting";
    }
    return 0;
}