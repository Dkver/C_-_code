#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string> record;   // unordered map give the values in rrandom order
    // record of rool no and name
    record.insert(make_pair(3,"ria")); // first way to insert
    record[1]="bali";
    record[2]="pali";// second way to insert the element in the map
    record[2]="deep";// it is used for manipulation because the unordered map dosent contain the local values so it can manipulate the key value of 2 as deep and it is the function of square bracket
    //record.insert(make_pair(3,"payal")); // it cant manipulate the key value of 3 because this function cant manipulate the map
    record[3]="payal"; // it can manipulate the key value of 3 because it having the square bracket
    for(auto pair:record){
        cout<<"roll no:->"<<pair.first<<endl;
        cout<<"name:->"<<pair.second<<endl;
    }
    return 0;
}