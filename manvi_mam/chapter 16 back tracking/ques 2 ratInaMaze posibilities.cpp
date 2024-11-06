#include<iostream>
#include<vector>
using namespace std;
bool canWeGo(int a,int b,vector<vector<int>> &grid){
    int n=grid.size();
    return (a<n and b<n and a>=0 and b>=0) and grid[a][b]==1;
}
int f(int i,int j,vector<vector<int>> &grid){
    int n=grid.size();
    if(i==n-1 and j==n-1){
        for(int i=0;i<n;i++){  // it is used for the printing of the path
            for(int j=0;j<n;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"****\n";
        return 1;
    }
    int ans=0;
    grid[i][j]=2;  // it make the visited node as 2
    if(canWeGo(i,j+1,grid))
        ans+= f(i,j+1,grid);  // it is for rightward in the grid

    if(canWeGo(i+1,j,grid))
        ans+=f(i+1,j,grid);   // it is for downward in the grid

    if(canWeGo(i-1,j,grid))
        ans+=f(i-1,j,grid);   // it is for upward in the grid

    if(canWeGo(i,j-1,grid))
        ans+=f(i,j-1,grid); // it is for leftward in the grid 
    grid[i][j]=1;
    return ans;
}
int main(){
    vector<vector<int>> grid={{1,1,1,1},{0,1,0,1},{0,1,1,1},{0,1,1,1}};
    int res=f(0,0,grid);
    cout<<res<<" ";
    return 0;
}