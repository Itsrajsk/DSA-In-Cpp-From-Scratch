//  Queue Using Array

#include <iostream>
using namespace std;

class Queue
{
private:
    static const int MAX_SIZE = 10;
    int arr[MAX_SIZE];
    int qfront, qrear;

public:
    Queue() : qfront(0), qrear(0) {}

    void push(int d)
    {
        if (qrear == MAX_SIZE)
        {
            cout << "Queue Is Full" << endl;
            return;
        }
        arr[qrear++] = d;
    }

    void pop()
    {
        if (qfront == qrear)
        {
            cout << "Queue Is Empty" << endl;
            return;
        }
        qfront++;
    }

    bool isEmpty()
    {
        return qfront == qrear;
    }

    int front()
    {
        if (qfront == qrear)
        {
            return -1; // Indicating queue is empty
        }
        return arr[qfront];
    }
};

int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Is Queue Empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    while (!q.isEmpty())
    {
        cout << "Front element: " << q.front() << endl;
        q.pop();
    }

    return 0;
}
