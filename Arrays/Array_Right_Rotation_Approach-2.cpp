// Reversing the array

#include <iostream>

using namespace std;

void Rotate(int arr[], int d, int n)
{
    //    Here We Are Divide The Problem Into 3 Parts
    // 1 2 3 | 4 5
    // First We Reversed 2nd Part
    // Then We Reversed 1st Part
    // And After That We Reversed Whole Array

    //  Step 1
    int i, j;
    int k = d % n;
    for (i = n - d, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    // Step 2
    for (i = 0, j = n - d - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    // Step 3
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    // Printing Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // Declaring A Array
    int arr[5] = {1, 2, 3, 4, 5};
    // Array Size Calculation
    int n = sizeof(arr) / sizeof(arr[0]); // 4*5/4;  || 20/4 = 5
    // Calling Function
    Rotate(arr, 2, n);
    return 0;
}