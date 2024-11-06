#include<iostream>
#include<vector>
using namespace std;
bool CanPlaceQueen(int row,int coln,vector<vector<char>> &v){
    // is someone attacing from vertical up
    for(int i=row-1;i>=0;i--){
        if(v[i][coln]=='Q'){
            return false;
        }
    }
    for(int i=row-1, j=coln-1;i>=0 and j>=0; i--,j--){
        if(v[i][j]=='Q'){
            return false;
        }
    }
    int n=v.size();
    for(int i=row-1, j=coln+1;i>=0 and j<n; i--,j++){
        if(v[i][j]=='Q'){
            return false;
        }
    }
    return true;

}
void nQueen(int currow,int n,vector<vector<char>> &v){
    if(currow==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<v[i][j];
            }
            cout<<endl;
        }
        cout<<"******\n";
        return;
    }
    for(int coln=0;coln<n;coln++){
        // we will go to all the columns 
        // lets check we will place the queen at currow and column
        if(CanPlaceQueen(currow,coln,v)){
            v[currow][coln]='Q';
            nQueen(currow+1,n,v);
            v[currow][coln]='.';
        }
    }
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    vector<vector<char>> v(n,vector<char>(n,'.'));
    nQueen(0,n,v);
    return 0;
}