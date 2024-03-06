// Spiral Matrix Problem

#include <bits/stdc++.h>
using namespace std;
void spiral_matrix(vector<vector<int>> &arr, int row_size, int col_size)
{
    int count = 0;
    int total = row_size * col_size;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row_size - 1;
    int endingCol = col_size - 1;

    while (count < total)
    {
        // Starting Row
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            cout << arr[startingRow][index] << " ";
            count++;
        }
       
        startingRow++;
        // Ending Col
        for (int index = startingRow; count < total && index <= endingRow; index++)
        {
            cout << arr[index][endingCol] << " ";
            count++;
        }
        
        endingCol--;
        // Ending Row
        for (int index = endingCol; count < total && index >= startingCol; index--)
        {
            cout << arr[endingRow][index] << " ";
            count++;
        }
      
        endingRow--;
        // Starting Col
        for (int index = endingRow; count < total && index >= startingRow; index--)
        {
            cout << arr[index][startingCol] << " ";
            count++;
        }
        startingCol++;
    }
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int row_size = arr.size();
    int col_size = arr[0].size();

    spiral_matrix(arr, row_size, col_size);

    return 0;
}