#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<" enter the value of n:";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int i=0;
    int j=n-1;
    int k=n-1;
    int result[n];
    while(i<= j  and k>=0){
        if(abs(v[i])>abs(v[j])){
            result[k]=v[i]*v[i];
            i++;
            k--;
        }
        else{
            result[k]=v[j]*v[j];
            j--;
            k--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}