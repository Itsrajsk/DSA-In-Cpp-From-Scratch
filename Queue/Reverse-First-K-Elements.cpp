// Reverse First K Elements Of Queue

#include <bits/stdc++.h>
using namespace std;
queue<int> reverseFirstK(queue<int> q, int k)
{

    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }

    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }
    for (int i = 0; i < q.size() - k; i++)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int k = 5;
    reverseFirstK(q, k);
    return 0;
}