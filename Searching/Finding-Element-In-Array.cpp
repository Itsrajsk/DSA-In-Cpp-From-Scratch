// Finding an Element in an Array

#include <bits/stdc++.h>
using namespace std;
int findElement(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    cout << findElement(arr, n, key);
    return 0;
}