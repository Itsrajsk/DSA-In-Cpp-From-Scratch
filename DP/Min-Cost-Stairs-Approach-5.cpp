// Minimum Cost Of Stairs Approach No 5

#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &cost, int n)
{
    int prev2 = cost[0];
    int prev1 = cost[1];

    for (int i = 2; i < n; i++)
    {
        int curr = cost[i] + min(prev1, prev2);
        prev2 = prev1;
        prev1 = curr;
    }
    return min(prev1, prev2);
}

int main()
{
    vector<int> cost = {10, 15, 20, 25, 30}; // Sample costs for each step
    int n = cost.size();

    int minCost = solve(cost, n);

    cout << "Minimum cost of climbing stairs: " << minCost << endl;

    return 0;
}
