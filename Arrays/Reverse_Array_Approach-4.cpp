// Array Reverse Recursion (In-place or Non In-place)

#include <iostream>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
    // Base Condition
    if (start >= end)
        return;
    // Small Calculation
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    // increment And Decrement of Pointers
    start++;
    end--;
    // Recursive Call
    reverseArray(arr, start, end);
}
void printArray(int arr[], int n)
{
    // Printing Reverse Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // Array Declaration
    int arr[5] = {1, 2, 3, 4, 5};
    // Array Size Calculation
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}