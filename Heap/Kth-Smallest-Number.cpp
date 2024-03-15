

// Kth Smallest Number

#include <iostream>
#include <queue> // for priority_queue
using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
    priority_queue<int> pq;

    // Step 1: Push the first K elements
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    // Step 2: Push remaining elements after comparing them with the top
    for (int i = k; i < r; i++)
    {
        if (arr[i] < pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }

    int ans = pq.top();
    return ans;
}

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5}; // Test array
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // K value for testing

    // Test the function with the provided array and k value
    cout << "Kth smallest element: " << kthSmallest(arr, 0, n, k) << endl;

    // Test case 1: Array with negative numbers
    int arr2[] = {-3, -1, -4, -1, -5, -9, -2, -6, -5, -3, -5};
    n = sizeof(arr2) / sizeof(arr2[0]);
    k = 5;
    cout << "Kth smallest element in array with negative numbers: " << kthSmallest(arr2, 0, n, k) << endl;

    // Test case 2: Array with repeated elements
    int arr3[] = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    n = sizeof(arr3) / sizeof(arr3[0]);
    k = 2;
    cout << "Kth smallest element in array with repeated elements: " << kthSmallest(arr3, 0, n, k) << endl;

    // Test case 3: K equals 1
    k = 1;
    cout << "Kth smallest element when k equals 1: " << kthSmallest(arr, 0, n, k) << endl;

    // Test case 4: K equals size of the array
    k = n;
    cout << "Kth smallest element when k equals the size of the array: " << kthSmallest(arr, 0, n, k) << endl;

    return 0;
}
