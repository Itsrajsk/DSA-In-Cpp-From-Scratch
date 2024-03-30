// DP Bottom Up Approach

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the position of Fibonacci number: ";
    cin >> n;

    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2]; // Calculate Fibonacci number bottom-up
    }
    cout << "Fibonacci number at position " << n << ": " << dp[n]; // Output the Fibonacci number at position n
    return 0;
}
