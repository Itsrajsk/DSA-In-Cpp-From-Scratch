// Recursive program to Subsets Of Set

#include <bits/stdc++.h>
using namespace std;
void subsets(string str, int index = -1, string curr = "")
{
    int n = str.length();
    // Base Case
    if (index == n)
    {
        return;
    }
    cout << curr << "\n";

    for (int i = index + 1; i < n; i++)
    {
        curr += str[i];
        subsets(str, i, curr);
        curr.erase(curr.size() - 1);
    }
}
int main()
{
    string str = "abc";
    subsets(str);
    return 0;
}