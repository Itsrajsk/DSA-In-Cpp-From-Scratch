//  Stack Using STL

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    cout << s.top() << endl;
    s.push(20);
    cout << s.top() << endl;
    s.push(30);
    cout << s.top() << endl;
    s.push(40);
    cout << s.top() << endl;
    s.push(50);
    cout << s.top() << endl;

    s.pop();
    s.pop();
    s.pop();

    cout << s.top() << endl;

    if (s.empty())
    {
        cout << "Stack Is Empty !!!" << endl;
    }
    else
    {
        cout << "Stack Is Not Empty !" << endl;
    }
    return 0;
}