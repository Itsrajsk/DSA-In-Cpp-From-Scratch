// Merge Two Binary Max Heaps

#include <iostream>
#include <vector>
using namespace std;

// Function to heapify an array
void heapify(vector<int> &arr, int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

// Function to merge two max heaps
vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
{
    vector<int> ans;

    // Merge the two heaps
    for (auto i : a)
    {
        ans.push_back(i);
    }
    for (auto i : b)
    {
        ans.push_back(i);
    }

    // Heapify the merged heap
    int size = ans.size();
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        heapify(ans, size, i);
    }

    // Output the merged heap (optional)
    cout << "Merged Max Heap: ";
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return ans;
}

int main()
{
    // Test cases
    vector<int> a = {10, 7, 5, 4, 3};
    vector<int> b = {9, 8, 6, 2, 1};

    int n = a.size();
    int m = b.size();

    cout << "Heap A: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Heap B: ";
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    vector<int> mergedHeap = mergeHeaps(a, b, n, m);

    return 0;
}
