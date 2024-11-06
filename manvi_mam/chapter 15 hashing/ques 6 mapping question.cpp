#include<iostream>
#include<map>    // ordered map
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    vector<int> inp(n);
    cout<<"enter the value of vector:"<<endl;
    for(int i=0;i<n;i++){
        cin>>inp[i];
    }
    map<int,int> m;
    for(int i=0;i<n;i++){
        // storing frequency of every element
        m[inp[i]]++;  //  it give the frequency of ele in m
    }
    int sum=0;
    // finding the sum of repetative element
    // pair=(first element , second frequency)
    for(auto pair:m){
        if(pair.second>1){
            sum+=pair.first;
        }
    }
    cout<<sum<<endl;
    return 0;
}