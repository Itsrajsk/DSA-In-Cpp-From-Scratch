// Implement Insertion Sort For Sorting Array In Non Decreasing Order

#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
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
}

int main()
{
    int arr[] = {5, 3, 1, 8, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "*** Before Sorting ***" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    insertionSort(arr, n);

    cout << "\n*** After Sorting ***" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}