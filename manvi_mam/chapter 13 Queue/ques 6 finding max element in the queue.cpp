#include<iostream>
#include<queue>
#include<climits>// it is used for the INT_MIN function 
using namespace std;
int findmax(queue<int> q){
    if(q.empty()){
        cout<<"the queue is empty:"<<endl;
        return INT_MIN;
    }
    int maxele=INT_MIN;
    int n=q.size();
    for(int i=0;i<n;++i){
        int current=q.front();
        q.pop();
        if(current>maxele){
            maxele=current;
        }
        q.push(current);
    }
    return maxele;
}
int main(){
    
    queue<int> q;
    q.push(12);
    q.push(32);
    q.push(11);
    q.push(14);
    q.push(48);
    q.push(67);
    int maxele=findmax(q);
    cout<<"maximumelement of the queue is:"<<maxele<<endl;
    
    return 0;
}