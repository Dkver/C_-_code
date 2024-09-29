#include<iostream>
#include<stack>
#include<vector>
using namespace std;
/**
 * Time Complexity=O(n)
 * Space Complexity=O(n)
 */
vector<int> nge(vector<int> &arr){  // nge =next greater element
int n=arr.size();
    vector<int> output(n,-1);  // here is the vector with n element initialised with -1
    stack<int> st;  // to store the indexes of the element of decreasing array
    st.push(0);
    for(int i=0;i<n;i++){
        while(!st.empty() and arr[i]<arr[st.top()]){
            output[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
    while(not st.empty()){ // it not mandatory because we initalise the whole array by -1
        output[st.top()]=-1;
        st.pop();
    }
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
    vector<int> result=nge(v);
    int m=result.size();
    for(int i=0;i<m;i++){
        cout<<result[i]<<" ";
    }
    return 0;

}