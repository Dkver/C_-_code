#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> record; // give the the values in order
    // record of rool no and name
    record.insert(make_pair(3,"ria")); // first way to insert
    record[1]="bali";  // second way to insert the element in the map
    record[2]="pali";
    for(auto pair:record){
        cout<<"roll no:->"<<pair.first<<endl;
        cout<<"name:->"<<pair.second<<endl;
    }
    return 0;
}