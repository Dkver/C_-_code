#include<iostream>
#include<stack>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> pge(vector<int> &arr){  // nge =next greater element
    int n=arr.size();
    reverse(arr.begin(),arr.end());
    vector<int> output(n,-1);  // here is the vector with n element initialised with -1
    stack<int> st;  // to store the indexes of the element of decreasing array
    st.push(0);
    for(int i=0;i<n;i++){
        while(!st.empty() and arr[i]>arr[st.top()]){
            output[st.top()]=n-i-1;  // because after reverse the indexes will change
            st.pop();
        }
        st.push(i);
    }
    while(not st.empty()){ // it not mandatory because we initalise the whole array by -1
        output[st.top()]=-1;
        st.pop();
    }
    reverse(output.begin(),output.end());
    reverse(arr.begin(),arr.end());
    return output;
}
int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    vector<int> v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> result=pge(v);
    int m=result.size();
    for(int i=0;i<m;i++){
        cout<<(i-result[i])<<" ";
    }
    return 0;

}