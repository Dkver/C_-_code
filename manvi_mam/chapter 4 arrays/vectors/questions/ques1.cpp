#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];

    }
    int x;
    cout<<"enter x :";
    cin>>x;
    // int occurance=-1;       // for forward tracking 
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x){
    //         occurance=i;

    //     }
    // }
    // cout<<occurance<<endl;
    int occurance=-1;           // from back tracking 
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            occurance=i;
            break;

        }
    }
    cout<<occurance<<endl;
}