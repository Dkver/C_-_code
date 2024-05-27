#include<iostream>
#include<vector>
using namespace std;
int Peakelement(vector<int> &v){
    int ans=-1;
    int beg=1;
    int end=v.size()-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(v[mid-1]<v[mid]){
            ans=max(mid,ans);
            beg=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<Peakelement(v)<<" ";
    return 0;
}