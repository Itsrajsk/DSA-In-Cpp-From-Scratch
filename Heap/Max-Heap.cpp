// Min Heap Using Priority Queue

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq; // Max-heap declaration

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    pq.push(60);
    pq.push(70);
    pq.push(80);
    pq.push(90);
    pq.push(100);

    // Top Element
    cout << "Top element: " << pq.top() << endl;

    // Size Of Min Heap
    cout << "Size of min heap: " << pq.size() << endl;

    // Empty Or Not
    cout << "Is the Max heap empty? " << (pq.empty() ? "Yes" : "No") << endl;

    // Popping Some Element
    pq.pop();
    cout << "Top element after popping: " << pq.top() << endl;

    return 0;
}
