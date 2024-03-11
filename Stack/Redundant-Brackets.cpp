// Redundant Brackets

#include <iostream>
#include <stack>
using namespace std;
bool isRedundant(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool redundant = true;
                while (!st.top() == ')')
                {
                    char top = st.top();
                    if (top == '(' || top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        redundant = false;
                    }
                    st.pop();
                }
                if (redundant == true)
                {
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}
int main()
{
    string s = "((a+b))";
    cout << isRedundant(s) << endl;
    return 0;
}