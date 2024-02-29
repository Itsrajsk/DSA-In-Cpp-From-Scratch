// Check if pair with given Sum exists in Array (Two Sum)

#include <bits/stdc++.h>
using namespace std;
void printPairs(int a[], int n, int sum)
{
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        // How Much We Need To Complete The SUM
        int temp = sum - a[i];
        // Finding Out That Need In set
        if (s.find(temp) != s.end())
        {
            cout << "Yes" << endl;
            return;
        }
        s.insert(a[i]);
    }
    cout << "No" << endl;
}
int main()
{
    int a[] = {1, 2, 5, 3, 6, 8};
    int sum = 8;
    int n = sizeof(a) / sizeof(a[0]);
    printPairs(a, n, sum);
    return 0;
}
