#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void shortedsquarearray(vector<int> &v){
vector<int> ans;
int left_ptr=0;
int right_ptr=v.size()-1;
while(left_ptr<=right_ptr){
    if(abs(v[left_ptr])<abs(v[right_ptr])){
        ans.push_back(v[right_ptr]*v[right_ptr]);
        right_ptr--;
    }
    else{
        ans.push_back(v[left_ptr]*v[left_ptr]);
        left_ptr++;
    }
}
reverse(ans.begin(),ans.end());
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;

}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cout<<"enter the elements:";
        cin>>ele;
        v.push_back(ele);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    shortedsquarearray(v);

}