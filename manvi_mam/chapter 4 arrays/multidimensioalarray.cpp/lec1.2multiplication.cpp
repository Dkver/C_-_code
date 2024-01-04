#include<iostream>
using namespace std;
int main(){
    int r1;      // no of rows
    cout<<"enter the value of r1:";
    cin>>r1;
    int c1;   // no of column
    cout<<"enter the value of c1:";
    cin>>c1;
    int A[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    int r2;      // no of rows
    cout<<"enter the value of r2:";
    cin>>r2;
    int c2;   // no of column
    cout<<"enter the value of c2:";
    cin>>c2;
    int B[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    if(c1!=r2){
        cout<<"matrix is not possible for this input";
    }
    int C[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value=0;
            for(int k=0;k<r2;k++){   // c1=r2
                value+=A[i][k]*B[k][j];
            }
            C[i][j]=value;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}