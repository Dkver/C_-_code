#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int> ms;  // by default it give increasing order
    ms.insert(42);
    ms.insert(5);
    ms.insert(7);
    ms.insert(76);
    ms.insert(5);
    ms.insert(7);
    for(auto ele:ms){  // multiset allows duplicate values
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}