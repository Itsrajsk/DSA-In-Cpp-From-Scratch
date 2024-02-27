// Insert at any position

#include <iostream>
using namespace std;
void insertAtAnyPos(int arr[], int key, int pos, int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = key;
    // Printing Array
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
int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;
    int pos = 2;
    insertAtAnyPos(arr, key, pos, n);
    return 0;
}