//  Cutting a Rod

#include <bits/stdc++.h>
using namespace std;
int cutRod(int prices[], int index, int n)
{
    // Base Case
    if (index == 0)
    {
        return n * prices[0];
    }

    int notCut = cutRod(prices, index - 1, n);
    int cut = INT_MIN;

    int rod_length = index + 1;

    if (rod_length <= n)
    {
        cut = prices[index] + cutRod(prices, index, n - rod_length);
    }
    
    return max(notCut, cut);
}
int main()
{
    int prices[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(prices) / sizeof(prices[0]);
    cout << cutRod(prices, size - 1, size);
    return 0;
}