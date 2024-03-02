// Searching in a Sorted Array

#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] > key)
        {
            high = mid - 1;
            
        }

        if (arr[mid] < key)
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 1;
    int low = 0;
    int high = n - 1;
    cout << binarySearch(arr, low, high, key);
    return 0;
}