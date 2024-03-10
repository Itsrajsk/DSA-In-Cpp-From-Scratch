// Delete Middle Element Using Stack

#include <iostream>
#include <stack>
using namespace std;
void solve(stack<int> &inputStack, int count, int size)
{
    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    solve(inputStack, count + 1, size);
    inputStack.push(num);
}
void deleteMiddle(stack<int> &inputStack, int N)
{
    int count = 0;
    solve(inputStack, count, N);
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
    stack<int> inputStack;
    inputStack.push(10);
    inputStack.push(20);
    inputStack.push(30);
    inputStack.push(40);
    inputStack.push(50);
    deleteMiddle(inputStack, 3);
    PrintStack(inputStack);
    return 0;
}