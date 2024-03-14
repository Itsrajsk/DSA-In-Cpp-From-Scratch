// Min Heap Using Priority Queue

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> minHeap; // Min-heap declaration

    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(30);
    minHeap.push(40);
    minHeap.push(50);
    minHeap.push(60);
    minHeap.push(70);
    minHeap.push(80);
    minHeap.push(90);
    minHeap.push(100);

    // Top Element
    cout << "Top element: " << minHeap.top() << endl;

    // Size Of Min Heap
    cout << "Size of min heap: " << minHeap.size() << endl;

    // Empty Or Not
    cout << "Is the min heap empty? " << (minHeap.empty() ? "Yes" : "No") << endl;

    // Popping Some Element
    minHeap.pop();
    cout << "Top element after popping: " << minHeap.top() << endl;
    return 0;
}