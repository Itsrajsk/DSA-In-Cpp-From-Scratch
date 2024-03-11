//  Sort Stack

#include <iostream>
#include <stack>

using namespace std;
void sortInserted(stack<int> &stack, int num)
{
    if (stack.empty() || stack.top() < num)
    {
        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();

    sortInserted(stack, n);
    stack.push(n);
}
void sortStack(stack<int> &stack)
{
    // Base Case
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    sortStack(stack);

    sortInserted(stack, num);
}
int main()
{
    stack<int> stack;
    stack.push(5);
    stack.push(4);
    stack.push(3);
    stack.push(2);
    stack.push(1);

    while (!stack.empty())
    {
        int num = stack.top();
        cout << num << " ";
        stack.pop();
    }

    return 0;
}