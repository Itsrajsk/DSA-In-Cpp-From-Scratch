// Insert Element At Bottom Of Stack

#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    solve(s, x);
    s.push(num);
}
void PrintStack(stack<int> s)
{

    if (s.empty())
        return;

    int x = s.top();

    s.pop();

    cout << x << ' ';

    PrintStack(s);

    s.push(x);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int x = 0;
    solve(s, x);

    PrintStack(s);
    return 0;
}