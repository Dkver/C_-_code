#include<iostream>
#include<vector>
using namespace std;
int main(){
    int evensum=0;
    int oddsum=0;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        if(i%2==0){
            evensum=evensum+arr[i];
        }
        else{
            oddsum=oddsum+arr[i];
        }
    }
    cout<<evensum-oddsum<<endl;
    
}