#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n;    // no of rows
    cout<<"enter the value rows n:";
    cin>>n;
    int m;    // no of column
    cout<<"enter the value of column m:";
    cin>>m;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
     vector<pair<int,int>>ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                ans.push_back({i,j});
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        int x=ans[i].first;
        int y=ans[i].second;
        int row=0;
        int col=0;
        while(row<n){
            mat[row][y]=0;
            row++;
        }
        while(col<m){
            mat[x][col]=0;
            col++;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}