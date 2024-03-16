// Dijkstra's Algorithm

#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>
#include <set>
#include <climits>

using namespace std;

vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source)
{
    unordered_map<int, list<pair<int, int>>> adj;
    for (int i = 0; i < edges; i++)
    {
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    vector<int> dist(vertices, INT_MAX);
    set<pair<int, int>> st;

    dist[source] = 0;
    st.insert(make_pair(0, source));

    while (!st.empty())
    {
        auto top = *(st.begin());
        int nodeDistance = top.first;
        int topNode = top.second;

        st.erase(st.begin());

        for (auto neighbour : adj[topNode])
        {
            int dest = neighbour.first;
            int weight = neighbour.second;

            if (nodeDistance + weight < dist[dest])
            {
                auto it = st.find(make_pair(dist[dest], dest));
                if (it != st.end())
                    st.erase(it);

                dist[dest] = nodeDistance + weight;
                st.insert(make_pair(dist[dest], dest));
            }
        }
    }
    return dist;
}

// Function to print shortest paths as characters representing the nodes
void printShortestPaths(vector<int> &shortestDistances, int source)
{
    cout << "Shortest paths visualization:" << endl;
    for (int i = 0; i < shortestDistances.size(); ++i)
    {
        char node = 'A' + i; // Assuming nodes are represented by characters starting from 'A'
        if (i == source)
            cout << node << " -> " << node << " : " << 0 << endl;
        else if (shortestDistances[i] == INT_MAX)
            cout << node << " -> " << node << " : "
                 << "Not reachable" << endl;
        else
            cout << char('A' + source) << " -> " << node << " : " << shortestDistances[i] << endl;
    }
}

// Test cases
int main()
{
    vector<vector<int>> graph1 = {{0, 1, 4}, {0, 7, 8}, {1, 2, 8}, {1, 7, 11}, {2, 3, 7}, {2, 8, 2}, {2, 5, 4}, {3, 4, 9}, {3, 5, 14}, {4, 5, 10}, {5, 6, 2}, {6, 7, 1}, {6, 8, 6}, {7, 8, 7}};
    int vertices1 = 9;
    int edges1 = 14;
    int source1 = 0;

    vector<int> result1 = dijkstra(graph1, vertices1, edges1, source1);
    printShortestPaths(result1, source1);
    return 0;
}
