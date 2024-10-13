#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s1;
    s1.insert(2);
    s1.insert(3);
    s1.insert(9);
    s1.insert(5);
    s1.insert(7);
    s1.insert(1);
    // to know the size
    s1.size();
    cout<<s1.size()<<endl;
    s1.insert(2);
    s1.insert(3);
    cout<<s1.size()<<endl;
    // size remains same when be put duplicate values in the set
    // set contain only unque value
    set<int>:: iterator itr;
    for(itr=s1.begin();itr!=s1.end();itr++){ // itr give the position hence to printing the element by using * operator or say derefrencing
        //s1.begin()= give the iterator pointing to the first element
        // s1.end()=give the iterator pointing to the position after the last element
        cout<<*itr<<" "; // itr give position
        // *itr give the value at the position itr


        // in set by default the printing of the values in increasing order
    }
    cout<<endl;
    return 0;
}