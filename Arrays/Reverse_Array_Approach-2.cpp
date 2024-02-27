// Array Reverse Using a Loop (In-place)

#include <iostream>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
	// Reversing The Array Using Loop
	while (start < end)
	{
		// Basic Swapping Method
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		// Increase Start
		start++;
		// Decrease End
		end--;
	}
}
int main()
{
	// Declaring Array
	int arr[5] = {1, 2, 3, 4, 5};
	// Size Of An Array
	int n = sizeof(arr) / sizeof(arr[0]);
	reverseArray(arr, 0, n-1);
	// Printing Reverse Array
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}