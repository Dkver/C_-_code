#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of rows m:";
    cin>>m;
    cout<<"enter the number of rows n:";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==m || j==n){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
