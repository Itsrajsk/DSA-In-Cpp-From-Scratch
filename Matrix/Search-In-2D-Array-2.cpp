// Search In 2D Array Level 2 Problem

#include <bits/stdc++.h>
using namespace std;
void search(vector<vector<int>> &arr, int row_size, int col_size, int target)
{
    int row = 0;
    int col = col_size - 1;

    while (row < row_size && col_size >= 0)
    {
        int element = arr[row][col];

        if (element == target)
        {
            cout << "Found" << endl;
            return;
        }

        if (element < target)
        {
            row++;
        }
        else
        {
            col--;
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