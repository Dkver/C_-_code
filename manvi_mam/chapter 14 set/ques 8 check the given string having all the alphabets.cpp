#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;

bool chaeckAllAlphabet(string str){
    if(str.length()<26){
        return false;
    }
    transform(str.begin(),str.end(),str.begin(),::tolower); // it change all the upper case charecter of the string into the lower case
     
    set<char> alphabetas;
    for(auto ch:str){
        alphabetas.insert(ch);
    }
    return (alphabetas.size()==26);

}
int main(){
    string inp;
    cin>>inp;
    if(chaeckAllAlphabet(inp)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}