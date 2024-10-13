#include<iostream>
#include<set>
using namespace std;
int main(){
    set<string> invitation;
    int n;
    cin>>n;
    while(n--){
        string name;
        cin>>name;
        invitation.insert(name);
    }
    for(auto name:invitation){
        cout<<name<<endl;
    }
    cout<<endl;
    return 0;
}