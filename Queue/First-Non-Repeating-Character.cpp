
// First Non Repeating Character In Stream

#include <bits/stdc++.h>
using namespace std;

char FirstNonRepeating(string A)
{
    unordered_map<char, int> count;
    queue<char> q;

    for (char ch : A)
    {
        count[ch]++;
        q.push(ch);

        while (!q.empty() && count[q.front()] > 1)
        {
            q.pop();
        }
    }

    if (!q.empty())
    {
        return q.front();
    }

    return '#'; // If no non-repeating character found
}

int main()
{
    string A = "aabc";
    char firstNonRepeating = FirstNonRepeating(A);
    if (firstNonRepeating != '#')
    {
        cout << firstNonRepeating << endl;
    }
    else
    {
        cout << "No non-repeating character found." << endl;
    }
    return 0;
}
