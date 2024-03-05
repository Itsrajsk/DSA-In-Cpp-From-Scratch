// Implement Kth Smallest Using Selection Sort

#include <bits/stdc++.h>
using namespace std;
int selectionSort(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min_idx] > arr[j])
            {
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
    return arr[k - 1];
}

int main()
{
    int arr[] = {5, 3, 1, 8, 0};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << selectionSort(arr, n, k);

    return 0;
}