#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,13,4,5,6,7,8,9,0,12,13};
     int b[]={1,3,8,9};
    int len=sizeof(a)/sizeof(a[0]);
    int mina=a[0];
    for(int i=0;i<len;i++){
        if(a[i]<mina){
            mina=a[i];
        }
     }
     cout<<"the mina element is:"<<mina<<endl;
     int lenb=sizeof(b)/sizeof(b[0]);
     int minb=b[0];
     for(int i=0;i<lenb;i++){
        if(b[i]<minb){
            minb=b[i];
        }
     }
     cout<<"the minb element is:"<<minb<<endl;
     int sum;
     sum=mina+minb;
     cout<<sum<<endl;
}
