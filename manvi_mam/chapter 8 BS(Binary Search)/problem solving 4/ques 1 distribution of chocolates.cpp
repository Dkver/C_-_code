#include<iostream>
#include<vector>
using namespace std;
bool candistbutechocolate(vector<int> &arr,int mid,int s){
    int n=arr.size();
    int studentrequired=1;
    int currsum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        if((currsum+arr[i])>mid){
          studentrequired++;
          currsum=arr[i];
          if(studentrequired>s){
            return false;
          }  
          else{
            currsum+=arr[i];
          }
        }
    }
    return true;
}
int distchoco(vector<int> &arr,int s){
    int n=arr.size();
    int beg=arr[0];
    int end=0;
    for(int i=0;i<n;i++){
        end+=arr[i];
    }
    int ans=-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(candistbutechocolate(arr,mid,s)){
            ans=mid;
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int s;
    cout<<"enter the value of number of students:";
    cin>>s;
    cout<<distchoco(arr,s)<<" ";
    return 0;
}