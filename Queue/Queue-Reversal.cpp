// Queue Reversal

#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void queueReversal(queue<int> &q, stack<int> &s)
{

    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while (!s.empty())
    {
        int element = s.top();
        s.pop();
        q.push(element);
    }
}
void printQueue(queue<int> &q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}
int main()
{
    stack<int> s;
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    queueReversal(q, s);
    printQueue(q);
    return 0;
}