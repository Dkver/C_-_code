#include<iostream>
#include<vector>
using namespace std;
void f(int *arr,int n,int i,int sum,vector<int> &result){
    // base case
    if(i==n){
        result.push_back(sum);
        return;
    }
    f(arr,n,i+1,sum+arr[i],result);// pick thje ith element
    f(arr,n,i+1,sum,result);       // dONT PIck the ith element
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result;
    f(arr,n,0,0,result);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}