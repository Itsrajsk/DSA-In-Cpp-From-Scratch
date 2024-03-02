// Finding Kth Smallest Element in an Array

#include <bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[], int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
            if (min_idx != i)
            {
                swap(arr[j], arr[min_idx]);
            }
        }
    }
    return arr[k - 1];
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << kthSmallest(arr, n, k);
    return 0;
}