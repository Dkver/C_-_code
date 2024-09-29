#include<iostream>
#include<stack>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int histogram(vector<int> &arr){  // nge =next greater element
    int n=arr.size();
    reverse(arr.begin(),arr.end());
    vector<int> output(n,-1);  // here is the vector with n element initialised with -1
    stack<int> st;  // to store the indexes of the element of decreasing array
    int ans=INT_MIN;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() and arr[i]>arr[st.top()]){
        int ele=arr[st.top()]; //current bar to be removed whose ans will be calculate
        st.pop();
        int nsi=i;// next smallest element
        int psi=(st.empty()) ? -1 : st.top();
        ans=max(ans,ele*(nsi-psi-1));
        }
        st.push(i);
    }
    while(not st.empty()){ // it not mandatory because we initalise the whole array by -1
        int ele=arr[st.top()];
        st.pop();
        int nsi=n;
        int psi=(st.empty()) ? -1 : st.top();
        ans=max(ans,ele*(nsi-psi-1));
    }
    
    return ans;
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
    int ans=histogram(v);
    cout<<ans<<endl;
    return 0;

}