#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,6,7,10};
    int arr2[]={0,1,3,8,11,12,15,18};
    int m=4;
    int n=8;
    // code to merge two shorted array
    int result[m+n];
    int i=0;  // help in itration of arr1
    int j=0;  // help in itration of arr2
    int k=0;  // help in itration of result
    // when both i and j are in the limit of arr1 and arr2
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            result[k]=arr1[i];
            i++;
            k++;
        }
        else{
            result[k]=arr2[j];
            j++;
            k++;
        }
    }
    // when j is end
    while(i<m){
        result[k]=arr1[i];
        i++;
        k++;
    }
    // when i is end
    while(j<n){
        result[k]=arr2[j];
        j++;
        k++;
    }
    for(int k=0;k<m+n;k++){
        cout<<result[k]<<" ";
    }
    return 0;

}