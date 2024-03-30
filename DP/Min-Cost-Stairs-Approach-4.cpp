// Minimum Cost Of Stairs Approach No 4

#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &cost, int n)
{
    vector<int> dp(n + 1);
    dp[0] = cost[0];
    dp[1] = cost[1];

    for (int i = 2; i <= n; i++) // Corrected loop condition
    {
        dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
    }
    return dp[n]; // Changed to access the correct element
}

int main()
{
    vector<int> cost = {10, 15, 20, 25, 30}; // Sample costs for each step
    int n = cost.size();

    int minCost = solve(cost, n);

    cout << "Minimum cost of climbing stairs: " << minCost << endl;

    return 0;
}
