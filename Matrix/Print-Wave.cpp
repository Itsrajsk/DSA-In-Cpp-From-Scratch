// Print Wave Problem

#include <bits/stdc++.h>
using namespace std;
void print_wave(vector<vector<int>> &arr, int row_size, int col_size)
{
    for (int col = 0; col < col_size; col++)
    {
        if (col & 1)
        {
            for (int row = row_size-1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
            cout<<endl;
        }
        else
        {
            for (int row = 0; row < row_size; row++)
            {
                cout << arr[row][col] << " ";
            }
            cout<<endl;
        }
    }
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int row_size = arr.size();
    int col_size = arr[0].size();

    print_wave(arr, row_size, col_size);

    // // Printing Array

    // for (int row = 0; row < row_size; row++)
    // {
    //     for (int col = 0; col < col_size; col++)
    //     {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}