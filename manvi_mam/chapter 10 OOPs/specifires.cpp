#include<iostream>
using namespace std;
class parent{
    public:
        int x;

    protected:
        int y;

    private:
        int z;

    };
    class child1: public parent{  // public parent used to inherit publicaly
    // x will remains public
    // y will remains protected
    // z will not be accessible 

    };

    class child2: private parent{
        // x will be private 
        // y will be private 
        // z will be inaccessible
    };
    
    class child3: protected parent{
        // x wll be protected
        // y will be protected
        // z will be inaccessible
    };
    
    int main(){
        parent p;
        p.x;
        return 0;
    }

   