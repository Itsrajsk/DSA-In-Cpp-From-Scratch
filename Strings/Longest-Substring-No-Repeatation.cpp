// Longest Substring Without Repeating Characters

#include <bits/stdc++.h>
using namespace std;
int longestSubstring(string s)
{
    unordered_set<char> set;
    int left = 0, right = 0, max_length = 0;
    while (right < s.length())
    {
        if (set.find(s[right]) == set.end())
        {
            set.insert(s[right]);
            max_length = max(max_length, right - left + 1);
            right++;
        }
        else
        {
            set.erase(s[left]);
            left++;
        }
    }
    return max_length;
}
int main()
{
    string s = "asbdjdsaaasndjaasdan";
    cout << longestSubstring(s);
    return 0;
}