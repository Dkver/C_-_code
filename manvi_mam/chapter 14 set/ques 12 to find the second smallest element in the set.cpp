#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    set<int>s;
    for(auto ele:v){
        s.insert(ele);
    }
    auto itr=s.begin();
    itr++;
    // now itr pointing to the second smallest element in the set
    cout<<"the second smallest number is"<<*itr<<endl;
    return 0;
}