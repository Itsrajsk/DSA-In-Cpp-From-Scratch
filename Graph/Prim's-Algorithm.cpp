// Prim's Algorithm

#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>
#include <climits>
using namespace std;

vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // Adjacency list
    unordered_map<int, list<pair<int, int>>> adj;

    // Making Adjacency list
    for (int i = 0; i < m; i++)
    {
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    // Initializing important variables
    vector<int> key(n + 1, INT_MAX); // Key values for vertices
    vector<int> parent(n + 1, -1);   // Parent array to store MST
    vector<bool> mst(n + 1, false);  // To keep track of vertices in MST

    // Start with the first vertex
    key[1] = 0;
    parent[1] = -1;

    // Construct MST
    for (int i = 1; i < n; i++)
    {
        int u = -1;
        int minKey = INT_MAX;

        // Find vertex with minimum key value
        for (int v = 1; v <= n; v++)
        {
            if (!mst[v] && key[v] < minKey)
            {
                minKey = key[v];
                u = v;
            }
        }

        // Add the selected vertex to MST
        mst[u] = true;

        // Update key values and parent for adjacent vertices
        for (auto it : adj[u])
        {
            int v = it.first;
            int w = it.second;
            if (!mst[v] && w < key[v])
            {
                parent[v] = u;
                key[v] = w;
            }
        }
    }

    // Construct MST edges
    vector<pair<pair<int, int>, int>> mstEdges;
    for (int v = 2; v <= n; v++)
    {
        mstEdges.push_back({{parent[v], v}, key[v]});
    }
    return mstEdges;
}

int main()
{
    // Test case
    int n = 5; // Number of vertices
    int m = 7; // Number of edges
    vector<pair<pair<int, int>, int>> edges = {
        {{1, 2}, 4},
        {{1, 3}, 2},
        {{2, 3}, 5},
        {{2, 4}, 10},
        {{3, 4}, 3},
        {{3, 5}, 2},
        {{4, 5}, 4}};

    // Calculate MST edges using Prim's algorithm
    vector<pair<pair<int, int>, int>> mstEdges = calculatePrimsMST(n, m, edges);

    // Print MST edges
    cout << "Minimum Spanning Tree Edges:\n";
    for (auto edge : mstEdges)
    {
        cout << edge.first.first << " - " << edge.first.second << " : " << edge.second << endl;
    }

    return 0;
}
