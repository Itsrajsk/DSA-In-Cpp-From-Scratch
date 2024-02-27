// Approach 2 (Rotate one by one)

// Approach 1 (Using temp array)

#include <iostream>

using namespace std;

void Rotate(int arr[], int d, int n)
{
    int p = 1;
    while (p <= d)
    {
        int last = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        p++;
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
    int n = sizeof(arr) / sizeof(arr[0]); // 4*5/4;  || 20/4 = 5
    Rotate(arr, 2, n);
    return 0;
}