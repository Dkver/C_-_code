#include <iostream>
#include <stack>
using namespace std;
bool isValid(string str)
{ // to know string is valid or not
    stack<char> st;
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        char ch = str[i]; // current character
        if (ch == '(' or ch == '{' or ch == '[')
        {
            st.push(ch);
        }
        else
        {
            // clossing bracket
            if (ch == ')' and !st.empty() and st.top() == '(')
            {
                st.pop();
            }
            else if (ch == ']' and !st.empty() and st.top() == '[')
            {
                st.pop();
            }
            else if (ch == '}' and !st.empty() and st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}
int main()
{
    string str = "{{[()()(())]}}";
    cout << isValid(str) << endl;
    return 0;
}