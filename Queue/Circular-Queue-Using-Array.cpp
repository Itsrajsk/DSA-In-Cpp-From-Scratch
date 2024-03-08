// Circular Queue Using Arrays

#include <iostream>
using namespace std;

class circularQueue
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    circularQueue(int n)
    {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    bool enqueue(int data)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "Queue Is Full" << endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[front] = data;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = data;
        return true;
    }

    int dequeue()
    {
        if (front == -1)
        {
            cout << "Queue Is Empty" << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return true;
    }
};
int main()
{
    circularQueue q(100);

    cout << q.enqueue(10) << endl;
    cout << q.dequeue() << endl;
    return 0;
}