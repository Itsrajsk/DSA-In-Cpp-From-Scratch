// Heap Implementation

#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    // Inserting Function
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    // Deleting Function
    void deleteHeap()
    {
        if (size == 0)
        {
            cout << "Nothing To Delete" << endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i <= size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex <= size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex <= size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }

    // Function to print an array
    void printArray(int arr[], int n)
    {
        for (int i = 1; i <= n; ++i)
            cout << arr[i] << " ";
        cout << "\n";
    }
};

int main()
{
    heap h;

    // Test insertion
    h.insert(4);
    h.insert(10);
    h.insert(7);
    h.insert(1);
    h.insert(3);
    cout << "After insertion: ";
    h.printArray(h.arr, h.size);

    // Test deletion
    h.deleteHeap();
    cout << "After deletion: ";
    h.printArray(h.arr, h.size);

    return 0;
}
