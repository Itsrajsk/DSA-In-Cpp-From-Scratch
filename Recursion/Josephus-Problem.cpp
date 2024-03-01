// Josephus Problem

#include <bits/stdc++.h>
using namespace std;
int josephus(int n, int k)
{
    // Base Case
    if (n == 1)
    {
        return 1;
    }
    else
    {
        // Recursive Call
        return (josephus(n - 1, k) + k - 1) % n + 1;
    }
}
int main()
{
    int n = 5;
    int k = 2;
    cout << "The Answer Is : " << josephus(n, k) << endl;
    return 0;
}