// Sum of the digits of a given number

#include <bits/stdc++.h>
using namespace std;
int sumOfDigits(int n)
{
    // Base Case
    if (n == 0)
    {
        return 0;
    }
    // Recursive Call
    return (n % 10) + sumOfDigits(n / 10); // 1 + 2 + 1 = 4
}
int main()
{
    int n = 121;
    cout << sumOfDigits(n);
    return 0;
}