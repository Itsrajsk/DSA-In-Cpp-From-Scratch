// Array Reverse Using an Extra Array (Non In-place)

#include <iostream>

using namespace std;

void revArrayExtraArray(int arr[], int size)
{
    // Declaring New Array For Storing Reverse Array
    int revArr[size];

    // Traversing The Array And Putting Elements From Last to Start
    for (int i = 0; i < size; i++)
    {
        revArr[i] = arr[size - i - 1];
    }

    // Printing Reverse Array
    for (int i = 0; i < size; i++)
    {
        cout << revArr[i] << " ";
    }
}

int main()
{

    // Declaring A Array

    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // 4*5/4;  || 20/4 = 5
    revArrayExtraArray(arr, size);
    return 0;
}