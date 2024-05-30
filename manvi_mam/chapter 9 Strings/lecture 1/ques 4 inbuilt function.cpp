#include<iostream>
#include<string>
#include<string.h> // strcat() is define in this header file
#include<algorithm>  // reverse is the function of include algorithms
using namespace std;
int main(){
    // string str="deepak";
    // reverse(str.begin(),str.end());
    // cout<<str<<endl;


    // cout<<str.substr(0,4)<<endl;
    // cout<<str.substr(0)<<endl;


    // string str1="Verma";
    // cout<<str+str1<<endl;


    // char s1[20]="deepak";
    // char s2[20]="verma";
    // strcat(s1,s2);
    // cout<<s1;


    // string s1="deepak";
    // char ch='v';
    // s1.push_back(ch);
    // cout<<s1<<endl;


    // string s1="deepak";
    // cout<<s1.size()<<endl;
    // char ch[20]="deepak";
    // cout<<strlen(ch)<<endl;
    int num=432;
    string str=to_string(num);
    str+='1';
    cout<<str<<endl;
    cout<<str[2]<<endl;

}