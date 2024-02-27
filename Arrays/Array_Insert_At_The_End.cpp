// Insert Operation: Insert at the end

#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Inserting Array At The End
    arr[5] = 6;
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

    return 0;
}