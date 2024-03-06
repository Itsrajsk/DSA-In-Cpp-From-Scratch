// Spiral Matrix Problem

#include <bits/stdc++.h>
using namespace std;
void search(vector<vector<int>> &arr, int row_size, int col_size, int target)
{
    int start = 0;
    int end = row_size*col_size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int element = arr[mid / col_size][mid % col_size];

        if (element == target)
        {
            cout << "Found" << endl;
            return;
        }

        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "Not Found" << endl;
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int row_size = arr.size();
    int col_size = arr[0].size();
    int target = 5;
    search(arr, row_size, col_size, target);

    return 0;
}