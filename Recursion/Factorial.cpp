// Factorial Using Tail Recursion

#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    // Base Condition
    if (n == 0)
    {
        return 1;
    }
    else
    {
        // Recursive call for 5 * 4 * 3 * 2 * 1
        return n * fact(n - 1);
    }
}
int main()
{
    int n = 5;
    cout << fact(n);
    return 0;
}