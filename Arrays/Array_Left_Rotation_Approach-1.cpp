// Approach 1 (Using temp array)

#include <iostream>

using namespace std;

void Rotate(int arr[], int d, int n)
{
    // Storing The Result In Temp
    int temp[n];
    int k = 0; // For Tracking Temp Array

    // First Storing the Elements From d to n-1
    for (int i = d; i < n ; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    // Storing 0 to d elements in Temp Of The end
    for (int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    // Storing Temp In Original Array
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
    // And Finally Printing The Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    // Declaring A Array

    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // 4*5/4;  || 20/4 = 5
    Rotate(arr, 2, n);
    return 0;
}