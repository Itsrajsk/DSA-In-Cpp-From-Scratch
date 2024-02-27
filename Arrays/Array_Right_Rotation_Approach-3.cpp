// Recursive Approach

#include <iostream>

using namespace std;

void Rotate(int arr[], int d, int n)
{
    // Base Case

    if (d == 0)
    {
        return;
    }

    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    Rotate(arr, d - 1, n);
}
int main()
{
    // Declaring A Array
    int arr[5] = {1, 2, 3, 4, 5};
    // Array Size Calculation
    int n = sizeof(arr) / sizeof(arr[0]); // 4*5/4;  || 20/4 = 5
    // Calling Function
    Rotate(arr, 2, n);
    // Printing Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}