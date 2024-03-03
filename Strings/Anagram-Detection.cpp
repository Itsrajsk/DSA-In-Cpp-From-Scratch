// Anagram Detection

#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string &s1, string &s2)
{
    // If Both Strings Are Not Equal
    if (s1.length() != s2.length())
    {
        return false;
    }
    // Initializing unordered map
    unordered_map<char, int> mp;

    for (char c : s1)
    {
        mp[c]++;
    }

    for (char c : s2)
    {
        if (mp.find(c) == mp.end() || mp[c] == 0)
        {
            return false;
        }
        mp[c]--;
    }
    return true;
}
int main()
{
    string s1 = "anagram";
    string s2 = "nagaram";
    cout << isAnagram(s1, s2);
    return 0;
}