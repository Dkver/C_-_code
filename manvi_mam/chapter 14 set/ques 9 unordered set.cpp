#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s1;
    s1.insert(42);
    s1.insert(5);
    s1.insert(7);
    s1.insert(76);
    s1.insert(5);
    s1.insert(7);
    for(auto ele:s1){  // this is for each loop so dont confused with this
        cout<<ele<<"  ";
    }
    cout<<endl;
    return 0;
}