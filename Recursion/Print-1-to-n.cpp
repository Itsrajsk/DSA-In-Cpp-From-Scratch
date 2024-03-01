// Print 1 to n without using loops

#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    // Base Condition For Termination
    if (n <= 0)
    {
        return;
    }
    else
    {
        // Recursive Call 
        print(n - 1);
        cout << n << " ";
        
    }
}
int main()
{
    int n = 5;
    print(n);
    return 0;
}