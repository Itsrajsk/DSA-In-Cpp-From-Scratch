// Counting frequencies of array elements
#include <bits/stdc++.h>
using namespace std;
void countFrequency(int arr[], int n)
{
    // Initializing Unordered Map
    unordered_map<int, int> map;
    // Adding Array Elements In Map & Counting The Frequency
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    // Printing the first int with second int
    for (auto i : map)
    {
        cout << i.first << " --> " << i.second << endl;
    }
}
int main()
{
    int arr[] = {1, 1, 1, 1, 2, 2, 2, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFrequency(arr, n);
    return 0;
}