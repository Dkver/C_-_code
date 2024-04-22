#include<iostream>
#include<vector>
using namespace std;
void back_zeros(vector<int> &v){
    int n=v.size();
    for(int i=n-1;i>=0;i--){
        int j=0;
        bool flag=false;
        while(j!=i){
            if(v[j]==0 && v[j+1]!=0){
                swap(v[j],v[j+1]);
            }
            j++;
        }
        if(!flag) break;
    }
    return;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    vector<int > v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    back_zeros(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
