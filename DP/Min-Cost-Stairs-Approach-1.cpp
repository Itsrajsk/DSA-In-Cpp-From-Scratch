// Minimum Cost Of Stairs Approach No 1

#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

int solve(long long nStairs, int i, vector<int> &dp)
{
    if (i == nStairs)
    {
        return 1;
    }
    if (i > nStairs)
    {
        return 0;
    }

    if (dp[i] != -1)
    {
        return dp[i];
    }

    dp[i] = (solve(nStairs, i + 1, dp) + solve(nStairs, i + 2, dp)) % MOD;
    return dp[i];
}

int main()
{
    long long nStairs;
    cout << "Enter the number of stairs: ";
    cin >> nStairs;

    vector<int> dp(nStairs + 1, -1);
    int ways = solve(nStairs, 0, dp);
    cout << "Number of ways to climb the stairs: " << ways << endl;

    return 0;
}
