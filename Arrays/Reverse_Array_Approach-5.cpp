// Array Reverse Stack (Non In-place)

#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void reverseArray(int arr[], int n)
{
    stack<int> stack;
    for (int i = 0; i < n; i++)
    {
        stack.push(arr[i]);
    }
    // Printing Reverse Array
    for (int i = 0; i < n; i++)
    {
        arr[i] = stack.top();
        cout << arr[i] << " ";
        stack.pop();
    }
}

int main()
{
    // Array Declaration
    int arr[5] = {1, 2, 3, 4, 5};
    // Array Size Calculation
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, n);
    return 0;
}