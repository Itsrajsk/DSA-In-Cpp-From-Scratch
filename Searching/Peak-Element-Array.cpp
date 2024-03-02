// Finding Peak Element in an Array

#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (mid == 0 || arr[mid-1]<=arr[mid] && mid == high || arr[mid+1] <= arr[mid])
        {
            return mid;
        }

        if (mid > 0 && arr[mid-1] <arr[mid])
        {
            return binarySearch(arr, mid + 1, high);
            
        }
        else
        {
            return binarySearch(arr, low, mid - 1);
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = n - 1;
    cout << binarySearch(arr, low, high);
    return 0;
}