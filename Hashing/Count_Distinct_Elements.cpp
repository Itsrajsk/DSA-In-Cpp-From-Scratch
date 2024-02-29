// Count Distinct ( Unique ) elements in an array

#include <bits/stdc++.h>
using namespace std;
int countDistinct(int *arr, int n)
{
    // Initializing set with name s
    unordered_set<int> s;
    // for storing we take a res variable
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        // if we not get a element in set then we insert it in set and increment the res++
        if (s.find(arr[i]) == s.end())
        {
            s.insert(arr[i]);
            res++;
        }
    }
    // returning res
    return res;
}
int main()
{
    int arr[] = {1, 2, 3, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countDistinct(arr, n);
    return 0;
}