#include<iostream>
#include<vector>
using namespace std;
bool CanBePlaced(vector<vector<char>> &grid, int i,int j){
    if(i-1>=0 and j-2>=0 and grid[i-1][j-2]=='K') return false;
    if(i-2>=0 and j-1>=0 and grid[i-2][j-1]=='K') return false;
    if(i-1>=0 and j+2>=0 and grid[i-1][j+2]=='K') return false;
    if(i-2>=0 and j+1>=0 and grid[i-2][j+1]=='K') return false;
    return true;
}
void PlacingKknights(vector<vector<char>> &grid,int m,int n, int k,int i,int j){
    // m and n are the m*n matrices and k is the number of knights to be placed in the matrix
    if(k==0){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<(grid[i][j]!='K' ? '_' : 'K');
            }
            cout<<endl;
        }
        cout<<"#########"<<endl;
        return;
    }
    if(j==n){
        return PlacingKknights(grid,m,n,k,i+1,0);
    }
    if(i==m){
        return ;
    }
    for(int row=i;row<m;row++){
        for(int col =(row == i ? j : 0 );col<n;col++){
            if(CanBePlaced(grid,row,col)){
                grid[row][col]='K';
                PlacingKknights(grid,m,n,k-1,row,col+1); // to move in row
                grid[row][col]=' ';
            }
        }
    }
}
int main(){
    int n=4;
    int m=4;
    int k=5;
    vector<vector<char>> grid(m,vector<char>(n, ' ')); //m rows and n columns and all initalised with ' ';
    PlacingKknights(grid,m,n ,k, 0,0);
    return 0;
}