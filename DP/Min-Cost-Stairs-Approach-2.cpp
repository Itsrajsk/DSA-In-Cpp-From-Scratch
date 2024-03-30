// Minimum Cost Of Stairs Approach No 2

#include <iostream>
#include <vector>
#include <climits> // For INT_MAX
using namespace std;

int solve(vector<int> &cost, int n, vector<int> &dp)
{
    if (n == 0)
    {
        return cost[0];
    }
    if (n == 1)
    {
        return cost[1];
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = cost[n] + min(solve(cost, n - 1, dp), solve(cost, n - 2, dp));

    return dp[n];
}

int main()
{
    vector<int> cost = {10, 15, 20, 25, 30}; // Sample costs for each step
    int n = cost.size();

    vector<int> dp(n + 1, -1); // Memoization table to store computed results, initialized with -1

    int minCost = solve(cost, n, dp); // Start from n, considering all steps

    cout << "Minimum cost of climbing stairs: " << minCost << endl;

    return 0;
}
