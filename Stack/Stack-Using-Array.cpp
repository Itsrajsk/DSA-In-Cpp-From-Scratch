// Stack Implementation Using Array

#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (top < size - 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack Is Empty" << endl;
            return -1; // Assuming -1 denotes an empty stack, change it according to your requirement
        }
    }

    bool empty()
    {
        return top == -1;
    }

    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "Top element: " << st.peek() << endl;
    st.pop();
    cout << "Top element after pop: " << st.peek() << endl;
    cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}
