#include<iostream>
#include<vector>
using namespace std;
int lowerbound(vector<int> &input,int target){
    /**time=O(logn)
     * space=O(1)
    */
    int first=-1;
    int beg=0;
    int end=input.size()-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(input[mid]>=target){
            first=mid;
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    return first;
}   
    
    int upperbound(vector<int> &input,int target){
    /**time=O(logn)
     * space=O(1)
    */
    int last=-1;
    int beg=0;
    int end=input.size()-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(input[mid]>target){
            last=mid;
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    return last;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    std::vector<int> input;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    int target;
    cout<<"enter the value of target:";
    cin>>target;
    std::vector<int> result;
    int lb=lowerbound(input, target);
    if(input[lb]!=target){
        result.push_back(-1);
        result.push_back(-1);
    }
    else{
        int ub=upperbound(input, target);
        result.push_back(lb);
        result.push_back(ub-1);
    }
    cout<<result[0]<<" "<<result[1]<<" ";
    return 0;
}