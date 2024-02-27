// Search in a Sorted Array

#include <iostream>
using namespace std;
int binarySearch(int arr[], int low, int high, int key)
{
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        low++;
        high--;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    cout << "Index - " << binarySearch(arr, 0, n - 1, key);
    return 0;
}