// DP Top Down Approach

#include <iostream>
#include <vector>
using namespace std;

int fib(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = fib(n - 1, dp) + fib(n - 2, dp); // Recursive call
    return dp[n];
}

int main()
{
    int n = 10;                // Calculate Fibonacci number for n
    vector<int> dp(n + 1, -1); // Initialize DP table with -1
    dp[0] = 0;
    dp[1] = 1;

    cout << "Fibonacci number at position " << n << ": " << fib(n, dp) << endl;

    return 0;
}
