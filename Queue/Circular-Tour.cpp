//  Circular Tour

#include <bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

int tour(petrolPump p[], int n)
{
    int deficit = 0;
    int balance = 0;
    int start = 0;

    for (int i = 0; i < n; i++)
    {
        balance += p[i].petrol - p[i].distance;
        deficit += balance;
        if (balance < 0)
        {
            start = i + 1;
            deficit = 0;
            balance = 0;
        }
    }
    if (deficit + balance >= 0)
    {
        return start;
    }
    else
    {
        return -1; // No such tour possible
    }
}

int main()
{
    petrolPump arr[] = {{4, 6}, {6, 5}, {7, 3}, {4, 5}};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = tour(arr, n);
    if (start == -1)
        cout << "No solution exists.";
    else
        cout << "Start from petrol pump number: " << start;
    return 0;
}
