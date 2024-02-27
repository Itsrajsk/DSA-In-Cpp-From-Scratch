// Delete Operation

#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Deleting certain element
    // first find out the index of that element
    int key = 3;
    int pos;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            pos = i;
        }
    }
    // Main Deleting Loop
    for (int i = pos; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    // Printing The Array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << " ";
        }
        else
        {
            cout << arr[i] << " ";
        }
    }
}