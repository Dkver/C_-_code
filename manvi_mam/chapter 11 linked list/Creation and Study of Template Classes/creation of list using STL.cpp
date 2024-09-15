#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l1={1,2,3,4,5};
    auto itr= l1.begin();  // because iterator store the address of the value
    cout<<*itr<<endl;


    // auto itr= l1.end(); // it give the memory locaton after 4
    // cout<<*itr<<endl;


    // advance(itr,2);
    // cout<<*itr<<endl;


    // for(auto num: l1){  // using range based loop
    //     cout<<num<<endl;
    // }



    // for(auto itr=l1.begin();itr!=l1.end();itr++){  //loop method
    //     cout<<*itr<<" ";
    // }
    // cout<<endl;


    // // reverse traversal
    // for(auto itr=l1.rbegin();itr!=l1.rend();itr++){
    //     cout<<*itr<<" ";
    // }
    // cout<<endl;
    // return 0;


    // inserting element 1st variation
    // advance(itr,2);
    // l1.insert(itr,5);  // to insert 5 before 3rd itr
    // for(auto itr=l1.begin();itr!=l1.end();itr++){  // loop method 
    //      cout<<*itr<<" ";
    //  }
    //  cout<<endl;


     // second variation
    //  advance(itr,2);
    // l1.insert(itr,3,5);  // to insert 5 before 3rd itr 3 times
    // for(auto itr=l1.begin();itr!=l1.end();itr++){  // loop method 
    //      cout<<*itr<<" ";
    //  }


    // third variation
    
    // advance(itr,2);
    // auto l=l1.begin();
    // auto r=l1.begin();
    // advance(r,2);  // now r is pointing to 3
    // l1.insert(itr,l,r);
    // for(auto itr=l1.begin();itr!=l1.end();itr++){  // loop method 
    //       cout<<*itr<<" ";
    //  }
    //  cout<<endl;




     // deletion of element from the list
     // 1 2 1 2 3 4 5  // deleting second pair of 1 2 
     auto s_itr=l1.begin();
     advance(s_itr,2); // pointing to 2nd 1 of the list
     auto e_itr=l1.begin();
     advance(e_itr,4); // end itr pointing to 5th element
     for(auto itr=l1.begin();itr!=l1.end();itr++){  // loop method 
         cout<<*itr<<" ";
      }
      cout<<endl;


      return 0;

}