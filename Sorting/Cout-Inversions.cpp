// Counting Inversions in an Array

#include <bits/stdc++.h>
using namespace std;
int countInversions(int arr[], int n)
{
    int inversion_count=0;
    int i, j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                inversion_count++;
            }
        }
    }
    return inversion_count;
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<countInversions(arr, n);
    
    return 0;
}