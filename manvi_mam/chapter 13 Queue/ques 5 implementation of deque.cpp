#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(10);  // Time compexity=O(1)
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);
    d.push_front(12);  // Time compexity=O(1)
    d.push_front(22);
    d.push_front(192);  
    // while(! d.empty()){  //access from front
    //     cout<<d.front()<<" "; // op=192,22,12,10,20,30,40
    //     d.pop_front();
    // }
    while(! d.empty()){  // access from back
        cout<<d.back()<<" ";  // op=40,30,20,10,12,22,192
        d.pop_back();  
    }
    return 0;
}