#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > creatspiralmatrix(int n){
    vector<vector<int> >matrix(n,vector<int> (n));
    int top=0;           // top row
    int bottom=n-1;      // bottom row
    int left=0;          // left column
    int right=n-1;       // right column
    int direction=0;
    int value=1;
    while(left<=right && top<=bottom){
        //left to right
        if(direction==0){
            for(int i=left;i<=right;i++){
                matrix[top][i]=value++;
            }
            top++;
        }
        // top to bottom
        else if(direction==1){
            for(int j=top;j<=bottom;j++){
                matrix[j][right]=value++;
            }
            right--;
        }
        // right to left
        else if(direction==2){
            for(int i=right;i>=left;i--){
                matrix[bottom][i]=value++;
            }
            bottom--;
        }
        //bottom to top
        else {
            for(int j=bottom;j>=top;j--){
                matrix[j][left]=value++;
            }
            left++;

        }
        direction=(direction+1)%4;
        //0,1,2,3
    }
    return matrix;
}
int main(){
    int n;    // number of rows
    cout<<"enter the value of n:";
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    matrix=creatspiralmatrix(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}