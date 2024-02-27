// Insert in a Sorted Array

#include <iostream>
using namespace std;
int insertInSorted(int arr[], int n, int key, int capacity)
{
    int i;
    if (n >= capacity)
    {
        return -1;
    }

    for (i = n - 1; (i >= 0 && arr[i] > key); i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = key;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 5;
    int key = 3;
    cout<<"Before Insertion :"<<endl;
    for(int i = 0;i<n+1;i++){
        if(arr[i]==0){
            cout<<" ";
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
    insertInSorted(arr, n, key, capacity);
    cout<<"\nAfter Insertion :"<<endl;
    for(int i = 0;i<n+1;i++){
        if(arr[i]==0){
            cout<<" ";
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}