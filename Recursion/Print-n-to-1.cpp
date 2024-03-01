// print numbers from N to 1 in reverse order

#include <bits/stdc++.h>
using namespace std;
void printReverse(int n)
{
    // Base Condition For Termination
    if (n <= 0)
    {
        return;
    }
    else
    {
        // Printing fro 5 to 1 
        cout << n << " ";
        // After we decrease like i--
        printReverse(n - 1);
    }
}
int main()
{
    int n = 5;
    printReverse(n);
    return 0;
}