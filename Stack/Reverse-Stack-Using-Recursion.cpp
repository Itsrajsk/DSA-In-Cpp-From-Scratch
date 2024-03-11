//  Reverse Stack Using Recursion

#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &stack, int x)
{
    if (stack.empty())
    {
        stack.push(x);
        return;
    }

    int num = stack.top();
    stack.pop();

    insertAtBottom(stack, x);

    stack.push(num);
}

void reverseStack(stack<int> &stack)
{
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    reverseStack(stack);

    insertAtBottom(stack, num);
}

int main()
{
    stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    reverseStack(stack);

    while (!stack.empty())
    {
        int num = stack.top();
        cout << num << " ";
        stack.pop();
    }

    return 0;
}