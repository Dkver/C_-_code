#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_multimap<string,long long> marks; // unordered store of the values
    marks.insert(make_pair("deepak",90));
    marks.insert(make_pair("ria",90)); 
    marks.insert(make_pair("deepali",10)); 
    marks.insert(make_pair("deep",99)); 
    marks.insert(make_pair("deepak",100));  
    for(auto pair:marks){  // it take the data type by its own because it is in the directory
        cout<<"Name->"<<pair.first<<endl;
        cout<<"Marks->"<<pair.second<<endl;
    }
    return 0;
}