// Check if a number is Palindrome

#include <bits/stdc++.h>
using namespace std;
int pali(int n, int temp)
{
    // Base Case
    if (n == 0)
    {
        return temp;
    }
    // Main Calculation
    temp = (temp * 10) + (n % 10);
    // Recursive Call
    return pali(n / 10, temp);
}
int main()
{
    int n = 121;
    int temp = pali(n, 0);
    if (temp == n)
    {
        cout << "It Is Palindrome" << endl;
    }
    else
    {
        cout << "It Is Not A Palindrome" << endl;
    }
    return 0;
}