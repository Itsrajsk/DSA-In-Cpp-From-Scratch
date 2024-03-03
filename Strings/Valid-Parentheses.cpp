// Valid Parentheses

#include <bits/stdtr1c++.h>
using namespace std;
bool valid(string s)
{
    stack<char> stk;

    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            stk.push(c);
        }
        else
        {
            if ((c == ')' && stk.top() != '(') || (c == ']' && stk.top() != '[') || (c == '}' && stk.top() != '{'))
            {
                return false;
            }
            stk.pop();
        }
    }
    return stk.empty();
}
int main()
{
    string s = "()(){}[][]";
    cout << valid(s);
    return 0;
}