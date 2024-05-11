#include<iostream>
using namespace std;
/** time=O(logx)
 * space=O(1)
*/
int sqrt( int x){
    int beg=1;
    int end=x;
    int ans=-1;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if(mid*mid<=x){
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
    int x;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<sqrt(x)<<endl;
    return 0;
}