#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    //calculate prefix sum
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int ans;
        //ans=prefixsumarray[r]-prefixsumarray[l-1]
        ans=v[r]-v[l-1];
        cout<<ans<<endl;
    }
    return 0;
}