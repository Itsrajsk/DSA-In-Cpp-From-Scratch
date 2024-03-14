// Heap Sort

#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    void heapify(int arr[], int n, int i)
    {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

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

    // Heap Sort
    void HeapSort(int arr[], int n)
    {
        // Build max heap
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(arr, n, i);

        // Heap sort
        for (int i = n - 1; i > 0; i--)
        {
            swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }
    }

    // Function to print an array
    void printArray(int arr[], int n)
    {
        for (int i = 0; i < n; ++i)
            cout << arr[i] << " ";
        cout << "\n";
    }
};

int main()
{
    heap h;
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    h.printArray(arr, n);

    h.HeapSort(arr, n);

    cout << "Sorted array: ";
    h.printArray(arr, n);

    return 0;
}
