//  Queue Implementation

#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);

    q.push(20);

    q.push(30);

    q.push(40);

    q.push(50);

    cout << "Queue Out : " << q.front() << endl;
    q.pop();
    cout << "Queue Out : " << q.front() << endl;
    q.pop();
    cout << "Queue Out : " << q.front() << endl;
    q.pop();
    cout << "Queue Out : " << q.front() << endl;
    q.pop();
    cout << "Queue Out : " << q.front() << endl;
    q.pop();

    cout << "Size Of Queue: " << q.size() << endl;

    if (q.empty())
    {
        cout << "Queue Is Empty" << endl;
    }
    else
    {
        cout << "Queue Is Not Empty" << endl;
    }
    return 0;
}