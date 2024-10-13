#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s1;  // it return the values in decreasing order
    // insertion in a set
    s1.insert(2);
    s1.insert(3);
    s1.insert(9);
    s1.insert(5);
    s1.insert(7);
    s1.insert(1);
    // to know the size
    s1.size();
    // printing the size
    cout<<s1.size()<<endl;
    s1.insert(2);
    s1.insert(3);
    cout<<s1.size()<<endl;
    // size remains same when be put duplicate values in the set
    // set contain only unque value
    


    // traversing the set
    set<int>:: iterator itr;

    // traversal by using for loop
    // for(itr=s1.begin();itr!=s1.end();itr++){ // itr give the position hence to printing the element by using * operator or say derefrencing
    //     //s1.begin()= give the iterator pointing to the first element
    //     // s1.end()=give the iterator pointing to the position after the last element
    //     cout<<*itr<<" "; // itr give position
    //     // *itr give the value at the position itr


        
    // }
    
    // traversing by using for each loop
    for(auto value:s1){
        cout<<value<<" ";
    }
    cout<<endl;
    if(s1.find(4)!=s1.end()){ // if present then print else return end value of the set
        cout<<"the value is present in the set"<<endl;
    }
    else{
        cout<<"the value is not  present in the set"<<endl;
    }
    return 0;
}