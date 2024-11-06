#include<iostream>
#include<unordered_map>
#include<vector>
#include<limits.h>
using namespace std;
int maxlengthzeroSumSubArray(vector<int> &v){
    int n=v.size();
    int prefixsum=0; 
    int maxlen=0;
    unordered_map<int,int> m;
    if(prefixsum==0){
        maxlen++;
    }
    for(int i=0;i<n;i++){
        prefixsum+=v[i];
        if(m.find(prefixsum)!=m.end()){
            maxlen=max(maxlen,i-m[prefixsum]);
        }
        else{
            m[prefixsum]=i;
        }
    }
    return maxlen;

}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<maxlengthzeroSumSubArray(v);
    return 0;
}