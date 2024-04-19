#include<iostream>
#include<vector>
using namespace std;
void fun(string &str,int i,string result,vector<string> &li){
    if(i==str.length()){
        li.push_back(result);
        return ;
    }
    fun(str,i+1,result+str[i],li);
    fun(str,i+1,result,li);
}
int main(){
   vector<string> res;
   string str="abc";
   fun(str,0,"",res);
   for(int i=0;i<=res.size();i++){
    cout<<res[i]<<" ";
   }
   return 0;

}