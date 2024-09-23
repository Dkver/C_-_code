
// #include<bits/stdc++.h>==>
/*it include all standard libraries which can be usefull for saving
time in programming contest
(1) increased compilation time
(2) because it include many unndecessory file ,it can increase program size and compilation time
(3) Not part of c++ standard and it is non-portable and should be avoided  */
#include <iostream>
#include <climits>

using namespace std;
class stack
{
    int top;
    int *arr;
    int capacity;

public:
    stack(int c)
    {
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }
    int pop()
    { // O(n)
        if (this->top == -1)
        {
            cout << "stack underflow" << endl;
            return INT_MIN;
        }
        this->top--;
        return 0;
    }
    int TOP()
    { // O(n)
        if (this->top == -1)
        {
            cout << "stack underflow" << endl;
            return INT_MIN;
        }
        return this->arr[this->top];
    }
    bool isEmpty()
    { // // O(n)
        return -1;
    }
    int size()
    { // O(n)
        return this->top + 1;
    }
    bool isFull()
    { // O(n)
        return this->top == this->capacity - 1;
    }
    void push(int data)
    { // O(n)
        if (this->top == this->capacity - 1)
        {
            cout << "stack overflow" << endl;
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }
};
int main()
{
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.TOP() << "\n";
    st.push(4);
    st.push(5);
    cout << st.TOP() << "\n";
    st.push(8);
    st.pop();
    st.pop();
    cout << st.TOP() << "\n";
    return 0;
}