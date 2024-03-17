// Kth Largest SubArray

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getKthLargest(vector<int> &arr, int k)
{
    vector<int> sumStore;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            sumStore.push_back(sum);
        }
    }

    sort(sumStore.begin(), sumStore.end(), greater<int>()); // Sorting in descending order
    return sumStore[k - 1];                                 // Return the kth largest sum
}

int main()
{
    // Testcase
    vector<int> arr = {1, -3, 4, -2, -1, 6};
    int k = 3;

    cout << "Array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    int result = getKthLargest(arr, k);
    cout << "Kth largest sum of subarrays: " << result << endl;

    return 0;
}
