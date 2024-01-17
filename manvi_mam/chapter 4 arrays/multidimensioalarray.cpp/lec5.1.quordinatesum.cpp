#include<iostream>
#include<vector>
using namespace std;
int rectanglesum(vector<vector<int>> &matrix,int l1,int r1,int l2,int r2){
    int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum=sum+matrix[i][j];
        }
    }
    return sum;
}
int main(){
    int n;
    cout<<" enter the value of n:";
    cin>>n;
    int m;
    cout<<"enter the value of m:";
    cin>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }
    int sum=rectanglesum(matrix,l1,r1,l2,r2);
    cout<<sum<<endl;
    return 0;

}