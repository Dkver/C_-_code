#include<iostream>
#include<vector>
using namespace std;
int targetele(vector<int> &v,int target){
    int beg=0;
    int end=v.size()-1;
    while(beg<=end){
        if(v[beg]==v[end]){
            beg++;
            end--;
        }
        else if(v[beg]==target){
            return 1;
        }
        else if(v[end]==target){
            return 1;
        }
        else return -1;
    }
    return -1;
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
    int target;
    cout<<"enter the value of target:";
    cin>>target;
    cout<<targetele(v,target)<<" ";
    return 0;

}