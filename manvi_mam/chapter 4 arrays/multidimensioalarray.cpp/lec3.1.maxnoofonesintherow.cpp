#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int leftmostones(vector<vector<int>>&v){     // second function to find maximum number ones row
    int leftmostOnes=-1;
    int maxonesrow=-1;
    int j=v[0].size()-1;
    // finding leftmost ones in 0th row
    while(j>=0 && v[0][j]==1){
        leftmostOnes=j;
        maxonesrow=0;
        j--;
    }
    // check in the rest of the rows if we can find ones left of the leftmostone 
    for(int i=1;i<v.size();i++){
        while(j>=0 && v[i][j]==1){
            leftmostOnes=j;
            j--;
            maxonesrow=i;
        }
    }
    return maxonesrow;
}
int maximumOnesRow(vector<vector<int>>&v){   // first function to find maximum number ones row
    int maxones=INT_MIN;
    int maxOnesRow=-1;
    int column=v[0].size();
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int numberofones=column-j;
                if(numberofones>maxones){
                    maxones=numberofones;
                    maxOnesRow=i;
                }
                break;
            }
        }
    }
    return maxOnesRow;
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int m;
    cout<<"enter the value of m:";
    cin>>m;
    vector<vector<int>> vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    int res1=maximumOnesRow(vec);
    cout<<res1<<endl;
    int res2=leftmostones(vec);
    cout<<res2<<endl;
}