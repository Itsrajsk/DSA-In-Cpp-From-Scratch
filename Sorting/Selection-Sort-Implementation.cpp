// Implement Insertion Sort For Sorting Array In Non Decreasing Order

#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
   for(int i = 0;i<n;i++){
    int min_idx = i;
    for(int j = i+1; j<n;j++){
        if(arr[min_idx]>arr[j]){
            min_idx = j;
        }
    }
    swap(arr[min_idx],arr[i]);
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
    selectionSort(arr, n);

    cout << "\n*** After Sorting ***" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}