#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str="deepak";
    // string str1="Verma";
    // cout<<str<<" "<<str1<<endl;
    // cout<<str[0];
    // taking input as string
    string str;
    cout<<"enter the string :";
    // cin>>str;   // because of '>>' this input taking by this is without " ", tab or second line
    // to reduce this problem use => getline(cin,str)
    getline(cin,str); 
    cout<<str;
}