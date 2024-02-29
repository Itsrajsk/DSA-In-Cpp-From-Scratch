// Union of two unsorted arrays

#include <bits/stdc++.h>
using namespace std;
void print_union(int *a, int *b, int n, int m)
{
    map<int, int> mp;
    // Entering first array elements in map
    for (int i = 0; i < n; i++)
    {
        mp.insert({a[i], i});
    }
    // Entering second array elements in map
    for (int i = 0; i < m; i++)
    {
        mp.insert({b[i], i});
    }
    // printing first element of map which is distinct elements
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " ";
    }
}
int main()
{
    int a[7] = {1, 2, 23, 3, 4, 5, 4};

    int b[5] = {12, 23, 4, 3, 1};

    print_union(a, b, 7, 5);
    return 0;
}