#include<iostream>
#include<vector>
using namespace std;
int PeakElement(vector<int> &v){
    int n=v.size();
    int beg=0;
    int end=n-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(mid==0){
            if(v[mid]>v[mid+1]){
                return 0;
            }
            else{
                return 1;
            }
        }
        else if(mid==n-1){
            if(v[mid]>v[mid-1]){
                return n-1;
            }
            else{
                return n-2;
            }
        }
        else{
            if(v[mid]>v[mid+1] and v[mid]>v[mid-1]){
                return mid;
            }
            else if(v[mid]>v[mid-1]){
                beg=mid+1;
            }
            else{
                    end=mid-1;
                }
            }
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
    cout<<PeakElement(v)<<" ";
    return 0;
}