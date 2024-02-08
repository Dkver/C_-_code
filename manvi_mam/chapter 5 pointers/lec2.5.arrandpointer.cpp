#include<iostream>
using namespace std;
int main(){
    int arr[3]={15,16,17};
    int n=3;
    int *ptr=&arr[0];
    cout<<ptr<<"  "<<arr<<"  "<<*ptr<<"  "<<*arr<<endl;
    cout<<*(ptr+0)<<"  "<<*(ptr+1)<<"  "<<*(ptr+2)<<endl;
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<endl;
    }
    return 0;
}