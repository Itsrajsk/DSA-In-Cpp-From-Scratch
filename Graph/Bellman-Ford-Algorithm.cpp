// Bellmon Ford Algorithm

#include <iostream>
#include <vector>
using namespace std;

// Bellman-Ford Algorithm
int bellmanford(int n, int m, int src, int dest, vector<vector<int>> &edges)
{
    vector<int> dist(n + 1, 1e9);
    dist[src] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];

            if (dist[u] != 1e9 && ((dist[u] + wt) < dist[v]))
            {
                dist[v] = dist[u] + wt;
            }
        }
    }

    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];

            if (dist[u] != 1e9 && ((dist[u] + wt) < dist[v]))
            {
                flag = true;
            }
        }
    }

    if (!flag)
    {
        return dist[dest];
    }
    return -1;
}

int main()
{
    // Test case
    int n = 5; // Number of vertices
    int m = 7; // Number of edges
    vector<vector<int>> edges = {
        {1, 2, 4},
        {1, 3, 2},
        {2, 3, 5},
        {2, 4, 10},
        {3, 4, 3},
        {3, 5, 2},
        {4, 5, 4}};
    int src = 1;  // Source vertex
    int dest = 5; // Destination vertex

    // Call Bellman-Ford algorithm
    int result = bellmanford(n, m, src, dest, edges);
    if (result != -1)
    {
        cout << "Shortest distance from " << src << " to " << dest << " is: " << result << endl;
    }
    else
    {
        cout << "There is a negative weight cycle in the graph." << endl;
    }

    return 0;
}
