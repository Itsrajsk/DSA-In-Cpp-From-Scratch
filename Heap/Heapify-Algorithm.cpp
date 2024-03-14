// Heap Algorithm

#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    // Heapify Algorithm
    void heapify(int arr[], int n, int i)
    {
        int largest = i;
        int left = 2 * i + 1;  // Note: Left child index in heap starts from 0
        int right = 2 * i + 2; // Note: Right child index in heap starts from 0

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

    // Applying heapify on the whole array
    h.heapify(arr, n, 0);

    cout << "Heapified array: ";
    h.printArray(arr, n);

    return 0;
}
