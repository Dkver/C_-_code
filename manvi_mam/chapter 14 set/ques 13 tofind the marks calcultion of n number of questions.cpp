#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of questions:"<<" ";
    cin>>n;
    int p;
    cout<<"enter the value of attempted question marks:"<<" ";
    cin>>p;
    int q;
    cout<<"enter the minus marking values of the questions:"<<" ";
    cin>>q;
    unordered_set<int>diffscore;
    for(int i=0;i<=n;i++){  // for correct answer
        for(int j=0;j<=n;j++){   // for incorrect answer

            int correct=i;
            int incorrect=j;
            int unattempted=n-(i+j);  // this value are comes -ve also then
            if(unattempted>=0){
                int score=correct*p + incorrect*q;
                diffscore.insert(score);
            }
            else{
                break;
            }
        }
    }
    for(auto ele:diffscore){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<"Ans: "<<diffscore.size()<<endl;
    return 0;
}