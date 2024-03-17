//  Kth Largest Sum Subarray

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int getKthLargest(vector<int> &arr, int k)
{
    priority_queue<int, vector<int>, greater<int>> minHeap;

    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (minHeap.size() < k)
            {
                minHeap.push(sum);
            }
            else
            {
                if (sum > minHeap.top())
                {
                    minHeap.pop();
                    minHeap.push(sum);
                }
            }
        }
    }
    return minHeap.top();
}

int main()
{
    // Testcase
    vector<int> arr = {10, -10, 20, -20, 30, -30};
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
