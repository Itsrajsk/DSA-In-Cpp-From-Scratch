// Approach 1 Using Formula Basis

#include <iostream>

using namespace std;

void Rotate(int arr[], int d, int n)
{
    d = d% n;

    for(int i = 0;i<n;i++){
        if(i<d){
            // For Moving Right Elements To The Left
            cout<<arr[n+i-d]<<" ";
        }
        else{
            // For Moving Left Elements To Right
            cout<<arr[i-d]<< " ";
        }
    }
}
int main()
{

    // Declaring A Array

    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // 4*5/4;  || 20/4 = 5
    Rotate(arr, 2, n);
    return 0;
}