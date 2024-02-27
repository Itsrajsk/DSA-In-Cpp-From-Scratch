// Search Operation
#include <iostream>
using namespace std;
void search_in_unsorted(int arr[], int key, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element Present At Index : " << i;
            return;
        }
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    search_in_unsorted(arr, key, n);
    return 0;
}