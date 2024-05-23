#include<iostream>
#include<vector>
using namespace std;
bool searchTargetelement(vector<vector<int>> &a,int target){
    int n=a.size();
    int m=a[0].size();
    int beg=0;
    int end=n*m-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        int x=mid/m;
        int y=mid%m;
        if(a[x][y]==target){
            return true;
        }
        else if(a[x][y]<target){
            beg=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return false;
}
int main(){
    vector<vector<int>> a={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=3;
    cout<<searchTargetelement(a,target)<<" ";
    return 0;
}