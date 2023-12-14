#include<iostream>
using namespace std;
int main(){
    char character;
    cout<<"enter the character:";
    cin>>character;
    switch(character){
        case 'a':
        cout<<"vowels"<<endl;
        break;
        case 'e':
        cout<<"vowels"<<endl;
        break;
        case 'i':
        cout<<"vowels"<<endl;
        break;
        case 'o':
        cout<<"vowels"<<endl;
        break;
        case 'u':
        cout<<"vowels"<<endl;
        break;
        default:
        cout<<"consonant"<<endl;
    }
}