// Min Cost Of Ropes

#include <iostream>
#include <queue> // Include the priority_queue header
#include <vector>
using namespace std;

long long minCost(long long arr[], long long n)
{
    // Priority queue declaration with proper comparison function
    priority_queue<long long, vector<long long>, greater<long long>> pq;

    // Push all elements of the array into the priority queue
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }

    long long cost = 0;

    // Continue until there is only one rope left in the priority queue
    while (pq.size() > 1)
    {
        // Extract the two smallest ropes
        long long a = pq.top();
        pq.pop();
        long long b = pq.top();
        pq.pop();

        // Calculate the sum of the two ropes
        long long sum = a + b;

        // Add the sum to the total cost
        cost += sum;

        // Push the sum back to the priority queue
        pq.push(sum);
    }

    // Return the minimum cost
    return cost;
}

int main()
{
    // Example usage
    long long arr[] = {4, 3, 2, 6};
    long long n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum cost of joining ropes: " << minCost(arr, n) << endl;
    return 0;
}
