// Space Optimisation in DP

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the position of Fibonacci number: ";
    cin >> n;

    if (n == 0)
    {
        cout << "Fibonacci number at position 0: 0";
        return 0;
    }
    else if (n == 1)
    {
        cout << "Fibonacci number at position 1: 1";
        return 0;
    }

    int prev1 = 1;
    int prev2 = 0;

    for (int i = 2; i <= n; i++)
    {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    cout << "Fibonacci number at position " << n << ": " << prev1;

    return 0;
}
