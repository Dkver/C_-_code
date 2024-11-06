#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<string, long long> directory; 
    directory.insert(make_pair("ria",5387919870));
    directory.insert(make_pair("ria",5387919880));
    directory.insert(make_pair("deepali",5387019870));
    directory.insert(make_pair("jyoti",5387919970));
    directory.insert(make_pair("p.k",5387919870));
    // directory["ria"]=8538007457;  square bracket is not allowed here 
    for(auto pair:directory){  // it take the data type by its own because it is in the directory
        cout<<"roll no:->"<<pair.first<<endl;
        cout<<"name:->"<<pair.second<<endl;
    }
    cout<<directory.count("ria")<<endl;
    directory.erase("ria");
    for(auto pair:directory){  // it take the data type by its own because it is in the directory
        cout<<"roll no:->"<<pair.first<<endl;
        cout<<"name:->"<<pair.second<<endl;
    }
    return 0;
}