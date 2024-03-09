// Two Stack Problem

#include <iostream>
using namespace std;

class TwoStack
{
    int *arr;
    int top1;
    int top2;
    int size;

public:
    TwoStack(int size)
    {
        this->size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }

    void push1(int data)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = data;
        }
    }

    void push2(int data)
    {
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = data;
        }
    }

    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1; // Stack underflow
        }
    }

    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1; // Stack underflow
        }
    }

    ~TwoStack()
    {
        delete[] arr;
    }
};

int main()
{
    TwoStack ts(10);
    ts.push1(10);
    ts.push2(20);
    return 0;
}