#include<iostream>
#include<vector>
using namespace std;
bool minimumdistancebetweentwostudent(vector<int> &pos,int s, int mid){
    int n=pos.size();
    int studentrequired=1;
    int lastposition=pos[0];
    for(int i=0;i<n;i++){
        if((pos[i]-lastposition)>=mid){
            studentrequired++;
            lastposition=pos[i];
        }
        if(studentrequired==s){
            return true;
        }
    }
    return false;
}
int race(vector<int> &pos, int s){
    /**
     * space= O(1)
     time=O(nlogn(xn-x1))
    */
    int ans=-1;
    int n=pos.size();
    int beg=1;
    int end=pos[n-1]-pos[0];
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(minimumdistancebetweentwostudent(pos,s,mid)){
            ans=mid;
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
    vector<int> pos;
    while(n--){
        int x;
        cin>>x;
        pos.push_back(x);
    }
    int s;
    cout<<"enter the value of number of students:";
    cin>>s;
    cout<<race(pos,s)<<" ";
    return 0;
}