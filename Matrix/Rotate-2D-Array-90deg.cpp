// Rotate 2D Array 90 Deg

#include <bits/stdc++.h>
using namespace std;
void rotate_array(vector<vector<int>> &arr, int row_size, int col_size)
{
    for(int col = 0; col<col_size;col++){
        for(int row = row_size-1;row>=0;row--){
            cout<<" | "<<arr[row][col]<<" | ";
        }
        cout<<endl;
    }
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int row_size = arr.size();
    int col_size = arr[0].size();
    rotate_array(arr, row_size, col_size);

    return 0;
}