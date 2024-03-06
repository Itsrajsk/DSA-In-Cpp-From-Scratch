//  2D Array Declaration

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // First Method
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // Second Method
    vector<vector<int>> arr1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    int rows1 = arr1.size();
    int cols1 = arr1[0].size();

    cout << "First Method" << endl;
    cout << "Number of rows: " << rows << endl;
    cout << "Number of columns: " << cols << endl;

    cout << "Second Method" << endl;
    cout << "Number of rows: " << rows1 << endl;
    cout << "Number of columns: " << cols1 << endl;

    return 0;
}
