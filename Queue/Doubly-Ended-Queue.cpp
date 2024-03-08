// Doubly Ended Queue

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    deque<int> d;

    d.push_front(12);
    d.push_front(22);
    d.push_front(32);
    d.push_front(42);
    d.push_front(52);

    d.push_back(52);
    d.push_back(42);
    d.push_back(32);
    d.push_back(22);
    d.push_back(12);

    d.pop_front();
    cout << d.front() << endl;
    cout << d.back() << endl;

    if(d.empty())
    {
        cout<<"QUEUE Is Empty"<<endl;
    }
    else{
        cout<<"QUEUE Is Not Empty"<<endl;
    }
    return 0;
}