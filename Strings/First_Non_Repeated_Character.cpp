// First non-repeating character of given String

#include <bits/stdc++.h>
using namespace std;
char firstNonRepChar(string s)
{
    sort(s.begin(), s.end());
    unordered_map<char, int> Map;
    // Check The Character Is Present Or Not
    // If Present Increase The Count
    // Or Not Then Equals to 1
    for (char c : s)
    {
        if (Map.count(c))
        {
            Map[c] += 1;
        }
        else
        {
            Map[c] = 1;
        }
    }
    // if Any Character's count is 1
    // then print it
    for (char c : s)
    {
        if (Map[c] == 1)
        {
            return c;
        }
    }
    return '\0';
}
int main()
{
    string str = "Raj";
    cout << firstNonRepChar(str) << endl;
    return 0;
}