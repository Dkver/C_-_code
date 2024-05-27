#include<iostream>
#include<vector>
using namespace std;
/*&**
time=O(logn)
space=O()
*/
int findMinimumInSortedRotated(vector<int> &input){
    if(input.size()==1){
        return input[0];
    }
    int beg=0;
    int end=input.size()-1;
    if(input[beg]<input[end]){
        return beg;
    }
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(input[mid]>input[mid+1])  return mid+1;
        if(input[mid]<input[mid-1])  return mid;
        if(input[mid]>input[beg]){
            beg=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
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
    cout<<findMinimumInSortedRotated(input);
    return 0;
}