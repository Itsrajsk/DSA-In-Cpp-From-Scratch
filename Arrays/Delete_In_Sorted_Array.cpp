// Delete in a Sorted Array

#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key = 3;
    int pos;
    // Printing Before Deleting Array
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    // First We have To Find Index Of Key
    for(int i = 0;i<n;i++){
        if(arr[i]==key){
            pos = i;
        }
    }
    // Now We Delete This Element
    for(int i = pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    // Printing After Deleting Array
    cout<<"\n";
    for(int i = 0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}