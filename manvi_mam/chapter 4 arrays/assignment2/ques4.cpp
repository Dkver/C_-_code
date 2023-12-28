#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; 
    cout<<"enter the value of n:";
    cin>>n;
    vector<int>v(n-1,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cout<<"enter the value of k:";
    cin>>k;
    int j=n-1;
    for(int i=0;i<n;i++){
        while(i<n && j<n){
            if(v[j]-v[i]==k){
                cout<<"yes"<<endl;
                break;
            }
            else if(v[j]-v[i]>k){
                j--;
            }
            else if(v[j]-v[i]<k){
                i++;
            }
            
        }
    }
    cout<<"no"<<endl;
     return 0;   
    
}