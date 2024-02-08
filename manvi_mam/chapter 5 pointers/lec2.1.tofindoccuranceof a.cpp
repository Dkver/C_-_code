#include<iostream>
using namespace std;
void findFirstAndLastIndex(string s,char ch,int *first,int *last){
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]==ch){
            *first=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]==ch){
            *last=i;
            break;
        }
    }
}
int main(){
    string s="aaabac";
    char ch='a';
    int first=-1;
    int last=-1;
    int *pf=&first;
    int *pl=&last;
    findFirstAndLastIndex(s,ch,pf,pl);
    cout<<first<<" "<<last;
    return 0;
}