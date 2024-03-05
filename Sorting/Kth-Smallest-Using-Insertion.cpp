// Implement Kth Smallest Using Insertion

#include <bits/stdc++.h>
using namespace std;
int insertionSort(int arr[], int n, int k)
{
    int i, j, temp;

    for (i = 1; i < n; i++)
    {
        temp = arr[i];

        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
    return arr[k - 1];
}

int main()
{
    int arr[] = {5, 3, 1, 8, 0};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << insertionSort(arr, n, k);

    return 0;
}