#include <iostream>

using namespace std;

class Deque
{
public:
    int *arr;
    int capacity; // Maximum size of the deque
    int front;
    int rear;

    Deque(int size)
    {
        capacity = size;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }

    ~Deque()
    {
        delete[] arr; // Destructor to free allocated memory
    }

    bool isEmpty()
    {
        return (front == -1);
    }

    bool isFull()
    {
        return ((rear + 1) % capacity == front);
    }

    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }

    bool pushFront(int x)
    {
        if (isFull())
        {
            cout << "Deque overflow" << endl;
            return false;
        }
        else
        {
            // Handle circular condition for front
            if (front == -1)
            {
                rear = 0;
            }
            front = (front - 1 + capacity) % capacity;
            arr[front] = x;
            return true;
        }
    }

    bool pushRear(int x)
    {
        if (isFull())
        {
            cout << "Deque overflow" << endl;
            return false;
        }
        else
        {
            // Handle circular condition for rear
            if (rear == capacity - 1 && front == -1)
            {
                front = 0;
            }
            rear = (rear + 1) % capacity;
            arr[rear] = x;
            return true;
        }
    }

    int popFront()
    {
        if (isEmpty())
        {
            cout << "Deque underflow" << endl;
            return -1;
        }
        else
        {
            int x = arr[front];
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                // Handle circular condition for front
                front = (front + 1) % capacity;
            }
            return x;
        }
    }

    int popRear()
    {
        if (isEmpty())
        {
            cout << "Deque underflow" << endl;
            return -1;
        }
        else
        {
            int x = arr[rear];
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                // Handle circular condition for rear
                rear = (rear - 1 + capacity) % capacity;
            }
            return x;
        }
    }
};

int main()
{
    Deque deque(5); // Create a deque of size 5

    cout << "Initial deque: ";
    for (int i = deque.front; i != deque.rear; i = (i + 1) % deque.capacity)
    {
        cout << deque.arr[i] << " ";
    }
    cout << endl;

    deque.pushFront(10);
    deque.pushRear(20);
    deque.pushFront(5);
    cout << "Deque after insertions: ";
    for (int i = deque.front; i != deque.rear; i = (i + 1) % deque.capacity)
    {
        cout << deque.arr[i] << " ";
    }
    cout << endl;

    cout << "Front element: " << deque.getFront() << endl;
    cout << "Rear element: " << deque.getRear() << endl;

    deque.popFront();
    deque.popRear();
    cout << "Deque after deletions: ";
    for (int i = deque.front; i != deque.rear; i = (i + 1) % deque.capacity)
    {
        cout << deque.arr[i] << " ";
    }
    cout << endl;

    return 0;
}
