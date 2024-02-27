// Array Reverse Inbuilt Methods (Non In-place)
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Array Declaration
    int arr[5] = {1, 2, 3, 4, 5};
    // Array Size Calculation
    int n = sizeof(arr) / sizeof(arr[0]);
    // Using Built In Method
    reverse(arr, arr + n);
    // Printing Array
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}